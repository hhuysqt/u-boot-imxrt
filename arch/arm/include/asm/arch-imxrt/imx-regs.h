/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright(C) 2019
 * Author(s): Giulio Benetti <giulio.benetti@benettiengineering.com>
 */

#ifndef __ASM_ARCH_IMX_REGS_H__
#define __ASM_ARCH_IMX_REGS_H__

#define ARCH_MXC

#define ANATOP_BASE_ADDR	0x400d8000

#define MXS_LCDIF_BASE		0x402b8000

#if !(defined(__KERNEL_STRICT_NAMES) || defined(__ASSEMBLY__))
#include <asm/mach-imx/regs-lcdif.h>
#endif

#endif /* __ASM_ARCH_IMX_REGS_H__ */
