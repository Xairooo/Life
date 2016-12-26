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

class Craft_Vehicle_Rearmbox1: Exile_AbstractCraftingRecipe
{
    name = "Vehicle Rearmbox";
    pictureItem = "CDAH_RearmBox_kit";
    requiresFire = 1;		
	requiredInteractionModelGroup = "Anvil";
    returnedItems[] = 
    {
        {1, "CDAH_RearmBox_kit"}
    };
    components[] = 
    {
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
		{35, "CDAH_Gun_Powder_item"},
		{15, "CDAH_Cartridges_item"},
		{15, "CDAH_Projectiles_item"} 				
    };
    tools[] = 
		{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",	
		"Exile_Item_Hammer"
		};
	category = "Weapons & Ammo";
};


class Craft_30Rnd_45ACP_Mag_SMG_01: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_45ACP_Mag_SMG_01";
    pictureItem = "30Rnd_45ACP_Mag_SMG_01";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_45ACP_Mag_SMG_01"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_9x21_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_9x21_Mag";
    pictureItem = "30Rnd_9x21_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_9x21_Mag"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 	
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_556x45_Stanag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_556x45_Stanag";
    pictureItem = "30Rnd_556x45_Stanag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_556x45_Stanag"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 	
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_65x39_caseless_green: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_65x39_caseless_green";
    pictureItem = "30Rnd_65x39_caseless_green";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_65x39_caseless_green"}
    };
    components[] = 
    {
		{6, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 	
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_65x39_caseless_mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_65x39_caseless_mag";
    pictureItem = "30Rnd_65x39_caseless_mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_65x39_caseless_mag"}
    };
    components[] = 
    {
		{6, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_100Rnd_65x39_caseless_mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 100Rnd_65x39_caseless_mag";
    pictureItem = "100Rnd_65x39_caseless_mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "100Rnd_65x39_caseless_mag"}
    };
    components[] = 
    {
		{9, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_20Rnd_762x51_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 20Rnd_762x51_Mag";
    pictureItem = "20Rnd_762x51_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "20Rnd_762x51_Mag"}
    };
    components[] = 
    {
		{7, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_200Rnd_65x39_cased_Box: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 200Rnd_65x39_cased_Box";
    pictureItem = "200Rnd_65x39_cased_Box";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "200Rnd_65x39_cased_Box"}
    };
    components[] = 
    {
		{10, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

//HANDGUNS ammo UZI+MP5 upcraft
class Craft_11Rnd_45ACP_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 11Rnd_45ACP_Mag";
    pictureItem = "11Rnd_45ACP_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "11Rnd_45ACP_Mag"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

//Apex new
class Craft_30Rnd_580x42_Mag_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_580x42_Mag_F";
    pictureItem = "30Rnd_580x42_Mag_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_580x42_Mag_F"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_9x21_Mag_SMG_02: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_9x21_Mag_SMG_02";
    pictureItem = "30Rnd_9x21_Mag_SMG_02";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_9x21_Mag_SMG_02"}
    };
    components[] = 
    {
		{3, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_10Rnd_50BW_Mag_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 10Rnd_50BW_Mag_F";
    pictureItem = "10Rnd_50BW_Mag_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "10Rnd_50BW_Mag_F"}
    };
    components[] = 
    {
		{6, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{1, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_20Rnd_650x39_Cased_Mag_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 20Rnd_650x39_Cased_Mag_F";
    pictureItem = "20Rnd_650x39_Cased_Mag_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "20Rnd_650x39_Cased_Mag_F"}
    };
    components[] = 
    {
		{6, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 				
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_762x39_Mag_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_762x39_Mag_F";
    pictureItem = "30Rnd_762x39_Mag_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_762x39_Mag_F"}
    };
    components[] = 
    {
		{9, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_30Rnd_762x39_Mag_Green_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 30Rnd_762x39_Mag_Green_F";
    pictureItem = "30Rnd_762x39_Mag_Green_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "30Rnd_762x39_Mag_Green_F"}
    };
    components[] = 
    {
		{9, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_100Rnd_580x42_Mag_F: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 100Rnd_580x42_Mag_F";
    pictureItem = "100Rnd_580x42_Mag_F";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "100Rnd_580x42_Mag_F"}
    };
    components[] = 
    {
		{12, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_130Rnd_338_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 130Rnd_338_Mag";
    pictureItem = "130Rnd_338_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "130Rnd_338_Mag"}
    };
    components[] = 
    {
		{15, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{4, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_150Rnd_93x64_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 150Rnd_93x64_Mag";
    pictureItem = "150Rnd_93x64_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "150Rnd_93x64_Mag"}
    };
    components[] = 
    {
		{15, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{4, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_150Rnd_762x54_Box: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 150Rnd_762x54_Box";
    pictureItem = "150Rnd_762x54_Box";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "150Rnd_762x54_Box"}
    };
    components[] = 
    {
		{11, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{4, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_10Rnd_93x64_DMR_05_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 10Rnd_93x64_DMR_05_Mag";
    pictureItem = "10Rnd_93x64_DMR_05_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "10Rnd_93x64_DMR_05_Mag"}
    };
    components[] = 
    {
		{8, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_10Rnd_762x54_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 10Rnd_762x54_Mag";
    pictureItem = "10Rnd_762x54_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "10Rnd_762x54_Mag"}
    };
    components[] = 
    {
		{8, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_10Rnd_338_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 10Rnd_338_Mag";
    pictureItem = "10Rnd_338_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "10Rnd_338_Mag"}
    };
    components[] = 
    {
		{12, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_10Rnd_127x54_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 10Rnd_127x54_Mag";
    pictureItem = "10Rnd_127x54_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "10Rnd_127x54_Mag"}
    };
    components[] = 
    {
		{12, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_5Rnd_127x108_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 5Rnd_127x108_Mag";
    pictureItem = "5Rnd_127x108_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "5Rnd_127x108_Mag"}
    };
    components[] = 
    {
		{10, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_7Rnd_408_Mag: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x 7Rnd_408_Mag";
    pictureItem = "7Rnd_408_Mag";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "7Rnd_408_Mag"}
    };
    components[] = 
    {
		{11, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_Exile_Magazine_30Rnd_762x39_AK: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x Exile_Magazine_30Rnd_762x39_AK";
    pictureItem = "Exile_Magazine_30Rnd_762x39_AK";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "Exile_Magazine_30Rnd_762x39_AK"}
    };
    components[] = 
    {
		{7, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_Exile_Magazine_20Rnd_762x51_DMR: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x Exile_Magazine_20Rnd_762x51_DMR";
    pictureItem = "Exile_Magazine_20Rnd_762x51_DMR";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "Exile_Magazine_20Rnd_762x51_DMR"}
    };
    components[] = 
    {
		{7, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_Exile_Magazine_100Rnd_762x54_PK_Green: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x Exile_Magazine_100Rnd_762x54_PK_Green";
    pictureItem = "Exile_Magazine_100Rnd_762x54_PK_Green";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "Exile_Magazine_100Rnd_762x54_PK_Green"}
    };
    components[] = 
    {
		{9, "CDAH_Gun_Powder_item"},
		{2, "CDAH_Cartridges_item"},
		{3, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};

class Craft_Exile_Magazine_10Rnd_762x54: Exile_AbstractCraftingRecipe
{
    name = "Craft 3x Exile_Magazine_10Rnd_762x54";
    pictureItem = "Exile_Magazine_10Rnd_762x54";
    requiresFire = 1;		
    returnedItems[] = 
    {
        {3, "Exile_Magazine_10Rnd_762x54"}
    };
    components[] = 
    {
		{8, "CDAH_Gun_Powder_item"},
		{1, "CDAH_Cartridges_item"},
		{2, "CDAH_Projectiles_item"} 
    };
    tools[] = {"Exile_Item_CookingPot"};
	category = "Weapons & Ammo";
};