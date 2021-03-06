/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2123, 2113, 2114, 2109, 2092},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1161, 273, 100, 83, 80},
				{1154, 273, 100, 83, 80},
				{1033, 272, 101, 85, 80},
				{964, 271, 103, 86, 81},
				{933, 275, 107, 88, 82},
				{856, 280, 111, 90, 84},
				{846, 242, 115, 92, 86},
				{843, 236, 123, 97, 89},
				{847, 235, 120, 103, 93},
				{871, 231, 106, 95, 90},
				{907, 230, 98, 84, 81},
				{953, 230, 98, 84, 81},
				{1004, 238, 100, 87, 83},
				{1057, 254, 101, 88, 86},
				{1110, 277, 104, 88, 84},
				{1194, 304, 106, 88, 83},
				{1369, 328, 105, 86, 82},
				{1443, 341, 104, 87, 83},
				{1568, 348, 102, 83, 80},
				{1793, 372, 103, 86, 82},
				{1941, 389, 105, 88, 83},
				{2118, 408, 107, 89, 84},
				{2331, 431, 111, 91, 87},
				{2603, 457, 114, 93, 90},
				{2976, 490, 119, 97, 94},
				{3517, 522, 121, 96, 90},
				{4388, 554, 118, 92, 86},
				{6787, 610, 126, 97, 90},
				{44101, 704, 144, 112, 105},
				{170766, 4208, 1758, 1385, 157}
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4334, 4333, 4329, 4324, 4316},
				{4226, 4254, 4259, 4257, 4253},
				{4159, 4196, 4202, 4200, 4196},
				{4099, 4142, 4147, 4145, 4141},
				{4045, 4093, 4096, 4093, 4089},
				{3953, 4040, 4046, 4042, 4040},
				{3907, 3959, 3990, 3994, 3995},
				{3868, 3918, 3957, 3958, 3956},
				{3835, 3886, 3915, 3920, 3918},
				{3816, 3854, 3868, 3874, 3875},
				{3802, 3827, 3835, 3836, 3835},
				{3790, 3805, 3812, 3813, 3812},
				{3778, 3790, 3794, 3795, 3794},
				{3766, 3781, 3780, 3780, 3779},
				{3753, 3773, 3771, 3767, 3761},
				{3739, 3762, 3762, 3753, 3741},
				{3723, 3744, 3745, 3735, 3721},
				{3707, 3718, 3717, 3709, 3696},
				{3690, 3704, 3692, 3683, 3671},
				{3676, 3697, 3688, 3681, 3669},
				{3666, 3695, 3687, 3680, 3668},
				{3656, 3692, 3686, 3679, 3668},
				{3641, 3690, 3685, 3678, 3667},
				{3621, 3688, 3683, 3676, 3664},
				{3594, 3682, 3679, 3672, 3659},
				{3556, 3669, 3665, 3655, 3638},
				{3499, 3635, 3623, 3611, 3593},
				{3407, 3576, 3559, 3548, 3530},
				{3286, 3487, 3472, 3463, 3448},
				{3159, 3346, 3336, 3325, 3313},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data samsung_2000mAH_data = {
	.fcc				= 2000,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 192
};
