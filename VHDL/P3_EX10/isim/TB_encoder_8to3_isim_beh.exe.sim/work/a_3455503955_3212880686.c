/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Documents/ISE/P3_EX10/encoder_8to3.vhd";



static void work_a_3455503955_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(16, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4312);
    t4 = xsi_mem_cmp(t1, t2, 8U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 4320);
    t7 = xsi_mem_cmp(t5, t2, 8U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 4328);
    t10 = xsi_mem_cmp(t8, t2, 8U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 4336);
    t13 = xsi_mem_cmp(t11, t2, 8U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 4344);
    t16 = xsi_mem_cmp(t14, t2, 8U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 4352);
    t19 = xsi_mem_cmp(t17, t2, 8U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 4360);
    t22 = xsi_mem_cmp(t20, t2, 8U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 4368);
    t25 = xsi_mem_cmp(t23, t2, 8U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 4400);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 2664);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(18, ng0);
    t26 = (t0 + 4376);
    t28 = (t0 + 2744);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 3U);
    xsi_driver_first_trans_fast_port(t28);
    goto LAB2;

LAB4:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 4379);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 4382);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB6:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 4385);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 4388);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 4391);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 4394);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4397);
    t3 = (t0 + 2744);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB20:;
}


extern void work_a_3455503955_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3455503955_3212880686_p_0};
	xsi_register_didat("work_a_3455503955_3212880686", "isim/TB_encoder_8to3_isim_beh.exe.sim/work/a_3455503955_3212880686.didat");
	xsi_register_executes(pe);
}
