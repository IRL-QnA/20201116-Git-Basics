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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/OneDrive/my_xilinx/one_bit_full_adder/one_bit_full_adder_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};



static void Initial_46_0(char *t0)
{
    char t6[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);

LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB5;

LAB7:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t13 = (t0 + 2088);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_signed_divide(t17, 32, t15, 32, t16, 32);
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_divide(t17, 32, t6, 32, t7, 32);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t17, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_mod(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;

LAB1:    return;
LAB10:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    goto LAB1;

}


extern void work_m_00000000004137797129_2537262953_init()
{
	static char *pe[] = {(void *)Initial_46_0};
	xsi_register_didat("work_m_00000000004137797129_2537262953", "isim/one_bit_full_adder_tb_isim_beh.exe.sim/work/m_00000000004137797129_2537262953.didat");
	xsi_register_executes(pe);
}
