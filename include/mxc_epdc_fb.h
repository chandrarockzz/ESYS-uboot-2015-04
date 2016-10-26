/*
 * Copyright (C) 2010-2015 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */
#ifndef __EPDC_REGS_INCLUDED__
#define __EPDC_REGS_INCLUDED__

#include <linux/types.h>
#include <linux/list.h>
#include <asm/arch/imx-regs.h>

/*************************************
 * Register addresses
 *************************************/
#define EPDC_BASE			(EPDC_BASE_ADDR)

#define EPDC_CTRL			0x000
#define EPDC_CTRL_SET			0x004
#define EPDC_CTRL_CLR			0x008
#define EPDC_CTRL_TOG		0x00C
#define EPDC_WVADDR			0x020
#define EPDC_WB_ADDR			0x030
#define EPDC_RES			0x040
#define EPDC_FORMAT			0x050
#define EPDC_FORMAT_SET			0x054
#define EPDC_FORMAT_CLR		0x058
#define EPDC_FORMAT_TOG		0x05C
#define EPDC_WB_FIELD0			0x060
#define EPDC_WB_FIELD0_SET		0x064
#define EPDC_WB_FIELD0_CLR		0x068
#define EPDC_WB_FIELD0_TOG		0x06C
#define EPDC_WB_FIELD1			0x070
#define EPDC_WB_FIELD1_SET		0x074
#define EPDC_WB_FIELD1_CLR		0x078
#define EPDC_WB_FIELD1_TOG		0x07C
#define EPDC_WB_FIELD2			0x080
#define EPDC_WB_FIELD2_SET		0x084
#define EPDC_WB_FIELD2_CLR		0x088
#define EPDC_WB_FIELD2_TOG		0x08C
#define EPDC_WB_FIELD3			0x090
#define EPDC_WB_FIELD3_SET		0x094
#define EPDC_WB_FIELD3_CLR		0x098
#define EPDC_WB_FIELD3_TOG		0x09C
#define EPDC_FIFOCTRL			0x0A0
#define EPDC_FIFOCTRL_SET		0x0A4
#define EPDC_FIFOCTRL_CLR		0x0A8
#define EPDC_FIFOCTRL_TOG		0x0AC
#define EPDC_UPD_ADDR			0x100
#define EPDC_UPD_STRIDE			0x110
#define EPDC_UPD_CORD			0x120
#define EPDC_UPD_SIZE			0x140
#define EPDC_UPD_CTRL			0x160
#define EPDC_UPD_FIXED			0x180
#define EPDC_TEMP			0x1A0
#define EPDC_AUTOWV_LUT			0x1C0
#define EPDC_LUT_STANDBY1		0x1E0
#define EPDC_LUT_STANDBY1_SET		0x1E4
#define EPDC_LUT_STANDBY1_CLR		0x1E8
#define EPDC_LUT_STANDBY1_TOG	0x1EC
#define EPDC_LUT_STANDBY2		0x1F0
#define EPDC_LUT_STANDBY2_SET		0x1F4
#define EPDC_LUT_STANDBY2_CLR		0x1F8
#define EPDC_LUT_STANDBY2_TOG	0x1FC
#define EPDC_TCE_CTRL			0x200
#define EPDC_TCE_SDCFG			0x220
#define EPDC_TCE_GDCFG			0x240
#define EPDC_TCE_HSCAN1			0x260
#define EPDC_TCE_HSCAN2			0x280
#define EPDC_TCE_VSCAN			0x2A0
#define EPDC_TCE_OE			0x2C0
#define EPDC_TCE_POLARITY		0x2E0
#define EPDC_TCE_TIMING1		0x300
#define EPDC_TCE_TIMING2		0x310
#define EPDC_TCE_TIMING3		0x320
#define EPDC_PIGEON_CTRL0		0x380
#define EPDC_PIGEON_CTRL1		0x390
#define EPDC_IRQ_MASK1			0x3C0
#define EPDC_IRQ_MASK1_SET		0x3C4
#define EPDC_IRQ_MASK1_CLR		0x3C8
#define EPDC_IRQ_MASK1_TOG		0x3CC
#define EPDC_IRQ_MASK2			0x3D0
#define EPDC_IRQ_MASK2_SET		0x3D4
#define EPDC_IRQ_MASK2_CLR		0x3D8
#define EPDC_IRQ_MASK2_TOG		0x3DC
#define EPDC_IRQ1			0x3E0
#define EPDC_IRQ1_SET			0x3E4
#define EPDC_IRQ1_CLR			0x3E8
#define EPDC_IRQ1_TOG		0x3EC
#define EPDC_IRQ2			0x3F0
#define EPDC_IRQ2_SET			0x3F4
#define EPDC_IRQ2_CLR			0x3F8
#define EPDC_IRQ2_TOG		0x3FC
#define EPDC_IRQ_MASK			0x400
#define EPDC_IRQ_MASK_SET		0x404
#define EPDC_IRQ_MASK_CLR		0x408
#define EPDC_IRQ_MASK_TOG		0x40C
#define EPDC_IRQ			0x420
#define EPDC_IRQ_SET			0x424
#define EPDC_IRQ_CLR			0x428
#define EPDC_IRQ_TOG			0x42C
#define EPDC_STATUS_LUTS		0x440
#define EPDC_STATUS_LUTS_SET		0x444
#define EPDC_STATUS_LUTS_CLR		0x448
#define EPDC_STATUS_LUTS_TOG		0x44C
#define EPDC_STATUS_LUTS2		0x450
#define EPDC_STATUS_LUTS2_SET		0x454
#define EPDC_STATUS_LUTS2_CLR		0x458
#define EPDC_STATUS_LUTS2_TOG	0x45C
#define EPDC_STATUS_NEXTLUT		0x460
#define EPDC_STATUS_COL			0x480
#define EPDC_STATUS_COL2		0x490
#define EPDC_STATUS			0x4A0
#define EPDC_STATUS_SET			0x4A4
#define EPDC_STATUS_CLR		0x4A8
#define EPDC_STATUS_TOG		0x4AC
#define EPDC_UPD_COL_CORD		0x4C0
#define EPDC_UPD_COL_SIZE		0x4E0
#define EPDC_DEBUG			0x500
#define EPDC_DEBUG_LUT			0x530
#define EPDC_HIST1_PARAM		0x600
#define EPDC_HIST2_PARAM		0x610
#define EPDC_HIST4_PARAM		0x620
#define EPDC_HIST8_PARAM0		0x630
#define EPDC_HIST8_PARAM1		0x640
#define EPDC_HIST16_PARAM0		0x650
#define EPDC_HIST16_PARAM1		0x660
#define EPDC_HIST16_PARAM2		0x670
#define EPDC_HIST16_PARAM3		0x680
#define EPDC_GPIO			0x700
#define EPDC_VERSION			0x7F0
#define EPDC_PIGEON_0_0			0x800
#define EPDC_PIGEON_0_1			0x810
#define EPDC_PIGEON_0_2			0x820
#define EPDC_PIGEON_1_0			0x840
#define EPDC_PIGEON_1_1			0x850
#define EPDC_PIGEON_1_2			0x860
#define EPDC_PIGEON_2_0			0x880
#define EPDC_PIGEON_2_1			0x890
#define EPDC_PIGEON_2_2			0x8A0
#define EPDC_PIGEON_3_0			0x8C0
#define EPDC_PIGEON_3_1			0x8D0
#define EPDC_PIGEON_3_2			0x8E0
#define EPDC_PIGEON_4_0			0x900
#define EPDC_PIGEON_4_1			0x910
#define EPDC_PIGEON_4_2			0x920
#define EPDC_PIGEON_5_0			0x940
#define EPDC_PIGEON_5_1			0x950
#define EPDC_PIGEON_5_2			0x960
#define EPDC_PIGEON_6_0			0x980
#define EPDC_PIGEON_6_1			0x990
#define EPDC_PIGEON_6_2			0x9A0
#define EPDC_PIGEON_7_0			0x9C0
#define EPDC_PIGEON_7_1			0x9D0
#define EPDC_PIGEON_7_2			0x9E0
#define EPDC_PIGEON_8_0			0xA00
#define EPDC_PIGEON_8_1			0xA10
#define EPDC_PIGEON_8_2			0xA20
#define EPDC_PIGEON_9_0			0xA40
#define EPDC_PIGEON_9_1			0xA50
#define EPDC_PIGEON_9_2			0xA60
#define EPDC_PIGEON_10_0		0xA80
#define EPDC_PIGEON_10_1		0xA90
#define EPDC_PIGEON_10_2		0xAA0
#define EPDC_PIGEON_11_0		0xAC0
#define EPDC_PIGEON_11_1		0xAD0
#define EPDC_PIGEON_11_2		0xAE0
#define EPDC_PIGEON_12_0		0xB00
#define EPDC_PIGEON_12_1		0xB10
#define EPDC_PIGEON_12_2		0xB20
#define EPDC_PIGEON_13_0		0xB40
#define EPDC_PIGEON_13_1		0xB50
#define EPDC_PIGEON_13_2		0xB60
#define EPDC_PIGEON_14_0		0xB80
#define EPDC_PIGEON_14_1		0xB90
#define EPDC_PIGEON_14_2		0xBA0
#define EPDC_PIGEON_15_0		0xBC0
#define EPDC_PIGEON_15_1		0xBD0
#define EPDC_PIGEON_15_2		0xBE0
#define EPDC_PIGEON_16_0		0xC00
#define EPDC_PIGEON_16_1		0xC10
#define EPDC_PIGEON_16_2		0xC20
#ifdef CONFIG_MX7
#define EPDC_WB_ADDR_TCE		0x010
#else
#define EPDC_WB_ADDR_TCE		0xC10
#endif

#define REG_RD(base, reg) \
	(*(volatile unsigned int *)((base) + (reg)))
#define REG_WR(base, reg, value) \
	((*(volatile unsigned int *)((base) + (reg))) = (value))
#define REG_SET(base, reg, value) \
	((*(volatile unsigned int *)((base) + (reg ## _SET))) = (value))
#define REG_CLR(base, reg, value) \
	((*(volatile unsigned int *)((base) + (reg ## _CLR))) = (value))
#define REG_TOG(base, reg, value) \
	((*(volatile unsigned int *)((base) + (reg ## _TOG))) = (value))
/*
 * Register field definitions
 */

enum {
/* EPDC_CTRL field values */
	EPDC_CTRL_SFTRST = 0x80000000,
	EPDC_CTRL_CLKGATE = 0x40000000,
	EPDC_CTRL_SRAM_POWERDOWN = 0x100,
	EPDC_CTRL_UPD_DATA_SWIZZLE_MASK = 0xC0,
	EPDC_CTRL_UPD_DATA_SWIZZLE_NO_SWAP = 0,
	EPDC_CTRL_UPD_DATA_SWIZZLE_ALL_BYTES_SWAP = 0x40,
	EPDC_CTRL_UPD_DATA_SWIZZLE_HWD_SWAP = 0x80,
	EPDC_CTRL_UPD_DATA_SWIZZLE_HWD_BYTE_SWAP = 0xC0,
	EPDC_CTRL_LUT_DATA_SWIZZLE_MASK = 0x30,
	EPDC_CTRL_LUT_DATA_SWIZZLE_NO_SWAP = 0,
	EPDC_CTRL_LUT_DATA_SWIZZLE_ALL_BYTES_SWAP = 0x10,
	EPDC_CTRL_LUT_DATA_SWIZZLE_HWD_SWAP = 0x20,
	EPDC_CTRL_LUT_DATA_SWIZZLE_HWD_BYTE_SWAP = 0x30,
	EPDC_CTRL_BURST_LEN_8_8 = 0x1,
	EPDC_CTRL_BURST_LEN_8_16 = 0,

/* EPDC_RES field values */
	EPDC_RES_VERTICAL_MASK = 0x1FFF0000,
	EPDC_RES_VERTICAL_OFFSET = 16,
	EPDC_RES_HORIZONTAL_MASK = 0x1FFF,
	EPDC_RES_HORIZONTAL_OFFSET = 0,

/* EPDC_FORMAT field values */
	EPDC_FORMAT_BUF_PIXEL_SCALE_ROUND = 0x1000000,
	EPDC_FORMAT_DEFAULT_TFT_PIXEL_MASK = 0xFF0000,
	EPDC_FORMAT_DEFAULT_TFT_PIXEL_OFFSET = 16,
	EPDC_FORMAT_WB_ADDR_NO_COPY = 0x4000,
	EPDC_FORMAT_WB_TYPE_MASK = 0x3000,
	EPDC_FORMAT_WB_TYPE_OFFSET = 12,
	EPDC_FORMAT_WB_TYPE_WB_INTERNAL = 0x0,
	EPDC_FORMAT_WB_TYPE_WB_WAVEFORM = 0x1000,
	EPDC_FORMAT_WB_TYPE_WB_EXTERNAL16 = 0x2000,
	EPDC_FORMAT_WB_TYPE_WB_EXTERNAL32 = 0x3000,
	EPDC_FORMAT_WB_COMPRESS = 0x800,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_MASK = 0x700,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P2N = 0x200,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P3N = 0x300,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P4N = 0x400,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P5N = 0x500,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_2BIT = 0x0,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_2BIT_VCOM = 0x1,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_4BIT = 0x2,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_4BIT_VCOM = 0x3,

/* EPDC_WB_FIELD field values */
	EPDC_WB_FIELD_FIXED_MASK = 0xFF000000,
	EPDC_WB_FIELD_FIXED_OFFSET = 24,
	EPDC_WB_FIELD_USE_FIXED_MASK = 0x30000,
	EPDC_WB_FIELD_USE_FIXED_OFFSET = 16,
	EPDC_WB_FIELD_USE_FIXED_NO_FIXED = 0x0,
	EPDC_WB_FIELD_USE_FIXED_USE_FIXED = 0x1,
	EPDC_WB_FIELD_USE_FIXED_NE_FIXED = 0x2,
	EPDC_WB_FIELD_USE_FIXED_EQ_FIXED = 0x3,
	EPDC_WB_FIELD_USAGE_MASK = 0xE000,
	EPDC_WB_FIELD_USAGE_OFFSET = 13,
	EPDC_WB_FIELD_USAGE_NOT_USED = 0x0,
	EPDC_WB_FIELD_USAGE_PARTIAL = 0x3,
	EPDC_WB_FIELD_USAGE_LUT = 0x4,
	EPDC_WB_FIELD_USAGE_CP = 0x5,
	EPDC_WB_FIELD_USAGE_NP = 0x6,
	EPDC_WB_FIELD_USAGE_PTS = 0x7,
	EPDC_WB_FIELD_FROM_MASK = 0x1F00,
	EPDC_WB_FIELD_FROM_OFFSET = 8,
	EPDC_WB_FIELD_TO_MASK = 0xF0,
	EPDC_WB_FIELD_TO_OFFSET = 4,
	EPDC_WB_FIELD_LEN_MASK = 0xF,
	EPDC_WB_FIELD_LEN_OFFSET = 0,

/* EPDC_FIFOCTRL field values */
	EPDC_FIFOCTRL_ENABLE_PRIORITY = 0x80000000,
	EPDC_FIFOCTRL_FIFO_INIT_LEVEL_MASK = 0xFF0000,
	EPDC_FIFOCTRL_FIFO_INIT_LEVEL_OFFSET = 16,
	EPDC_FIFOCTRL_FIFO_H_LEVEL_MASK = 0xFF00,
	EPDC_FIFOCTRL_FIFO_H_LEVEL_OFFSET = 8,
	EPDC_FIFOCTRL_FIFO_L_LEVEL_MASK = 0xFF,
	EPDC_FIFOCTRL_FIFO_L_LEVEL_OFFSET = 0,

/* EPDC_UPD_CORD field values */
	EPDC_UPD_CORD_YCORD_MASK = 0x1FFF0000,
	EPDC_UPD_CORD_YCORD_OFFSET = 16,
	EPDC_UPD_CORD_XCORD_MASK = 0x1FFF,
	EPDC_UPD_CORD_XCORD_OFFSET = 0,

/* EPDC_UPD_SIZE field values */
	EPDC_UPD_SIZE_HEIGHT_MASK = 0x1FFF0000,
	EPDC_UPD_SIZE_HEIGHT_OFFSET = 16,
	EPDC_UPD_SIZE_WIDTH_MASK = 0x1FFF,
	EPDC_UPD_SIZE_WIDTH_OFFSET = 0,

/* EPDC_UPD_CTRL field values */
	EPDC_UPD_CTRL_USE_FIXED = 0x80000000,
#ifdef CONFIG_MX7
	EPDC_UPD_CTRL_LUT_SEL_MASK = 0x3F0000,
#else
	EPDC_UPD_CTRL_LUT_SEL_MASK = 0xF0000,
#endif
	EPDC_UPD_CTRL_LUT_SEL_OFFSET = 16,
	EPDC_UPD_CTRL_WAVEFORM_MODE_MASK = 0xFF00,
	EPDC_UPD_CTRL_WAVEFORM_MODE_OFFSET = 8,
	EPDC_UPD_CTRL_NO_LUT_CANCEL = 0x10,
	EPDC_UPD_CTRL_AUTOWV_PAUSE = 0x8,
	EPDC_UPD_CTRL_AUTOWV = 0x4,
	EPDC_UPD_CTRL_DRY_RUN = 0x2,
	EPDC_UPD_CTRL_UPDATE_MODE_FULL = 0x1,

/* EPDC_UPD_FIXED field values */
	EPDC_UPD_FIXED_FIXNP_EN = 0x80000000,
	EPDC_UPD_FIXED_FIXCP_EN = 0x40000000,
	EPDC_UPD_FIXED_FIXNP_MASK = 0xFF00,
	EPDC_UPD_FIXED_FIXNP_OFFSET = 8,
	EPDC_UPD_FIXED_FIXCP_MASK = 0xFF,
	EPDC_UPD_FIXED_FIXCP_OFFSET = 0,

/* EPDC_AUTOWV_LUT field values */
	EPDC_AUTOWV_LUT_DATA_MASK = 0xFF0000,
	EPDC_AUTOWV_LUT_DATA_OFFSET = 16,
#ifdef CONFIG_MX7
	EPDC_AUTOWV_LUT_ADDR_MASK = 0x7,
#else
	EPDC_AUTOWV_LUT_ADDR_MASK = 0xFF,
#endif
	EPDC_AUTOWV_LUT_ADDR_OFFSET = 0,

/* EPDC_TCE_CTRL field values */
	EPDC_TCE_CTRL_VSCAN_HOLDOFF_MASK = 0x1FF0000,
	EPDC_TCE_CTRL_VSCAN_HOLDOFF_OFFSET = 16,
	EPDC_TCE_CTRL_VCOM_VAL_MASK = 0xC00,
	EPDC_TCE_CTRL_VCOM_VAL_OFFSET = 10,
	EPDC_TCE_CTRL_VCOM_MODE_AUTO = 0x200,
	EPDC_TCE_CTRL_VCOM_MODE_MANUAL = 0x000,
	EPDC_TCE_CTRL_DDR_MODE_ENABLE = 0x100,
	EPDC_TCE_CTRL_LVDS_MODE_CE_ENABLE = 0x80,
	EPDC_TCE_CTRL_LVDS_MODE_ENABLE = 0x40,
	EPDC_TCE_CTRL_SCAN_DIR_1_UP = 0x20,
	EPDC_TCE_CTRL_SCAN_DIR_0_UP = 0x10,
	EPDC_TCE_CTRL_DUAL_SCAN_ENABLE = 0x8,
	EPDC_TCE_CTRL_SDDO_WIDTH_16BIT = 0x4,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_2 = 1,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_4 = 2,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_8 = 3,

/* EPDC_TCE_SDCFG field values */
	EPDC_TCE_SDCFG_SDCLK_HOLD = 0x200000,
	EPDC_TCE_SDCFG_SDSHR = 0x100000,
	EPDC_TCE_SDCFG_NUM_CE_MASK = 0xF0000,
	EPDC_TCE_SDCFG_NUM_CE_OFFSET = 16,
	EPDC_TCE_SDCFG_SDDO_REFORMAT_STANDARD = 0,
	EPDC_TCE_SDCFG_SDDO_REFORMAT_FLIP_PIXELS = 0x4000,
	EPDC_TCE_SDCFG_SDDO_INVERT_ENABLE = 0x2000,
	EPDC_TCE_SDCFG_PIXELS_PER_CE_MASK = 0x1FFF,
	EPDC_TCE_SDCFG_PIXELS_PER_CE_OFFSET = 0,

/* EPDC_TCE_GDCFG field values */
	EPDC_TCE_SDCFG_GDRL = 0x10,
	EPDC_TCE_SDCFG_GDOE_MODE_DELAYED_GDCLK = 0x2,
	EPDC_TCE_SDCFG_GDSP_MODE_FRAME_SYNC = 0x1,
	EPDC_TCE_SDCFG_GDSP_MODE_ONE_LINE = 0x0,

/* EPDC_TCE_HSCAN1 field values */
	EPDC_TCE_HSCAN1_LINE_SYNC_WIDTH_MASK = 0xFFF0000,
	EPDC_TCE_HSCAN1_LINE_SYNC_WIDTH_OFFSET = 16,
	EPDC_TCE_HSCAN1_LINE_SYNC_MASK = 0xFFF,
	EPDC_TCE_HSCAN1_LINE_SYNC_OFFSET = 0,

/* EPDC_TCE_HSCAN2 field values */
	EPDC_TCE_HSCAN2_LINE_END_MASK = 0xFFF0000,
	EPDC_TCE_HSCAN2_LINE_END_OFFSET = 16,
	EPDC_TCE_HSCAN2_LINE_BEGIN_MASK = 0xFFF,
	EPDC_TCE_HSCAN2_LINE_BEGIN_OFFSET = 0,

/* EPDC_TCE_VSCAN field values */
	EPDC_TCE_VSCAN_FRAME_END_MASK = 0xFF0000,
	EPDC_TCE_VSCAN_FRAME_END_OFFSET = 16,
	EPDC_TCE_VSCAN_FRAME_BEGIN_MASK = 0xFF00,
	EPDC_TCE_VSCAN_FRAME_BEGIN_OFFSET = 8,
	EPDC_TCE_VSCAN_FRAME_SYNC_MASK = 0xFF,
	EPDC_TCE_VSCAN_FRAME_SYNC_OFFSET = 0,

/* EPDC_TCE_OE field values */
	EPDC_TCE_OE_SDOED_WIDTH_MASK = 0xFF000000,
	EPDC_TCE_OE_SDOED_WIDTH_OFFSET = 24,
	EPDC_TCE_OE_SDOED_DLY_MASK = 0xFF0000,
	EPDC_TCE_OE_SDOED_DLY_OFFSET = 16,
	EPDC_TCE_OE_SDOEZ_WIDTH_MASK = 0xFF00,
	EPDC_TCE_OE_SDOEZ_WIDTH_OFFSET = 8,
	EPDC_TCE_OE_SDOEZ_DLY_MASK = 0xFF,
	EPDC_TCE_OE_SDOEZ_DLY_OFFSET = 0,

/* EPDC_TCE_POLARITY field values */
	EPDC_TCE_POLARITY_GDSP_POL_ACTIVE_HIGH = 0x10,
	EPDC_TCE_POLARITY_GDOE_POL_ACTIVE_HIGH = 0x8,
	EPDC_TCE_POLARITY_SDOE_POL_ACTIVE_HIGH = 0x4,
	EPDC_TCE_POLARITY_SDLE_POL_ACTIVE_HIGH = 0x2,
	EPDC_TCE_POLARITY_SDCE_POL_ACTIVE_HIGH = 0x1,

/* EPDC_TCE_TIMING1 field values */
	EPDC_TCE_TIMING1_SDLE_SHIFT_NONE = 0x00,
	EPDC_TCE_TIMING1_SDLE_SHIFT_1 = 0x10,
	EPDC_TCE_TIMING1_SDLE_SHIFT_2 = 0x20,
	EPDC_TCE_TIMING1_SDLE_SHIFT_3 = 0x30,
	EPDC_TCE_TIMING1_SDCLK_INVERT = 0x8,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_NONE = 0,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_1CYCLE = 1,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_2CYCLES = 2,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_3CYCLES = 3,

/* EPDC_TCE_TIMING2 field values */
	EPDC_TCE_TIMING2_GDCLK_HP_MASK = 0xFFFF0000,
	EPDC_TCE_TIMING2_GDCLK_HP_OFFSET = 16,
	EPDC_TCE_TIMING2_GDSP_OFFSET_MASK = 0xFFFF,
	EPDC_TCE_TIMING2_GDSP_OFFSET_OFFSET = 0,

/* EPDC_TCE_TIMING3 field values */
	EPDC_TCE_TIMING3_GDOE_OFFSET_MASK = 0xFFFF0000,
	EPDC_TCE_TIMING3_GDOE_OFFSET_OFFSET = 16,
	EPDC_TCE_TIMING3_GDCLK_OFFSET_MASK = 0xFFFF,
	EPDC_TCE_TIMING3_GDCLK_OFFSET_OFFSET = 0,

/* EPDC EPDC_PIGEON_CTRL0 field values */
	EPDC_PIGEON_CTRL0_LD_PERIOD_MASK = 0xFFF0000,
	EPDC_PIGEON_CTRL0_LD_PERIOD_OFFSET = 16,
	EPDC_PIGEON_CTRL0_FD_PERIOD_MASK = 0xFFF,
	EPDC_PIGEON_CTRL0_FD_PERIOD_OFFSET = 0,

/* EPDC EPDC_PIGEON_CTRL1 field values */
	EPDC_PIGEON_CTRL1_LD_PERIOD_MASK = 0xFFF0000,
	EPDC_PIGEON_CTRL1_LD_PERIOD_OFFSET = 16,
	EPDC_PIGEON_CTRL1_FD_PERIOD_MASK = 0xFFF,
	EPDC_PIGEON_CTRL1_FD_PERIOD_OFFSET = 0,

/* EPDC_IRQ_MASK/EPDC_IRQ field values */
	EPDC_IRQ_WB_CMPLT_IRQ = 0x10000,
	EPDC_IRQ_LUT_COL_IRQ = 0x20000,
	EPDC_IRQ_TCE_UNDERRUN_IRQ = 0x40000,
	EPDC_IRQ_FRAME_END_IRQ = 0x80000,
	EPDC_IRQ_BUS_ERROR_IRQ = 0x100000,
	EPDC_IRQ_TCE_IDLE_IRQ = 0x200000,
	EPDC_IRQ_UPD_DONE_IRQ = 0x400000,
	EPDC_IRQ_PWR_IRQ = 0x800000,

/* EPDC_STATUS_NEXTLUT field values */
	EPDC_STATUS_NEXTLUT_NEXT_LUT_VALID = 0x100,
	EPDC_STATUS_NEXTLUT_NEXT_LUT_MASK = 0x3F,
	EPDC_STATUS_NEXTLUT_NEXT_LUT_OFFSET = 0,

/* EPDC_STATUS field values */
	EPDC_STATUS_HISTOGRAM_CP_MASK = 0x1F0000,
	EPDC_STATUS_HISTOGRAM_CP_OFFSET = 16,
	EPDC_STATUS_HISTOGRAM_NP_MASK = 0x1F00,
	EPDC_STATUS_HISTOGRAM_NP_OFFSET = 8,
	EPDC_STATUS_UPD_VOID = 0x8,
	EPDC_STATUS_LUTS_UNDERRUN = 0x4,
	EPDC_STATUS_LUTS_BUSY = 0x2,
	EPDC_STATUS_WB_BUSY = 0x1,

/* EPDC_UPD_COL_CORD field values */
	EPDC_UPD_COL_CORD_YCORD_MASK = 0x1FFF0000,
	EPDC_UPD_COL_CORD_YCORD_OFFSET = 16,
	EPDC_UPD_COL_CORD_XCORD_MASK = 0x1FFF,
	EPDC_UPD_COL_CORD_XCORD_OFFSET = 0,

/* EPDC_UPD_COL_SIZE field values */
	EPDC_UPD_COL_SIZE_HEIGHT_MASK = 0x1FFF0000,
	EPDC_UPD_COL_SIZE_HEIGHT_OFFSET = 16,
	EPDC_UPD_COL_SIZE_WIDTH_MASK = 0x1FFF,
	EPDC_UPD_COL_SIZE_WIDTH_OFFSET = 0,

/* EPDC_DEBUG field values */
	EPDC_DEBUG_DEBUG_LUT_SEL_MASK = 0x3F00000,
	EPDC_DEBUG_DEBUG_LUT_SEL_OFFSET = 24,
	EPDC_DEBUG_UBW_BURST_LEN_MASK = 0xF000,
	EPDC_DEBUG_UBW_BURST_LEN_OFFSET = 12,
	EPDC_DEBUG_UBR_BURST_LEN_MASK = 0xF00,
	EPDC_DEBUG_UBR_BURST_LEN = 8,
	EPDC_DEBUG_UPD_BURST_LEN_MASK = 0xF0,
	EPDC_DEBUG_UPD_BURST_LEN_OFFSET = 4,
	EPDC_DEBUG_UPDATE_SAME = 0x4,
	EPDC_DEBUG_UNDERRUN_RECOVER = 0x2,
	EPDC_DEBUG_COLLISION_OFF = 0x1,

/* EPDC_DEBUG_LUT field values */
	EPDC_DEBUG_LUT_LUTADDR_MASK = 0x3FF0000,
	EPDC_DEBUG_LUT_LUTADDR_OFFSET = 16,
	EPDC_DEBUG_LUT_FRAME_MASK = 0x7FE0,
	EPDC_DEBUG_LUT_FRAME_OFFSET = 5,
	EPDC_DEBUG_LUT_STATEMACHINE_MASK = 0x1F,
	EPDC_DEBUG_LUT_STATEMACHINE_OFFSET = 0,

/* EPDC_HISTx_PARAM field values */
	EPDC_HIST_PARAM_VALUE0_MASK = 0x1F,
	EPDC_HIST_PARAM_VALUE0_OFFSET = 0,
	EPDC_HIST_PARAM_VALUE1_MASK = 0x1F00,
	EPDC_HIST_PARAM_VALUE1_OFFSET = 8,
	EPDC_HIST_PARAM_VALUE2_MASK = 0x1F0000,
	EPDC_HIST_PARAM_VALUE2_OFFSET = 16,
	EPDC_HIST_PARAM_VALUE3_MASK = 0x1F000000,
	EPDC_HIST_PARAM_VALUE3_OFFSET = 24,
	EPDC_HIST_PARAM_VALUE4_MASK = 0x1F,
	EPDC_HIST_PARAM_VALUE4_OFFSET = 0,
	EPDC_HIST_PARAM_VALUE5_MASK = 0x1F00,
	EPDC_HIST_PARAM_VALUE5_OFFSET = 8,
	EPDC_HIST_PARAM_VALUE6_MASK = 0x1F0000,
	EPDC_HIST_PARAM_VALUE6_OFFSET = 16,
	EPDC_HIST_PARAM_VALUE7_MASK = 0x1F000000,
	EPDC_HIST_PARAM_VALUE7_OFFSET = 24,
	EPDC_HIST_PARAM_VALUE8_MASK = 0x1F,
	EPDC_HIST_PARAM_VALUE8_OFFSET = 0,
	EPDC_HIST_PARAM_VALUE9_MASK = 0x1F00,
	EPDC_HIST_PARAM_VALUE9_OFFSET = 8,
	EPDC_HIST_PARAM_VALUE10_MASK = 0x1F0000,
	EPDC_HIST_PARAM_VALUE10_OFFSET = 16,
	EPDC_HIST_PARAM_VALUE11_MASK = 0x1F000000,
	EPDC_HIST_PARAM_VALUE11_OFFSET = 24,
	EPDC_HIST_PARAM_VALUE12_MASK = 0x1F,
	EPDC_HIST_PARAM_VALUE12_OFFSET = 0,
	EPDC_HIST_PARAM_VALUE13_MASK = 0x1F00,
	EPDC_HIST_PARAM_VALUE13_OFFSET = 8,
	EPDC_HIST_PARAM_VALUE14_MASK = 0x1F0000,
	EPDC_HIST_PARAM_VALUE14_OFFSET = 16,
	EPDC_HIST_PARAM_VALUE15_MASK = 0x1F000000,
	EPDC_HIST_PARAM_VALUE15_OFFSET = 24,

/* EPDC_GPIO field values */
	EPDC_GPIO_PWRSTAT = 0x100,
	EPDC_GPIO_PWRWAKE = 0x80,
	EPDC_GPIO_PWRCOM = 0x40,
	EPDC_GPIO_PWRCTRL_MASK = 0x3C,
	EPDC_GPIO_PWRCTRL_OFFSET = 2,
	EPDC_GPIO_BDR_MASK = 0x3,
	EPDC_GPIO_BDR_OFFSET = 0,

/* EPDC_VERSION field values */
	EPDC_VERSION_MAJOR_MASK = 0xFF000000,
	EPDC_VERSION_MAJOR_OFFSET = 24,
	EPDC_VERSION_MINOR_MASK = 0xFF0000,
	EPDC_VERSION_MINOR_OFFSET = 16,
	EPDC_VERSION_STEP_MASK = 0xFFFF,
	EPDC_VERSION_STEP_OFFSET = 0,
};

int setup_waveform_file(ulong waveform_buf);
void epdc_power_on(void);
void epdc_power_off(void);

#endif	/* __EPDC_REGS_INCLUDED__ */
