/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */

////////////////////////////////////////
//Ammo UPCRAFT
////////////////////////////////////////

// SIEHE AMMO INCLUDE

/* class Craft_Navid_Ammo: Exile_AbstractCraftingRecipe
{
    name = "Craft Navid Ammo";
    pictureItem = "150Rnd_93x64_Mag";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "150Rnd_93x64_Mag"}
    };
    components[] = 
    {
		{5, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_SPMG_Ammo: Exile_AbstractCraftingRecipe
{
    name = "Craft SPMG Ammo";
    pictureItem = "130Rnd_338_Mag";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "130Rnd_338_Mag"}
    };
    components[] = 
    {
		{5, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
}; */

////////////////////////////////////////
//Weapon UPCRAFT
////////////////////////////////////////

class Craft_Navid_Hex: Exile_AbstractCraftingRecipe
{
    name = "Craft Navid Hex";
    pictureItem = "MMG_01_hex_F";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "MMG_01_hex_F"}
    };
    components[] = 
    {
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer"};
	category = "Weapons & Ammo";
};

class Craft_Navid_Tan: Exile_AbstractCraftingRecipe
{
    name = "Craft Navid Tan";
    pictureItem = "MMG_01_tan_F";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "MMG_01_tan_F"}
    };
    components[] = 
    {
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer"};
	category = "Weapons & Ammo";
};

class Craft_SPMG_Black: Exile_AbstractCraftingRecipe
{
    name = "Craft SPMG Black";
    pictureItem = "MMG_02_black_F";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "MMG_02_black_F"}
    };
    components[] = 
    {
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer"};
	category = "Weapons & Ammo";
};

class Craft_SPMG_Camo: Exile_AbstractCraftingRecipe
{
    name = "Craft SPMG Camo";
    pictureItem = "MMG_02_camo_F";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "MMG_02_camo_F"}
    };
    components[] = 
    {
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer"};
	category = "Weapons & Ammo";
};

class Craft_SPMG_Sand: Exile_AbstractCraftingRecipe
{
    name = "Craft SPMG Sand";
    pictureItem = "MMG_02_sand_F";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "MMG_02_sand_F"}
    };
    components[] = 
    {
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer"};
	category = "Weapons & Ammo";
};

//Optics Upcraft

class Craft_TWS_MG: Exile_AbstractCraftingRecipe
{
    name = "Craft TWS MG Optics";
    pictureItem = "optic_tws_mg";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "optic_tws_mg"}
    };
    components[] = 
    {
		{10, "Exile_Item_PlasticBottleEmpty"},
		{2, "Exile_Item_BaseCameraKit"},
		{1, "Exile_Item_Laptop"},
		{1, "Laserdesignator_02"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer","Exile_Item_Screwdriver"};
	category = "Scopes";
};

class Craft_TWS: Exile_AbstractCraftingRecipe
{
    name = "Craft TWS Optics";
    pictureItem = "optic_tws";
	requiredInteractionModelGroup = "Anvil";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {1, "optic_tws"}
    };
    components[] = 
    {
		{10, "Exile_Item_PlasticBottleEmpty"},
		{2, "Exile_Item_BaseCameraKit"},
		{1, "Exile_Item_Laptop"},
		{1, "Laserdesignator_02"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"},
		{3, "Exile_Item_MetalWire"} 				
    };
    tools[] = {"Exile_Item_Grinder","Exile_Item_Pliers","Exile_Item_Hammer","Exile_Item_Screwdriver"};
	category = "Scopes";
};