class EZArmbandDoos extends RecipeBase
{	
	override void Init()
	{
		m_Name = "#STR_craftarmband0";
		m_IsInstaRecipe = true;
		m_AnimationLength = 0.1;
		m_Specialty = 0.01;

		m_MinDamageIngredient[0] = -1;
		m_MaxDamageIngredient[0] = 3;
		m_MinQuantityIngredient[0] = 5;
		m_MaxQuantityIngredient[0] = -1;
		
		m_MinDamageIngredient[1] = -1;
		m_MaxDamageIngredient[1] = 3;
		m_MinQuantityIngredient[1] = 5;
		m_MaxQuantityIngredient[1] = -1;
		
		InsertIngredient(0,"Armband_ColorBase");

		m_IngredientAddHealth[0] = 0;
		m_IngredientSetHealth[0] = -1;
		m_IngredientAddQuantity[0] = -5;
		m_IngredientDestroy[0] = false;
		m_IngredientUseSoftSkills[1] = false;
		
		InsertIngredient(1,"EZ_Paint_Doos");
	
		m_IngredientAddHealth[1] = 0;
		m_IngredientSetHealth[1] = -1;
		m_IngredientAddQuantity[1] = -5;
		m_IngredientDestroy[1] = false;
		m_IngredientUseSoftSkills[1] = true;
		
		AddResult("EZ_TBH_DoubleArmband");
		
		m_ResultSetFullQuantity[0] = false;
		m_ResultSetQuantity[0] = 5;
		m_ResultSetHealth[0] = -1;
		m_ResultInheritsHealth[0] = 0;
		m_ResultInheritsColor[0] = -1;
		m_ResultToInventory[0] = -2;
		m_ResultUseSoftSkills[0] = false;
		m_ResultReplacesIngredient[0] = -1;
		
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		
	}
};