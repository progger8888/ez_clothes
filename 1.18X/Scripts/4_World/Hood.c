class EZ_Bandit_Hood_Base extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};
class EZ_Bandit_Hood_Black extends EZ_Bandit_Hood_Base {};

class EZ_Bandit_FaceMask_ColorBase extends Clothing
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWringClothes);
	}
};
class EZ_Bandit_FaceMask_Black extends EZ_Bandit_FaceMask_ColorBase {};