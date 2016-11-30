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
static const char *ng0 = "C:/Users/Sabrina/Documents/CS M152A Final/M152A/PmodKYPD_Demo/DisplayController.v";
static int ng1[] = {0, 0};
static int ng2[] = {3, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {127U, 0U};
static unsigned int ng7[] = {121U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {36U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {48U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {25U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {18U, 0U};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {120U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {16U, 0U};
static unsigned int ng22[] = {63U, 0U};
static unsigned int ng23[] = {64U, 0U};
static int ng24[] = {2, 0};
static unsigned int ng25[] = {47U, 0U};
static unsigned int ng26[] = {112U, 0U};



static void Initial_98_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(99, ng0);

LAB2:    xsi_set_current_line(100, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Always_111_1(char *t0)
{
    char t8[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(119, ng0);

LAB14:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB12:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_lshift(t32, 4, t2, 4, t5, 4);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t7 = (t32 + 4);
    t11 = *((unsigned int *)t32);
    t12 = (~(t11));
    *((unsigned int *)t8) = t12;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 15U);
    t18 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t18 & 15U);
    t9 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 4, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB20;

LAB17:    if (t20 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t8) = 1;

LAB20:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB93;

LAB90:    if (t20 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t8) = 1;

LAB93:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(189, ng0);

LAB123:    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB96:
LAB23:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(115, ng0);

LAB13:    xsi_set_current_line(116, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 4, 0LL);
    goto LAB12;

LAB16:    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t8) = (t13 | t14);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t15 | t16);
    goto LAB15;

LAB19:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(127, ng0);

LAB24:    xsi_set_current_line(129, ng0);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng3)));
    memset(t32, 0, 8);
    t30 = (t23 + 4);
    t31 = (t24 + 4);
    t33 = *((unsigned int *)t23);
    t34 = *((unsigned int *)t24);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t31);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB28;

LAB25:    if (t42 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t32) = 1;

LAB28:    t46 = (t32 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB60;

LAB57:    if (t20 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t8) = 1;

LAB60:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(162, ng0);

LAB89:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB63:
LAB31:    goto LAB23;

LAB27:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(130, ng0);

LAB32:    xsi_set_current_line(131, ng0);
    t52 = (t0 + 1048U);
    t53 = *((char **)t52);

LAB33:    t52 = ((char*)((ng5)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t52, 4);
    if (t54 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng8)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng10)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng12)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng14)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng16)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng19)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng20)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB56:    goto LAB31;

LAB34:    xsi_set_current_line(132, ng0);
    t55 = ((char*)((ng6)));
    t56 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t56, t55, 0, 0, 7, 0LL);
    goto LAB56;

LAB36:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB38:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB40:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB42:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB44:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB46:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB48:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB50:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB52:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB59:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(146, ng0);

LAB64:    xsi_set_current_line(147, ng0);
    t23 = (t0 + 1208U);
    t24 = *((char **)t23);

LAB65:    t23 = ((char*)((ng5)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t23, 4);
    if (t54 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng8)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng10)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng12)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng14)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng16)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng19)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng20)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB84;

LAB85:
LAB87:
LAB86:    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB88:    goto LAB63;

LAB66:    xsi_set_current_line(148, ng0);
    t30 = ((char*)((ng23)));
    t31 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 7, 0LL);
    goto LAB88;

LAB68:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB70:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB72:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB74:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB76:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB78:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB80:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB82:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB84:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB92:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(167, ng0);

LAB97:    xsi_set_current_line(171, ng0);
    t9 = (t0 + 2408);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t30 = ((char*)((ng24)));
    memset(t32, 0, 8);
    t31 = (t23 + 4);
    t45 = (t30 + 4);
    t33 = *((unsigned int *)t23);
    t34 = *((unsigned int *)t30);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t45);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t45);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB101;

LAB98:    if (t42 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t32) = 1;

LAB101:    t52 = (t32 + 4);
    t47 = *((unsigned int *)t52);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB109;

LAB106:    if (t20 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t8) = 1;

LAB109:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB117;

LAB114:    if (t20 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t8) = 1;

LAB117:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(184, ng0);

LAB122:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB120:
LAB112:
LAB104:    goto LAB96;

LAB100:    t46 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(172, ng0);

LAB105:    xsi_set_current_line(173, ng0);
    t55 = ((char*)((ng25)));
    t56 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t56, t55, 0, 0, 7, 0LL);
    goto LAB104;

LAB108:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(176, ng0);

LAB113:    xsi_set_current_line(177, ng0);
    t23 = ((char*)((ng16)));
    t30 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t30, t23, 0, 0, 7, 0LL);
    goto LAB112;

LAB116:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(180, ng0);

LAB121:    xsi_set_current_line(181, ng0);
    t23 = ((char*)((ng26)));
    t30 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t30, t23, 0, 0, 7, 0LL);
    goto LAB120;

}


extern void work_m_00000000003888612607_3845763652_init()
{
	static char *pe[] = {(void *)Initial_98_0,(void *)Always_111_1};
	xsi_register_didat("work_m_00000000003888612607_3845763652", "isim/DisplayController_isim_beh.exe.sim/work/m_00000000003888612607_3845763652.didat");
	xsi_register_executes(pe);
}
