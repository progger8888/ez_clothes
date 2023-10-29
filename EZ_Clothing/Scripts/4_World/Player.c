class EZ_Cassetteradio extends ItemBase
{
    bool m_Playing;
    bool m_SyncPlaying;
    string m_RadioSoundSet;
    EffectSound m_ActiveSound;

    void EZ_Cassetteradio()
    {
        RegisterNetSyncVariableBool("m_SyncPlaying");
    }

    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);

        if (item && slot_name == "EZCassette")
        {
            m_RadioSoundSet = item.GetType();
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
        if (slot_name == "EZCassette")
        {
            TurnOff();
            m_RadioSoundSet = "";
        }
        else if (slot_name == "BatteryD")
        {
            TurnOff();
        }
    }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionTurnOnWhileInHands);
        AddAction(ActionTurnOffWhileInHands);
        AddAction(ActionTurnOnWhileOnGround);
        AddAction(ActionTurnOffWhileOnGround);
    }

    override void OnMovedInsideCargo(EntityAI container)
    {
        TurnOff();
    }

    override bool CanReleaseAttachment(EntityAI attachment)
    {
        if (GetCompEM() && GetCompEM().IsWorking())
        {
            return false;
        }
        return true;
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        if (GetCompEM() && GetCompEM().IsWorking())
        {
            return false;
        }
        return true;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        if (GetCompEM() && GetCompEM().IsWorking())
        {
            return false;
        }
        return true;
    }

    void TurnOff()
    {
        GetCompEM().SwitchOff();
    }

    void TurnOn()
    {
        if (GetCompEM().CanWork())
        {
            GetCompEM().SwitchOn();
        }
    }

    override void OnWorkStart()
    {
        if (!Play())
        {
            TurnOff();
        }
    }

    override void OnWorkStop()
    {
        Stop();
    }

    bool Play()
    {
        if (m_RadioSoundSet && m_RadioSoundSet == "")
        {
            return false;
        }

        if (!GetGame().IsDedicatedServer())
        {
            if (m_ActiveSound)
            {
                StopSoundSet(m_ActiveSound);
            }
            string cfgPath = "CfgVehicles " + m_RadioSoundSet + " CfgEZCassette";
            if (!GetGame().ConfigIsExisting(cfgPath))
            {
                return false;
            }
            string soundSetName = GetGame().ConfigGetTextOut(cfgPath + " soundSet");
            PlaySoundSetLoop(m_ActiveSound, soundSetName, 0, 0);
        }
        m_Playing = true;
        m_SyncPlaying = true;
        SetSynchDirty();
        return true;
    }

    void Stop()
    {
        m_Playing = false;
        m_SyncPlaying = false;

        if (m_ActiveSound)
        {
            StopSoundSet(m_ActiveSound);
        }
        SetSynchDirty();
    }

    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();

        if (m_SyncPlaying && !m_Playing)
        {
            TurnOn();
        }
        else if (!m_SyncPlaying && m_Playing)
        {
            TurnOff();
        }
    }
};

class EZ_Cassette_ColorBase extends Inventory_Base {};
