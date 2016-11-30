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
static int ng5[] = {2, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {127U, 0U};
static unsigned int ng8[] = {121U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {36U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {48U, 0U};
static unsigned int ng13[] = {4U, 0U};
static unsigned int ng14[] = {25U, 0U};
static unsigned int ng15[] = {5U, 0U};
static unsigned int ng16[] = {18U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {120U, 0U};
static unsigned int ng20[] = {8U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {16U, 0U};
static unsigned int ng23[] = {63U, 0U};
static unsigned int ng24[] = {64U, 0U};
static unsigned int ng25[] = {47U, 0U};
static unsigned int ng26[] = {112U, 0U};



static void Initial_100_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(101, ng0);

LAB2:    xsi_set_current_line(102, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);

LAB1:    return;
}

static void Always_113_1(char *t0)
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
    char *t57;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 2568);
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

LAB11:    xsi_set_current_line(121, ng0);

LAB14:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 4, t5, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 4, 0LL);

LAB12:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
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
    t9 = (t0 + 2248);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1848U);
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

LAB22:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 1528U);
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
        goto LAB125;

LAB122:    if (t20 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t8) = 1;

LAB125:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(207, ng0);

LAB155:    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB128:
LAB23:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(117, ng0);

LAB13:    xsi_set_current_line(118, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 2568);
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

LAB21:    xsi_set_current_line(129, ng0);

LAB24:    xsi_set_current_line(131, ng0);
    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t24 = ((char*)((ng5)));
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

LAB30:
LAB31:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2568);
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

LAB62:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2568);
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
        goto LAB92;

LAB89:    if (t20 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t8) = 1;

LAB92:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(180, ng0);

LAB121:    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB95:
LAB63:    goto LAB23;

LAB27:    t45 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(132, ng0);

LAB32:    xsi_set_current_line(133, ng0);
    t52 = (t0 + 1048U);
    t53 = *((char **)t52);

LAB33:    t52 = ((char*)((ng6)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t52, 4);
    if (t54 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng9)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng13)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng18)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng20)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng21)));
    t54 = xsi_vlog_unsigned_case_compare(t53, 4, t2, 4);
    if (t54 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB56:    goto LAB31;

LAB34:    xsi_set_current_line(134, ng0);
    t55 = ((char*)((ng7)));
    t56 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t56, t55, 0, 0, 7, 0LL);
    goto LAB56;

LAB36:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB38:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB40:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB42:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB44:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB46:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB48:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB50:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB52:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB56;

LAB59:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(148, ng0);

LAB64:    xsi_set_current_line(149, ng0);
    t23 = (t0 + 1208U);
    t24 = *((char **)t23);

LAB65:    t23 = ((char*)((ng6)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t23, 4);
    if (t54 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng9)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng13)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng18)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng20)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng21)));
    t54 = xsi_vlog_unsigned_case_compare(t24, 4, t2, 4);
    if (t54 == 1)
        goto LAB84;

LAB85:
LAB87:
LAB86:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB88:    goto LAB63;

LAB66:    xsi_set_current_line(150, ng0);
    t30 = ((char*)((ng24)));
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 7, 0LL);
    goto LAB88;

LAB68:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB70:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB72:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB74:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB76:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB78:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB80:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB82:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB84:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB88;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(164, ng0);

LAB96:    xsi_set_current_line(165, ng0);
    t23 = (t0 + 1368U);
    t30 = *((char **)t23);

LAB97:    t23 = ((char*)((ng6)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t23, 4);
    if (t54 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng9)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng11)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng13)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng15)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng17)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng18)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng20)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng21)));
    t54 = xsi_vlog_unsigned_case_compare(t30, 4, t2, 4);
    if (t54 == 1)
        goto LAB116;

LAB117:
LAB119:
LAB118:    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB120:    goto LAB95;

LAB98:    xsi_set_current_line(166, ng0);
    t31 = ((char*)((ng24)));
    t45 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t45, t31, 0, 0, 7, 0LL);
    goto LAB120;

LAB100:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB102:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB104:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB106:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB108:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB110:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB112:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB114:    xsi_set_current_line(174, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB116:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB120;

LAB124:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(185, ng0);

LAB129:    xsi_set_current_line(189, ng0);
    t9 = (t0 + 2568);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);
    t31 = ((char*)((ng5)));
    memset(t32, 0, 8);
    t45 = (t23 + 4);
    t46 = (t31 + 4);
    t33 = *((unsigned int *)t23);
    t34 = *((unsigned int *)t31);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t45);
    t37 = *((unsigned int *)t46);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t45);
    t41 = *((unsigned int *)t46);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB133;

LAB130:    if (t42 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t32) = 1;

LAB133:    t55 = (t32 + 4);
    t47 = *((unsigned int *)t55);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2568);
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
        goto LAB141;

LAB138:    if (t20 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t8) = 1;

LAB141:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2568);
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
        goto LAB149;

LAB146:    if (t20 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t8) = 1;

LAB149:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(202, ng0);

LAB154:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB152:
LAB144:
LAB136:    goto LAB128;

LAB132:    t52 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(190, ng0);

LAB137:    xsi_set_current_line(191, ng0);
    t56 = ((char*)((ng25)));
    t57 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 7, 0LL);
    goto LAB136;

LAB140:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(194, ng0);

LAB145:    xsi_set_current_line(195, ng0);
    t23 = ((char*)((ng17)));
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t23, 0, 0, 7, 0LL);
    goto LAB144;

LAB148:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(198, ng0);

LAB153:    xsi_set_current_line(199, ng0);
    t23 = ((char*)((ng26)));
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t23, 0, 0, 7, 0LL);
    goto LAB152;

}


extern void work_m_00000000001804597773_3845763652_init()
{
	static char *pe[] = {(void *)Initial_100_0,(void *)Always_113_1};
	xsi_register_didat("work_m_00000000001804597773_3845763652", "isim/DispCtrlTB_isim_beh.exe.sim/work/m_00000000001804597773_3845763652.didat");
	xsi_register_executes(pe);
}
