/**
 * CDAH-Mod-Pack
 * 
 * Author: Lotzo, Rashmandash, Yesyesjo
 *
 * This work is licensed under a Creative Commons Attribution-NonCommercial 4.0 International License.
 *
 * www.cdah-gaming.com
 */

///////////////////////////////////////////////////////
//Base Parts DOWNCRAFT
///////////////////////////////////////////////////////

//Wood

class Downcraft_CraftWoodWindow: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Window ";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {3, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodWindowKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_WoodWall: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Wall";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {1, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodWallKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_WoodHalfWall: Exile_AbstractCraftingRecipe
{
    name = "Downcraft 1/2 Wooden Wall";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {1, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodWallHalfKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_Woodsupport: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Support";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {4, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodSupportKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_Woodstairs: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Stairs";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {4, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodStairsKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_WoodGate: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Gate";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {6, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodGateKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_WoodFloor: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Floor";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {4, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodFloorKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

class Downcraft_WoodDoor: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Wooden Door";
    pictureItem = "Exile_Item_WoodPlank";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {4, "Exile_Item_WoodPlank"}
    };
    components[] = 
    {
		{1, "Exile_Item_WoodDoorwayKit"}
    };
    tools[] = {"Exile_Item_Screwdriver","Exile_Item_Hammer","Exile_Item_Handsaw"};
	category = "Resources";
};

// Concret

class Downcraft_ConcretWall: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Wall";
    pictureItem = "Exile_Item_Cement";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteWallKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};

class Downcraft_ConcretSupport: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Suport";
    pictureItem = "Exile_Item_Cement";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteSupportKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};

class Downcraft_ConcretStairs: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Suport";
    pictureItem = "Exile_Item_Cement";
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {1, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteStairsKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};

class Downcraft_ConcretGate: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Gate";
    pictureItem = "Exile_Item_Cement";
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteGateKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};

class Downcraft_ConcretFloor: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Floor";
    pictureItem = "Exile_Item_Cement";  
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {2, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteFloorKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};

class Downcraft_ConcretDoor: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Concrete Door";
    pictureItem = "Exile_Item_Cement";    	
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] = 
    {
        {2, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_ConcreteDoorwayKit"}
    };
    tools[] = {"Exile_Item_CordlessScrewdriver","Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};
class Downcraft_FortificationUpgrade: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Fortification Upgrade";
    pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
        {4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_FortificationUpgrade"}
    };
    tools[] = {"Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};
class Downcraft_MetalHedgehog: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Metal Hedgehog";
    pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
 		{4, "Exile_Item_MetalPole"}
    };
    components[] = 
    {
		{1, "Exile_Item_MetalHedgehogKit"}
    };
    tools[] = {"Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};
class Downcraft_RepairKitMetal: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Metal Repair Kit";
    pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
 		{4, "Exile_Item_MetalBoard"}
    };
    components[] = 
    {
		{1, "Exile_Item_RepairKitMetal"}
    };
    tools[] = {"Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};
class Downcraft_Exile_Item_MetalPole: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Metal Pole";
    pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
 		{4, "Exile_Item_JunkMetal"}
    };
    components[] = 
    {
		{1, "Exile_Item_MetalPole"}
    };
    tools[] = {"Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};
class Downcraft_Exile_Item_MetalBoard: Exile_AbstractCraftingRecipe
{
    name = "Downcraft Metal Board";
    pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;	
	requiredInteractionModelGroup = "Anvil";	
    returnedItems[] = 
    {
 		{2, "Exile_Item_JunkMetal"}
    };
    components[] = 
    {
		{1, "Exile_Item_MetalBoard"}
    };
    tools[] = {"Exile_Item_Hammer","Exile_Item_Grinder"};
	category = "Resources";
};


