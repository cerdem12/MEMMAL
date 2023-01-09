#include "amici/sundials_matrix_wrapper.h"
#include "sundials/sundials_types.h"

#include <array>
#include <algorithm>

namespace amici {
namespace model_MEMMAL_v1 {

static constexpr std::array<sunindextype, 1633> dwdx_colptrs_MEMMAL_v1_ = {
    0, 1, 5, 13, 21, 25, 29, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 84, 86, 88, 91, 93, 94, 95, 96, 107, 118, 120, 132, 136, 139, 144, 147, 151, 155, 164, 169, 172, 175, 178, 181, 184, 188, 192, 201, 204, 211, 213, 218, 220, 223, 226, 230, 233, 241, 244, 248, 251, 257, 259, 261, 267, 268, 269, 275, 277, 280, 283, 285, 287, 289, 292, 295, 297, 299, 303, 306, 310, 312, 314, 317, 320, 324, 326, 329, 331, 334, 338, 341, 343, 346, 347, 349, 352, 355, 362, 364, 367, 370, 372, 376, 381, 383, 387, 389, 393, 395, 396, 398, 401, 403, 405, 408, 410, 412, 415, 418, 420, 423, 425, 427, 431, 434, 437, 439, 441, 442, 446, 448, 450, 452, 454, 456, 460, 463, 465, 468, 470, 473, 475, 478, 487, 502, 506, 508, 512, 515, 518, 528, 530, 539, 541, 549, 559, 561, 565, 569, 571, 575, 577, 579, 582, 585, 589, 593, 595, 598, 601, 604, 607, 610, 613, 616, 619, 629, 639, 649, 653, 656, 660, 665, 669, 675, 681, 687, 692, 698, 701, 705, 710, 715, 719, 725, 731, 737, 743, 747, 753, 758, 763, 768, 774, 780, 783, 789, 794, 799, 804, 809, 813, 817, 820, 823, 826, 834, 842, 850, 858, 866, 874, 882, 890, 898, 906, 914, 922, 930, 938, 946, 954, 962, 970, 978, 986, 994, 1002, 1010, 1018, 1026, 1030, 1034, 1038, 1042, 1049, 1056, 1063, 1070, 1072, 1074, 1076, 1078, 1080, 1082, 1084, 1086, 1088, 1090, 1092, 1094, 1096, 1098, 1100, 1102, 1104, 1106, 1108, 1110, 1112, 1114, 1116, 1118, 1120, 1122, 1124, 1126, 1128, 1131, 1134, 1137, 1140, 1143, 1146, 1149, 1152, 1155, 1158, 1161, 1164, 1167, 1170, 1173, 1176, 1179, 1182, 1185, 1188, 1191, 1194, 1197, 1200, 1203, 1206, 1209, 1212, 1215, 1219, 1223, 1227, 1231, 1235, 1239, 1243, 1247, 1251, 1255, 1259, 1263, 1267, 1271, 1275, 1279, 1283, 1287, 1291, 1295, 1299, 1303, 1307, 1311, 1315, 1318, 1321, 1324, 1327, 1331, 1335, 1339, 1343, 1347, 1351, 1355, 1359, 1363, 1367, 1371, 1375, 1379, 1383, 1387, 1391, 1395, 1399, 1403, 1407, 1411, 1415, 1419, 1423, 1427, 1431, 1435, 1439, 1443, 1447, 1451, 1455, 1459, 1463, 1467, 1471, 1475, 1479, 1483, 1487, 1491, 1495, 1499, 1503, 1507, 1511, 1515, 1519, 1523, 1527, 1531, 1535, 1539, 1543, 1547, 1551, 1555, 1559, 1563, 1567, 1571, 1575, 1579, 1583, 1587, 1591, 1595, 1599, 1603, 1607, 1611, 1615, 1619, 1623, 1627, 1631, 1635, 1639, 1643, 1647, 1651, 1655, 1659, 1663, 1667, 1671, 1675, 1679, 1683, 1687, 1691, 1695, 1699, 1703, 1707, 1711, 1715, 1719, 1723, 1727, 1731, 1735, 1739, 1743, 1747, 1751, 1755, 1759, 1763, 1767, 1771, 1775, 1779, 1783, 1787, 1791, 1795, 1799, 1803, 1807, 1811, 1815, 1819, 1823, 1827, 1831, 1835, 1839, 1843, 1847, 1851, 1855, 1859, 1863, 1867, 1871, 1875, 1879, 1883, 1887, 1891, 1895, 1899, 1903, 1907, 1911, 1915, 1919, 1923, 1927, 1931, 1935, 1939, 1943, 1947, 1951, 1955, 1959, 1963, 1967, 1971, 1975, 1979, 1983, 1987, 1991, 1995, 1999, 2003, 2007, 2011, 2015, 2019, 2023, 2027, 2031, 2035, 2039, 2043, 2047, 2051, 2055, 2059, 2063, 2067, 2071, 2075, 2079, 2083, 2087, 2091, 2095, 2099, 2103, 2107, 2111, 2115, 2119, 2123, 2127, 2131, 2135, 2139, 2143, 2147, 2151, 2155, 2159, 2163, 2167, 2171, 2175, 2179, 2183, 2187, 2191, 2195, 2199, 2203, 2207, 2211, 2215, 2219, 2223, 2227, 2231, 2235, 2239, 2243, 2247, 2251, 2255, 2259, 2263, 2267, 2271, 2275, 2279, 2283, 2287, 2291, 2295, 2299, 2303, 2307, 2311, 2315, 2319, 2323, 2327, 2331, 2335, 2339, 2343, 2347, 2351, 2355, 2359, 2363, 2367, 2371, 2375, 2379, 2383, 2387, 2391, 2395, 2399, 2403, 2407, 2411, 2415, 2419, 2423, 2427, 2431, 2435, 2439, 2443, 2447, 2451, 2455, 2459, 2463, 2467, 2471, 2475, 2479, 2483, 2487, 2491, 2495, 2499, 2503, 2512, 2542, 2572, 2574, 2635, 2637, 2667, 2669, 2671, 2703, 2705, 2735, 2738, 2743, 2773, 2775, 2778, 2780, 2783, 2788, 2849, 2852, 2854, 2856, 2860, 2864, 2866, 2870, 2874, 2879, 2884, 2886, 2889, 2898, 2900, 2903, 2911, 2914, 2917, 2920, 2923, 2925, 2932, 2936, 2939, 2942, 2945, 2946, 3006, 3012, 3014, 3017, 3020, 3022, 3030, 3032, 3035, 3038, 3040, 3043, 3046, 3049, 3052, 3054, 3056, 3060, 3062, 3066, 3068, 3071, 3073, 3076, 3078, 3080, 3084, 3098, 3101, 3103, 3104, 3106, 3108, 3110, 3113, 3116, 3118, 3120, 3123, 3126, 3129, 3132, 3135, 3138, 3141, 3144, 3147, 3150, 3153, 3157, 3160, 3163, 3166, 3169, 3172, 3175, 3178, 3181, 3184, 3185, 3188, 3191, 3194, 3197, 3200, 3203, 3206, 3210, 3214, 3217, 3220, 3350, 3352, 3356, 3359, 3362, 3376, 3377, 3379, 3380, 3382, 3384, 3386, 3389, 3392, 3395, 3399, 3402, 3407, 3412, 3417, 3422, 3424, 3428, 3433, 3437, 3440, 3443, 3445, 3451, 3455, 3458, 3461, 3464, 3466, 3819, 3824, 3830, 3833, 3836, 3841, 3844, 3848, 3854, 3857, 3859, 3861, 3863, 3865, 3867, 3869, 3871, 3873, 3875, 3877, 3879, 3881, 3883, 3885, 3887, 3889, 3891, 3893, 3895, 3897, 3899, 3901, 3903, 3905, 3907, 3909, 3911, 3913, 3915, 3917, 3919, 3921, 3923, 3925, 3927, 3929, 3931, 3933, 3935, 3937, 3939, 3941, 3943, 3945, 3947, 3949, 3951, 3953, 3955, 3957, 3959, 3961, 3963, 3965, 3967, 3969, 3971, 3973, 3975, 3977, 3979, 3981, 3983, 3985, 3987, 3989, 3991, 3993, 3995, 3997, 3999, 4001, 4003, 4005, 4007, 4009, 4011, 4013, 4015, 4017, 4019, 4021, 4023, 4025, 4027, 4029, 4031, 4033, 4035, 4037, 4039, 4041, 4043, 4045, 4047, 4049, 4051, 4053, 4055, 4057, 4059, 4061, 4063, 4065, 4067, 4069, 4071, 4073, 4075, 4077, 4079, 4081, 4083, 4085, 4087, 4089, 4091, 4093, 4095, 4097, 4099, 4101, 4103, 4105, 4107, 4109, 4111, 4113, 4115, 4117, 4119, 4121, 4123, 4125, 4127, 4129, 4131, 4133, 4135, 4137, 4139, 4141, 4143, 4145, 4147, 4149, 4151, 4153, 4155, 4157, 4159, 4161, 4163, 4165, 4167, 4169, 4171, 4173, 4175, 4177, 4179, 4181, 4183, 4185, 4187, 4189, 4191, 4193, 4195, 4197, 4199, 4201, 4203, 4205, 4207, 4209, 4211, 4213, 4215, 4217, 4219, 4221, 4223, 4225, 4227, 4229, 4231, 4233, 4235, 4237, 4239, 4241, 4243, 4245, 4247, 4249, 4251, 4253, 4255, 4257, 4259, 4261, 4263, 4265, 4267, 4269, 4271, 4273, 4275, 4277, 4279, 4281, 4283, 4285, 4287, 4289, 4291, 4293, 4295, 4297, 4299, 4301, 4303, 4305, 4307, 4309, 4311, 4313, 4315, 4317, 4319, 4321, 4323, 4325, 4327, 4329, 4331, 4333, 4335, 4337, 4339, 4341, 4343, 4345, 4347, 4349, 4351, 4353, 4355, 4357, 4359, 4361, 4363, 4365, 4367, 4369, 4371, 4373, 4375, 4377, 4379, 4381, 4383, 4385, 4387, 4389, 4391, 4393, 4395, 4397, 4399, 4401, 4403, 4405, 4407, 4409, 4411, 4413, 4415, 4417, 4419, 4421, 4423, 4425, 4427, 4429, 4431, 4433, 4435, 4437, 4439, 4441, 4443, 4445, 4447, 4449, 4451, 4453, 4455, 4457, 4459, 4461, 4463, 4465, 4467, 4469, 4471, 4473, 4475, 4477, 4479, 4481, 4483, 4485, 4487, 4489, 4491, 4493, 4495, 4497, 4499, 4501, 4503, 4505, 4507, 4509, 4511, 4513, 4515, 4517, 4519, 4521, 4523, 4525, 4527, 4529, 4531, 4533, 4535, 4537, 4539, 4541, 4543, 4545, 4547, 4549, 4551, 4553, 4556, 4559, 4566, 4569, 4572, 4575, 4583, 4586, 4588, 4590, 4592, 4594, 4596, 4598, 4600, 4602, 4604, 4606, 4608, 4610, 4612, 4614, 4616, 4618, 4620, 4622, 4624, 4626, 4628, 4630, 4632, 4634, 4636, 4638, 4639, 4640, 4641, 4642, 4644, 4646, 4648, 4650, 4652, 4654, 4656, 4658, 4660, 4662, 4664, 4666, 4668, 4670, 4672, 4674, 4676, 4678, 4680, 4682, 4684, 4686, 4688, 4690, 4692, 4694, 4696, 4698, 4700, 4702, 4704, 4706, 4708, 4710, 4712, 4714, 4716, 4718, 4720, 4722, 4724, 4726, 4728, 4730, 4732, 4734, 4736, 4738, 4740, 4742, 4744, 4746, 4748, 4750, 4752, 4754, 4756, 4758, 4760, 4762, 4764, 4766, 4768, 4770, 4772, 4774, 4776, 4778, 4780, 4782, 4784, 4786, 4788, 4790, 4792, 4794, 4796, 4798, 4800, 4802, 4804, 4806, 4808, 4810, 4812, 4814, 4816, 4818, 4820, 4822, 4824, 4826, 4828, 4830, 4832, 4834, 4836, 4838, 4840, 4842, 4844, 4846, 4848, 4850, 4852, 4854, 4856, 4858, 4860, 4862, 4864, 4866, 4868, 4870, 4872, 4874, 4876, 4878, 4880, 4882, 4884, 4886, 4888, 4890, 4892, 4894, 4896, 4898, 4900, 4902, 4904, 4906, 4908, 4910, 4912, 4914, 4916, 4918, 4920, 4922, 4924, 4926, 4928, 4930, 4932, 4934, 4936, 4938, 4940, 4942, 4944, 4946, 4948, 4950, 4952, 4954, 4956, 4958, 4960, 4962, 4964, 4966, 4968, 4970, 4972, 4974, 4976, 4978, 4980, 4982, 4984, 4986, 4988, 4990, 4992, 4994, 4996, 4998, 5000, 5002, 5004, 5006, 5008, 5010, 5012, 5014, 5016, 5018, 5020, 5022, 5024, 5026, 5028, 5030, 5032, 5034, 5036, 5038, 5040, 5042, 5044, 5046, 5048, 5050, 5052, 5054, 5056, 5058, 5060, 5062, 5064, 5066, 5068, 5070, 5072, 5074, 5076, 5078, 5080, 5082, 5084, 5086, 5088, 5090, 5092, 5094, 5096, 5098, 5100, 5102, 5104, 5106, 5108, 5110, 5112, 5114, 5116, 5118, 5120, 5122, 5124, 5126, 5128, 5130, 5132, 5134, 5136, 5138, 5140, 5142, 5144, 5146, 5148, 5150, 5152, 5154, 5156, 5158, 5160, 5162, 5164, 5166, 5168, 5170, 5172, 5174, 5176, 5178, 5180, 5182, 5184, 5186, 5188, 5190, 5192, 5194, 5196, 5198, 5200, 5202, 5204, 5206, 5208, 5210, 5211, 5212, 5213, 5214, 5215, 5216, 5217, 5218, 5219, 5220, 5221, 5222, 5223, 5224, 5225, 5226, 5227, 5228, 5229, 5230, 5231, 5232, 5233, 5234, 5235, 5236, 5237, 5238, 5239, 5240, 5241, 5242, 5243, 5244, 5245, 5246, 5247, 5248, 5249, 5250, 5251, 5252, 5253, 5254, 5255, 5256, 5257, 5258, 5259, 5260, 5261, 5262, 5263, 5264, 5265, 5266, 5267, 5268, 5269, 5270, 5271, 5272, 5273, 5274, 5275, 5276, 5277, 5278, 5279, 5280, 5281, 5282, 5283, 5284, 5285, 5286, 5287, 5288, 5289, 5290, 5291, 5292, 5293, 5294, 5295, 5296, 5297, 5298, 5299, 5300, 5301, 5302, 5303, 5304, 5305, 5306, 5307, 5308, 5309, 5310, 5311, 5312, 5313, 5314, 5315, 5316, 5317, 5318, 5319, 5320, 5321, 5322, 5323, 5324, 5325, 5326, 5327, 5328, 5329, 5330, 5331, 5332, 5333, 5334, 5335, 5336, 5337, 5338, 5339, 5340, 5341, 5342, 5343, 5344, 5345, 5346, 5347, 5348, 5349, 5350, 5351, 5352, 5353, 5354, 5355, 5356, 5357, 5358, 5359, 5360, 5361, 5362, 5363, 5364, 5365, 5366, 5367
};

void dwdx_colptrs_MEMMAL_v1(SUNMatrixWrapper &dwdx){
    dwdx.set_indexptrs(gsl::make_span(dwdx_colptrs_MEMMAL_v1_));
}
} // namespace amici
} // namespace model_MEMMAL_v1