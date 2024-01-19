#pragma once

//Safehouses
void ClintonResidence();
void FranklinMansion();
void MichaelHouse();
void TrevorTrailer();

//Mission Interiors
void PremiumDeluxeMotorsport();
void LesterHouse();
void LesterFactory();
void Lifeinvader();
void FloydHouse();
void Vangelico();
void MaxRenda();
void FIB();
void Chopshop();
void TequiLaLa();
void FameorShame();
void CluckingBell();
void Foundry();
void EpsilonRoom();
void JanitorHouse();
void ONeilRanch();
void Scrapyard();
void HumaneLab();
void OmegaGarage();
void BlaineCountyBank();
void DignityYacht();
void ContainerShip();
void UnionDepositoryVault();
void UnionDepositoryParking();
void Slaughterhouse();
void SolomonOffice();
void Methlab();
void Morgue();
void Motel();

//Unused Interiors
void PaletoSheriffOffice();
void SandySheriffOffice();
void PoliceStationRooms();
void YanktonSurveillance();
void PacificBankVault();
void FleecaBanks();

//Misc Interiors
void Misc();
void Gates();

//Scenario Groups
void ScenarioGroups();

//Extras
void UnlockDoors();
void UnlockBarriersNearPlayer();

enum DOOR_STATE {
	DOORSTATE_INVALID = -1,
	DOORSTATE_UNLOCKED,
	DOORSTATE_LOCKED,
	DOORSTATE_FORCE_LOCKED_UNTIL_OUT_OF_AREA,
	DOORSTATE_FORCE_UNLOCKED_THIS_FRAME,
	DOORSTATE_FORCE_LOCKED_THIS_FRAME,
	DOORSTATE_FORCE_OPEN_THIS_FRAME,
	DOORSTATE_FORCE_CLOSED_THIS_FRAME
};

//Enum name corrisponds with joaat hash
enum DOOR_HASH {
	DOORHASH_BARBER_SHOP_SC = 1804701345,
	DOORHASH_BARBER_SHOP_V = 1403601067,
	DOORHASH_BARBER_SHOP_SS = -2031139496,
	DOORHASH_BARBER_SHOP_MP = 1796834809,
	DOORHASH_BARBER_SHOP_HW = 96153298,
	DOORHASH_BARBER_SHOP_PB = -281080954,
	DOORHASH_HAIR_SALON_L = 183249434,
	DOORHASH_HAIR_SALON_R = 758345384,
	DOORHASH_CLOTHES_SHOP_L_01_SC_L = -1069262641,
	DOORHASH_CLOTHES_SHOP_L_01_SC_R = 1968521986,
	DOORHASH_CLOTHES_SHOP_L_02_GS_L = -2143706301,
	DOORHASH_CLOTHES_SHOP_L_02_GS_R = -1403421822,
	DOORHASH_CLOTHES_SHOP_L_03_DT_L = -1950137670,
	DOORHASH_CLOTHES_SHOP_L_03_DT_R = 1226259807,
	DOORHASH_CLOTHES_SHOP_L_04_CS_L = 1090833557,
	DOORHASH_CLOTHES_SHOP_L_04_CS_R = 897332612,
	DOORHASH_CLOTHES_SHOP_L_05_GSD_L = 1095946640,
	DOORHASH_CLOTHES_SHOP_L_05_GSD_R = 801975945,
	DOORHASH_CLOTHES_SHOP_L_06_VC_L = -167996547,
	DOORHASH_CLOTHES_SHOP_L_06_VC_R = -1935818563,
	DOORHASH_CLOTHES_SHOP_L_07_PB_L = 1891185217,
	DOORHASH_CLOTHES_SHOP_L_07_PB_R = 1236591681,
	DOORHASH_CLOTHES_SHOP_M_01_SM = 1980808685,
	DOORHASH_CLOTHES_SHOP_M_03_H = 1352749757,
	DOORHASH_CLOTHES_SHOP_M_04_HW = -566554453,
	DOORHASH_CLOTHES_SHOP_M_05_GOH = 1284749450,
	DOORHASH_CLOTHES_SHOP_H_01_BH_L = 261851994,
	DOORHASH_CLOTHES_SHOP_H_01_BH_R = 217646625,
	DOORHASH_CLOTHES_SHOP_H_02_B_L = 1801139578,
	DOORHASH_CLOTHES_SHOP_H_02_B_R = -2123275866,
	DOORHASH_CLOTHES_SHOP_H_03_MW_L = 1312689981,
	DOORHASH_CLOTHES_SHOP_H_03_MW_R = -595055661,
	DOORHASH_TATTOO_VH = 2114358297,
	DOORHASH_TATTOO_SS = -1284867488,
	DOORHASH_TATTOO_VW = -265260897,
	DOORHASH_TATTOO_PB = 302307081,
	DOORHASH_TATTOO_VC = -681886015,
	DOORHASH_TATTOO_ELS = -2086556500,
	DOORHASH_TATTOO_GOH = -1496386696,
	DOORHASH_M_MANSION_F_L = -2097039789,
	DOORHASH_M_MANSION_F_R = -2127416656,
	DOORHASH_M_MANSION_G1 = -1986583853,
	DOORHASH_M_MANSION_GA_SM = -1978427516,
	DOORHASH_M_MANSION_R_L1 = 776026812,
	DOORHASH_M_MANSION_R_R1 = 698422331,
	DOORHASH_M_MANSION_R_L2 = 535076355,
	DOORHASH_M_MANSION_R_R2 = 474675599,
	DOORHASH_M_MANSION_B_L = -43701373,
	DOORHASH_M_MANSION_B_R = 2018287960,
	DOORHASH_M_MANSION_BW = -1700375831,
	DOORHASH_M_MANSION_SON = 1850241841,
	DOORHASH_M_MANSION_DAUGHTER = -378388578,
	DOORHASH_M_MANSION_BATHROOM = -1223666875,
	DOORHASH_M_MANSION_BEDROOM = 1893421006,
	DOORHASH_F_HOUSE_SC_F = 613961892,
	DOORHASH_F_HOUSE_SC_B = -272570634,
	DOORHASH_F_HOUSE_SC_G = -1040675994,
	DOORHASH_F_HOUSE_VH_F = 1201219326,
	DOORHASH_F_HOUSE_VH_G = 1509542847,
	DOORHASH_T_TRAILER_CS = 1736361794,
	DOORHASH_T_TRAILER_CS_G = 1113956670,
	DOORHASH_T_APARTMENT_VB = -1361617046,
	DOORHASH_T_APARTMENT_VB_BATHROOM = 2007032394,
	DOORHASH_CARMOD_GARAGE_01 = -1871080926,
	DOORHASH_CARMOD_GARAGE_05 = 1168079979,
	DOORHASH_CARMOD_GARAGE_06 = 1206354175,
	DOORHASH_CARMOD_GARAGE_07_L = -1038180727,
	DOORHASH_CARMOD_GARAGE_07_R = 1200466273,
	DOORHASH_CARMOD_GARAGE_08_L = 1391004277,
	DOORHASH_CARMOD_GARAGE_08_R = -459199009,
	DOORHASH_CARMOD_GARAGE_09 = -288764223,
	DOORHASH_JANITORS_APARTMENT = -252283844,
	DOORHASH_SWEATSHOP_L = -826072862,
	DOORHASH_SWEATSHOP_R = 763780711,
	DOORHASH_SWEATSHOP_OFFICE = -874851305,
	DOORHASH_SWEATSHOP_STORE = -1480820165,
	DOORHASH_SWEATSHOP_OFFICE_STORE = 949391213,
	DOORHASH_METHLAB_F_L = 212192855,
	DOORHASH_METHLAB_F_R = -126474752,
	DOORHASH_METHLAB_R = 1765671336,
	DOORHASH_FOUNDRY_B_01 = 792295685,
	DOORHASH_FOUNDRY_B_02 = 563273144,
	DOORHASH_FOUNDRY_T_01 = -726993043,
	DOORHASH_RURAL_BANK_F_L = 178228075,
	DOORHASH_RURAL_BANK_F_R = 1852297978,
	DOORHASH_LESTER_F = -565026078,
	DOORHASH_LESTER_R_L = 1646172266,
	DOORHASH_LESTER_R_R = 204467342,
	DOORHASH_CARSTEAL_MOTEL = 2047070410,
	DOORHASH_CARSTEAL_GARAGE_F = 1417775309,
	DOORHASH_CARSTEAL_GARAGE_S = -106474626,
	DOORHASH_STRIPCLUB_F = 1840510598,
	DOORHASH_STRIPCLUB_R = 1382825971,
	DOORHASH_JOSH_HOTEL = 232536303,
	DOORHASH_MEX_GANG_SAFE = 1267246609,
	DOORHASH_LOST_GANG_SAFE = -1900237971,
	DOORHASH_RANCH_F_L1 = 2077901353,
	DOORHASH_RANCH_F_R1 = -2102079126,
	DOORHASH_RANCH_F_L2 = -1905793212,
	DOORHASH_RANCH_F_R2 = -1797032505,
	DOORHASH_RANCH_R_L1 = -62235167,
	DOORHASH_RANCH_R_R1 = -1727188163,
	DOORHASH_RANCH_R_L2 = -562748873,
	DOORHASH_RANCH_R_R2 = 1976429759,
	DOORHASH_ARM2_GARAGE_01 = 1341041543,
	DOORHASH_ARM2_GARAGE_02 = -1631467220,
	DOORHASH_ARM2_HENCH_01 = -1788473129,
	DOORHASH_ARM2_SIMEON_OFFICE = -1831288286,
	DOORHASH_TORTURE = 963876966,
	DOORHASH_CHEMICAL_FACTORY_L = 1773088812,
	DOORHASH_CHEMICAL_FACTORY_R = -1332101528,
	DOORHASH_RECYCLING_PLANT_F_L = -1811763714,
	DOORHASH_RECYCLING_PLANT_F_R = 1608500665,
	DOORHASH_RECYCLING_PLANT_R_L = -1456048340,
	DOORHASH_RECYCLING_PLANT_R_R = 943854909,
	DOORHASH_HICK_BAR_F = -89065356,
	DOORHASH_HICK_BAR_F_INT = -925491840,
	DOORHASH_EPSILON_MANSION_F_L = 1860276419,
	DOORHASH_EPSILON_MANSION_F_R = 1999872275,
	DOORHASH_EPSILON2_STORAGE_ROOM = 1538555582,
	DOORHASH_EPSILON3_GARAGE = -961994186,
	DOORHASH_LINVADER_OFFICE_UP = -1772472848,
	DOORHASH_HENCHMAN_TRAILER_L = -46374650,
	DOORHASH_HENCHMAN_TRAILER_R = -358302761,
	DOORHASH_FRANK1_DEALER_DOOR = -1237936041,
	DOORHASH_FRANK1_SHOP_DOOR = 1487374207,
	DOORHASH_FRANK1_HOUSE_DOOR = -199126299,
	DOORHASH_EPSILON_7_TRAILER = -897071863,
	DOORHASH_SHRINK_OFFICE = -864465775,
	DOORHASH_LES_BIANCO_RESTAURANT_L = -208439480,
	DOORHASH_LES_BIANCO_RESTAURANT_R = -1001088805,
	DOORHASH_FIB_F_L = 756894459,
	DOORHASH_FIB_F_R = 476981677,
	DOORHASH_AIRPORT_TOWER_1 = 2081647379,
	DOORHASH_AIRPORT_TOWER_2 = 285119719,
	DOORHASH_AIRPORT_L = 169965357,
	DOORHASH_AIRPORT_R = 311232516,
	DOORHASH_LIFE_INVADER_SIDE_01 = 1259065971,
	DOORHASH_LIFE_INVADER_FRONT_L = -1563127729,
	DOORHASH_LIFE_INVADER_FRONT_R = 759145763,
	DOORHASH_LIFE_INVADER_REAR_L = -84399179,
	DOORHASH_LIFE_INVADER_REAR_R = -461898059,
	DOORHASH_FBI2_MEET_BUILDING = -884051216,
	DOORHASH_BANK_GRAPESEED_L = 243782214,
	DOORHASH_BANK_GRAPESEED_R = 714115627,
	DOORHASH_STUDIO_NORTH_GATE_IN = 1668106976,
	DOORHASH_STUDIO_NORTH_GATE_OUT = 1382347031,
	DOORHASH_STUDIO_SOUTH_GATE_IN = -966790948,
	DOORHASH_STUDIO_SOUTH_GATE_OUT = -2068750132,
	DOORHASH_TEQUILA_CLUB_DOOR_F = -1716533184,
	DOORHASH_TEQUILA_CLUB_DOOR_R = 2146505927,
	DOORHASH_HEIST_JEWELERS_L = 1874948872,
	DOORHASH_HEIST_JEWELERS_R = -1965020851,
	DOORHASH_BANK_VINEWOOD_FRONT_L = -293975210,
	DOORHASH_BANK_VINEWOOD_FRONT_R = -785215289,
	DOORHASH_BANK_VINEWOOD_CORNER_L = 1951546856,
	DOORHASH_BANK_VINEWOOD_CORNER_R = -431382051,
	DOORHASH_BANK_VINEWOOD_OFFICE = 440819155,
	DOORHASH_BANK_VINEWOOD_TELLER = -366143778,
	DOORHASH_SHERIFF_FRONT_L = -588495243,
	DOORHASH_SHERIFF_FRONT_R = 1815504139,
	DOORHASH_SHERIFF_CS4 = 1344911780,
	DOORHASH_VONCRAST_1_L = -320891223,
	DOORHASH_VONCRAST_1_R = 1511747875,
	DOORHASH_VONCRAST_2_L = -1517722103,
	DOORHASH_VONCRAST_2_R = -1093199712,
	DOORHASH_VONCRAST_3_L = 1902048492,
	DOORHASH_VONCRAST_3_R = -444768985,
	DOORHASH_NOSE_REAR_L = 404057594,
	DOORHASH_NOSE_REAR_R = -1417472813,
	DOORHASH_OMEGA_SHED_L = -1376084479,
	DOORHASH_OMEGA_SHED_R = 457472151,
	DOORHASH_GUN_SHOP_01_DT_L = 1071759151,
	DOORHASH_GUN_SHOP_01_DT_R = -2119023917,
	DOORHASH_GUN_SHOP_01_DT_SR = 1487704245,
	DOORHASH_GUN_SHOP_02_SS_L = -1488490473,
	DOORHASH_GUN_SHOP_02_SS_R = -511187813,
	DOORHASH_GUN_SHOP_03_HW_L = -248569395,
	DOORHASH_GUN_SHOP_03_HW_R = 989443413,
	DOORHASH_GUN_SHOP_04_ELS_L = 2022251829,
	DOORHASH_GUN_SHOP_04_ELS_R = 649820567,
	DOORHASH_GUN_SHOP_05_PB_L = 537455378,
	DOORHASH_GUN_SHOP_05_PB_R = 1121431731,
	DOORHASH_GUN_SHOP_06_LS_L = -1437380438,
	DOORHASH_GUN_SHOP_06_LS_R = -946336965,
	DOORHASH_GUN_SHOP_07_MW_L = 1893144650,
	DOORHASH_GUN_SHOP_07_MW_R = 435841678,
	DOORHASH_GUN_SHOP_08_CS_L = 948508314,
	DOORHASH_GUN_SHOP_08_CS_R = -1796714665,
	DOORHASH_GUN_SHOP_09_GOH_L = -1155247245,
	DOORHASH_GUN_SHOP_09_GOH_R = 782482084,
	DOORHASH_GUN_SHOP_10_VWH_L = -1194470801,
	DOORHASH_GUN_SHOP_10_VWH_R = -2129698061,
	DOORHASH_GUN_SHOP_11_ID1_L = -675817295,
	DOORHASH_GUN_SHOP_11_ID1_R = 2121442868,
	DOORHASH_GUN_SHOP_11_ID1_SR = 1529812051,
	DOORHASH_JOSH_GATE_F_L = 904342475,
	DOORHASH_JOSH_GATE_F_R = -795418380,
	DOORHASH_JOSH_GATE_R_L = -1502457334,
	DOORHASH_JOSH_GATE_R_R = -1994188940,
	DOORHASH_ARMYBASE_LIFT_L = -621770121,
	DOORHASH_ARMYBASE_LIFT_R = 1018580481,
	DOORHASH_PALETO_BANK_TELLER = 421926217,
	DOORHASH_CHICKENFACTORY_EXT_GATE = -1331552374,
	DOORHASH_DEALERSHIP_SIDE_L = 1496005418,
	DOORHASH_DEALERSHIP_SIDE_R = -1863079210,
	DOORHASH_DEALERSHIP_FRONT_L = -293141277,
	DOORHASH_DEALERSHIP_FRONT_R = 506750037,
	DOORHASH_RON_FRONTDOOR = -2018911784,
	DOORHASH_BANK_FLEECA_VW_L = -93934272,
	DOORHASH_BANK_FLEECA_VW_R = 667682830,
	DOORHASH_BANK_FLEECA_HWAY_L = 1876735830,
	DOORHASH_BANK_FLEECA_HWAY_R = -2112857171,
	DOORHASH_BANK_FLEECA_BURTON_L = -2116116146,
	DOORHASH_BANK_FLEECA_BURTON_R = -74083138,
	DOORHASH_ABBATOIR_FRONT_L = 2046930518,
	DOORHASH_ABBATOIR_FRONT_R = 1208502884,
	DOORHASH_NOSE_HELIPAD = 1986432421,
	DOORHASH_KORTZ_QING_L = -722798986,
	DOORHASH_KORTZ_QING_R = 204301578,
	DOORHASH_KORTZ_QINGALT_L = -320140460,
	DOORHASH_KORTZ_QINGALT_R = 65222916,
	DOORHASH_KORTZ_TALES_L = -920027322,
	DOORHASH_KORTZ_TALES_R = -58432001,
	DOORHASH_KORTZ_RICHES_L = -2007378629,
	DOORHASH_KORTZ_RICHES_R = 418772613,
	DOORHASH_GARAGE_JETSTEAL = 1679064921,
	DOORHASH_EPSILON_GATE_L = 412198396,
	DOORHASH_EPSILON_GATE_R = -1053755588,
	DOORHASH_KORTZ_FRONTL_L = -53446139,
	DOORHASH_KORTZ_FRONTL_R = 1333960556,
	DOORHASH_KORTZ_FRONTR_L = -41786493,
	DOORHASH_KORTZ_FRONTR_R = 1750120734,
	DOORHASH_CLETUS_GATE = 1661506222,
	DOORHASH_ABATTOIR_EXIT = -1670085357,
	DOORHASH_CHAPARRAL_MINE_L = -1983879150,
	DOORHASH_CHAPARRAL_MINE_R = 1147395442,
	DOORHASH_DBASE_DOOR_01 = -554843475,
	DOORHASH_DBASE_SEC_SLIDE_DOOR_01 = 1909190851,
	DUMMY_DOORHASH = 825812850
};

enum AUTODOOR_HASH {
	AUTODOOR_DOCKS_FRONT_GATE_IN = -303823323,
	AUTODOOR_DOCKS_FRONT_GATE_OUT = -1110491335,
	AUTODOOR_DOCKS_BACK_GATE_IN = 883531289,
	AUTODOOR_DOCKS_BACK_GATE_OUT = -1464860354,
	AUTODOOR_MICHAEL_MANSION_GATE = -1735618852,
	AUTODOOR_MIL_DOCKS_GATE_IN = 1862541262,
	AUTODOOR_MIL_DOCKS_GATE_OUT = 747815589,
	AUTODOOR_MIL_BASE_GATE_IN = 616346630,
	AUTODOOR_MIL_BASE_GATE_OUT = 447317969,
	AUTODOOR_CULT_GATE_LEFT = -367370493,
	AUTODOOR_CULT_GATE_RIGHT = -1402957286,
	AUTODOOR_DTOWN_VINEWOOD_GARAGE = -170964766,
	AUTODOOR_FRAN_HILLS_GARAGE = -1247364148,
	AUTODOOR_SC1_COP_CARPARK = 213039352,
	AUTODOOR_DEVIN_GATE_L = -166321961,
	AUTODOOR_DEVIN_GATE_R = -2036678178,
	AUTODOOR_AIRPORT_BARRIER_OUT = -599111730,
	AUTODOOR_AIRPORT_BARRIER_IN = -804938986,
	AUTODOOR_IMPOUND_L = 935592315,
	AUTODOOR_IMPOUND_R = 179480401,
	AUTODOOR_MIL_BASE_BARRIER_IN = -2128682856,
	AUTODOOR_MIL_BASE_BARRIER_OUT = 313531445,
	AUTODOOR_AIRPORT_ALT_GATES_L = -1298870201,
	AUTODOOR_AIRPORT_ALT_GATES_R = 65926040,
	AUTODOOR_HAYES_GARAGE = 1061779107,
	AUTODOOR_DRAINSERVICE_L = 1423193534,
	AUTODOOR_DRAINSERVICE_R = -1958174046,
	AUTODOOR_MAX = -525217466
};