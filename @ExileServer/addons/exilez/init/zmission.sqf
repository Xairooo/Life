// 143 Vehicles
/*
private _vehicles = [
["Land_CncBarrier_F", [13032.3, 15945.7, 14.7439], [-0.996732, -0.0807849, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [13031.6, 15954.3, 14.7399], [-0.996732, -0.0807849, 0], [0, 0, 1], true],
["Land_Wreck_Hunter_F", [13036.7, 15942.6, 16.1592], [0.997431, 0.0716307, 1.6304e-006], [0.000665967, -0.00929611, 0.999957], true],
["Land_u_House_Big_02_V1_F", [13045.9, 15933.4, 16.8069], [-0.104495, 0.994525, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V1_F", [13065.4, 15936.5, 17.0241], [0.9922, 0.124659, 0], [0, 0, 1], true],
["RoadBarrier_small_F", [13033.1, 15945.9, 14.9921], [-0.999702, -0.024396, -7.9975e-006], [-0.000170343, 0.00665251, 0.999978], true],
["Land_d_House_Big_02_V1_F", [13048.6, 15918.4, 17.2414], [-0.991125, -0.132933, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13040.5, 15965.7, 17.4839], [-0.995673, -0.0929215, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13069.1, 15967.4, 17.1742], [-0.995673, -0.0929215, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13088.6, 15939.6, 17.089], [0.996691, 0.0812779, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [13032, 15958.2, 14.7516], [-0.948432, 0.316982, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [13037.2, 15938.3, 14.7203], [-0.80847, -0.588537, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [13143.3, 15955, 14.3869], [-0.996732, -0.0807849, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [13142.4, 15963.4, 14.3934], [-0.996732, -0.0807849, 0], [0, 0, 1], true],
["RoadCone_L_F", [13143.1, 15956.5, 14.3521], [0.951273, 0.308349, 0], [0, 0, 1], true],
["RoadBarrier_small_F", [13141.7, 15962.5, 14.6428], [-0.993437, -0.114373, 0.00127568], [0.00126678, 0.000150485, 0.999999], true],
["Land_Wreck_BRDM2_F", [13147.4, 15956.7, 14.5473], [0.439858, -0.898067, 0], [0, 0, 1], true],
["Land_Wreck_Ural_F", [13083.6, 15954.5, 15.2308], [0.996983, 0.0776219, 2.92369e-006], [9.66231e-005, -0.0012787, 0.999999], true],
["Land_Rampart_F", [13054.3, 15934.3, 14.9017], [0, 1, 0], [0, 0, 1], true],
["Land_Rampart_F", [13080.4, 15968.7, 14.9456], [0, 1, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13092.8, 15969.7, 17.2164], [-0.993944, -0.109886, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13108.5, 15942.4, 17.0514], [0.996691, 0.0812779, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13129.2, 15944.8, 17.0522], [0.996691, 0.0812779, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13132.1, 15972.5, 17.1274], [-0.993944, -0.109886, 0], [0, 0, 1], true],
["Land_u_Shop_02_V1_F", [13112.8, 15970.7, 17.1718], [0.998925, 0.0463529, 0], [0, 0, 1], true],
["Land_Wreck_Heli_Attack_01_F", [13089.5, 15984.7, 15.6921], [0.941058, -0.338116, 0.00932828], [-0.0186865, -0.0244329, 0.999527], true],
["Land_u_House_Big_02_V1_F", [15969.5, 18238.1, 52.9356], [-0.932976, 0.359938, 0], [0, 0, 1], true],
["Land_Cargo_Tower_V1_No1_F", [16030.8, 16347, 46.7676], [0.930678, -0.36584, 0], [0, 0, 1], true],
["Land_Wreck_HMMWV_F", [17502.4, 14353.9, 6.48199], [0.904728, 0.425912, -0.00808951], [0.0133313, -0.0093277, 0.999868], true],
["Land_WIP_F", [17508.6, 14301.8, 5.17184], [-0.969825, 0.243801, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [17491.5, 14353.8, 6.09605], [0, 1, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [17500.5, 14349.9, 6.03455], [0, 1, 0], [0, 0, 1], true],
["RoadBarrier_small_F", [17501, 14350.5, 6.27875], [0, 0.999999, 0.00133688], [0.0213271, -0.00133657, 0.999772], true],
["RoadBarrier_small_F", [17490.8, 14353.1, 6.34808], [0, 0.999999, 0.00133688], [-0.00133721, -0.00133688, 0.999998], true],
["Land_Wreck_Ural_F", [17493, 13195, 14.5148], [0, 0.999996, -0.00265204], [-0.00133721, 0.00265204, 0.999996], true],
["Land_Wreck_HMMWV_F", [17502, 13192.3, 14.1979], [0.995739, -0.0920922, 0.00471672], [-0.00399675, 0.00800083, 0.99996], true],
["Land_Wreck_Car_F", [17493.4, 13183.4, 14.1381], [-0.777551, -0.628746, 0.0096077], [0.00265199, 0.0119999, 0.999924], true],
["Land_Wreck_Truck_F", [17479.1, 13185.2, 14.7165], [0.714724, 0.699345, -0.00932473], [0.00666071, 0.00652575, 0.999957], true],
["Land_CncBarrier_F", [5966.66, 14861.3, 23.8585], [0.714072, 0.700072, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [5972.9, 14855.2, 23.7952], [0.670327, 0.742066, 0], [0, 0, 1], true],
["Land_Rampart_F", [5973.49, 14872.8, 24.4606], [0.770197, 0.637807, 0], [0, 0, 1], true],
["Land_Wreck_BMP2_F", [5969.68, 14865.7, 24.3479], [-0.00304722, 0.999952, 0.00934881], [0.00666787, -0.00932832, 0.999934], true],
["Land_Wreck_HMMWV_F", [5994.3, 14875.6, 24.4499], [0.119426, -0.992835, 0.00399801], [0.00480537, 0.00460481, 0.999978], true],
["Land_CncBarrier_F", [5992.9, 14885.3, 24.036], [0.656381, 0.75443, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [6000.08, 14879, 24.0423], [0.82319, 0.567766, 0], [0, 0, 1], true],
["Land_i_House_Small_03_V1_F", [13904.4, 17246.5, 17.3856], [-0.752006, 0.659156, 0], [0, 0, 1], true],
["Land_i_Shop_02_V2_F", [13920.4, 17421.3, 15.8007], [0.762451, 0.647046, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V2_F", [13936.4, 17403, 16.1359], [0.728669, 0.684866, 0], [0, 0, 1], true],
["Land_Wreck_BMP2_F", [15338.4, 17402.6, 17.9834], [-0.186892, 0.98238, -0.000612173], [0.0106641, 0.00265189, 0.99994], true],
["Land_Wreck_BRDM2_F", [15320.5, 17381.6, 18.233], [0.990388, 0.136734, -0.0208589], [0.0186626, 0.0173252, 0.999676], true],
["Land_Wreck_HMMWV_F", [15292.4, 17362.7, 18.7578], [-0.999238, 0.0390048, 0.0012837], [0.00133688, 0.00133721, 0.999998], true],
["Land_Wreck_UAZ_F", [15303.1, 17373.4, 18.7252], [-0.0568582, 0.998369, -0.00509064], [0.00399666, 0.00532646, 0.999978], true],
["Land_CncBarrier_F", [15297.3, 17529.6, 16.9831], [0.714134, 0.700009, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15301.9, 17525, 17.1157], [0.713682, 0.70047, -5.58794e-009], [-0.0229957, 0.0234295, 0.999461], true],
["Land_CncBarrier_F", [15265.2, 17476.6, 18.0694], [-0.388439, 0.921474, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15258.7, 17470.4, 18.1099], [-0.931169, 0.364589, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15256.6, 17464.1, 18.1334], [-0.919256, 0.39366, 0], [0, 0, 1], true],
["Land_Wreck_HMMWV_F", [15261.6, 17473.7, 18.5455], [0, 0.999978, -0.00666818], [-0.00133721, 0.00666817, 0.999977], true],
["Land_i_House_Big_02_V3_F", [15795.5, 17397.5, 16.9281], [0.953162, 0.302459, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [15788.5, 17414, 17.1742], [0.606788, -0.794864, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V2_F", [15773.7, 17427.3, 17.1982], [0.895638, -0.444784, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [15742.5, 17440.8, 17.2483], [0.958018, -0.28671, 0], [0, 0, 1], true],
["Land_Cargo_HQ_V3_F", [15286.8, 17427.6, 21.5516], [0.701368, -0.7128, 0], [0, 0, 1], true],
["Land_i_Barracks_V1_F", [15344.9, 17372.1, 17.1535], [-0.691323, -0.722546, 0], [0, 0, 1], true],
["Land_i_Barracks_V1_F", [15309.1, 17405.4, 17.4808], [-0.691323, -0.722546, 0], [0, 0, 1], true],
["Land_i_Barracks_V1_F", [15315.9, 17361.4, 17.8776], [0.695895, -0.718143, 0], [0, 0, 1], true],
["Land_i_Barracks_V1_F", [15293.5, 17381.3, 17.8859], [-0.702467, 0.711716, 0], [0, 0, 1], true],
["Land_Offices_01_V1_F", [14407.6, 16766.8, 24.6602], [0.674369, -0.738395, 0], [0, 0, 1], true],
["Land_Offices_01_V1_F", [13963.6, 17322.2, 23.2516], [-0.708887, 0.705322, 0], [0, 0, 1], true],
["Land_Offices_01_V1_F", [13927.4, 17283.1, 24.1152], [-0.755681, 0.65494, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V3_F", [13913.2, 17380.5, 15.9673], [0.732266, 0.681019, 0], [0, 0, 1], true],
["Land_i_House_Big_01_V2_F", [13894.4, 17398.6, 15.3038], [-0.728958, -0.684559, 0], [0, 0, 1], true],
["Land_TentHangar_V1_F", [17494.9, 13190.5, 17.4373], [0.726605, 0.687056, 0], [0, 0, 1], true],
["Land_TentHangar_V1_F", [17478, 13174.3, 17.6285], [0.717557, 0.6965, 0], [0, 0, 1], true],
["Land_Wreck_Heli_Attack_01_F", [17471.8, 13164, 14.9934], [0.269819, -0.962905, 0.0033298], [0.00666787, 0.00532638, 0.999964], true],
["Land_Wreck_HMMWV_F", [17458.7, 13173.6, 14.6089], [0.925829, -0.377791, -0.0106557], [0.00735211, -0.0101856, 0.999921], true],
["Land_PortableLight_double_F", [15310.3, 17391.7, 18.727], [-0.77704, 0.629452, 0], [0, 0, 1], true],
["Land_Camping_Light_F", [15339.3, 17369.5, 21.1246], [0, 1, 0], [0, 0, 1], true],
["Land_Camping_Light_F", [15558, 17437.6, 18.3087], [0, 1, 0], [0.00129158, 0, 0.999999], true],
["Land_PortableLight_double_F", [15808.2, 17420.7, 15.3514], [0.93786, 0.347014, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [15810, 17416.3, 15.3073], [0, 1, 0], [0, 0, 1], true],
["Land_PortableLight_double_F", [15812.8, 17420.2, 15.3706], [-0.944492, -0.328533, 0], [0, 0, 1], true],
["Land_Wreck_Plane_Transport_01_F", [8248.62, 15828.4, 108.751], [-0.997607, -0.0691343, 0.00115034], [0.00133688, -0.00265199, 0.999996], true],
["Land_CncBarrier_F", [15795, 17437.1, 14.657], [-0.913737, 0.406306, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15791.3, 17430.3, 14.612], [-0.77527, 0.63163, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15786.8, 17426.1, 14.5686], [-0.617707, 0.786408, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15838.5, 17419.6, 14.8432], [-0.999329, 0.0366167, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15839.7, 17429.6, 14.9156], [-0.992586, 0.121546, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15814.8, 17395.1, 14.4777], [-0.140943, 0.990018, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15805.2, 17392.5, 14.4218], [-0.483582, 0.875299, 0], [0, 0, 1], true],
["Land_Wreck_HMMWV_F", [15812.6, 17417.9, 15.2488], [0.777956, -0.628319, 0], [0, 0, 1], true],
["Land_Wreck_BMP2_F", [15822.4, 17412.6, 15.0966], [0, 0.999965, 0.00832912], [-0.00769715, -0.00832887, 0.999936], true],
["Land_CncBarrier_F", [15816.7, 17423.2, 14.7373], [-0.97867, 0.205439, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [15818.6, 17432.9, 14.8173], [-0.987142, 0.159843, 0], [0, 0, 1], true],
["Land_Wreck_Car2_F", [15815, 17430.4, 15.2384], [0.732919, 0.680303, 0.00422782], [-0.00815287, 0.00256905, 0.999963], true],
["Land_Wreck_HMMWV_F", [8699.45, 15934, 93.6172], [0.596057, -0.802833, 0.0132732], [-0.0186628, 0.00267396, 0.999822], true],
["Land_Wreck_Heli_Attack_01_F", [8718.41, 15949.2, 92.5254], [0, 0.991228, -0.132164], [-0.042629, 0.132043, 0.990327], true],
["Land_Wreck_Ural_F", [8696.63, 15929.8, 93.9075], [-0.711496, -0.702193, -0.0264239], [-0.0226603, -0.0146564, 0.999636], true],
["Land_Tyre_F", [8697.12, 15935.3, 92.8066], [0, 0.999996, -0.00267442], [-0.0186628, 0.00267396, 0.999822], true],
["Land_CncBarrier_F", [16981.2, 15017.7, 15.6195], [-0.162807, 0.986658, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [16989.8, 15019.7, 15.624], [-0.221172, 0.975235, 0], [0, 0, 1], true],
["Land_Wreck_Heli_Attack_01_F", [16995.2, 15009.6, 16.3113], [0.695304, -0.718611, -0.0123003], [0.00666787, -0.0106638, 0.999921], true],
["Land_Wreck_UAZ_F", [16982, 15021.7, 16.154], [-0.687573, 0.725802, 0.0213239], [0.0166059, -0.0136417, 0.999769], true],
["Land_CncBarrier_F", [16791.8, 17720, 18.0571], [0.871097, 0.491111, 0], [0, 0, 1], true],
["Land_CncBarrier_F", [16787.1, 17727.6, 17.9899], [0.871097, 0.491111, 0], [0, 0, 1], true],
["Land_Wreck_Skodovka_F", [16793.1, 17722.6, 18.2069], [0, 0.999928, -0.011995], [0.00799344, 0.0119946, 0.999896], true],
["Land_Wreck_Van_F", [16784.7, 17726.3, 18.6442], [-0.885286, -0.46498, 0.0079281], [0.00265199, 0.0119999, 0.999924], true],
["Land_Wreck_Car2_F", [16777.4, 17712.3, 18.6753], [-0.920293, 0.391093, 0.0103707], [0.0146639, 0.00799259, 0.999861], true],
["Land_Cargo_House_V3_ruins_F", [15384.2, 19177.7, 78.3085], [-0.74676, 0.665094, 0], [0, 0, 1], true],
["Land_HBarrier_Big_F", [15386.1, 19157.9, 78.3115], [0.75501, 0.649195, 0.0922272], [-0.0691296, -0.061061, 0.995737], true],
["Land_HBarrier_Big_F", [15374.5, 19169.6, 78.4662], [0.742337, 0.664668, 0.084572], [-0.0492724, -0.0717268, 0.996207], true],
["Land_HBarrier_Big_F", [15369.3, 19176.5, 78.6799], [0.85685, 0.513199, 0.0493392], [-0.0279894, -0.0492541, 0.998394], true],
["Land_u_Barracks_V2_F", [15408, 19171.1, 80.1677], [-0.615213, 0.788361, 0], [0, 0, 1], true],
["Land_i_Barracks_V2_F", [15432.5, 19188.9, 77.9947], [-0.482305, 0.876004, 0], [0, 0, 1], true],
["Land_Cargo_HQ_V2_F", [15456.1, 19223.3, 80.4279], [-0.949493, -0.313787, 0], [0, 0, 1], true],
["Land_Cargo_House_V1_F", [15464.1, 19207.3, 76.9129], [0.358326, -0.933597, 0], [0, 0, 1], true],
["Land_Cargo_Patrol_V1_F", [15396.2, 19230.1, 82.5271], [0.563782, -0.825923, 0], [0, 0, 1], true],
["Land_HBarrier_Big_F", [15376, 19215.1, 79.434], [0.786596, -0.617014, 0.0236839], [0.0106641, 0.0519259, 0.998594], true],
["Land_HBarrier_Big_F", [15388.5, 19227.7, 78.7994], [0.644174, -0.763648, 0.0433752], [-0.012, 0.0466116, 0.998841], true],
["Land_HBarrier_3_F", [15383.8, 19223.9, 78.6033], [-0.598383, 0.79974, -0.0485179], [0.00800059, 0.066517, 0.997753], true],
["Land_HBarrier_Big_F", [15401.3, 19236, 78.7376], [-0.320236, 0.946738, -0.0337102], [-0.0106585, 0.0319812, 0.999432], true],
["Land_CncBarrier_stripes_F", [15393.8, 19233.5, 77.7948], [-0.556575, 0.830797, 0], [0, 0, 1], true],
["Land_WoodPile_F", [15378.9, 19218.8, 78.2639], [-0.825298, 0.564126, -0.0254103], [-0.0080009, 0.0333121, 0.999413], true],
["Land_HBarrier_Big_F", [15391.8, 19151.5, 77.8234], [0.75318, 0.653416, 0.0759375], [0.0313172, -0.150926, 0.988049], true],
["Land_HBarrier_Big_F", [15397.7, 19145.4, 76.0806], [0.751229, 0.659507, 0.026576], [0.0784252, -0.129166, 0.988517], true],
["Land_HBarrier_Big_F", [15426.6, 19145.3, 74.5137], [-0.653628, 0.744747, 0.134618], [0.00533751, -0.173333, 0.984849], true],
["Land_HBarrier_Big_F", [15433.3, 19150.8, 75.0537], [-0.591157, 0.795842, 0.131032], [0.0399682, -0.133354, 0.990262], true],
["Land_HBarrier_Big_F", [15454.7, 19165.5, 75.6768], [-0.343669, 0.93592, 0.0771027], [0.0173282, -0.0757696, 0.996975], true],
["Land_HBarrier_Big_F", [15468.1, 19175.2, 75.8081], [-0.921506, 0.361879, 0.14096], [0.100817, -0.127611, 0.986687], true],
["Land_HBarrier_Big_F", [15470.4, 19187, 77.1137], [-0.98489, 0.149144, 0.0880234], [0.0654751, -0.149871, 0.986535], true],
["Land_HBarrier_Big_F", [15470.4, 19195.6, 77.2975], [-0.9991, -0.00909342, 0.0414209], [0.0412979, 0.0133203, 0.999058], true],
["Land_HBarrier_Big_F", [15471, 19204.2, 77.1394], [-0.987387, 0.150827, 0.0481379], [0.0519298, 0.0213012, 0.998424], true],
["Land_HBarrier_Big_F", [15467.5, 19223.7, 77.2465], [-0.8905, -0.452578, 0.0467317], [0.065193, -0.0252709, 0.997553], true],
["Land_HBarrier_Big_F", [15463.5, 19231.5, 77.7898], [-0.897152, -0.441598, -0.0104297], [0.0399682, -0.104669, 0.993704], true],
["Land_HBarrier_Big_F", [15457.9, 19238.2, 78.671], [0.593051, 0.805151, 0.00478965], [0.0479432, -0.0412504, 0.997998], true],
["Land_HBarrier_Big_F", [15411.1, 19241.3, 78.5136], [-0.5918, 0.8045, -0.0505242], [-0.0146643, 0.0519232, 0.998543], true],
["Land_CncBarrierMedium_F", [15406.5, 19238, 78.3321], [-0.445558, 0.895253, 0], [0, 0, 1], true],
["Land_Campfire_F", [15405.4, 19222.7, 77.9933], [-0.426594, 0.904439, -0.0026526], [0.0121298, 0.00865377, 0.999889], true],
["Land_FieldToilet_F", [15415.6, 19213.7, 78.7863], [0.409825, -0.91214, -0.00665119], [-0.000918859, -0.00770448, 0.99997], true],
["Land_Barracks_ruins_F", [15400.9, 19195, 78.8593], [-0.544444, 0.838797, 0], [0, 0, 1], true],
["Land_Tyres_F", [15416.4, 19204.1, 78.0062], [0.894831, 0.445702, -0.0250555], [0.00478821, 0.0465412, 0.998905], true],
["Land_JunkPile_F", [15388.8, 19181, 77.9682], [0.772645, 0.634592, -0.0176935], [0.023991, -0.00133649, 0.999711], true],
["Land_GarbageBin_01_F", [15419.4, 19199, 78.4801], [-0.426167, 0.904645, 0], [0, 0, 1], true]
];

{
    private _vehicle = (_x select 0) createVehicle (_x select 1);
    _vehicle allowDamage false;
    _vehicle setPosWorld (_x select 1);
    _vehicle setVectorDirAndUp [_x select 2, _x select 3];
    _vehicle enableSimulationGlobal (_x select 4);
}
forEach _vehicles;
*/