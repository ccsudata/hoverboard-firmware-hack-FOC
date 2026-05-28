int32_t sub_9ff0(void** arg1, int32_t arg2, char* arg3 @ r4, int32_t arg4 @ r5, uint32_t arg5 @ r6, void* arg6 @ r7, int32_t arg7 @ r9, char* arg8 @ r12, int32_t arg9 @ pc)
{
    bool c;
    
    if (c)
        arg5 = arg8 ^ RORD(arg5, 0xc);
    
    bool v;
    
    if (!v)
        arg5 = *arg3;
    
    bool z;
    
    if (c)
    {
        int32_t temp0_1 = RORD(arg4, 4);
        arg6 = RORD(arg4, 4) - arg7;
        z = temp0_1 == arg7;
        v = temp0_1 + -(arg7);
    }
    
    if (!v)
        *arg8 = arg5;
    
    if (!v)
        *arg1 = arg6;
    else
        /* unimplemented  {stcvs p15, c6, [r0],  #-0x1bc} */
    
    void arg_0;
    
    if (z)
        arg6 = &arg_0 & RORD(arg9, 0xe);
    
    if (v)
        *(arg6 - 0xf50);
    
    /* undefined */
}

int32_t sub_0(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, int32_t arg5 @ r7, int32_t arg6 @ r9)
{
    int32_t arg_204 = arg5;
    int32_t r7 = *arg5;
    int32_t* r7_1 = *(*(arg2 + r7) + r7);
    *(arg3 + r7_1);
    int32_t* arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    *(arg4 + r7_1);
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    *(r7_1 * 2);
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    arg_324 = r7_1;
    /* jump -> 0x8009781 */
}

void* sub_1e8(char* arg1)
{
    char* r3 = arg1;
    uint32_t i;
    
    do
    {
        i = *r3;
        r3 = &r3[1];
    } while (i);
    return r3 - arg1 - 1;
}

int32_t sub_1f8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_204(arg1, arg2 ^ 0x80000000, arg3, arg4);
}

int32_t sub_200(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_204(arg1, arg2, arg3, arg4 ^ 0x80000000);
}

void sub_204(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r4 = arg2 << 1;
    int32_t r5 = arg4 << 1;
    int32_t temp0 = r4 ^ r5;
    bool cond:1 = !temp0;
    
    if (!temp0)
        cond:1 = arg1 == arg3;
    
    if (cond:1)
        return;
    
    uint32_t r4_1 = r4 >> 0x15;
    uint32_t temp2_1 = r5 >> 0x15;
    uint32_t r5_1 = (r5 >> 0x15) - r4_1;
    
    if (temp2_1 < r4_1)
        r5_1 = 0 - r5_1;
    
    if (temp2_1 > r4_1)
    {
        r4_1 += r5_1;
        int32_t r2 = arg1 ^ arg3;
        int32_t r3 = arg2 ^ arg4;
        arg1 ^= r2;
        arg2 ^= r3;
        arg3 = arg1 ^ r2;
        arg4 = arg2 ^ r3;
    }
    
    if (r5_1 > 0x36)
        return;
    
    int32_t r1_1 = 0x100000 | (arg2 & 0xfffff);
    
    if (arg2 & 0x80000000)
    {
        int32_t temp4_1 = arg1;
        arg1 = 0 - arg1;
        r1_1 = r1_1 - (r1_1 << 1);
    }
    
    int32_t r3_2 = 0x100000 | (arg4 & 0xfffff);
    
    if (arg4 & 0x80000000)
    {
        int32_t temp5_1 = arg3;
        arg3 = 0 - arg3;
        r3_2 = r3_2 - (r3_2 << 1);
    }
    
    if (r4_1 == r5_1)
    {
        r3_2 ^= 0x100000;
        
        if (!r4_1)
        {
            r1_1 ^= 0x100000;
            r4_1 += 1;
        }
        else
            r5_1 -= 1;
    }
    
    uint32_t r0_1;
    uint32_t r1_3;
    int32_t r12_2;
    bool cond:10_1;
    
    if (0x20 < r5_1)
    {
        r12_2 = r3_2 << (0x20 * 2 - r5_1);
        
        if (arg3 >= 1)
            r12_2 |= 2;
        
        int32_t r3_4 = r3_2 >> (r5_1 - 0x20);
        r0_1 = arg1 + r3_4;
        r1_3 = r1_1 + (r3_4 >> 0x1f);
        cond:10_1 = r1_3 >= 0;
    }
    else
    {
        r12_2 = arg3 << (0x20 - r5_1);
        uint32_t r2_1 = arg3 >> r5_1;
        int32_t r0 = arg1 + r2_1;
        int32_t r2_2 = r3_2 << (0x20 - r5_1);
        r0_1 = r0 + r2_2;
        r1_3 = r1_1 + 0 + (r3_2 >> r5_1);
        cond:10_1 = r1_3 >= 0;
    }
    
    int32_t r5_3 = r1_3 & 0x80000000;
    
    if (!cond:10_1)
    {
        int32_t temp13_1 = r12_2;
        r12_2 = 0 - r12_2;
        bool c_6 = 0 >= temp13_1;
        uint32_t temp14_1 = r0_1;
        bool cond:16_1 = ~c_6;
        r0_1 = 0 - temp14_1;
        r1_3 = 0 - r1_3;
    }
    
    if (r1_3 >= 0x100000)
        return;
    
    int32_t temp15_1 = r12_2;
    r12_2 <<= 1;
    bool c_11 = TEST_BIT(temp15_1, 0x1f);
    uint32_t temp16_1 = r0_1;
    uint32_t temp17_1 = r0_1;
    r0_1 = temp16_1 + temp17_1;
    r1_3 = r1_3 + r1_3;
    bool cond:11_1 = r4_1 - 1 >= 1;
    
    if (r4_1 - 1 >= 1)
        cond:11_1 = r1_3 >= 0x100000;
    
    if (cond:11_1)
        return;
    
    bool cond:12 = !r1_3;
    
    if (!r1_3)
    {
        r1_3 = r0_1;
        r0_1 = 0;
    }
    
    int32_t r3_5 = __clz(r1_3);
    
    if (cond:12)
        r3_5 += 0x20;
    
    int32_t r2_4 = r3_5 - 0x2b;
    bool cond:13 = r3_5 - 0xb <= 0x20;
    bool cond:14 = r3_5 - 0xb <= 0x20;
    
    if (r3_5 - 0xb >= 0x20)
        goto label_372;
    
    cond:13 = r2_4 <= 0xfffffff4;
    cond:14 = r2_4 <= 0xfffffff4;
    uint32_t r1_6;
    
    if (r2_4 <= 0xfffffff4)
    {
        r2_4 += 0x20;
    label_372:
        
        if (cond:13)
            r12_2 = 0x20 - r2_4;
        
        r1_6 = r1_3 << r2_4;
        
        if (cond:14)
        {
            r1_6 |= r0_1 >> r12_2;
            r0_1 <<= r2_4;
        }
    }
    else
    {
        int32_t r12_4 = r2_4 + 0x20;
        r2_4 = 0xc * 0 - r2_4;
        r0_1 = r1_3 << r12_4;
        r1_6 = r1_3 >> r2_4;
    }
    
    if (r4_1 - 2 >= r3_5 - 0xb)
        return;
    
    /* tailcall */
    return sub_394(r0_1, r1_6, r4_1 - 2 - (r3_5 - 0xb), r5_3, r2_4, r3_5 - 0xb);
}

uint32_t sub_394(int32_t arg1, int32_t arg2, int32_t arg3 @ r4, int32_t arg4 @ r5, int32_t arg5, int32_t arg6) __pure
{
    int32_t r4_7;
    
    if (~arg3 >= 0x1f)
        return arg2 >> (r4_7 - 0x1f);
    
    if (r4_7 - 0x1f > 0xfffffff4)
        return arg1 >> (0x20 - (0xc * 0 - (r4_7 - 0x1f))) | arg2 << (0xc * 0 - (r4_7 - 0x1f));
    
    return arg1 >> (r4_7 + 1) | arg2 << (0x20 * 0 - (r4_7 - 0x1f));
}

void sub_47c(int32_t arg1)
{
    if (!arg1)
        return;
    
    /* jump -> 0x486 */
}

void sub_49c(int32_t arg1)
{
    if (!arg1)
        return;
    
    /* jump -> 0x4a6 */
}

int32_t sub_4c0(int32_t arg1)
{
    int32_t r2 = arg1 << 1;
    
    if (r2)
        return r2 << 0x1c;
    
    /* jump -> 0x4de */
}

int32_t sub_4e6(int32_t, int32_t arg2, int32_t, int32_t arg4)
{
    if (arg4 == 0xff000000)
        return;
    
    /* jump -> 0x4f2 */
}

void sub_504(int32_t arg1, int32_t arg2)
{
    if (!(arg1 | arg2))
        return;
    
    /* jump -> 0x50c */
}

int32_t sub_510(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r5;
    /* tailcall */
    return sub_52a(arg1 << 0x14, arg2, r5, arg3, arg4);
}

void sub_514(int32_t arg1, int32_t arg2)
{
    if (!(arg1 | arg2))
        return;
    
    /* jump -> 0x51c */
}

int32_t sub_520(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r5;
    /* tailcall */
    return sub_52a(arg1, arg2, r5, arg3, arg4);
}

int32_t sub_52a(int32_t arg1, uint32_t arg2, int32_t arg3 @ r5, int32_t arg4, int32_t arg5)
{
    int32_t r4 = 0x432;
    uint32_t r12 = arg2 >> 0x16;
    
    if (r12)
    {
        int32_t r2_1 = 3;
        uint32_t r12_1 = r12 >> 3;
        
        if (r12_1)
            r2_1 = 6;
        
        uint32_t r12_2 = r12_1 >> 3;
        
        if (r12_2)
            r2_1 += 3;
        
        int32_t r2_2 = r2_1 + (r12_2 >> 3);
        r12 = arg1 << (0x20 - r2_2);
        arg1 = arg1 >> r2_2 | arg2 << (0x20 - r2_2);
        arg2 u>>= r2_2;
        r4 = 0x432 + r2_2;
    }
    
    if (arg2 < 0x100000)
    {
        uint32_t temp0_1 = r12;
        r12 <<= 1;
        bool c_4 = TEST_BIT(temp0_1, 0x1f);
        int32_t temp1_1 = arg1;
        int32_t temp2_1 = arg1;
        arg1 = temp1_1 + temp2_1;
        arg2 = arg2 + arg2;
        bool cond:0_1 = r4 >= 1;
        
        if (r4 >= 1)
            cond:0_1 = arg2 >= 0x100000;
        
        if (!cond:0_1)
        {
            bool cond:1 = !arg2;
            
            if (!arg2)
            {
                arg2 = arg1;
                arg1 = 0;
            }
            
            int32_t r3_2 = __clz(arg2);
            
            if (cond:1)
                r3_2 += 0x20;
            
            int32_t r2_4 = r3_2 - 0x2b;
            bool cond:2 = r3_2 - 0xb <= 0x20;
            bool cond:3 = r3_2 - 0xb <= 0x20;
            
            if (r3_2 - 0xb >= 0x20)
                goto label_372;
            
            cond:2 = r2_4 <= 0xfffffff4;
            cond:3 = r2_4 <= 0xfffffff4;
            uint32_t r1_2;
            
            if (r2_4 <= 0xfffffff4)
            {
                r2_4 += 0x20;
            label_372:
                
                if (cond:2)
                    r12 = 0x20 - r2_4;
                
                r1_2 = arg2 << r2_4;
                
                if (cond:3)
                {
                    r1_2 |= arg1 >> r12;
                    arg1 <<= r2_4;
                }
            }
            else
            {
                int32_t r12_4 = r2_4 + 0x20;
                r2_4 = 0xc * 0 - r2_4;
                arg1 = arg2 << r12_4;
                r1_2 = arg2 >> r2_4;
            }
            
            if (r4 - 1 >= r3_2 - 0xb)
                return arg1;
            
            /* tailcall */
            return sub_394(arg1, r1_2, r4 - 1 - (r3_2 - 0xb), arg3, r2_4, r3_2 - 0xb);
        }
    }
    else if (arg2 >= 0x200000 && (r4 + 1) << 0x15 >= 0xffc00000)
        return 0;
    
    return arg1 + 0;
}

int32_t sub_570(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r5, int32_t arg7 @ r6)
{
    int32_t r12 = 0x7ff;
    int32_t r4 = 0x7ff & arg2 >> 0x14;
    
    if (r4)
        arg6 = 0x7ff & arg4 >> 0x14;
    else
        arg1 = sub_74c(arg1, arg2, arg3, arg4, r4, 0x7ff, arg5, arg6, arg7);
    
    int32_t r4_1 = r4 + arg6;
    int32_t r6 = arg2 ^ arg4;
    int32_t r1 = arg2 & ~(r12 << 0x15);
    int32_t r1_1 = r1 | 0x100000;
    int32_t r3_1 = (arg4 & ~(r12 << 0x15)) | 0x100000;
    int32_t r0_1;
    int32_t r1_3;
    int32_t r4_3;
    int32_t lr_3;
    bool cond:2;
    
    if (!(arg1 | r1 << 0xc))
    {
        r0_1 = arg1 | arg3;
        int32_t r4_4 = r4_1 - (r12 >> 1);
        
        if (r4_1 > r12 >> 1)
            return r0_1;
        
        r1_3 = (((r6 & 0x80000000) | r1_1) ^ r3_1) | 0x100000;
        lr_3 = 0;
        r4_3 = r4_4 - 1;
        cond:2 = r4_4 > 1;
    }
    else
    {
        int32_t r5_5;
        int32_t r6_2;
        r6_2 = HIGHD(r3_1 * r1_1 + r3_1 * arg1 + arg3 * r1_1 + arg1 * arg3);
        r5_5 = LOWD(r3_1 * r1_1 + r3_1 * arg1 + arg3 * r1_1 + arg1 * arg3);
        int32_t r12_1;
        int32_t lr_2;
        
        if (r12_1)
            lr_2 |= 1;
        
        bool c_1 = r6_2 >= 0x200;
        r4_3 = r4_1 - 0xff - 0x300;
        
        if (!c_1)
        {
            int32_t temp3_1 = lr_2;
            lr_2 <<= 1;
            bool c_2 = TEST_BIT(temp3_1, 0x1f);
            int32_t temp4_1 = r5_5;
            int32_t temp5_1 = r5_5;
            r5_5 = temp4_1 + temp5_1;
            r6_2 = r6_2 + r6_2;
        }
        
        r1_3 = (r6 & 0x80000000) | r6_2 << 0xb | r5_5 >> 0x15;
        r0_1 = r5_5 << 0xb | lr_2 >> 0x15;
        lr_3 = lr_2 << 0xb;
        bool cond:1_1 = r4_3 > 0xfd;
        cond:2 = r4_3 > 0xfd;
        
        if (r4_3 > 0xfd)
        {
            cond:1_1 = r4_3 - 0xfd > 0x700;
            cond:2 = r4_3 - 0xfd > 0x700;
        }
        
        if (!cond:1_1)
            return r0_1 + 0;
    }
    
    if (cond:2)
        return 0;
    
    if (r4_3 <= 0xffffffca)
        return 0;
    
    if (0 - r4_3 >= 0x20)
    {
        int32_t r3_5 = r0_1 >> (0 - r4_3 - 0x20) | r1_3 << (0x20 * 2 - (0 - r4_3));
        int32_t r0_12 = (r1_3 >> (0 - r4_3 - 0x20) & ~((r1_3 & 0x80000000) >> (0 - r4_3 - 0x20)))
            + (r3_5 >> 0x1f);
        
        if (!(lr_3 | r0_1 << (0x20 * 2 - (0 - r4_3)) | r3_5 << 1))
            return r0_12 & ~(r3_5 >> 0x1f);
        
        return r0_12;
    }
    
    if (0 - r4_3 - 0x20 > 0xfffffff4)
    {
        int32_t r3_3 = r0_1 << (0xc * 0 - (0 - r4_3 - 0x20));
        int32_t r0_9 = (r0_1 >> (0x20 - (0xc * 0 - (0 - r4_3 - 0x20)))
            | r1_3 << (0xc * 0 - (0 - r4_3 - 0x20))) + (r3_3 >> 0x1f);
        
        if (!(lr_3 | r3_3 << 1))
            return r0_9 & ~(r3_3 >> 0x1f);
        
        return r0_9;
    }
    
    int32_t r3_2 = r0_1 << (0x20 * 0 - (0 - r4_3 - 0x20));
    int32_t r0_6 = (r0_1 >> (0 - r4_3) | r1_3 << (0x20 * 0 - (0 - r4_3 - 0x20))) + (r3_2 >> 0x1f);
    
    if (!(lr_3 | r3_2 << 1))
        return r0_6 & ~(r3_2 >> 0x1f);
    
    return r0_6;
}

void sub_74c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r12, int32_t arg7, int32_t arg8, int32_t arg9) __pure
{
    int32_t temp0 = arg5 ^ arg6;
    bool cond:1 = !temp0;
    int32_t r5 = arg6 & arg4 >> 0x14;
    
    if (temp0)
        cond:1 = r5 == arg6;
    
    if (cond:1)
    {
        if (!(arg1 | arg2 << 1))
            arg2 = arg4;
        
        return;
    }
    
    if (!(arg1 | arg2 << 1))
        return;
    
    if (!arg5)
    {
        int32_t i;
        
        do
        {
            int32_t temp3_1 = arg1;
            arg1 <<= 1;
            arg2 = arg2 + arg2;
            i = arg2 & 0x100000;
            
            if (!i)
                arg5 -= 1;
        } while (!i);
        
        if (r5)
            return;
    }
    
    int32_t i_1;
    
    do
    {
        int32_t temp1_1 = arg3;
        arg3 <<= 1;
        arg4 = arg4 + arg4;
        i_1 = arg4 & 0x100000;
        
        if (!i_1)
            r5 -= 1;
    } while (!i_1);
}

void sub_7c4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r5, int32_t arg7 @ r6)
{
    int32_t r4 = 0x7ff & arg2 >> 0x14;
    int32_t r12;
    
    if (!r4)
        arg1 = sub_932(arg1, arg2, arg3, arg4, r4, 0x7ff, arg5, arg6, arg7);
    
    if (!(arg3 | arg4 << 0xc))
        return;
    
    uint32_t r3_2 = 0x10000000 | arg4 << 0xc >> 4 | arg3 >> 0x18;
    int32_t r2 = arg3 << 8;
    int32_t r5_2 = 0x10000000 | arg2 << 0xc >> 4 | arg1 >> 0x18;
    int32_t r6 = arg1 << 8;
    int32_t r1_1 = (arg2 ^ arg4) & 0x80000000;
    bool c_1 = r5_2 >= r3_2;
    
    if (r5_2 == r3_2)
        c_1 = r6 >= r2;
    
    if (!c_1)
        r3_2 u>>= 1;
    
    int32_t r6_1 = r6 - r2;
    int32_t r5_3 = r5_2 - r3_2;
    uint32_t r3_3 = r3_2 >> 1;
    int32_t r2_1 = r2;
    arg1 = 0x100000;
    uint32_t r12_1 = 0x80000;
    
    while (true)
    {
        bool c_3 = r6_1 >= r2_1;
        bool cond:3_1 = ~c_3;
        
        if (r5_3 - r3_3 < r5_3 || (r5_3 - r3_3 == r5_3 && c_3))
        {
            r6_1 -= r2_1;
            r5_3 = r5_3 - r3_3;
            arg1 |= r12_1;
        }
        
        uint32_t r3_4 = r3_3 >> 1;
        bool c_5 = r6_1 >= r2_1;
        bool cond:4_1 = ~c_5;
        
        if (r5_3 - r3_4 < r5_3 || (r5_3 - r3_4 == r5_3 && c_5))
        {
            r6_1 -= r2_1;
            r5_3 = r5_3 - r3_4;
            arg1 |= r12_1 >> 1;
        }
        
        uint32_t r3_5 = r3_4 >> 1;
        bool c_7 = r6_1 >= r2_1;
        bool cond:5_1 = ~c_7;
        
        if (r5_3 - r3_5 < r5_3 || (r5_3 - r3_5 == r5_3 && c_7))
        {
            r6_1 -= r2_1;
            r5_3 = r5_3 - r3_5;
            arg1 |= r12_1 >> 2;
        }
        
        r3_3 = r3_5 >> 1;
        bool c_9 = r6_1 >= r2_1;
        bool cond:6_1 = ~c_9;
        
        if (r5_3 - r3_3 < r5_3 || (r5_3 - r3_3 == r5_3 && c_9))
        {
            r6_1 -= r2_1;
            r5_3 = r5_3 - r3_3;
            arg1 |= r12_1 >> 3;
        }
        
        if (!(r5_3 | r6_1))
            break;
        
        r5_3 = r5_3 << 4 | r6_1 >> 0x1c;
        r6_1 <<= 4;
        r3_3 = r3_3 << 3 | r2_1 >> 0x1d;
        r2_1 <<= 3;
        r12_1 u>>= 4;
        
        if (!r12_1)
        {
            if (r1_1 & 0x100000)
                break;
            
            r1_1 |= arg1;
            arg1 = 0;
            r12_1 = 0x80000000;
        }
    }
}

void sub_932(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r12, int32_t arg7, int32_t arg8, int32_t arg9) __pure
{
    int32_t r5_2 = arg6 & arg4 >> 0x14;
    int32_t temp0 = arg5 ^ arg6;
    bool cond:0 = !temp0;
    
    if (!temp0)
        cond:0 = r5_2 == arg6;
    
    if (cond:0 || arg5 == arg6 || r5_2 == arg6 || !(arg1 | arg2 << 1))
        return;
    
    if (!arg5)
    {
        int32_t i;
        
        do
        {
            int32_t temp3_1 = arg1;
            arg1 <<= 1;
            arg2 = arg2 + arg2;
            i = arg2 & 0x100000;
            
            if (!i)
                arg5 -= 1;
        } while (!i);
        
        if (r5_2)
            return;
    }
    
    int32_t i_1;
    
    do
    {
        int32_t temp1_1 = arg3;
        arg3 <<= 1;
        arg4 = arg4 + arg4;
        i_1 = arg4 & 0x100000;
        
        if (!i_1)
            r5_2 -= 1;
    } while (!i_1);
}

int32_t sub_9a4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if (!~(arg2 << 1 >> 0x15))
    {
        if (!~(arg2 << 1 >> 0x15) && arg1 | arg2 << 0xc)
            return 1;
        
        if (!~(arg4 << 1 >> 0x15) && arg3 | arg4 << 0xc)
            return 1;
    }
    
    int32_t r12_4 = arg1 | arg2 << 1;
    bool cond:2 = !r12_4;
    
    if (r12_4)
        cond:2 = arg2 == arg4;
    
    if (cond:2)
        return 0;
    
    /* jump -> 0x9da */
}

int32_t sub_9f6() __pure
{
    return;
}

int32_t sub_a20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_a30(arg3, arg4, arg1, arg2);
}

int32_t sub_a30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t lr;
    sub_9a4(arg1, arg2, arg3, arg4, arg1, lr);
    return arg1;
}

int32_t sub_a40(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_a30(arg1, arg2, arg3, arg4);
    bool z;
    
    if (z)
        return 1;
    
    return 0;
}

int32_t sub_a54(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_a30(arg1, arg2, arg3, arg4);
    bool c;
    
    if (!c)
        return 1;
    
    return 0;
}

int32_t sub_a68(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_a30(arg1, arg2, arg3, arg4);
    bool z;
    bool c;
    
    if (z || !c)
        return 1;
    
    return 0;
}

int32_t sub_a7c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_a20(arg1, arg2, arg3, arg4);
    bool z;
    bool c;
    
    if (z || !c)
        return 1;
    
    return 0;
}

int32_t sub_a90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_a20(arg1, arg2, arg3, arg4);
    bool c;
    
    if (!c)
        return 1;
    
    return 0;
}

int32_t sub_aa4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    if ((~(arg2 << 1 >> 0x15) || !(arg1 | arg2 << 0xc))
            && (~(arg4 << 1 >> 0x15) || !(arg3 | arg4 << 0xc)))
        return 0;
    
    return 1;
}

uint32_t sub_ad0(int32_t arg1, int32_t arg2) __pure
{
    int32_t r2_2 = arg2 << 1;
    
    if (r2_2 < 0xffe00000)
    {
        if (r2_2 + 0x200000 >= 0)
            return 0;
        
        if (0xfffffc1f > (r2_2 + 0x200000) >> 0x15)
        {
            uint32_t r0 = (arg2 << 0xb | 0x80000000 | arg1 >> 0x15)
                >> (0xfffffc1f - ((r2_2 + 0x200000) >> 0x15));
            
            if (arg2 & 0x80000000)
                return 0 - r0;
            
            return r0;
        }
    }
    else if (arg1 | arg2 << 0xc)
        return 0;
    
    int32_t r0_3 = arg2 & 0x80000000;
    
    if (!r0_3)
        return 0x7fffffff;
    
    return r0_3;
}

int32_t sub_b20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_b2c(arg1 ^ 0x80000000, arg2, arg3, arg4);
}

int32_t sub_b28(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_b2c(arg1, arg2 ^ 0x80000000, arg3, arg4);
}

void sub_b2c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r2_4 = arg1 << 1;
    bool cond:0 = !r2_4;
    
    if (r2_4)
    {
        arg4 = arg2 << 1;
        cond:0 = r2_4 == arg4;
    }
    
    if (!cond:0)
    {
        uint32_t r2 = r2_4 >> 0x18;
        uint32_t r3 = (arg4 >> 0x18) - r2;
        
        if (arg4 >> 0x18 < r2)
            r3 = 0 - r3;
        
        if (r3 > 0x19)
            return;
        
        /* jump -> 0xb5e */
    }
    
    if (!~(r2_4 >> 0x18))
        return;
    
    if (r2_4 != arg2 << 1)
        return;
    
    if (arg1 != arg2)
        return;
    
    /* jump -> 0xc42 */
}

uint32_t sub_b66(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r0 = arg1 & 0xffffff;
    bool z;
    
    if (!z)
        r0 = 0 - r0;
    
    int32_t r1_1 = (arg2 | 0x800000) & 0xffffff;
    
    if (arg2 & 0x80000000)
        r1_1 = 0 - r1_1;
    
    if (arg3 == arg4)
    {
        r1_1 ^= 0x800000;
        
        if (!arg3)
        {
            r0 ^= 0x800000;
            arg3 += 1;
        }
        else
            arg4 -= 1;
    }
    
    int32_t r2 = arg3 - 1;
    int32_t r12 = r1_1 >> arg4;
    uint32_t r0_1 = r0 + r12;
    int32_t r1_2 = r1_1 << (0x20 - arg4);
    int32_t r3_1 = r0_1 & 0x80000000;
    
    if (r0 + r12 < 0)
    {
        int32_t temp1_1 = r1_2;
        r1_2 = 0 - r1_2;
        r0_1 = r0_1 - (r0_1 << 1);
    }
    
    if (r0_1 < 0x800000)
    {
        int32_t temp2_1 = r1_2;
        r1_2 <<= 1;
        r0_1 = r0_1 + r0_1;
        int32_t temp3_1 = r2;
        r2 -= 1;
        bool cond:3_1 = temp3_1 >= 1;
        
        if (temp3_1 >= 1)
            cond:3_1 = r0_1 >= 0x800000;
        
        if (!cond:3_1)
        {
            int32_t r12_2 = __clz(r0_1) - 8;
            int32_t r2_1 = r2 - r12_2;
            uint32_t result = r0_1 << r12_2;
            
            if (r2 >= r12_2)
                result = (result + (r2_1 << 0x17)) | r3_1;
            else
                r2_1 = 0 - r2_1;
            
            if (r2 < r12_2)
                return result >> r2_1 | r3_1;
            
            return result;
        }
    }
    else if (r0_1 >= 0x1000000)
    {
        r0_1 u>>= 1;
        r2 += 1;
        
        if (r2 >= 0xfe)
            return r3_1 | 0x7f000000 | 0x800000;
    }
    
    int32_t r0_2 = r0_1 + (r2 << 0x17);
    
    if (r1_2 == 0x80000000)
        r0_2 &= 0xfffffffe;
    
    return r0_2 | r3_1;
}

int32_t sub_c4e(int32_t arg1) __pure
{
    return arg1;
}

int32_t sub_c52(int32_t arg1, int32_t, int32_t arg3)
{
    if (arg3 < 0xfe000000)
        return arg1 + 0x800000;
    
    /* jump -> 0xc5e */
}

void sub_c94(int32_t arg1)
{
    if ((arg1 & 0x80000000) < 0)
        arg1 = 0 - arg1;
    
    if (!arg1)
        return;
    
    /* jump -> 0xca4 */
}

int32_t sub_cae(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r12)
{
    int32_t r2 = __clz(arg5);
    int32_t r3_1 = arg4 - 0x800000 - ((r2 - 8) << 0x17);
    
    if (r2 >= 8)
    {
        int32_t r12_1 = arg1 << (r2 - 8);
        int32_t r0 = r3_1 + (arg2 << (r2 - 8)) + (arg1 >> (0x20 - (r2 - 8)));
        
        if (r12_1 == 0x80000000)
            return r0 & 0xfffffffe;
        
        return r0;
    }
    
    int32_t r12_2 = arg2 << (r2 + 0x18);
    bool c_1 = /* bool c_1 = unimplemented  {orrs r0, r0, r12, lsl #1} */;
    int32_t r0_1 = r3_1 + (arg2 >> (0x20 * 0 - (r2 - 8)));
    
    if (!(arg1 | r12_2 << 1))
        return r0_1 & ~(r12_2 >> 0x1f);
    
    return r0_1;
}

void sub_cb0(int32_t arg1, int32_t arg2)
{
    if (!(arg1 | arg2))
        return;
    
    /* jump -> 0xcb8 */
}

int32_t sub_d3c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r2 = 0xff & arg1 >> 0x17;
    bool cond:0 = !r2;
    
    if (r2)
    {
        arg4 = 0xff & arg2 >> 0x17;
        cond:0 = arg4 == 0xff;
    }
    
    int32_t r0_3;
    
    if (cond:0)
    {
        arg4 = 0xff & arg2 >> 0x17;
        int32_t temp0_1 = r2 ^ 0xff;
        bool cond:1_1 = !temp0_1;
        
        if (temp0_1)
            cond:1_1 = arg4 == 0xff;
        
        if (!cond:1_1)
        {
            if (!(arg1 & 0x7fffffff))
                return (arg1 ^ arg2) & 0x80000000;
            
            bool cond:7_1 = !r2;
            bool cond:8_1 = !r2;
            int32_t r12_3 = arg1 & 0x80000000;
            
            do
            {
                if (cond:7_1)
                {
                    arg1 <<= 1;
                    int32_t temp4_1 = arg1 & 0x800000;
                    cond:7_1 = !temp4_1;
                    cond:8_1 = !temp4_1;
                    r2 -= 1;
                }
            } while (cond:8_1);
            
            arg1 |= r12_3;
            bool cond:10_1 = !arg4;
            bool cond:11_1 = !arg4;
            int32_t r12_4 = arg2 & 0x80000000;
            
            do
            {
                if (cond:10_1)
                {
                    arg2 <<= 1;
                    int32_t temp6_1 = arg2 & 0x800000;
                    cond:10_1 = !temp6_1;
                    cond:11_1 = !temp6_1;
                    arg4 -= 1;
                }
            } while (cond:11_1);
            
            arg2 |= r12_4;
            goto label_d54;
        }
        
        bool cond:3_1 = !arg1;
        
        if (arg1)
            cond:3_1 = arg2 == 0x80000000;
        else
            arg1 = arg2;
        
        if (cond:3_1 || (r2 == 0xff && arg1 << 9))
            return arg1 | 0x7f000000 | 0xc00000;
        
        if (arg4 == 0xff)
        {
            int32_t r3_2 = arg2 << 9;
            
            if (r3_2)
                arg1 = arg2;
            
            if (r3_2)
                return arg1 | 0x7f000000 | 0xc00000;
        }
        
        r0_3 = arg1 ^ arg2;
    }
    else
    {
    label_d54:
        int32_t r2_1 = r2 + arg4;
        int32_t r12_1 = arg1 ^ arg2;
        int32_t r0 = arg1 << 9;
        
        if (r0)
            arg2 <<= 9;
        
        if (!r0)
        {
            if (!r0)
                arg2 <<= 9;
            
            if (r2_1 > 0x7f)
                return (r12_1 & 0x80000000) | r0 >> 9 | arg2 >> 9 | (r2_1 - 0x7f) << 0x17;
            
            /* jump -> 0xdc4 */
        }
        
        int32_t r1_1;
        int32_t r3;
        r1_1 = HIGHD((0x8000000 | r0 >> 5) * (0x8000000 | arg2 >> 5));
        r3 = LOWD((0x8000000 | r0 >> 5) * (0x8000000 | arg2 >> 5));
        bool c_1 = r1_1 >= 0x800000;
        
        if (!c_1)
        {
            r1_1 = r1_1 << 1 | r3 >> 0x1f;
            r3 <<= 1;
        }
        
        r0_3 = (r12_1 & 0x80000000) | r1_1;
        int32_t r2_2 = r2_1 - 0x7f;
        
        if (r2_2 <= 0xfd)
        {
            int32_t result = r0_3 + (r2_2 << 0x17);
            
            if (r3 == 0x80000000)
                return result & 0xfffffffe;
            
            return result;
        }
        
        if (r2_2 <= 0xfd)
        {
            if (r2_2 <= 0xffffffe7)
                return r0_3 & 0x80000000;
            
            /* jump -> sub_ea4-0xc8 */
        }
    }
    
    return (r0_3 & 0x80000000) | 0x7f000000 | 0x800000;
}

int32_t sub_de8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4) __pure
{
    int32_t r12 = arg5 << 8 << arg3;
    int32_t result = arg2 + 0;
    
    if (!(arg4 | r12 << 1))
        return result & ~(r12 >> 0x1f);
    
    return result;
}

int32_t sub_ea4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r2 = 0xff & arg1 >> 0x17;
    bool cond:0 = !r2;
    
    if (r2)
    {
        arg4 = 0xff & arg2 >> 0x17;
        cond:0 = arg4 == 0xff;
    }
    
    int32_t r0_1;
    
    if (cond:0)
    {
        arg4 = 0xff & arg2 >> 0x17;
        
        if (r2 != 0xff)
        {
            if (arg4 == 0xff)
            {
                if (!(arg2 << 9))
                    return (arg1 ^ arg2) & 0x80000000;
                
                return arg2 | 0x7f000000 | 0xc00000;
            }
            
            if (arg1 & 0x7fffffff)
            {
                bool cond:5_1 = !r2;
                bool cond:6_1 = !r2;
                int32_t r12_4 = arg1 & 0x80000000;
                
                do
                {
                    if (cond:5_1)
                    {
                        arg1 <<= 1;
                        int32_t temp2_1 = arg1 & 0x800000;
                        cond:5_1 = !temp2_1;
                        cond:6_1 = !temp2_1;
                        r2 -= 1;
                    }
                } while (cond:6_1);
                
                arg1 |= r12_4;
                bool cond:7_1 = !arg4;
                bool cond:8_1 = !arg4;
                int32_t r12_5 = arg2 & 0x80000000;
                
                do
                {
                    if (cond:7_1)
                    {
                        arg2 <<= 1;
                        int32_t temp4_1 = arg2 & 0x800000;
                        cond:7_1 = !temp4_1;
                        cond:8_1 = !temp4_1;
                        arg4 -= 1;
                    }
                } while (cond:8_1);
                
                arg2 |= r12_5;
                goto label_ebc;
            }
            
            if (!(arg1 & 0x7fffffff))
            {
                if (arg2 & 0x7fffffff)
                    return (arg1 ^ arg2) & 0x80000000;
                
                return arg1 | 0x7f000000 | 0xc00000;
            }
            
            r0_1 = arg1 ^ arg2;
        }
        else
        {
            if (arg1 << 9)
                return arg1 | 0x7f000000 | 0xc00000;
            
            if (arg4 == 0xff)
                return arg2 | 0x7f000000 | 0xc00000;
            
            r0_1 = arg1 ^ arg2;
        }
    }
    else
    {
    label_ebc:
        int32_t r2_1 = r2 - arg4;
        int32_t r12_1 = arg1 ^ arg2;
        int32_t r1 = arg2 << 9;
        int32_t r0 = arg1 << 9;
        
        if (!r1)
        {
            if (r2_1 > 0xffffff81)
                return (r12_1 & 0x80000000) | r0 >> 9 | (r2_1 + 0x7f) << 0x17;
            
            /* jump -> 0xf52 */
        }
        
        int32_t r1_1 = 0x10000000 | r1 >> 4;
        int32_t i = 0x10000000 | r0 >> 4;
        r0_1 = r12_1 & 0x80000000;
        bool c_1 = i >= r1_1;
        
        if (!c_1)
            i <<= 1;
        
        int32_t r2_2 = r2_1 + 0x7d;
        uint32_t r12_2 = 0x800000;
        
        do
        {
            if (i >= r1_1)
            {
                i -= r1_1;
                r0_1 |= r12_2;
            }
            
            if (i >= r1_1 >> 1)
            {
                i -= r1_1 >> 1;
                r0_1 |= r12_2 >> 1;
            }
            
            if (i >= r1_1 >> 2)
            {
                i -= r1_1 >> 2;
                r0_1 |= r12_2 >> 2;
            }
            
            if (i >= r1_1 >> 3)
            {
                i -= r1_1 >> 3;
                r0_1 |= r12_2 >> 3;
            }
            
            i <<= 4;
            
            if (i)
                r12_2 u>>= 4;
        } while (i);
        
        if (r2_2 <= 0xfd)
        {
            int32_t result = r0_1 + (r2_2 << 0x17);
            
            if (i == r1_1)
                return result & 0xfffffffe;
            
            return result;
        }
        
        if (r2_2 <= 0xfd)
        {
            if (r2_2 <= 0xffffffe7)
                return r0_1 & 0x80000000;
            
            /* jump -> 0xddc */
        }
    }
    
    return (r0_1 & 0x80000000) | 0x7f000000 | 0x800000;
}

void sub_fec(int32_t arg1, int32_t arg2) __pure
{
    int32_t r2 = arg1 << 1;
    int32_t r3 = arg2 << 1;
    
    if (!~(r2 >> 0x18))
    {
        if (!~(r2 >> 0x18) && arg1 << 9)
            return;
        
        if (!~(r3 >> 0x18) && arg2 << 9)
            return;
    }
    
    if (r2 | r3 >> 1)
        int32_t temp0_1 = arg1 ^ arg2;
}

int32_t sub_104c(int32_t arg1, int32_t arg2)
{
    /* tailcall */
    return sub_1054(arg2, arg1);
}

int32_t sub_1054(int32_t arg1, int32_t arg2)
{
    int32_t var_10 = arg2;
    sub_fec(arg1, arg2);
    return arg1;
}

int32_t sub_1064(int32_t arg1, int32_t arg2)
{
    sub_1054(arg1, arg2);
    bool z;
    
    if (z)
        return 1;
    
    return 0;
}

int32_t sub_1078(int32_t arg1, int32_t arg2)
{
    sub_1054(arg1, arg2);
    bool c;
    
    if (!c)
        return 1;
    
    return 0;
}

int32_t sub_108c(int32_t arg1, int32_t arg2)
{
    sub_1054(arg1, arg2);
    bool z;
    bool c;
    
    if (z || !c)
        return 1;
    
    return 0;
}

int32_t sub_10a0(int32_t arg1, int32_t arg2)
{
    sub_104c(arg1, arg2);
    bool z;
    bool c;
    
    if (z || !c)
        return 1;
    
    return 0;
}

int32_t sub_10b4(int32_t arg1, int32_t arg2)
{
    sub_104c(arg1, arg2);
    bool c;
    
    if (!c)
        return 1;
    
    return 0;
}

uint32_t sub_10c8(int32_t arg1) __pure
{
    int32_t r2_2 = arg1 << 1;
    
    if (r2_2 < 0x7f000000)
        return 0;
    
    if (0x9e > r2_2 >> 0x18)
    {
        uint32_t r0 = (arg1 << 8 | 0x80000000) >> (0x9e - (r2_2 >> 0x18));
        
        if (arg1 & 0x80000000)
            return 0 - r0;
        
        return r0;
    }
    
    if (0x9e - (r2_2 >> 0x18) == 0xffffff9f && arg1 << 9)
        return 0;
    
    int32_t r0_2 = arg1 & 0x80000000;
    
    if (!r0_2)
        return 0x7fffffff;
    
    return r0_2;
}

void sub_1114()
{
    if (!*0x20000338)
        *0x20000338 = 1;
}

void sub_1138() __pure
{
    return;
}

int32_t sub_1154() __pure
{
    return;
}

int32_t sub_1158(int32_t arg1)
{
    int32_t result = sub_1690(*0x2000011c / (0x3e8 / *0x20000000));
    
    if (result || arg1 > 0xf)
        return 1;
    
    sub_1610(0xffffffff, arg1, result);
    *0x20000004 = arg1;
    return result;
}

int32_t sub_11a0()
{
    *0x40022000 |= 0x10;
    sub_15ec(3);
    sub_1158(0xf);
    return 0;
}

int32_t sub_11c4()
{
    *0x2000040c += *0x20000000;
}

int32_t sub_11dc()
{
    return *0x2000040c;
}

int32_t sub_11e8(int32_t arg1)
{
    int32_t i = arg1;
    int32_t r0 = sub_11dc();
    
    if (i != 0xffffffff)
        i += *0x20000000;
    
    int32_t result;
    
    do
        result = sub_11dc();
     while (result - r0 < i);
    
    return result;
}

int32_t sub_120c() __pure
{
    return;
}

int32_t sub_1210(int32_t* arg1, int32_t* arg2)
{
    int32_t* var_14 = arg2;
    int32_t* var_18 = arg1;
    int32_t var_14_1 = 0;
    
    if (arg1[9] == 1)
        return 2;
    
    arg1[9] = 1;
    int32_t r5_1 = arg2[1];
    void* r2_1 = *arg1;
    int32_t r0 = *arg2;
    int32_t r3_1 = r5_1 * 5;
    
    if (r5_1 <= 6)
        *(r2_1 + 0x34) = r0 << (r3_1 - 5) | (*(r2_1 + 0x34) & ~(0x1f << (r3_1 - 5)));
    else if (r5_1 > 0xc)
        *(r2_1 + 0x2c) = r0 << (r3_1 - 0x41) | (*(r2_1 + 0x2c) & ~(0x1f << (r3_1 - 0x41)));
    else
        *(r2_1 + 0x30) = r0 << (r3_1 - 0x23) | (*(r2_1 + 0x30) & ~(0x1f << (r3_1 - 0x23)));
    
    int32_t r3_5 = arg2[2];
    int32_t r5_4 = r0 * 3;
    int32_t result;
    
    if (r0 <= 9)
    {
        *(r2_1 + 0x10) = r3_5 << r5_4 | (*(r2_1 + 0x10) & ~(7 << r5_4));
        result = 0;
    }
    else
    {
        *(r2_1 + 0xc) = r3_5 << (r5_4 - 0x1e) | (*(r2_1 + 0xc) & ~(7 << (r5_4 - 0x1e)));
        
        if (r0 - 0x10 > 1)
            result = 0;
        else if (r2_1 != 0x40012400)
        {
            result = 1;
            arg1[0xa] |= 0x20;
        }
        else
        {
            if (*(r2_1 + 8) << 8 >= 0)
            {
                *(r2_1 + 8) |= 0x800000;
                
                if (r0 == 0x10)
                {
                    for (int32_t i = *0x2000011c / 0xf4240 * 0xa; i; i -= 1)
                    {
                    }
                }
            }
            
            result = 0;
        }
    }
    
    arg1[9] = 0;
    return result;
}

int32_t sub_130c(int32_t* arg1)
{
    int32_t r1;
    int32_t var_14 = r1;
    int32_t* var_18 = arg1;
    int32_t var_14_1 = 0;
    void* r3 = *arg1;
    
    if (*(r3 + 8) << 0x1f >= 0)
    {
        *(r3 + 8) |= 1;
        
        for (uint32_t i = *0x2000011c / 0xf4240; i; i -= 1)
        {
        }
        
        int32_t r0_1 = sub_11dc();
        
        while (true)
        {
            int32_t r5_2 = *(*arg1 + 8) & 1;
            
            if (r5_2)
                break;
            
            if (sub_11dc() - r0_1 > 2)
            {
                arg1[0xa] |= 0x10;
                arg1[9] = r5_2;
                arg1[0xb] |= 1;
                return 1;
            }
        }
    }
    
    return 0;
}

int32_t sub_137c(int32_t* arg1)
{
    if (arg1[9] == 1)
        return 2;
    
    arg1[9] = 1;
    int32_t result = sub_130c(arg1);
    
    if (result)
        arg1[9] = 0;
    else
    {
        arg1[0xa] = (arg1[0xa] & 0xfffffcfe) | 0x100;
        int32_t* r3_5 = *arg1;
        int32_t r2_4;
        
        if (r3_5 != 0x40012800 || !(*0x40012404 & 0xf0000))
        {
            arg1[0xa] &= 0xffefffff;
            r2_4 = r3_5[1];
        }
        else
        {
            arg1[0xa] |= 0x100000;
            r2_4 = *0x40012404;
        }
        
        if (r2_4 << 0x15 < 0)
            arg1[0xa] = (arg1[0xa] & 0xffffcfff) | 0x1000;
        
        int32_t r2_10 = arg1[0xa] & 0x1000;
        
        if (r2_10)
            r2_10 = arg1[0xb] & 0xfffffff9;
        
        arg1[0xb] = r2_10;
        arg1[9] = 0;
        *r3_5 = 0xfffffffd;
        int32_t r2_16;
        
        if ((r3_5[2] & 0xe0000) != 0xe0000 || (r3_5 == 0x40012800 && *0x40012404 & 0xf0000))
            r2_16 = r3_5[2] | 0x100000;
        else
            r2_16 = r3_5[2] | 0x500000;
        
        r3_5[2] = r2_16;
    }
    
    return result;
}

int32_t sub_1440(int32_t* arg1)
{
    void* r3 = *arg1;
    
    if (*(r3 + 8) << 0x1f < 0)
    {
        *(r3 + 8) &= 0xfffffffe;
        int32_t r0_1 = sub_11dc();
        
        while (*(*arg1 + 8) << 0x1f < 0)
        {
            if (sub_11dc() - r0_1 > 2)
            {
                arg1[0xa] |= 0x10;
                arg1[0xb] |= 1;
                return 1;
            }
        }
    }
    
    return 0;
}

int32_t sub_1484(int32_t* arg1)
{
    if (arg1)
    {
        int32_t r3_1 = arg1[0xa];
        
        if (!r3_1)
        {
            arg1[0xb] = r3_1;
            arg1[9] = r3_1;
        }
        
        int32_t result = sub_1440(arg1);
        int32_t r3_3 = arg1[0xa] & 0x10;
        
        if (r3_3 || result)
            arg1[0xa] |= 0x10;
        else
        {
            arg1[0xa] = (arg1[0xa] & 0xffffeefd) | 2;
            void* r2_5 = *arg1;
            int32_t r5_1 = arg1[7];
            
            if (r2_5 == 0x40013c00 && r5_1 == 0xc0000)
                r5_1 = 0x80000;
            
            uint32_t r6_1 = arg1[3];
            int32_t r1_3 = arg1[1] | r6_1 << 1 | r5_1;
            int32_t r5_2 = arg1[2];
            int32_t r12_1;
            
            if (r5_2 == 0x100)
                r12_1 = r5_2;
            else if (r5_2 == 1)
                r12_1 = 0x100;
            else
                r12_1 = 0;
            
            if (arg1[5] == 1)
            {
                if (r6_1)
                {
                    arg1[0xa] |= 0x20;
                    arg1[0xb] |= 1;
                }
                else
                    r12_1 = r12_1 | (arg1[6] - 1) << 0xd | 0x800;
            }
            
            *(r2_5 + 4) = (*(r2_5 + 4) & 0xffff16ff) | r12_1;
            *(r2_5 + 8) = (0xffe1f7fd & *(r2_5 + 8)) | r1_3;
            
            if (r5_2 == 0x100 || r5_2 == 1)
                r3_3 = (arg1[4] - 1) << 0x14;
            
            *(r2_5 + 0x2c) = r3_3 | (*(r2_5 + 0x2c) & 0xff0fffff);
            
            if (r1_3 == (0xff1f0efe & *(r2_5 + 8)))
            {
                arg1[0xb] = 0;
                arg1[0xa] = (arg1[0xa] & 0xfffffffc) | 1;
                return result;
            }
            
            arg1[0xa] = (arg1[0xa] & 0xffffffed) | 0x10;
            arg1[0xb] |= 1;
        }
    }
    
    return 1;
}

int32_t sub_1598(int32_t* arg1, int32_t* arg2)
{
    if (arg1[9] == 1)
        return 2;
    
    void* r4_1 = *arg1;
    arg1[9] = 1;
    int32_t result;
    
    if (*(r4_1 + 8) << 0x1f >= 0)
        result = *0x40012808 & 1;
    
    if (*(r4_1 + 8) << 0x1f < 0 || result || r4_1 != 0x40012400)
    {
        result = 1;
        arg1[0xa] |= 0x20;
    }
    else
        *(r4_1 + 4) = (*(r4_1 + 4) & 0xfff0ffff) | *arg2;
    
    arg1[9] = 0;
    return result;
}

void sub_15ec(int32_t arg1)
{
    *0xe000ed0c = (arg1 << 8 & 0x700) | (*0xe000ed0c & 0xf8ff) | 0x5f80000 | 0x20000;
}

void* sub_1610(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r4_1 = *0xe000ed0c >> 8 & 7;
    int32_t r3 = 7 - r4_1;
    
    if (r3 >= 4)
        r3 = 4;
    
    bool cond:1 = r4_1 + 4 > 6;
    
    if (r4_1 + 4 <= 6)
        r4_1 = 0;
    
    if (cond:1)
        r4_1 -= 3;
    
    char* r2 = arg3 & ~(0xffffffff << r4_1);
    bool cond:3 = arg1 >= 0;
    int32_t r3_4 = (arg2 & ~(0xffffffff << r3)) << r4_1 | r2;
    
    if (arg1 >= 0)
        arg1 -= 0x20000000;
    else
        r2 = 0xe000ed14;
    
    char r3_5 = r3_4 << 4;
    void* result;
    
    if (cond:3)
    {
        result = arg1 + 0xe100;
        *(result + 0x300) = r3_5;
    }
    else
    {
        result = arg1 & 0xf;
        *(r2 + result) = r3_5;
    }
    
    return result;
}

void sub_1674(int32_t arg1)
{
    if (arg1 >= 0)
        *(0xe000e100 + (arg1 >> 5 << 2)) = 1 << (arg1 & 0x1f);
}

int32_t sub_1690(int32_t arg1)
{
    if (arg1 - 1 >= 0x1000000)
        return 1;
    
    *0xe000e014 = arg1 - 1;
    *0xe000ed23 = 0xf0;
    *0xe000e018 = 0;
    *0xe000e010 = 7;
    return 0;
}

void sub_16bc(int32_t arg1)
{
    int32_t r2 = *0xe000e010;
    int32_t r2_1;
    
    r2_1 = arg1 == 4 ? r2 | 4 : r2 & 0xfffffffb;
    
    *0xe000e010 = r2_1;
}

int32_t sub_16d4() __pure
{
    return;
}

int32_t sub_16d6()
{
    return;
}

int32_t sub_16e0(int32_t* arg1)
{
    if (!arg1)
        return 1;
    
    int32_t* r1_1 = *arg1;
    int32_t r3_1;
    
    if (r1_1 > 0x40020407)
    {
        arg1[0x10] = (&r1_1[-0x10008102] / 0x14) << 2;
        r3_1 = 0x40020400;
    }
    else
    {
        r3_1 = 0x40020000;
        arg1[0x10] = (&r1_1[-0x10008002] / 0x14) << 2;
    }
    
    arg1[0xf] = r3_1;
    *r1_1 =
        arg1[1] | arg1[2] | arg1[3] | arg1[4] | arg1[5] | arg1[6] | arg1[7] | (*r1_1 & 0xffffc00f);
    arg1[8] = 0x100;
    arg1[0xe] = 0;
    return 0;
}

int32_t sub_175c(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if (arg1[8] != 1)
    {
        uint32_t r5_1 = *(arg1 + 0x21);
        arg1[8] = 1;
        
        if (r5_1 == 1)
        {
            *(arg1 + 0x21) = 2;
            int32_t* r4_1 = *arg1;
            arg1[0xe] = 0;
            *r4_1 &= 0xfffffffe;
            *(arg1[0xf] + 4) = r5_1 << arg1[0x10];
            r4_1[1] = arg4;
            int32_t r3_1 = arg1[0xb];
            
            if (arg1[1] == 0x10)
            {
                r4_1[2] = arg3;
                r4_1[3] = arg2;
            }
            else
            {
                r4_1[2] = arg2;
                r4_1[3] = arg3;
            }
            
            int32_t r3_3;
            
            if (!r3_1)
            {
                *r4_1 &= 0xfffffffb;
                r3_3 = *r4_1 | 0xa;
            }
            else
                r3_3 = *r4_1 | 0xe;
            
            *r4_1 = r3_3;
            *r4_1 |= 1;
            return 0;
        }
        
        arg1[8] = 0;
    }
    
    return 2;
}

int32_t sub_17d4(int32_t* arg1)
{
    if (*(arg1 + 0x21) != 2)
    {
        arg1[0xe] = 4;
        return 1;
    }
    
    int32_t* r3_1 = *arg1;
    *r3_1 &= 0xfffffff1;
    *r3_1 &= 0xfffffffe;
    void* const r2_5;
    int32_t r3_2;
    
    if (r3_1 <= 0x40020080)
    {
        if (r3_1 == 0x40020008)
            r3_2 = 1;
        else if (r3_1 == 0x4002001c)
            r3_2 = 0x10;
        else if (r3_1 == 0x40020030)
            r3_2 = 0x100;
        else if (r3_1 == 0x40020044)
            r3_2 = 0x1000;
        else if (r3_1 == 0x40020058)
            r3_2 = 0x10000;
        else if (r3_1 == 0x4002006c)
            r3_2 = 0x100000;
        else if (r3_1 == 0x40020080)
            r3_2 = 0x1000000;
        else if (r3_1 == 0x40020408)
            r3_2 = 1;
        else if (r3_1 == 0x4002041c)
            r3_2 = 0x10;
        else if (r3_1 == 0x40020430)
            r3_2 = 0x100;
        else if (r3_1 != 0x40020444)
            r3_2 = 0x10000;
        else
            r3_2 = 0x1000;
        
        r2_5 = 0x40020000;
    }
    else
    {
        if (r3_1 == 0x40020008)
            r3_2 = 1;
        else if (r3_1 == 0x4002001c)
            r3_2 = 0x10;
        else if (r3_1 == 0x40020030)
            r3_2 = 0x100;
        else if (r3_1 == 0x40020044)
            r3_2 = 0x1000;
        else if (r3_1 == 0x40020058)
            r3_2 = 0x10000;
        else if (r3_1 == 0x4002006c)
            r3_2 = 0x100000;
        else if (r3_1 == 0x40020080)
            r3_2 = 0x1000000;
        else if (r3_1 == 0x40020408)
            r3_2 = 1;
        else if (r3_1 == 0x4002041c)
            r3_2 = 0x10;
        else if (r3_1 == 0x40020430)
            r3_2 = 0x100;
        else if (r3_1 != 0x40020444)
            r3_2 = 0x10000;
        else
            r3_2 = 0x1000;
        
        r2_5 = 0x40020400;
    }
    
    *(r2_5 + 4) = r3_2;
    arg1[8] = 0x100;
    int32_t result = arg1[0xd];
    
    if (!result)
        return result;
    
    result();
    return 0;
}

void sub_1910(int32_t* arg1)
{
    int32_t* r6 = arg1[0xf];
    int32_t r2 = arg1[0x10];
    int32_t r4 = *r6;
    int32_t* r3 = *arg1;
    int32_t r1 = *r3;
    int32_t r3_2;
    
    if (4 << r2 & r4 && r1 << 0x1d < 0)
    {
        if (*r3 << 0x1a >= 0)
            *r3 &= 0xfffffffb;
        
        void* const r2_4;
        int32_t r3_1;
        
        if (r3 <= 0x40020080)
        {
            if (r3 == 0x40020008)
                r3_1 = 4;
            else if (r3 == 0x4002001c)
                r3_1 = 0x40;
            else if (r3 == 0x40020030)
                r3_1 = 0x400;
            else if (r3 == 0x40020044)
                r3_1 = 0x4000;
            else if (r3 == 0x40020058)
                r3_1 = 0x40000;
            else if (r3 == 0x4002006c)
                r3_1 = 0x400000;
            else if (r3 == 0x40020080)
                r3_1 = 0x4000000;
            else if (r3 == 0x40020408)
                r3_1 = 4;
            else if (r3 == 0x4002041c)
                r3_1 = 0x40;
            else if (r3 == 0x40020430)
                r3_1 = 0x400;
            else if (r3 != 0x40020444)
                r3_1 = 0x40000;
            else
                r3_1 = 0x4000;
            
            r2_4 = 0x40020000;
        }
        else
        {
            if (r3 == 0x40020008)
                r3_1 = 4;
            else if (r3 == 0x4002001c)
                r3_1 = 0x40;
            else if (r3 == 0x40020030)
                r3_1 = 0x400;
            else if (r3 == 0x40020044)
                r3_1 = 0x4000;
            else if (r3 == 0x40020058)
                r3_1 = 0x40000;
            else if (r3 == 0x4002006c)
                r3_1 = 0x400000;
            else if (r3 == 0x40020080)
                r3_1 = 0x4000000;
            else if (r3 == 0x40020408)
                r3_1 = 4;
            else if (r3 == 0x4002041c)
                r3_1 = 0x40;
            else if (r3 == 0x40020430)
                r3_1 = 0x400;
            else if (r3 != 0x40020444)
                r3_1 = 0x40000;
            else
                r3_1 = 0x4000;
            
            r2_4 = 0x40020400;
        }
        
        *(r2_4 + 4) = r3_1;
        r3_2 = arg1[0xb];
        goto label_1990;
    }
    
    if (!(2 << r2 & r4) || r1 << 0x1e >= 0)
    {
        if (8 << r2 & r4 && r1 << 0x1c < 0)
        {
            *r3 &= 0xfffffff1;
            r6[1] = 1 << r2;
            arg1[0xe] = 1;
            arg1[8] = 0x100;
            r3_2 = arg1[0xc];
        label_1990:
            
            if (r3_2)
                /* jump -> r3_2 */
        }
        
        return;
    }
    
    if (*r3 << 0x1a >= 0)
    {
        *r3 &= 0xfffffff5;
        *(arg1 + 0x21) = 1;
    }
    
    void* const r2_8;
    int32_t r3_3;
    
    if (r3 <= 0x40020080)
    {
        if (r3 == 0x40020008)
            r3_3 = 2;
        else if (r3 == 0x4002001c)
            r3_3 = 0x20;
        else if (r3 == 0x40020030)
            r3_3 = 0x200;
        else if (r3 == 0x40020044)
            r3_3 = 0x2000;
        else if (r3 == 0x40020058)
            r3_3 = 0x20000;
        else if (r3 == 0x4002006c)
            r3_3 = 0x200000;
        else if (r3 == 0x40020080)
            r3_3 = 0x2000000;
        else if (r3 == 0x40020408)
            r3_3 = 2;
        else if (r3 == 0x4002041c)
            r3_3 = 0x20;
        else if (r3 == 0x40020430)
            r3_3 = 0x200;
        else if (r3 != 0x40020444)
            r3_3 = 0x20000;
        else
            r3_3 = 0x2000;
        
        r2_8 = 0x40020000;
    }
    else
    {
        if (r3 == 0x40020008)
            r3_3 = 2;
        else if (r3 == 0x4002001c)
            r3_3 = 0x20;
        else if (r3 == 0x40020030)
            r3_3 = 0x200;
        else if (r3 == 0x40020044)
            r3_3 = 0x2000;
        else if (r3 == 0x40020058)
            r3_3 = 0x20000;
        else if (r3 == 0x4002006c)
            r3_3 = 0x200000;
        else if (r3 == 0x40020080)
            r3_3 = 0x2000000;
        else if (r3 == 0x40020408)
            r3_3 = 2;
        else if (r3 == 0x4002041c)
            r3_3 = 0x20;
        else if (r3 == 0x40020430)
            r3_3 = 0x200;
        else if (r3 != 0x40020444)
            r3_3 = 0x20000;
        else
            r3_3 = 0x2000;
        
        r2_8 = 0x40020400;
    }
    
    *(r2_8 + 4) = r3_3;
    arg1[8] = 0;
    r3_2 = arg1[0xa];
    goto label_1990;
}

int32_t sub_1b8c()
{
    int32_t r3_1 = *0x4002200c & 0x10;
    
    if (r3_1)
    {
        *0x2000042c |= 2;
        r3_1 = 0x10;
    }
    
    int32_t result = *0x4002200c << 0x1d;
    
    if (result < 0)
    {
        r3_1 |= 4;
        *0x2000042c |= 1;
    }
    
    if (*0x4002201c << 0x1f < 0)
    {
        result = 0x20000410;
        *0x2000042c |= 4;
        *0x4002201c &= 0xfffffffe;
    }
    
    *0x4002200c = r3_1;
    return result;
}

int32_t sub_1bdc()
{
    int32_t result = *0x40022010 & 0x80;
    
    if (!result)
        return result;
    
    *0x40022004 = 0x45670123;
    *0x40022004 = 0xcdef89ab;
    return *0x40022010 >> 7 & 1;
}

int32_t sub_1c00()
{
    *0x40022010 |= 0x80;
    return 0;
}

int32_t sub_1c14(int32_t arg1)
{
    int32_t r0 = sub_11dc();
    
    while (*0x4002200c << 0x1f < 0)
    {
        if (arg1 != 0xffffffff)
        {
            if (arg1 && sub_11dc() - r0 <= arg1)
                continue;
            
            return 3;
        }
    }
    
    if (*0x4002200c << 0x1a < 0)
        *0x4002200c = 0x20;
    
    if (*0x4002200c << 0x1b >= 0 && *0x4002201c << 0x1f >= 0)
    {
        int32_t result = *0x4002200c & 4;
        
        if (!result)
            return result;
    }
    
    sub_1b8c();
    return 1;
}

int32_t sub_1c68(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_28 = arg4;
    int32_t i = arg1;
    
    if (*0x20000428 == 1)
        return 2;
    
    *0x20000428 = 1;
    int32_t result = sub_1c14(0xc350);
    
    if (!result)
    {
        if (i != 1)
        {
            i = i == 2 ? 2 : 4;
        }
        
        int32_t r10_1 = 0;
        
        do
        {
            int32_t r4_1 = r10_1 << 4;
            *0x2000042c = 0;
            *0x40022010 |= 1;
            *(arg2 + (r10_1 << 1)) = arg3 >> r4_1 | arg4 << (0x20 - r4_1) | arg4 >> (r4_1 - 0x20);
            result = sub_1c14(0xc350);
            *0x40022010 &= 0xfffffffe;
            
            if (result)
                break;
            
            r10_1 += 1;
        } while (i > r10_1);
    }
    
    *0x20000428 = 0;
    return result;
}

int32_t sub_1d0c()
{
    *0x2000042c = 0;
    *0x40022010 |= 4;
    *0x40022010 |= 0x40;
}

void sub_1d30(int32_t arg1)
{
    *0x2000042c = 0;
    *0x40022010 |= 2;
    *0x40022014 = arg1;
    *0x40022010 |= 0x40;
}

int32_t sub_1d54(int32_t* arg1, int32_t* arg2)
{
    if (*0x20000428 == 1)
        return 2;
    
    *0x20000428 = 1;
    int32_t result;
    
    if (*arg1 != 2)
    {
        if (sub_1c14(0xc350))
            result = 1;
        else
        {
            *arg2 = 0xffffffff;
            result = 1;
            
            for (int32_t i = arg1[2]; arg1[2] + (arg1[3] << 0xb) > i; i += 0x800)
            {
                sub_1d30(i);
                result = sub_1c14(0xc350);
                *0x40022010 &= 0xfffffffd;
                
                if (result)
                {
                    *arg2 = i;
                    break;
                }
            }
        }
    }
    else if (!sub_1c14(0xc350))
    {
        sub_1d0c();
        result = sub_1c14(0xc350);
        *0x40022010 &= 0xfffffffb;
    }
    else
        result = 1;
    
    *0x20000428 = 0;
    return result;
}

void sub_1dec(int32_t* arg1, int32_t* arg2, int32_t* arg3 @ r10)
{
    int32_t* var_c = arg3;
    int32_t r2;
    int32_t var_28 = r2;
    int32_t* var_2c_1 = arg2;
    int32_t* var_30 = arg1;
    int32_t r2_1 = 0;
    int32_t r6 = 0;
    
    while (true)
    {
        int32_t r4_1 = *arg2;
        
        if (!(r4_1 >> r6))
            break;
        
        int32_t r8_1 = 1 << r6;
        int32_t r5_2 = r4_1 & r8_1;
        
        if (!(r8_1 & ~r4_1))
        {
            int32_t r4_3 = arg2[1];
            
            if (r4_3 > 3)
            {
                if (r4_3 == 0x12)
                    r2_1 = arg2[3] + 0xc;
                else if (r4_3 > 0x12)
                {
                    if (r4_3 == 0x10220000)
                        goto label_1f4a;
                    
                    int32_t r9_3;
                    
                    if (r4_3 <= 0x10220000)
                    {
                        if (r4_3 == 0x10120000 || r4_3 == 0x10210000)
                            goto label_1f4a;
                        
                        r9_3 = 0x10110000;
                        goto label_1f44;
                    }
                    
                    if (r4_3 == 0x10310000)
                        goto label_1f4a;
                    
                    r9_3 = 0x10320000;
                label_1f44:
                    
                    if (r4_3 == r9_3)
                        goto label_1f4a;
                }
                else if (r4_3 == 0x11)
                    r2_1 = arg2[3] + 4;
            }
            else if (r4_3 - 1 > 2)
            {
            label_1f4a:
                int32_t r2_2 = arg2[2];
                
                if (!r2_2)
                    r2_1 = 4;
                else
                {
                    if (r2_2 == 1)
                        arg1[4] = r8_1;
                    
                    r2_1 = 8;
                    
                    if (r2_2 != 1)
                        arg1[5] = r8_1;
                }
            }
            else
                switch (r4_3)
                {
                    case 1:
                    {
                        r2_1 = arg2[3];
                        break;
                    }
                    case 2:
                    {
                        r2_1 = arg2[3] + 8;
                        break;
                    }
                    case 3:
                    {
                        r2_1 = 0;
                        break;
                    }
                }
            
            if (r5_2 <= 0xff)
                arg3 = arg1;
            
            if (r5_2 > 0xff)
                arg3 = &arg1[1];
            
            int32_t r4_5 = r6 << 2;
            
            if (r5_2 > 0xff)
                r4_5 -= 0x20;
            
            *arg3 = (*arg3 & ~(0xf << r4_5)) | r2_1 << r4_5;
            arg3 = arg2[1];
            
            if (arg3 & 0x10000000)
            {
                *0x40021018 |= 1;
                int32_t var_2c = *0x40021018 & 1;
                int32_t r11_3 = (r6 & 3) << 2;
                int32_t r4_13;
                
                switch (arg1)
                {
                    case 0x40010800:
                    {
                        r4_13 = 0;
                        break;
                    }
                    case 0x40010c00:
                    {
                        r4_13 = 1;
                        break;
                    }
                    case 0x40011000:
                    {
                        r4_13 = 2;
                        break;
                    }
                    case 0x40011400:
                    {
                        r4_13 = 3;
                        break;
                    }
                    case 0x40011800:
                    {
                        r4_13 = 4;
                        break;
                    }
                    case 0x40011c00:
                    {
                        r4_13 = 5;
                        break;
                    }
                    default:
                    {
                        r4_13 = 6;
                    }
                }
                
                *((r6 & 0xfffffffc) + 0x40010008) =
                    r4_13 << r11_3 | (*((r6 & 0xfffffffc) + 0x40010008) & ~(0xf << r11_3));
                int32_t r4_16 = *0x40010400;
                int32_t r4_17;
                
                r4_17 = arg3 & 0x10000 ? r4_16 | r5_2 : r4_16 & ~r5_2;
                
                *0x40010400 = r4_17;
                int32_t r4_18 = *0x40010404;
                int32_t r4_19;
                
                r4_19 = arg3 & 0x20000 ? r4_18 | r5_2 : r4_18 & ~r5_2;
                
                *0x40010404 = r4_19;
                int32_t r4_20 = *0x40010408;
                int32_t r4_21;
                
                r4_21 = arg3 & 0x100000 ? r4_20 | r5_2 : r4_20 & ~r5_2;
                
                *0x40010408 = r4_21;
                int32_t r4_22 = *0x4001040c;
                int32_t r5_3;
                
                r5_3 = arg3 & 0x200000 ? r5_2 | r4_22 : r4_22 & ~r5_2;
                
                *0x4001040c = r5_3;
            }
        }
        
        r6 += 1;
    }
}

int32_t sub_1fc0(void* arg1, int32_t arg2)
{
    if (arg2 & *(arg1 + 8))
        return 1;
    
    return 0;
}

void sub_1fcc(void* arg1, int32_t arg2, int32_t arg3)
{
    if (!arg3)
        arg2 <<= 0x10;
    
    *(arg1 + 0x10) = arg2;
}

void sub_1fd6(void* arg1, int32_t arg2)
{
    int32_t r3 = *(arg1 + 0xc);
    *(arg1 + 0x10) = (arg2 & ~r3) | (arg2 & r3) << 0x10;
}

int32_t sub_1fe8(int32_t* arg1)
{
    int32_t r1;
    int32_t var_1c = r1;
    int32_t* var_20_1 = arg1;
    
    if (arg1)
    {
        if (*arg1 << 0x1f < 0)
        {
            if ((*0x40021004 & 0xc) != 4 && ((*0x40021004 & 0xc) != 8 || *0x40021004 << 0xf >= 0))
            {
                int32_t r3_13 = arg1[1];
                
                if (r3_13 == 0x10000)
                    goto label_204e;
                
                if (r3_13)
                {
                    int32_t r3_22 = *0x40021000;
                    int32_t r3_15;
                    
                    if (r3_13 != 0x50000)
                    {
                        *0x40021000 = r3_22 & 0xfffeffff;
                        r3_15 = *0x40021000 & 0xfffbffff;
                    }
                    else
                    {
                        *0x40021000 = r3_22 | 0x40000;
                    label_204e:
                        r3_15 = *0x40021000 | 0x10000;
                    }
                    
                    *0x40021000 = r3_15;
                    int32_t r0 = sub_11dc();
                    
                    while (*0x40021000 << 0xe >= 0)
                    {
                        if (sub_11dc() - r0 > 0x64)
                            return 3;
                    }
                }
                else
                {
                    *0x40021000 &= 0xfffeffff;
                    *0x40021000 &= 0xfffbffff;
                    int32_t r0_4 = sub_11dc();
                    
                    while (*0x40021000 << 0xe < 0)
                    {
                        if (sub_11dc() - r0_4 > 0x64)
                            return 3;
                    }
                }
                
                goto label_1ff8;
            }
            
            if (*0x40021000 << 0xe >= 0 || arg1[1])
                goto label_1ff8;
        }
        else
        {
        label_1ff8:
            
            if (*arg1 << 0x1e >= 0)
                goto label_2000;
            
            if (*0x40021004 & 0xc && ((*0x40021004 & 0xc) != 8 || *0x40021004 << 0xf < 0))
            {
                int32_t r2_4 = arg1[4];
                
                if (!r2_4)
                {
                    *0x42420000 = r2_4;
                    int32_t r0_10 = sub_11dc();
                    
                    while (*0x40021000 << 0x1e < 0)
                    {
                        if (sub_11dc() - r0_10 > 2)
                            return 3;
                    }
                    
                    goto label_2000;
                }
                
                *0x42420000 = 1;
                int32_t r0_7 = sub_11dc();
                
                while (*0x40021000 << 0x1e >= 0)
                {
                    if (sub_11dc() - r0_7 > 2)
                        return 3;
                }
                
                goto label_20ec;
            }
            
            if (*0x40021000 << 0x1e >= 0 || arg1[4] == 1)
            {
            label_20ec:
                *0x40021000 = (*0x40021000 & 0xffffff07) | arg1[5] << 3;
            label_2000:
                
                if (*arg1 << 0x1c < 0)
                {
                    int32_t r2_5 = arg1[6];
                    
                    if (!r2_5)
                    {
                        *0x42420480 = r2_5;
                        int32_t r0_17 = sub_11dc();
                        
                        while (*0x40021024 << 0x1e < 0)
                        {
                            if (sub_11dc() - r0_17 > 2)
                                return 3;
                        }
                    }
                    else
                    {
                        *0x42420480 = 1;
                        int32_t r0_14 = sub_11dc();
                        
                        while (*0x40021024 << 0x1e >= 0)
                        {
                            if (sub_11dc() - r0_14 > 2)
                                return 3;
                        }
                        
                        uint32_t i_1 = *0x2000011c / 0x1f40;
                        uint32_t i;
                        
                        do
                        {
                            i = i_1;
                            i_1 = i - 1;
                        } while (i);
                    }
                }
                
                if (*arg1 << 0x1d < 0)
                {
                    int32_t r7_4;
                    
                    if (*0x4002101c << 3 < 0)
                        r7_4 = 0;
                    else
                    {
                        r7_4 = 1;
                        *0x4002101c |= 0x10000000;
                        int32_t var_20 = *0x4002101c & 0x10000000;
                    }
                    
                    if (*0x40007000 << 0x17 >= 0)
                    {
                        *0x40007000 |= 0x100;
                        int32_t r0_22 = sub_11dc();
                        
                        while (*0x40007000 << 0x17 >= 0)
                        {
                            if (sub_11dc() - r0_22 > 0x64)
                                return 3;
                        }
                    }
                    
                    int32_t r3_50 = arg1[3];
                    
                    if (r3_50 == 1)
                        goto label_21b6;
                    
                    if (r3_50)
                    {
                        int32_t r3_65 = *0x40021020;
                        int32_t r3_52;
                        
                        if (r3_50 != 5)
                        {
                            *0x40021020 = r3_65 & 0xfffffffe;
                            r3_52 = *0x40021020 & 0xfffffffb;
                        }
                        else
                        {
                            *0x40021020 = r3_65 | 4;
                        label_21b6:
                            r3_52 = *0x40021020 | 1;
                        }
                        
                        *0x40021020 = r3_52;
                        int32_t r0_21 = sub_11dc();
                        
                        while (*0x40021020 << 0x1e >= 0)
                        {
                            if (sub_11dc() - r0_21 > 0x1388)
                                return 3;
                        }
                    }
                    else
                    {
                        *0x40021020 &= 0xfffffffe;
                        *0x40021020 &= 0xfffffffb;
                        int32_t r0_25 = sub_11dc();
                        
                        while (*0x40021020 << 0x1e < 0)
                        {
                            if (sub_11dc() - r0_25 > 0x1388)
                                return 3;
                        }
                    }
                    
                    if (r7_4)
                        *0x4002101c &= 0xefffffff;
                }
                
                int32_t result = arg1[7];
                
                if (!result)
                    return 0;
                
                if ((*0x40021004 & 0xc) != 8)
                {
                    *0x42420060 = 0;
                    
                    if (result != 2)
                    {
                        int32_t r0_37 = sub_11dc();
                        
                        while (true)
                        {
                            if (*0x40021000 << 6 >= 0)
                                return 0;
                            
                            if (sub_11dc() - r0_37 > 2)
                                return 3;
                        }
                    }
                    else
                    {
                        int32_t r0_31 = sub_11dc();
                        
                        while (true)
                        {
                            if (*0x40021000 << 6 < 0)
                            {
                                if (sub_11dc() - r0_31 > 2)
                                    break;
                            }
                            else
                            {
                                int32_t r3_70 = arg1[8];
                                
                                if (r3_70 == 0x10000)
                                    *0x40021004 = (*0x40021004 & 0xfffdffff) | arg1[2];
                                
                                *0x40021004 = r3_70 | arg1[9] | (*0x40021004 & 0xffc2ffff);
                                *0x42420060 = 1;
                                int32_t r0_32 = sub_11dc();
                                
                                while (true)
                                {
                                    if (*0x40021000 << 6 < 0)
                                        return 0;
                                    
                                    if (sub_11dc() - r0_32 > 2)
                                        return 3;
                                }
                            }
                        }
                    }
                    
                    return 3;
                }
                
                if (result == 1)
                    return result;
                
                int32_t r3_76 = *0x40021004;
                
                if ((r3_76 & 0x10000) == arg1[8] && (r3_76 & 0x3c0000) == arg1[9])
                    return 0;
            }
        }
    }
    
    return 1;
}

uint32_t sub_2320()
{
    int32_t* i = 0x80097e8;
    void var_20;
    int32_t* r4 = &var_20;
    
    do
    {
        int32_t r0_1 = *i;
        int32_t r1_1 = i[1];
        i = &i[2];
        *r4 = r0_1;
        r4[1] = r1_1;
        r4 = &r4[2];
    } while (i != 0x80097f8);
    
    int16_t var_24 = 0x201;
    int32_t r3 = *0x40021004;
    
    if ((r3 & 0xc) != 8)
        return 0x7a1200;
    
    void var_10;
    uint32_t r2_6 = *((r3 >> 0x12 & 0xf) + &var_10 - 0x10);
    
    if (r3 << 0xf >= 0)
        return r2_6 * 0x3d0900;
    
    return r2_6 * 0x7a1200 / *((*0x40021004 >> 0x11 & 1) + &var_10 - 0x14);
}

int32_t sub_2394(int32_t* arg1, int32_t arg2)
{
    if (arg1)
    {
        if ((*0x40022000 & 7) < arg2)
            *0x40022000 = (*0x40022000 & 0xfffffff8) | arg2;
        
        if ((*0x40022000 & 7) >= arg2 || (*0x40022000 & 7) == arg2)
        {
            int32_t r1 = *arg1;
            
            if (r1 << 0x1e < 0)
            {
                if (r1 & 4)
                    *0x40021004 |= 0x700;
                
                if (r1 << 0x1c < 0)
                    *0x40021004 |= 0x3800;
                
                *0x40021004 = (*0x40021004 & 0xffffff0f) | arg1[2];
            }
            
            if (r1 << 0x1f < 0)
            {
                int32_t r2_11 = arg1[1];
                int32_t r3_17 = *0x40021000;
                bool cond:1_1;
                
                if (r2_11 == 1)
                    cond:1_1 = !(r3_17 & 0x20000);
                else if (r2_11 != 2)
                    cond:1_1 = !(r3_17 & 2);
                else
                    cond:1_1 = !(r3_17 & 0x2000000);
                
                if (!cond:1_1)
                {
                    *0x40021004 = (*0x40021004 & 0xfffffffc) | r2_11;
                    int32_t r0_6 = sub_11dc();
                    
                    while ((*0x40021004 & 0xc) != arg1[1] << 2)
                    {
                        if (sub_11dc() - r0_6 > 0x1388)
                            return 3;
                    }
                    
                    goto label_23c4;
                }
            }
            else
            {
            label_23c4:
                
                if ((*0x40022000 & 7) > arg2)
                    *0x40022000 = (*0x40022000 & 0xfffffff8) | arg2;
                
                if ((*0x40022000 & 7) <= arg2 || (*0x40022000 & 7) == arg2)
                {
                    int32_t r2_2 = *arg1;
                    
                    if (r2_2 & 4)
                        *0x40021004 = (*0x40021004 & 0xfffff8ff) | arg1[3];
                    
                    if (r2_2 << 0x1c < 0)
                        *0x40021004 = (*0x40021004 & 0xffffc7ff) | arg1[4] << 3;
                    
                    *0x2000011c = sub_2320() >> *(0x800a041 + (*0x40021004 >> 4 & 0xf));
                    sub_1158(*0x20000004);
                    return 0;
                }
            }
        }
    }
    
    return 1;
}

int32_t sub_24cc()
{
    return *0x2000011c;
}

uint32_t sub_24d8()
{
    return *0x2000011c >> *(0x800a051 + (*0x40021004 >> 8 & 7));
}

uint32_t sub_24f8()
{
    return *0x2000011c >> *(0x800a051 + (*0x40021004 >> 0xb & 7));
}

int32_t sub_2518(int32_t* arg1)
{
    int32_t r1;
    int32_t var_1c = r1;
    int32_t* var_20 = arg1;
    
    if (*arg1 << 0x1f < 0)
    {
        int32_t r7_1;
        
        if (*0x4002101c << 3 < 0)
            r7_1 = 0;
        else
        {
            r7_1 = 1;
            *0x4002101c |= 0x10000000;
            int32_t var_1c_1 = *0x4002101c & 0x10000000;
        }
        
        if (*0x40007000 << 0x17 >= 0)
        {
            *0x40007000 |= 0x100;
            int32_t r0_1 = sub_11dc();
            
            while (*0x40007000 << 0x17 >= 0)
            {
                if (sub_11dc() - r0_1 > 0x64)
                    return 3;
            }
        }
        
        int32_t r3_9 = *0x40021020 & 0x300;
        
        if (r3_9 && (arg1[1] & 0x300) != r3_9)
        {
            int32_t r3_23 = *0x40021020;
            *0x42420440 = 1;
            *0x42420440 = 0;
            *0x40021020 = r3_23 & 0xfffffcff;
            
            if (r3_23 << 0x1f < 0)
            {
                int32_t r0_5 = sub_11dc();
                
                while (*0x40021020 << 0x1e >= 0)
                {
                    if (sub_11dc() - r0_5 > 0x1388)
                        return 3;
                }
            }
        }
        
        *0x40021020 = (*0x40021020 & 0xfffffcff) | arg1[1];
        
        if (r7_1)
            *0x4002101c &= 0xefffffff;
    }
    
    int32_t r0 = *arg1;
    
    if (r0 << 0x1e < 0)
        *0x40021004 = (*0x40021004 & 0xffff3fff) | arg1[2];
    
    int32_t result = r0 & 0x10;
    
    if (result)
    {
        result = 0;
        *0x40021004 = (*0x40021004 & 0xffbfffff) | arg1[5];
    }
    
    return result;
}

void sub_2608(void* arg1, int32_t* arg2)
{
    *(arg1 + 0x20) &= 0xfffffffe;
    int32_t r4 = *(arg1 + 4);
    int32_t r2_2 = (*(arg1 + 0x18) & 0xffffff8c) | *arg2;
    int32_t r3_3 = (*(arg1 + 0x20) & 0xfffffffd) | arg2[2];
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400)
    {
        r3_3 = ((r3_3 & 0xfffffff7) | arg2[3]) & 0xfffffffb;
        
        if (arg1 == 0x40012c00 || arg1 == 0x40013400)
            r4 = (r4 & 0xfffffcff) | arg2[5] | arg2[6];
    }
    
    *(arg1 + 4) = r4;
    *(arg1 + 0x18) = r2_2;
    *(arg1 + 0x34) = arg2[1];
    *(arg1 + 0x20) = r3_3;
}

void sub_266c(void* arg1, int32_t* arg2)
{
    *(arg1 + 0x20) &= 0xfffffeff;
    int32_t r4 = *(arg1 + 4);
    int32_t r2_2 = (*(arg1 + 0x1c) & 0xffffff8c) | *arg2;
    int32_t r3_3 = (*(arg1 + 0x20) & 0xfffffdff) | arg2[2] << 8;
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400)
    {
        r3_3 = ((r3_3 & 0xfffff7ff) | arg2[3] << 8) & 0xfffffbff;
        
        if (arg1 == 0x40012c00 || arg1 == 0x40013400)
            r4 = (r4 & 0xffffcfff) | (arg2[5] | arg2[6]) << 4;
    }
    
    *(arg1 + 4) = r4;
    *(arg1 + 0x1c) = r2_2;
    *(arg1 + 0x3c) = arg2[1];
    *(arg1 + 0x20) = r3_3;
}

void sub_26d8(void* arg1, int32_t* arg2)
{
    *(arg1 + 0x20) &= 0xffffefff;
    int32_t r4 = *(arg1 + 4);
    int32_t r2_2 = (*(arg1 + 0x1c) & 0xffff8cff) | *arg2 << 8;
    int32_t r3_3 = (*(arg1 + 0x20) & 0xffffdfff) | arg2[2] << 0xc;
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400)
        r4 = (r4 & 0xffffbfff) | arg2[5] << 6;
    
    *(arg1 + 4) = r4;
    *(arg1 + 0x1c) = r2_2;
    *(arg1 + 0x40) = arg2[1];
    *(arg1 + 0x20) = r3_3;
}

int32_t sub_2724() __pure
{
    return;
}

void sub_2728(int32_t* arg1, int32_t* arg2)
{
    int32_t r3 = *arg1;
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400 || arg1 == 0x40000000 || arg1 == 0x40000400
        || arg1 == 0x40000800 || arg1 == 0x40000c00)
    {
        r3 = (r3 & 0xffffff8f) | arg2[1];
        
        if (arg1 == 0x40012c00 || arg1 == 0x40013400 || arg1 == 0x40000000 || arg1 == 0x40000400
                || arg1 == 0x40000800 || arg1 == 0x40000c00)
            r3 = (r3 & 0xfffffcff) | arg2[3];
    }
    
    *arg1 = (r3 & 0xffffff7f) | arg2[5];
    arg1[0xb] = arg2[2];
    arg1[0xa] = *arg2;
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400)
        arg1[0xc] = arg2[4];
    
    arg1[5] = 1;
}

int32_t sub_27c0(int32_t* arg1)
{
    if (!arg1)
        return 1;
    
    uint32_t r3_1 = *(arg1 + 0x3d);
    
    if (!r3_1)
        arg1[0xf] = r3_1 & 0xff;
    
    int32_t* r0 = *arg1;
    *(arg1 + 0x3d) = 2;
    sub_2728(r0, &arg1[1]);
    *(arg1 + 0x46) = 1;
    *(arg1 + 0x3e) = 1;
    *(arg1 + 0x3f) = 1;
    arg1[0x10] = 1;
    *(arg1 + 0x41) = 1;
    *(arg1 + 0x42) = 1;
    *(arg1 + 0x43) = 1;
    arg1[0x11] = 1;
    *(arg1 + 0x45) = 1;
    *(arg1 + 0x3d) = 1;
    return 0;
}

void sub_2818(void* arg1, int32_t* arg2)
{
    *(arg1 + 0x20) &= 0xffffffef;
    int32_t r4 = *(arg1 + 4);
    int32_t r2_2 = (*(arg1 + 0x18) & 0xffff8cff) | *arg2 << 8;
    int32_t r3_3 = (*(arg1 + 0x20) & 0xffffffdf) | arg2[2] << 4;
    
    if (arg1 == 0x40012c00 || arg1 == 0x40013400)
    {
        r3_3 = ((r3_3 & 0xffffff7f) | arg2[3] << 4) & 0xffffffbf;
        
        if (arg1 == 0x40012c00 || arg1 == 0x40013400)
            r4 = (r4 & 0xfffff3ff) | (arg2[5] | arg2[6]) << 2;
    }
    
    *(arg1 + 4) = r4;
    *(arg1 + 0x18) = r2_2;
    *(arg1 + 0x38) = arg2[1];
    *(arg1 + 0x20) = r3_3;
}

int32_t sub_2884(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    if (arg1[0xf] == 1)
        return 2;
    
    arg1[0xf] = 1;
    void* r3_1;
    
    if (arg3 == 8)
    {
        void* r1_6 = sub_266c(*arg1, arg2);
        r3_1 = *arg1;
        int32_t r1_7 = *(r1_6 + 0x10);
        *(r3_1 + 0x1c) |= 8;
        *(r3_1 + 0x1c) &= 0xfffffffb;
        *(r3_1 + 0x1c) |= r1_7;
    }
    else
    {
        if (arg3 == 0xc)
        {
            void* r1 = sub_26d8(*arg1, arg2);
            r3_1 = *arg1;
            int32_t r1_1 = *(r1 + 0x10);
            *(r3_1 + 0x1c) |= 0x800;
            *(r3_1 + 0x1c) &= 0xfffffbff;
            *(r3_1 + 0x1c) |= r1_1 << 8;
        }
        
        void* r3_2;
        
        if (!arg3)
        {
            void* r1_2 = sub_2608(*arg1, arg2);
            r3_2 = *arg1;
            int32_t r1_3 = *(r1_2 + 0x10);
            *(r3_2 + 0x18) |= 8;
            *(r3_2 + 0x18) &= 0xfffffffb;
            *(r3_2 + 0x18) |= r1_3;
        }
        else if (arg3 == 4)
        {
            void* r1_4 = sub_2818(*arg1, arg2);
            r3_2 = *arg1;
            int32_t r1_5 = *(r1_4 + 0x10);
            *(r3_2 + 0x18) |= 0x800;
            *(r3_2 + 0x18) &= 0xfffffbff;
            *(r3_2 + 0x18) |= r1_5 << 8;
        }
    }
    arg1[0xf] = 0;
    return 0;
}

void sub_293a(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    *(arg1 + 8) = arg3 | arg2 | arg4 << 8 | (*(arg1 + 8) & 0xffff00ff);
}

int32_t sub_294e(int32_t* arg1, int32_t* arg2)
{
    void* r0_1 = *arg1;
    int32_t r2 = arg2[1];
    int32_t r4 = *arg2;
    *(r0_1 + 8) = (((*(r0_1 + 8) & 0xffffff8f) | r2) & 0xfffffff8) | r4;
    
    if (r2 == 0x60)
    {
        int32_t r4_3 = arg2[2];
        int32_t r5_2 = arg2[4];
        *(r0_1 + 0x20) &= 0xffffffef;
        int32_t r3_15 = (*(r0_1 + 0x20) & 0xffffff5f) | r4_3 << 4;
        *(r0_1 + 0x18) = (*(r0_1 + 0x18) & 0xffff0fff) | r5_2 << 0xc;
        *(r0_1 + 0x20) = r3_15;
    }
    else
    {
        if (r2 == 0x70)
            sub_293a(r0_1, arg2[3], arg2[2], arg2[4]);
        
        if (r2 == 0x40)
        {
            if (r4 == 5)
                return 1;
            
            int32_t r2_2 = *(r0_1 + 0x20);
            int32_t r1_1 = arg2[4];
            *(r0_1 + 0x20) &= 0xfffffffe;
            *(r0_1 + 0x18) = (*(r0_1 + 0x18) & 0xffffff0f) | r1_1 << 4;
            *(r0_1 + 0x20) = r2_2;
        }
        else if (r2 == 0x50)
        {
            int32_t r2_3 = arg2[2];
            int32_t r5_1 = arg2[4];
            int32_t r1_3 = *(r0_1 + 0x20) & 0xfffffff5;
            *(r0_1 + 0x20) &= 0xfffffffe;
            *(r0_1 + 0x18) = (*(r0_1 + 0x18) & 0xffffff0f) | r5_1 << 4;
            *(r0_1 + 0x20) = r2_3 | r1_3;
        }
    }
    
    return 0;
}

int32_t sub_29f2(int32_t* arg1, int32_t* arg2)
{
    if (arg1[0xf] == 1)
        return 2;
    
    *(arg1 + 0x3d) = 2;
    arg1[0xf] = 1;
    int32_t result = sub_294e(arg1, arg2);
    
    if (!result)
    {
        void* r3_1 = *arg1;
        *(r3_1 + 0xc) &= 0xffffffbf;
        *(r3_1 + 0xc) &= 0xffffbfff;
        *(arg1 + 0x3d) = 1;
        arg1[0xf] = result;
    }
    else
    {
        result = 1;
        *(arg1 + 0x3d) = 1;
        arg1[0xf] = 0;
    }
    
    return result;
}

void sub_2a40(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r1 = arg2 & 0x1f;
    *(arg1 + 0x20) &= ~(1 << r1);
    *(arg1 + 0x20) |= arg3 << r1;
}

int32_t sub_2a5c(int32_t* arg1, int32_t arg2)
{
    if (!arg2)
    {
        if (*(arg1 + 0x3e) != 1)
            return 1;
        
        *(arg1 + 0x3e) = 2;
    }
    else if (arg2 == 4)
    {
        if (*(arg1 + 0x3f) != 1)
            return 1;
        
        *(arg1 + 0x3f) = 2;
    }
    else if (arg2 != 8)
    {
        if (*(arg1 + 0x41) != 1)
            return 1;
        
        *(arg1 + 0x41) = 2;
    }
    else
    {
        if (arg1[0x10] != 1)
            return 1;
        
        arg1[0x10] = 2;
    }
    
    sub_2a40(*arg1, arg2, 1);
    int32_t* r3_4 = *arg1;
    
    if (r3_4 != 0x40012c00 && r3_4 != 0x40013400)
    {
        if (r3_4 != 0x40000000 && r3_4 != 0x40000400 && r3_4 != 0x40000800)
            goto label_2afc;
        
        goto label_2ace;
    }
    
    r3_4[0x11] |= 0x8000;
    
    if (r3_4 == 0x40012c00 || r3_4 == 0x40013400 || r3_4 == 0x40000000 || r3_4 == 0x40000400
        || r3_4 == 0x40000800)
    {
    label_2ace:
        
        if ((r3_4[2] & 7) != 6)
            *r3_4 |= 1;
    }
    else
    {
    label_2afc:
        
        if (r3_4 != 0x40000c00 || (r3_4[2] & 7) != 6)
            *r3_4 |= 1;
    }
    
    return 0;
}

int32_t j_sub_2a5c(int32_t* arg1, int32_t arg2)
{
    /* tailcall */
    return sub_2a5c(arg1, arg2);
}

void sub_2b1c(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r1 = arg2 & 0x1f;
    *(arg1 + 0x20) &= ~(4 << r1);
    *(arg1 + 0x20) |= arg3 << r1;
}

int32_t sub_2b38(int32_t* arg1, int32_t arg2)
{
    if (!arg2)
    {
        if (*(arg1 + 0x42) != 1)
            return 1;
        
        *(arg1 + 0x42) = 2;
    }
    else if (arg2 == 4)
    {
        if (*(arg1 + 0x43) != 1)
            return 1;
        
        *(arg1 + 0x43) = 2;
    }
    else if (arg2 != 8)
    {
        if (*(arg1 + 0x45) != 1)
            return 1;
        
        *(arg1 + 0x45) = 2;
    }
    else
    {
        if (arg1[0x11] != 1)
            return 1;
        
        arg1[0x11] = 2;
    }
    
    sub_2b1c(*arg1, arg2, 4);
    int32_t* r3_4 = *arg1;
    r3_4[0x11] |= 0x8000;
    
    if (r3_4 == 0x40012c00 || r3_4 == 0x40013400 || r3_4 == 0x40000000 || r3_4 == 0x40000400
        || r3_4 == 0x40000800)
    {
        if ((r3_4[2] & 7) != 6)
            *r3_4 |= 1;
    }
    else if (r3_4 != 0x40000c00 || (r3_4[2] & 7) != 6)
        *r3_4 |= 1;
    
    return 0;
}

int32_t j_sub_2b38(int32_t* arg1, int32_t arg2)
{
    /* tailcall */
    return sub_2b38(arg1, arg2);
}

int32_t sub_2be4(int32_t* arg1, int32_t* arg2)
{
    int32_t result = 2;
    
    if (arg1[0xf] != 1)
    {
        void* r3_1 = *arg1;
        *(arg1 + 0x3d) = 2;
        int32_t r0 = *(r3_1 + 8);
        *(r3_1 + 4) = (*(r3_1 + 4) & 0xffffff8f) | *arg2;
        
        if (r3_1 == 0x40012c00 || r3_1 == 0x40013400 || r3_1 == 0x40000000 || r3_1 == 0x40000400
                || r3_1 == 0x40000800 || r3_1 == 0x40000c00)
            *(r3_1 + 8) = arg2[1] | (r0 & 0xffffff7f);
        
        result = 0;
        *(arg1 + 0x3d) = 1;
        arg1[0xf] = 0;
    }
    
    return result;
}

int32_t sub_2c50(int32_t* arg1, int32_t* arg2)
{
    if (arg1[0xf] == 1)
        return 2;
    
    *(*arg1 + 0x44) = (((((((((((arg2[3] & 0xfffffcff) | arg2[2]) & 0xfffffbff) | arg2[1])
        & 0xfffff7ff) | *arg2) & 0xffffefff) | arg2[4]) & 0xffffdfff) | arg2[5]) & 0xffffbfff)
        | arg2[7];
    arg1[0xf] = 0;
    return 0;
}

void sub_2c9c(int32_t* arg1)
{
    void* r3 = *arg1;
    *(r3 + 0xc) &= 0xfffffedf;
    *(r3 + 0x14) &= 0xfffffffe;
    *(arg1 + 0x3a) = 0x20;
}

void* sub_2cb8(int32_t* arg1)
{
    void* r3 = *arg1;
    *(r3 + 0x10) = (*(r3 + 0x10) & 0xffffcfff) | arg1[3];
    *(r3 + 0xc) = arg1[2] | arg1[4] | arg1[5] | (*(r3 + 0xc) & 0xffffe9f3);
    *(r3 + 0x14) = (*(r3 + 0x14) & 0xfffffcff) | arg1[6];
    uint32_t r0_2;
    
    if (r3 != 0x40013800)
        r0_2 = sub_24d8();
    else
        r0_2 = sub_24f8();
    
    void* result = *arg1;
    uint32_t r3_2 = r0_2 * 0x19 / (arg1[1] << 2);
    *(result + 8) = (((r3_2 % 0x64) << 4) + 0x32) / 0x64 + ((r3_2 / 0x64) << 4);
    return result;
}

int32_t sub_2d2c(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    
    while (true)
    {
        if (!(arg2 & ~**arg1))
            return 0;
        
        if (arg4 != 0xffffffff)
        {
            if (!arg4)
                break;
            
            if (arg4 < sub_11dc() - arg3)
                break;
        }
    }
    
    void* r3_3 = *arg1;
    *(r3_3 + 0xc) &= 0xfffffe5f;
    *(r3_3 + 0x14) &= 0xfffffffe;
    *(arg1 + 0x39) = 0x20;
    *(arg1 + 0x3a) = 0x20;
    arg1[0xe] = 0;
    return 3;
}

int32_t sub_2d7c(int32_t* arg1)
{
    if (!arg1)
        return 1;
    
    uint32_t r3_1 = *(arg1 + 0x39);
    
    if (!r3_1)
    {
        arg1[0xe] = r3_1 & 0xff;
        sub_522c(arg1);
    }
    
    void* r2_2 = *arg1;
    *(arg1 + 0x39) = 0x24;
    *(r2_2 + 0xc) &= 0xffffdfff;
    sub_2cb8(arg1);
    void* r3_4 = *arg1;
    *(r3_4 + 0x10) &= 0xffffb7ff;
    *(r3_4 + 0x14) &= 0xffffffd5;
    *(r3_4 + 0xc) |= 0x2000;
    arg1[0xf] = 0;
    *(arg1 + 0x39) = 0x20;
    *(arg1 + 0x3a) = 0x20;
    return 0;
}

int32_t sub_2dd8(int32_t* arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_20 = arg4;
    int16_t* r6 = arg2;
    int16_t r7 = arg3;
    
    if (*(arg1 + 0x39) == 0x20)
    {
        if (!arg2 || !arg3)
            return 1;
        
        if (arg1[0xe] != 1)
        {
            int16_t* r5_1 = sub_0;
            arg1[0xe] = 1;
            arg1[0xf] = 0;
            *(arg1 + 0x39) = 0x21;
            int32_t r0 = sub_11dc();
            bool cond:1_1 = arg1[2] != 0x1000;
            arg1[9] = r7;
            *(arg1 + 0x26) = r7;
            
            if (!cond:1_1)
            {
                int16_t* r3_3 = arg1[4];
                
                if (!r3_3)
                {
                    r5_1 = r6;
                    r6 = r3_3;
                }
            }
            
            arg1[0xe] = 0;
            
            while (true)
            {
                if (!*(arg1 + 0x26))
                {
                    int32_t result = sub_2d2c(arg1, 0x40, r0, arg4);
                    
                    if (result)
                        break;
                    
                    *(arg1 + 0x39) = 0x20;
                    return result;
                }
                
                if (sub_2d2c(arg1, 0x80, r0, arg4))
                    break;
                
                uint32_t r3_10;
                
                if (r6)
                {
                    r3_10 = *r6;
                    r6 += 1;
                }
                else
                {
                    uint32_t r3_9 = *r5_1;
                    r5_1 = &r5_1[1];
                    r3_10 = r3_9 & 0x1ff;
                }
                
                *(*arg1 + 4) = r3_10;
                *(arg1 + 0x26) -= 1;
            }
            
            return 3;
        }
    }
    
    return 2;
}

int32_t sub_2e84(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_14_3 = arg2;
    int32_t* var_18 = arg1;
    
    if (*(arg1 + 0x3a) == 0x20)
    {
        if (!arg2 || !arg3)
            return 1;
        
        if (arg1[0xe] != 1)
        {
            arg1[0xe] = 1;
            arg1[0xa] = arg2;
            arg1[0xb] = arg3;
            arg1[0xf] = 0;
            *(arg1 + 0x3a) = 0x22;
            int32_t* r0 = arg1[0xd];
            int32_t r6_1 = *arg1;
            r0[0xa] = 0x8002f19;
            r0[0xb] = 0x8002fc9;
            r0[0xc] = 0x8002fd5;
            r0[0xd] = 0;
            sub_175c(r0, r6_1 + 4, arg2, arg3);
            int32_t* r3_1 = *arg1;
            int32_t var_14 = 0;
            int32_t var_14_1 = *r3_1;
            arg1[0xe] = 0;
            int32_t var_14_2 = r3_1[1];
            r3_1[3] |= 0x100;
            r3_1[5] |= 1;
            r3_1[5] |= 0x40;
            return 0;
        }
    }
    
    return 2;
}

int32_t sub_2f14() __pure
{
    return;
}

int32_t sub_2f16() __pure
{
    return;
}

int32_t* sub_2f18(int32_t* arg1)
{
    int32_t* result = arg1[9];
    int32_t r3_3 = **arg1 & 0x20;
    
    if (!r3_3)
    {
        *(result + 0x2e) = r3_3;
        void* r3_4 = *result;
        *(r3_4 + 0xc) &= 0xfffffeff;
        *(r3_4 + 0x14) &= 0xfffffffe;
        *(r3_4 + 0x14) &= 0xffffffbf;
        *(result + 0x3a) = 0x20;
    }
    
    return result;
}

int32_t sub_2f50(int32_t* arg1)
{
    if (*(arg1 + 0x3a) != 0x22)
        return 2;
    
    int32_t r1_1 = arg1[2];
    int16_t* r3_1 = arg1[0xa];
    void* r2_1 = *arg1;
    void* r3_2;
    
    if (r1_1 == 0x1000)
    {
        if (arg1[4])
            goto label_2fb0;
        
        *r3_1 = *(r2_1 + 4) & 0x1ff;
        r3_2 = &r3_1[1];
    }
    else if (r1_1 || arg1[4])
    {
        *r3_1 = *(r2_1 + 4) & 0x7f;
        r3_2 = arg1[0xa] + 1;
    }
    else
    {
    label_2fb0:
        *r3_1 = *(r2_1 + 4);
        r3_2 = arg1[0xa] + 1;
    }
    
    int16_t r4_1 = *(arg1 + 0x2e);
    arg1[0xa] = r3_2;
    uint32_t r4_3 = r4_1 - 1;
    *(arg1 + 0x2e) = r4_3;
    
    if (!r4_3)
    {
        void* r3_3 = *arg1;
        *(r3_3 + 0xc) &= 0xffffffdf;
        *(r3_3 + 0xc) &= 0xfffffeff;
        *(r3_3 + 0x14) &= 0xfffffffe;
        *(arg1 + 0x3a) = 0x20;
    }
    
    return 0;
}

int32_t sub_2fc6() __pure
{
    return;
}

int32_t sub_2fc8(void* arg1)
{
    return *(arg1 + 0x24);
}

int32_t sub_2fd2() __pure
{
    return;
}

int32_t* sub_2fd4(void* arg1)
{
    int32_t* result = *(arg1 + 0x24);
    void* r3 = *result;
    
    if (*(result + 0x39) == 0x21 && *(r3 + 0x14) << 0x18 < 0)
    {
        *(result + 0x26) = 0;
        *(r3 + 0xc) &= 0xffffff3f;
        *(result + 0x39) = 0x20;
    }
    
    if (*(result + 0x3a) == 0x22 && *(r3 + 0x14) << 0x19 < 0)
    {
        *(result + 0x2e) = 0;
        sub_2c9c(result);
    }
    
    result[0xf] |= 0x10;
    return result;
}

void sub_3020(int32_t* arg1)
{
    int32_t* r3_18 = *arg1;
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r2 = *r3_18;
    int32_t* r4 = arg1;
    int32_t r1 = r3_18[3];
    
    if (!(r2 << 0x1c))
    {
        if (r2 << 0x1a < 0 && r1 << 0x1a < 0)
            /* tailcall */
            return sub_2f50(arg1);
        
        goto label_30ee;
    }
    
    arg1 = r3_18[5] & 1;
    
    if (!((r1 & 0x120) | arg1))
    {
    label_30ee:
        
        if (r2 << 0x18 >= 0 || r1 << 0x18 >= 0)
        {
            if (r2 << 0x19 < 0 && r1 << 0x19 < 0)
            {
                r3_18[3] &= 0xffffffbf;
                *(r4 + 0x39) = 0x20;
            }
        }
        else if (*(r4 + 0x39) == 0x21)
        {
            int16_t* r2_7 = r4[8];
            
            if (r4[2] != 0x1000 || r4[4])
            {
                r4[8] = r2_7 + 1;
                r3_18[1] = *r2_7;
            }
            else
            {
                r3_18[1] = *r2_7 & 0x1ff;
                r4[8] = &r2_7[1];
            }
            
            uint32_t r2_11 = *(r4 + 0x26) - 1;
            *(r4 + 0x26) = r2_11;
            
            if (!r2_11)
            {
                r3_18[3] &= 0xffffff7f;
                r3_18[3] |= 0x40;
            }
        }
    }
    else
    {
        if (r2 << 0x1f < 0 && r1 << 0x17 < 0)
            r4[0xf] |= 1;
        
        if (r2 << 0x1d < 0 && arg1)
            r4[0xf] |= 2;
        
        if (r2 << 0x1e < 0 && arg1)
            r4[0xf] |= 4;
        
        if (r2 << 0x1c < 0 && (r1 & 0x20) | arg1)
            r4[0xf] |= 8;
        
        if (r4[0xf])
        {
            if (r2 << 0x1a < 0 && r1 << 0x1a < 0)
                sub_2f50(r4);
            
            int32_t r5_8 = (r4[0xf] & 8) | (*(*r4 + 0x14) & 0x40);
            
            if (!r5_8)
                r4[0xf] = r5_8;
            else
            {
                sub_2c9c(r4);
                void* r3_16 = *r4;
                
                if (*(r3_16 + 0x14) << 0x19 < 0)
                {
                    int32_t* r0_3 = r4[0xd];
                    *(r3_16 + 0x14) &= 0xffffffbf;
                    
                    if (r0_3)
                    {
                        r0_3[0xd] = 0x8003165;
                        
                        if (sub_17d4(r0_3))
                            /* jump -> *(r4[0xd] + 0x34) */
                    }
                }
            }
        }
    }
}

void* sub_3164(void* arg1)
{
    void* result = *(arg1 + 0x24);
    *(result + 0x2e) = 0;
    *(result + 0x26) = 0;
    return result;
}

int32_t sub_3174(int32_t arg1, int32_t arg2) __pure
{
    int32_t r1_2;
    
    if (arg2 >> 0x1f == arg1 >> 0x1f)
        r1_2 = 0;
    else
    {
        int32_t r1 = arg1 % arg2;
        int32_t r1_1 = r1;
        
        if (r1)
            r1_1 = 1;
        
        r1_2 = 0 - r1_1;
    }
    
    return arg1 / arg2 + r1_2;
}

int32_t sub_3194(int16_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4)
{
    int16_t r2;
    
    if (arg3)
        r2 = 0;
    else
        r2 = *arg4;
    
    int32_t result = arg1 + r2;
    
    if (arg2 >= result)
        arg2 = result;
    
    *arg4 = arg2;
    return result;
}

int16_t sub_31ac(int16_t* arg1, int32_t arg2, int16_t* arg3, int32_t* arg4)
{
    int32_t r0 = *arg4;
    int32_t r4_1 = *arg1 - (r0 >> 0x10);
    
    if (r4_1 < 0xffff8000)
        r4_1 = 0xffff8000;
    
    if (r4_1 >= 0x7fff)
        r4_1 = 0x7fff;
    
    int32_t r4_2 = r0 + arg2 * r4_1;
    *arg3 = r4_2 >> 0x10;
    int32_t r6 = arg4[1];
    *arg4 = r4_2;
    int32_t r0_2 = arg1[1] - (r6 >> 0x10);
    
    if (r0_2 < 0xffff8000)
        r0_2 = 0xffff8000;
    
    if (r0_2 >= 0x7fff)
        r0_2 = 0x7fff;
    
    int32_t r1 = r6 + arg2 * r0_2;
    int16_t result = r1 >> 0x10;
    arg3[1] = result;
    arg4[1] = r1;
    return result;
}

uint32_t sub_3200(int16_t arg1, uint32_t arg2, int32_t arg3, uint16_t* arg4, int16_t* arg5)
{
    int16_t r2;
    
    if (arg3)
        r2 = 0;
    else
        r2 = *arg5;
    
    uint32_t result = r2 + arg1;
    *arg4 = result;
    
    if (result >= arg2)
        result = arg2;
    
    *arg5 = result;
    return result;
}

void sub_321c(uint32_t arg1, uint32_t arg2, uint32_t arg3, uint8_t* arg4, char* arg5)
{
    uint8_t* var_1c = arg4;
    uint32_t var_20 = arg3;
    uint32_t var_24 = arg2;
    uint32_t var_28_2 = arg1;
    uint32_t r2 = *arg5;
    uint32_t r2_1 = r2 - arg1;
    uint8_t r4 = arg1;
    
    if (r2 != arg1)
        r2_1 = 1;
    
    uint32_t r3 = arg5[6];
    *arg5 = arg1;
    
    if (arg1)
    {
        if (!r3)
        {
            int32_t r1;
            arg1 = sub_3200(1, arg2, r2_1, (&var_1c + 2), &arg5[4]);
            
            if (*(&var_1c + 2) > r1)
                r3 = 1;
            else
            {
                uint32_t r3_4 = arg5[6];
                r3 = r3_4;
                
                if (r3_4)
                    r3 = 1;
            }
        }
        
        *arg4 = r3;
    }
    else if (!r3)
        *arg4 = r3;
    else
    {
        sub_3200(1, arg3, r2_1, (&var_1c + 2), &arg5[2]);
        
        if (*(&var_1c + 2) <= arg3)
        {
            uint32_t r4_1 = arg5[6];
            r4 = r4_1;
            
            if (r4_1)
                r4 = 1;
        }
        
        *arg4 = r4;
    }
    
    arg5[6] = *arg4;
}

int32_t sub_328e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int16_t arg5, int16_t* arg6, int32_t* arg7)
{
    int32_t r0 = (arg1 * arg2) >> 4;
    int32_t r6 = *arg7;
    int32_t r1_1;
    
    if (r0 >= 0)
    {
        if (!r0)
            r1_1 = r0 + r6;
        else
        {
            r1_1 = 0x7fffffff;
            
            if (0x7fffffff - r0 >= r6)
                r1_1 = r0 + r6;
        }
    }
    else if (0x80000000 - r0 > r6)
        r1_1 = 0x80000000;
    else
        r1_1 = r0 + r6;
    
    int32_t r1_2 = r1_1 + arg7[1];
    int32_t result = r1_2 << 4 >> 0x10;
    
    if (result <= arg4)
    {
        int32_t result_1 = arg5;
        
        if (result < result_1)
            result = result_1;
        
        *arg6 = result;
    }
    else
        *arg6 = arg4;
    
    *arg7 = (*arg6 - (r1_2 >> 0xc)) * arg3;
    arg7[1] = r1_2;
    return result;
}

int32_t sub_32ec(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int16_t arg5, int16_t arg6, int32_t arg7, int16_t* arg8, int32_t* arg9)
{
    int32_t r4 = arg1 * arg3;
    int32_t r7 = arg5;
    int32_t result_2 = arg6;
    int32_t r2_1;
    
    if (r4 >= 0)
    {
        if (!r4)
            r2_1 = r4 + arg7;
        else
        {
            r2_1 = 0x7fffffff;
            
            if (0x7fffffff - r4 >= arg7)
                r2_1 = r4 + arg7;
        }
    }
    else if (0x80000000 - r4 > arg7)
        r2_1 = 0x80000000;
    else
        r2_1 = r4 + arg7;
    
    if (arg9[1])
        *arg9 = arg4;
    
    int32_t r6_1;
    
    if (!*(arg9 + 5))
        r6_1 = r2_1;
    else
        r6_1 = 0;
    
    int32_t r4_2 = 0xffff8000;
    int32_t r1_1 = (arg1 * arg2) >> 0xb;
    
    if (r1_1 < 0xffff8000)
        r1_1 = 0xffff8000;
    
    int32_t r6_2 = r6_1 + *arg9;
    
    if (r1_1 >= 0x7fff)
        r1_1 = 0x7fff;
    
    int32_t result = r6_2 >> 0x10;
    int32_t r1_3 = (r1_1 + (result << 1)) >> 1;
    
    if (0xffff8000 < r1_3)
        r4_2 = r1_3;
    
    if (r4_2 >= 0x7fff)
        r4_2 = 0x7fff;
    
    int32_t result_1 = r4_2;
    
    if (result_1 <= r7)
    {
        result = result_1;
        
        if (result_1 < result_2)
            result = result_2;
        
        *arg8 = result;
    }
    else
        *arg8 = r7;
    
    char r3_2;
    
    if (r2_1 < 0)
    {
        if (r1_3 < 0)
        {
        label_3384:
            
            if (result_1 > r7)
                r3_2 = 1;
            else if (result_1 >= result_2)
                r3_2 = 0;
            else
                r3_2 = 1;
        }
        else
            r3_2 = 0;
    }
    else if (r1_3 < 0)
        r3_2 = 0;
    else
    {
        int32_t r2_2;
        
        r2_2 = r2_1 <= 0 ? 0 : 1;
        
        int32_t r1_4;
        
        r1_4 = result_1 <= 0 ? 0 : 1;
        
        if (r2_2 == r1_4)
            goto label_3384;
        
        r3_2 = 0;
    }
    
    *(arg9 + 5) = r3_2;
    arg9[1] = 0;
    *arg9 = r6_2;
    return result;
}

int32_t sub_33c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int16_t arg5, int16_t arg6, int32_t arg7, int16_t* arg8, int32_t* arg9)
{
    int32_t r4 = arg1 * arg3;
    int32_t r7 = arg5;
    int32_t result_2 = arg6;
    int32_t r2_1;
    
    if (r4 >= 0)
    {
        if (!r4)
            r2_1 = r4 + arg7;
        else
        {
            r2_1 = 0x7fffffff;
            
            if (0x7fffffff - r4 >= arg7)
                r2_1 = r4 + arg7;
        }
    }
    else if (0x80000000 - r4 > arg7)
        r2_1 = 0x80000000;
    else
        r2_1 = r4 + arg7;
    
    if (arg9[1])
        *arg9 = arg4 << 0x10;
    
    int32_t r6_1;
    
    if (!*(arg9 + 5))
        r6_1 = r2_1;
    else
        r6_1 = 0;
    
    int32_t r4_2 = 0xffff8000;
    int32_t r1_1 = (arg1 * arg2) >> 0xb;
    
    if (r1_1 < 0xffff8000)
        r1_1 = 0xffff8000;
    
    int32_t r6_2 = r6_1 + *arg9;
    
    if (r1_1 >= 0x7fff)
        r1_1 = 0x7fff;
    
    int32_t result = r6_2 >> 0x10;
    int32_t r1_3 = (r1_1 + (result << 1)) >> 1;
    
    if (0xffff8000 < r1_3)
        r4_2 = r1_3;
    
    if (r4_2 >= 0x7fff)
        r4_2 = 0x7fff;
    
    int32_t result_1 = r4_2;
    
    if (result_1 <= r7)
    {
        result = result_1;
        
        if (result_1 < result_2)
            result = result_2;
        
        *arg8 = result;
    }
    else
        *arg8 = r7;
    
    char r3_3;
    
    if (r2_1 < 0)
    {
        if (r1_3 < 0)
        {
        label_345a:
            
            if (result_1 > r7)
                r3_3 = 1;
            else if (result_1 >= result_2)
                r3_3 = 0;
            else
                r3_3 = 1;
        }
        else
            r3_3 = 0;
    }
    else if (r1_3 < 0)
        r3_3 = 0;
    else
    {
        int32_t r2_2;
        
        r2_2 = r2_1 <= 0 ? 0 : 1;
        
        int32_t r1_4;
        
        r1_4 = result_1 <= 0 ? 0 : 1;
        
        if (r2_2 == r1_4)
            goto label_345a;
        
        r3_3 = 0;
    }
    
    *(arg9 + 5) = r3_3;
    arg9[1] = 0;
    *arg9 = r6_2;
    return result;
}

void sub_3498(int32_t arg1, int32_t arg2, int32_t arg3, int16_t arg4, int16_t arg5, int16_t arg6, int32_t arg7, int16_t* arg8, int16_t* arg9)
{
    int32_t r4 = arg1 * arg3;
    int32_t r7 = arg5;
    int32_t r12 = arg6;
    int32_t r2_1;
    
    if (r4 >= 0)
    {
        if (!r4)
            r2_1 = r4 + arg7;
        else
        {
            r2_1 = 0x7fffffff;
            
            if (0x7fffffff - r4 >= arg7)
                r2_1 = r4 + arg7;
        }
    }
    else if (0x80000000 - r4 > arg7)
        r2_1 = 0x80000000;
    else
        r2_1 = r4 + arg7;
    
    if (arg9[1])
        *arg9 = arg4;
    
    int16_t r5_3;
    
    if (*(arg9 + 3))
        r5_3 = 0;
    else
    {
        int32_t r5_1 = 0xffff;
        
        if (r2_1 >= 0)
            r5_1 = 0;
        
        r5_3 = (r5_1 + r2_1) >> 0x10;
    }
    
    int32_t r4_2 = 0xffff8000;
    int32_t r1_1 = (arg1 * arg2) >> 0xb;
    
    if (r1_1 < 0xffff8000)
        r1_1 = 0xffff8000;
    
    if (r1_1 >= 0x7fff)
        r1_1 = 0x7fff;
    
    int32_t r5_5 = r5_3 + *arg9;
    int32_t r1_3 = (r1_1 + (r5_5 << 1)) >> 1;
    
    if (0xffff8000 < r1_3)
        r4_2 = r1_3;
    
    if (r4_2 >= 0x7fff)
        r4_2 = 0x7fff;
    
    int32_t r3_2 = r4_2;
    
    if (r3_2 <= r7)
    {
        arg1 = r3_2;
        
        if (r3_2 < r12)
            arg1 = r12;
        
        *arg8 = arg1;
    }
    else
        *arg8 = r7;
    
    char r3_3;
    
    if (r2_1 < 0)
    {
        if (r1_3 < 0)
        {
        label_353a:
            
            if (r3_2 > r7)
                r3_3 = 1;
            else if (r3_2 >= r12)
                r3_3 = 0;
            else
                r3_3 = 1;
        }
        else
            r3_3 = 0;
    }
    else if (r1_3 < 0)
        r3_3 = 0;
    else
    {
        int32_t r2_2;
        
        r2_2 = r2_1 <= 0 ? 0 : 1;
        
        int32_t r1_4;
        
        r1_4 = r3_2 <= 0 ? 0 : 1;
        
        if (r2_2 == r1_4)
            goto label_353a;
        
        r3_3 = 0;
    }
    
    *(arg9 + 3) = r3_3;
    arg9[1] = 0;
    *arg9 = r5_5;
}

int16_t* sub_357c(int32_t* arg1)
{
    char* r3 = arg1[1];
    int16_t* result = arg1[2];
    int16_t* r4 = arg1[3];
    int32_t* r5 = *arg1;
    uint32_t r2 = r3[5];
    uint32_t r7 = r3[4];
    uint32_t r0 = r3[6];
    uint32_t r3_2 = (r2 << 1) + (r7 << 2) + r0;
    int32_t r3_3 = r2;
    
    if (r2)
        r3_3 = 1;
    
    if (r7)
        r3_3 ^= 1;
    
    if (r0)
        r3_3 ^= 1;
    
    uint32_t r1_3 = r4[0x4e];
    
    if (r4[0x4d])
        r3_3 ^= 1;
    
    if (*(r4 + 0x9b))
        r3_3 ^= 1;
    
    int32_t r1_4 = r1_3;
    
    if (r1_3)
        r1_4 = 1;
    
    if (r1_4 != r3_3)
    {
        char r3_5 = *(r3_2 + 0x8009f82);
        int32_t r12_1 = r4[0x47];
        int32_t r0_3 = r3_5 - *(r4 + 0x8f);
        
        if (r0_3 != 1)
        {
            r0_3 = r0_3 == 0xfffffffb ? 1 : 0xffffffff;
        }
        
        int32_t r7_1 = r4[0x40];
        uint32_t r1_7 = r4[0x41];
        uint32_t r9_1 = r7_1;
        *(r4 + 0x8f) = r3_5;
        uint32_t r3_7 = r9_1 - r1_7;
        bool cond:3_1 = r3_7 < 0;
        r4[0x47] = r0_3;
        
        if (r3_7 < 0)
            r3_7 = r1_7 - r9_1;
        
        if (cond:3_1)
            r3_7 = r3_7;
        
        bool cond:4_1 = r5[1] > r3_7;
        r4[0x2b] = r7_1;
        
        if (!cond:4_1)
            *(r4 + 0xa9) = 1;
        else if (*(r5 + 6) >= r3_7)
            *(r4 + 0xa9) = 0;
        
        uint32_t r3_9 = *(r4 + 0xa9);
        char r8_1;
        
        r8_1 = r12_1 != r0_3 ? 1 : 0;
        
        int16_t lr_1 = r4[0x43];
        int16_t r12_2 = r4[0x44];
        r4[0x51] = r3_9;
        int16_t r3_11;
        
        if (r12_1 == r0_3)
        {
            uint32_t r1_24 = r5[3];
            int16_t r3_32;
            
            if (!r3_9)
                r3_32 = (r1_24 << 2 << 4) / (r4[0x42] + r9_1 + lr_1 + r12_2);
            else
                r3_32 = (r1_24 << 4) / r7_1;
            
            r3_11 = r3_32;
        }
        else if (*(r4 + 0xa7))
            r3_11 = 0;
        else
            r3_11 = r4[0x45];
        
        r4[0x41] = r7_1;
        r4[0x3d] = r0_3 * r3_11;
        r4[0x42] = lr_1;
        r4[0x43] = r12_2;
        r4[0x44] = r7_1;
        *(r4 + 0xa7) = r8_1;
    }
    
    int32_t r0_4 = sub_3194(1, *(r5 + 0xa), r1_4 ^ r3_3, &r4[0x20]);
    int32_t var_54;
    int32_t r11;
    
    if (*(r5 + 0xa) < r0_4)
    {
        r11 = 0;
        var_54 = 0;
    }
    else
    {
        int32_t r3_15 = r4[0x3d];
        var_54 = r3_15;
        
        r11 = r3_15 >= 0 ? var_54 : 0 - r3_15;
    }
    
    if (r5[0x35] <= r11)
        r4[0x54] = 1;
    else if (*(r5 + 0xd2) >= r11)
        r4[0x54] = 0;
    
    uint32_t r3_19 = *(r5 + 0xfb);
    uint32_t var_58;
    
    if (r3_19)
        var_58 = 1;
    else if (!r4[0x54])
        var_58 = r3_19;
    else
        var_58 = __clz(r4[0x51]) >> 5;
    
    char r2_8 = *(r4 + 0xa3);
    char r2_9 = r4[0x52];
    int32_t r1_10 = *(r3 + 8);
    int32_t r8_3 = *(r3 + 2) << 4;
    int32_t r7_2 = r8_3;
    int32_t r2_11 = r1_10 << 4;
    int32_t r2_12;
    
    if (0x6a3f < r1_10 << 4)
        r2_12 = 0x6a40;
    else if (r2_11 < 0xffff95c1)
        r2_12 = 0xffff95c0;
    else
        r2_12 = r2_11;
    
    int32_t r1_12 = *(r3 + 0xa);
    int32_t r9_2 = r1_12 << 4;
    int32_t r9_3;
    
    if (0x6a3f < r1_12 << 4)
        r9_3 = 0x6a40;
    else if (r9_2 < 0xffff95c1)
        r9_3 = 0xffff95c0;
    else
        r9_3 = r9_2;
    
    int32_t r10;
    
    if (r3_19)
    {
        int32_t r10_3 = r5[0x3e] * *(r3 + 0xe) - 0x1e0;
        r10 = (r10_3 - sub_3174(r10_3, 0x1680) * 0x1680) << 0x12 >> 0x12 << 2;
    }
    else
    {
        int32_t r0_5 = r4[0x47];
        int32_t r3_21 = *(r3_2 + 0x8009f82);
        int32_t r3_24;
        
        if (!var_58)
        {
            if (r0_5 != 1)
                r3_21 = r3_21 + 1;
            
            r3_24 = r3_21 << 0xc;
        }
        else
        {
            int32_t r12_3 = r4[0x2b];
            int32_t r1_15 = r0_4;
            
            if (r1_15 >= r12_3)
                r1_15 = r12_3;
            
            if (r0_5 != 1)
                r3_21 = r3_21 + 1;
            
            r3_24 = (r0_5 * (r1_15 << 0xe) / r12_3 + (r3_21 << 0xe)) << 0xe >> 0x10;
        }
        
        r10 = ((r3_24 & ~(r3_24 >> 0x1f)) * 0xf000) >> 0x10;
    }
    
    uint32_t r1_21 = *(r5 + 0xf9);
    int32_t r3_28 = r4[0x48];
    int32_t r0_6 = r1_21 - 2;
    
    if (r1_21 != 2)
        r0_6 = 0xffffffff;
    
    r4[0x48] = r0_6;
    
    if (r3_28 != r0_6 && !r3_28)
    {
        *(r4 + 0x7c) = r3_28;
        r4[0x4c] = 0xff;
        r4[0x29] = r3_28;
        r4[0x2a] = r3_28;
        r4[0x3c] = r3_28;
    }
    
    int16_t var_34;
    
    if (r1_21 == 2)
    {
        uint32_t r1_22 = *(r5 + 0xfa);
        int32_t r3_43;
        int32_t r3_30;
        
        if (r1_22)
        {
            if (r1_22 != 1)
            {
                int32_t r0_25 = r2_12 * 0x49e7;
                int32_t r0_26;
                
                r0_26 = r0_25 < 0 ? 0x7fff : 0;
                
                int32_t r6_6 = 0x49e7 * r9_3;
                int32_t r3_65 = 0x3fff;
                
                if (r6_6 >= 0)
                    r3_65 = 0;
                
                r3_30 = 0 - ((r0_26 + r0_25) >> 0xf) - ((r6_6 + r3_65) >> 0xe);
                goto label_37fe;
            }
            
            int32_t r12_5 = r2_12 - r9_3;
            
            if (r12_5 < 0xffff8000)
                r12_5 = 0xffff8000;
            
            if (r12_5 >= 0x7fff)
                r12_5 = 0x7fff;
            
            int32_t r3_41 = r12_5 * 0x49e7;
            int32_t r2_14 = 0 - r2_12 - r9_3;
            int32_t r12_6;
            
            r12_6 = r3_41 < 0 ? 0x7fff : 0;
            
            if (r2_14 < 0xffff8000)
                r2_14 = 0xffff8000;
            
            if (r2_14 >= 0x7fff)
                r2_14 = 0x7fff;
            
            r3_43 = (r3_41 + r12_6) << 1 >> 0x10;
            r2_12 = r2_14;
        }
        else
        {
            int32_t r0_7 = r2_12 * 0x49e7;
            int32_t r12_4;
            
            r12_4 = r0_7 < 0 ? 0x7fff : 0;
            
            int32_t r6_2 = 0x49e7 * r9_3;
            int32_t r3_29 = 0x3fff;
            
            if (r6_2 >= 0)
                r3_29 = 0;
            
            r3_30 = ((r6_2 + r3_29) >> 0xe) + ((r0_7 + r12_4) >> 0xf);
        label_37fe:
            
            if (r3_30 < 0xffff8000)
                r3_30 = 0xffff8000;
            
            if (r3_30 >= 0x7fff)
                r3_30 = 0x7fff;
            
            r3_43 = r3_30;
        }
        int32_t r0_15;
        
        if (r10 <= 0)
            r0_15 = 0;
        else if (r10 >= 0x5a00)
            r0_15 = 0xb4;
        else
            r0_15 = r10 >> 7 & 0xff;
        
        int32_t r12_7 = *(0x80097fa + (r0_15 << 1));
        int32_t r1_31 = *((r0_15 << 1) + 0x8009964);
        r4[0x3e] = r12_7;
        r4[0x3f] = r1_31;
        uint32_t r9_7 = *r3;
        int32_t r0_16 = r4[0x4c];
        int32_t lr_4 = 0 - (__clz(r9_7) >> 5);
        r4[0x4c] = lr_4;
        
        if (r0_16 == lr_4)
        {
            if (r9_7)
            {
                if (!r0_16)
                    goto label_398a;
                
            label_3b08:
                *(r4 + 0x38) = 0;
                *(r4 + 0x3c) = 0;
            label_398a:
                int32_t r0_20 = ((r1_31 * r3_43) << 2 >> 0x10) - ((r12_7 * r2_12) << 2 >> 0x10);
                int16_t lr_6 = 0x7fff;
                
                if (r0_20 < 0xffff8000)
                    r0_20 = 0xffff8000;
                
                int32_t r3_46 = ((r12_7 * r3_43) << 2 >> 0x10) + ((r1_31 * r2_12) << 2 >> 0x10);
                
                if (r0_20 >= 0x7fff)
                    r0_20 = 0x7fff;
                
                if (r3_46 < 0xffff8000)
                    r3_46 = 0xffff8000;
                
                if (0x7fff >= r3_46)
                    lr_6 = r3_46;
                
                var_34 = r0_20;
                int16_t var_32_1 = lr_6;
                sub_31ac(&var_34, r5[0x3b], &r4[0x29], &r4[0x1c]);
                int32_t r3_48 = r4[0x29];
                
                if (r3_48 < 0)
                    r3_48 = 0 - r3_48;
                
                r4[0x3c] = r3_48;
            }
        }
        else if (!r0_16)
        {
            r4[0x29] = r0_16;
            r4[0x3c] = r0_16;
            r4[0x2a] = r0_16;
            
            if (r9_7)
                goto label_398a;
        }
        else if (r9_7)
            goto label_3b08;
    }
    
    uint32_t lr_9 = *(r4 + 0xa3);
    
    if (!lr_9)
    {
        uint32_t r0_37 = *(r5 + 0xf9);
        
        if (r4[0x52])
        {
            if (*(r5 + 0xfe))
            {
                bool cond:14_1 = r7_2 < 0;
                
                if (r7_2 < 0)
                    r7_2 = 0 - r8_3;
                
                int32_t r1_51 = r5[0x38];
                
                if (cond:14_1)
                    r7_2 = r7_2;
                
                int32_t r8_7 = *(r5 + 0xe2);
                
                if (r1_51 < r7_2)
                    r7_2 = r1_51;
                else if (r7_2 < r8_7)
                    r7_2 = r8_7;
                
                int32_t r2_56 = *(r5 + 0xd6);
                int32_t r12_10;
                
                if (r0_37 == 2)
                    r12_10 = r5[0x34];
                else
                    r12_10 = r5[0x33];
                
                int32_t r9_13 = r5[0x36];
                int16_t r3_103;
                
                if (r2_56 < r11)
                    r3_103 = r2_56;
                else
                {
                    int16_t r3_102 = r11;
                    
                    if (r11 < r9_13)
                        r3_102 = r9_13;
                    
                    r3_103 = r3_102;
                }
                
                int16_t r8_8 = r8_7;
                int16_t r9_14 = r9_13;
                int32_t r7_14 = (((r3_103 - r9_14) << 0xf) / (r2_56 - r9_14)
                    * ((r7_2 - r8_8) << 0xf) / (r1_51 - r8_8)) >> 0xf & 0xffff;
                r4[0x39] = (r12_10 * r7_14) >> 0xf;
            }
            
            int32_t r2_57 = r0_37 - 2;
            
            if (r0_37 != 2)
                r2_57 = 0xffffffff;
            
            int32_t r3_109 = *(r4 + 0x95);
            *(r4 + 0x95) = r2_57;
            
            if (r3_109 != r2_57 && !r3_109)
                r4[0x4b] = 0xff;
            
            if (r0_37 == 2)
            {
                int16_t r3_110 = *(r5 + 0x12);
                int32_t r1_52 = r5[0x1c];
                r4[0x2e] = r3_110;
                r4[0x2f] = 0 - r3_110;
                int32_t r3_112 = r4[0x2d];
                
                if (r3_112 < 0)
                    r3_112 = 0 - r3_112;
                
                uint32_t r3_117;
                
                if (r1_52 >= r3_112)
                    r3_117 = 0;
                else
                {
                    int16_t r1_53 = r1_52;
                    uint32_t r3_116 = (r3_112 - r1_53) / (*(r5 + 0x72) - r1_53);
                    
                    r3_117 = r3_116 > 0x2c ? 0x2d : r3_116;
                }
                
                int32_t r3_119 = *(r5 + (r3_117 << 1) + 0x14);
                int32_t r0_38 = *(r5 + 0xce);
                r4[0x31] = 0 - r3_119;
                int32_t r2_62 = r4[0x39];
                r4[0x30] = r3_119;
                int32_t r2_63 = r2_62 << 0x10;
                r4[0x32] = r0_38;
                
                if (r2_63 != 0x80000000 || r0_38 != 0xffffffff)
                {
                    int32_t r1_54 = r2_63 / r0_38;
                    
                    if (r1_54 >= 0)
                    {
                        int16_t r2_64 = -1;
                        
                        if (0xffff >= r1_54)
                            r2_64 = r1_54;
                        
                        uint32_t r2_65 = r2_64;
                        
                        if (r1_54)
                        {
                            lr_9 = r2_65 > 0xfaee ? 0x31 : r2_65 / 0x51f;
                        }
                    }
                }
                else
                    lr_9 = 0x31;
                
                uint32_t r12_11 = *(r4 + 0x99);
                int32_t r0_39 = r0_38 * *((lr_9 << 1) + 0x8009f0c);
                int32_t r2_67 = r0_39 >> 0x10;
                uint16_t r0_40 = r0_39 >> 0x10;
                int32_t r1_56 = 0 - r0_40;
                int32_t r7_17 = r4[0x4b];
                r4[0x33] = r2_67;
                r4[0x34] = r1_56;
                
                if (r12_11 == 2)
                {
                    r4[0x4b] = 1;
                    int32_t r3_121 = r4[0x29];
                    
                    if (r2_67 >= r3_121)
                    {
                        r2_67 = r1_56;
                        
                        if (r1_56 < r3_121)
                            r2_67 = r3_121;
                    }
                    
                    *(r4 + 0x44) = *(r5 + 0xf2) * (r2_67 - r3_121);
                }
                else if (r12_11 == 3)
                {
                    r4[0x4b] = 2;
                    
                    if (r7_17 != 2)
                    {
                        *(r4 + 0x14) = 0;
                        *(r4 + 0x18) = 0x3840000;
                    }
                    
                    sub_328e(*(r5 + 0xda) - r11, *(r5 + 0xf6), r5[0x39], r3_119, 0, &r4[0x36], 
                        &r4[0xa]);
                }
                else if (r12_11 != 1)
                    r4[0x4b] = 0xff;
                else
                {
                    r4[0x4b] = 0;
                    
                    if (r7_17)
                    {
                        *(r4 + 0x24) = 0;
                        *(r4 + 0x1c) = 0;
                        *(r4 + 0x20) = 0x3e80000;
                        *(r4 + 0x28) = 0x3e80000;
                    }
                    
                    sub_328e(r0_40 - r4[0x3c], *(r5 + 0xf2), r5[0x39], r4[0x3b], 0, &r4[0x38], 
                        &r4[0x12]);
                    sub_328e(*(r5 + 0xda) - r11, *(r5 + 0xf6), r5[0x39], r4[0x3b], 0, &r4[0x37], 
                        &r4[0xe]);
                }
                
                r4[0x35] = 0 - r4[0x32];
            }
        }
        else if (*(r4 + 0xa5))
        {
            int32_t r2_71 = r0_37 - 2;
            
            if (r0_37 != 2)
                r2_71 = 0xffffffff;
            
            int32_t r3_128 = r4[0x49];
            r4[0x49] = r2_71;
            
            if (r2_71 != r3_128 && !r3_128)
            {
                *(r4 + 0x93) = 0xff;
                r4[0x4a] = 0xff;
            }
            
            if (r0_37 == 2)
            {
                uint32_t r3_129 = *(r4 + 0x99);
                int32_t r2_72 = *(r4 + 0x93);
                
                if (r3_129 == 2)
                {
                    *(r4 + 0x93) = 1;
                    
                    if (r2_72 != 1)
                        r4[4] = 1;
                    
                    uint32_t r3_134 = r5[0x3f];
                    int32_t r1_60 = r4[0x30];
                    int32_t r2_74 = r4[0x31];
                    int32_t r0_52 = r5[2] << 4;
                    int16_t var_32_2;
                    
                    if (!r3_134 || !r0_52)
                    {
                        var_34 = r1_60;
                        var_32_2 = r2_74;
                        
                        if (!r3_134)
                            r0_52 = r4[0x3a];
                    }
                    else
                    {
                        int32_t r3_135 = r4[0x3a];
                        
                        if (r0_52 <= 0)
                        {
                            if (r3_135 >= r1_60)
                                r3_135 = r1_60;
                            
                            var_32_2 = r2_74;
                            var_34 = r3_135;
                        }
                        else
                        {
                            if (r3_135 < r2_74)
                                r3_135 = r2_74;
                            
                            var_34 = r1_60;
                            var_32_2 = r3_135;
                        }
                    }
                    
                    /* unimplemented  {ssat r0, #0x10, r0} */
                    sub_33c0(r0_52 - var_54, *(r5 + 0xea), r5[0x3d], r4[0x46], var_34, var_32_2, 
                        *(r4 + 0x44), &r4[0x2c], &r4[2]);
                }
                else if (r3_129 == 3)
                {
                    *(r4 + 0x93) = r0_37;
                    
                    if (r2_72 != 2)
                        r4[1] = 1;
                    
                    int32_t r12_14 = r4[0x36];
                    int32_t r3_131 = r4[0x3a];
                    int32_t r0_47 = r4[0x33];
                    int32_t r7_24 = 0 - r12_14;
                    
                    if (r3_131 <= r0_47)
                    {
                        r0_47 = r4[0x34];
                        
                        if (r0_47 < r3_131)
                            r0_47 = r3_131;
                    }
                    
                    int32_t lr_12 = r4[0x31];
                    /* unimplemented  {ssat r0, #0x10, r0} */
                    int16_t var_74_3;
                    
                    var_74_3 = lr_12 >= r7_24 ? lr_12 : r7_24;
                    
                    int32_t r7_25 = r4[0x30];
                    int16_t var_78_2;
                    
                    var_78_2 = r7_25 <= r12_14 ? r7_25 : r12_14;
                    
                    sub_3498(r0_47 - r4[0x29], r5[0x3a], r5[0x3c], r4[0x46], var_78_2, var_74_3, 0, 
                        &r4[0x2c], r4);
                }
                else if (r3_129 == 1)
                {
                    int32_t r2_76 = r4[0x38];
                    *(r4 + 0x93) = 0;
                    int32_t r3_138 = r4[0x3b];
                    
                    if (r2_76 >= r3_138)
                        r2_76 = r3_138;
                    
                    int32_t r3_139 = r4[0x37];
                    
                    if (r3_139 >= r2_76)
                        r3_139 = r2_76;
                    
                    int32_t r2_77 = r4[0x3a];
                    int16_t r2_79;
                    
                    if (r2_77 < 0)
                        r2_79 = -1;
                    else
                    {
                        int16_t r2_78;
                        
                        r2_78 = r2_77 > 0 ? 1 : 0;
                        
                        r2_79 = r2_78;
                    }
                    
                    int32_t r2_80 = r4[0x30];
                    int32_t r3_130 = r2_79 * r3_139;
                    
                    if (r2_80 >= r3_130)
                    {
                        int32_t r2_82 = r4[0x31];
                        
                        if (r3_130 < r2_82)
                            r3_130 = r2_82;
                        
                        r4[0x2c] = r3_130;
                    }
                    else
                        r4[0x2c] = r2_80;
                }
                else
                {
                    *(r4 + 0x93) = 3;
                    r4[0x2c] = r4[0x3a];
                }
                
                if (!var_58)
                    r4[0x4a] = 0xff;
                else
                {
                    r4[0x4a] = 0;
                    
                    if (r4[0x4a])
                        r4[8] = 1;
                    
                    int32_t r0_55 = r4[0x32];
                    int32_t r3_145 = 0 - r4[0x39];
                    
                    if (r0_55 >= r3_145)
                    {
                        r0_55 = r4[0x35];
                        
                        if (r0_55 < r3_145)
                            r0_55 = r3_145;
                    }
                    
                    /* unimplemented  {ssat r0, #0x10, r0} */
                    sub_32ec(r0_55 - r4[0x2a], *(r5 + 0xe6), *(r5 + 0xee), 0, r4[0x2e], r4[0x2f], 
                        0, &r4[0x2d], &r4[6]);
                }
            }
        }
    }
    else
    {
        if (*(r5 + 0xfd))
        {
            uint32_t r3_56;
            
            if (*(r4 + 0x9d) << 0x1d < 0)
                r3_56 = 1;
            else
            {
                int32_t r2_19 = r4[0x46];
                
                if (r2_19 < 0)
                    r2_19 = 0 - r2_19;
                
                uint32_t r3_53 = *r3;
                
                if (r3_53)
                {
                    if (r5[0x37] <= r11)
                        r3_53 = 0;
                    else if (*(r5 + 0xde) >= r2_19)
                        r3_53 = 0;
                    else
                        r3_53 = 1;
                }
                
                r3_56 = r3_53;
            }
            
            uint32_t r3_57 = r3_56 << 2;
            char r8_4;
            
            r8_4 = r3_2 == 7 ? 2 : 0;
            
            if (!r3_2)
                r3_57 += 1;
            
            uint32_t r8_5 = r3_57 + r8_4;
            uint32_t r0_22;
            
            r0_22 = r8_5 ? 1 : 0;
            
            sub_321c(r0_22, r5[4], *(r5 + 0xe), r4 + 0xa1, &r4[0x17]);
            uint32_t r3_61 = *(r4 + 0xa1);
            r4[0x16] = r3_61;
            
            if (r3_61 == r4[0x16])
                r8_5 = *(r4 + 0x9d);
            
            result[3] = r8_5;
            *(r4 + 0x9d) = r8_5;
        }
        
        uint32_t r3_64 = r3[1];
        uint32_t r0_24;
        
        if (*(r4 + 0xa1) || !*r3)
            r0_24 = 1;
        else
            r0_24 = __clz(r3_64) >> 5;
        
        int32_t r1_34;
        uint32_t r2_28;
        
        if (r3_64 == 2)
        {
            r1_34 = 1;
            r2_28 = 0;
        }
        else
        {
            uint32_t r2_26 = r5[0x3f];
            r1_34 = r2_26;
            
            if (r2_26)
                r1_34 = 1;
            
            if (r3_64 != 3)
                r2_28 = 0;
            else
                r2_28 = __clz(r2_26) >> 5;
        }
        
        uint32_t r12_8 = r4[0x4f];
        
        if (r12_8)
        {
            r12_8 = *(r4 + 0x9f);
            
            if (r12_8 != 1)
            {
                *(r4 + 0x99) = 0;
                
                if (!r0_24 && (r3_64 == 1 || r1_34 | r2_28))
                {
                    *(r4 + 0x9f) = 1;
                    
                    if (r2_28)
                    {
                    label_3e72:
                        r4[0x50] = 2;
                        *(r4 + 0x99) = 3;
                    }
                    else if (!r1_34)
                    {
                        r4[0x50] = 3;
                        *(r4 + 0x99) = 1;
                    }
                    else
                    {
                        r4[0x50] = 1;
                        *(r4 + 0x99) = 2;
                    }
                }
            }
            else if (!r0_24)
            {
                uint32_t r0_30 = r4[0x50];
                
                if (r0_30 == 1)
                {
                    *(r4 + 0x99) = 2;
                    
                    if (!r1_34)
                    {
                        if (!r2_28)
                        {
                            r4[0x50] = 3;
                            *(r4 + 0x99) = r0_30;
                        }
                        else
                        {
                            r4[0x50] = 2;
                            *(r4 + 0x99) = 3;
                        }
                    }
                }
                else if (r0_30 == 2)
                {
                    *(r4 + 0x99) = 3;
                    
                    if (!r2_28)
                    {
                        if (!r1_34)
                        {
                            r4[0x50] = 3;
                            *(r4 + 0x99) = r12_8;
                        }
                        else
                        {
                            r4[0x50] = r12_8;
                            *(r4 + 0x99) = r0_30;
                        }
                    }
                }
                else
                {
                    *(r4 + 0x99) = r12_8;
                    
                    if (r2_28)
                        goto label_3e72;
                    
                    if (r1_34)
                    {
                        r4[0x50] = r12_8;
                        *(r4 + 0x99) = 2;
                    }
                }
            }
            else
            {
                r4[0x50] = 0;
                *(r4 + 0x9f) = 2;
                *(r4 + 0x99) = 0;
            }
        }
        else
        {
            r4[0x4f] = 0x201;
            *(r4 + 0x99) = r12_8;
        }
        
        if (r7_2 < 0xffffc180)
            r7_2 = 0xffffc180;
        
        if (r7_2 >= 0x3e80)
            r7_2 = 0x3e80;
        
        if (*(r5 + 0xf9) == 2)
        {
            int16_t var_30_1 = 0;
            int16_t var_2e_1 = *(r5 + 0x12);
            int16_t var_2c_1 = *(r5 + 0xda);
            int16_t var_2a_1 = *(r5 + 0xce);
            void var_28;
            r7_2 = ((*(&var_28 + (r3_64 << 1) - 8) << 5) / 0x7d * r7_2) << 4 >> 0x10;
        }
        
        uint32_t r3_71 = *(r4 + 0x99);
        int32_t r2_34 = *(r4 + 0x97);
        char r1_35;
        
        r1_35 = r3_71 ? 1 : 0;
        
        *(r4 + 0x97) = r1_35;
        
        if (r3_71)
            r4[0x3a] = r7_2;
        else
        {
            if (r2_34)
            {
                *(r4 + 0x48) = r3_71;
                r4[0x53] = 1;
            }
            
            uint32_t r0_31 = r4[0x53];
            int32_t r1_37 = r4[0x46] << 0xc;
            r4[0x53] = 0;
            int32_t r2_35;
            
            if (r0_31)
                r2_35 = r1_37;
            else
                r2_35 = *(r4 + 0x48);
            
            int32_t r3_73 = *r5;
            int32_t r7_5;
            
            r7_5 = (0 - r2_35) << 4 < 0 ? (0 - r2_35) | 0xf8000000 : (0 - r2_35) & 0x7ffffff;
            
            if (r3_73 >= r7_5)
            {
                r3_73 = (0 - r3_73) << 4 < 0 ? (0 - r3_73) | 0xf8000000 : (0 - r3_73) & 0x7ffffff;
                
                if (r3_73 < r7_5)
                    r3_73 = r7_5;
            }
            
            int32_t r3_75 = r3_73 + r2_35;
            int32_t r3_76;
            
            r3_76 = r3_75 << 4 < 0 ? r3_75 | 0xf8000000 : r3_75 & 0x7ffffff;
            
            if (!r0_31)
                r1_37 = r3_76;
            
            *(r4 + 0x48) = r1_37;
            r4[0x3a] = r3_76 >> 0xc;
        }
        
        int32_t r3_78 = r4[0x3a];
        
        if (r3_78 < 0)
            r3_78 = 0 - r3_78;
        
        r4[0x3b] = r3_78;
    }
    
    uint32_t lr_7 = *(r5 + 0xf9);
    int32_t r2_36 = *(r4 + 0x91);
    int32_t r3_79;
    int32_t r8_6;
    
    if (lr_7 == 2)
    {
        r3_79 = 0;
        r8_6 = r4[0x2c];
    }
    else
    {
        r3_79 = 0xffffffff;
        r8_6 = r4[0x3a];
    }
    
    *(r4 + 0x91) = r3_79;
    
    if (r3_79 != r2_36 && !r2_36)
    {
        *(r4 + 0x4c) = r2_36;
        r4[0x28] = r2_36;
    }
    
    if (!r3_79)
    {
        int32_t r9_10 = r4[0x2d];
        int32_t r0_32 = r4[0x3f];
        int32_t r1_38 = r4[0x2c];
        int32_t r3_80 = r4[0x3e];
        int32_t r2_40 = ((r0_32 * r9_10) << 2 >> 0x10) - ((r3_80 * r1_38) << 2 >> 0x10);
        
        if (r2_40 < 0xffff8000)
            r2_40 = 0xffff8000;
        
        int32_t r3_83 = ((r3_80 * r9_10) << 2 >> 0x10) + ((r0_32 * r1_38) << 2 >> 0x10);
        
        if (r2_40 >= 0x7fff)
            r2_40 = 0x7fff;
        
        if (r3_83 < 0xffff8000)
            r3_83 = 0xffff8000;
        
        if (r3_83 >= 0x7fff)
            r3_83 = 0x7fff;
        
        int32_t r3_84 = 0x376d * r3_83;
        int32_t r1_41 = 0x3fff;
        
        if (r3_84 >= 0)
            r1_41 = 0;
        
        int32_t r3_88 = ((r1_41 + r3_84) >> 0xe) - (((r2_40 >> 0xf & 1) + r2_40) << 0x10 >> 0x11);
        
        if (r3_88 < 0xffff8000)
            r3_88 = 0xffff8000;
        
        if (r3_88 >= 0x7fff)
            r3_88 = 0x7fff;
        
        int32_t r1_43 = r3_88;
        int32_t r1_45 = 0 - r2_40 - r3_88;
        
        if (r1_45 < 0xffff8000)
            r1_45 = 0xffff8000;
        
        int32_t r6_8 = r1_43;
        int32_t r0_33 = r2_40;
        
        if (r1_45 >= 0x7fff)
            r1_45 = 0x7fff;
        
        if (r6_8 >= r0_33)
            r6_8 = r0_33;
        
        int32_t r9_11 = r1_45;
        
        if (r0_33 < r1_43)
            r0_33 = r1_43;
        
        if (r0_33 < r9_11)
            r0_33 = r9_11;
        
        int32_t r0_34;
        
        r0_34 = r9_11 <= r6_8 ? r0_33 + r9_11 : r0_33 + r6_8;
        
        if (r0_34 < 0xffff8000)
            r0_34 = 0xffff8000;
        
        if (r0_34 >= 0x7fff)
            r0_34 = 0x7fff;
        
        int32_t r2_41 = r2_40 - (r0_34 >> 1);
        
        if (r2_41 < 0xffff8000)
            r2_41 = 0xffff8000;
        
        int32_t r3_89 = r3_88 - (r0_34 >> 1);
        
        if (r2_41 >= 0x7fff)
            r2_41 = 0x7fff;
        
        if (r3_89 < 0xffff8000)
            r3_89 = 0xffff8000;
        
        int32_t r1_46 = r1_45 - (r0_34 >> 1);
        
        if (r3_89 >= 0x7fff)
            r3_89 = 0x7fff;
        
        if (r1_46 < 0xffff8000)
            r1_46 = 0xffff8000;
        
        if (r1_46 >= 0x7fff)
            r1_46 = 0x7fff;
        
        r4[0x26] = (0x49e7 * r2_41) >> 0xe;
        r4[0x27] = (0x49e7 * r3_89) >> 0xe;
        r4[0x28] = (0x49e7 * r1_46) >> 0xe;
    }
    
    int32_t r1_49;
    int32_t r2_44;
    int32_t r3_93;
    
    if (!var_58)
    {
    label_43d6:
        int16_t r5_1 = r8_6;
        int32_t r3_159 = *(r3_2 + 0x8009f82);
        int32_t r3_160 = r3_159 & ~(r3_159 >> 0x1f);
        
        if (r3_160 >= 5)
            r3_160 = 5;
        
        r1_49 = r5_1 * *(r3_160 * 3 + 0x8009f70);
        r2_44 = r5_1 * *(r3_160 * 3 + 0x8009f71);
        r3_93 = r5_1 * *(r3_160 * 3 + 0x8009f72);
    }
    else if (lr_7 != 2)
    {
        if (lr_7 != 1)
            goto label_43d6;
        
        int32_t r3_152;
        
        if (!*(r5 + 0xfe))
            r3_152 = r10;
        else
        {
            int16_t r0_60 = r10 + ((r4[0x39] * r4[0x47]) << 2);
            r3_152 = r0_60 - ((sub_3174(r0_60, 0x5a00) * 0x1680000) >> 0x13 << 9);
        }
        
        int32_t r3_153;
        
        if (r3_152 <= 0)
            r3_153 = 0;
        else if (r3_152 >= 0x5a00)
            r3_153 = 0xb4;
        else
            r3_153 = r3_152 >> 7 & 0xff;
        
        r1_49 = (r8_6 * *((r3_153 << 1) + 0x8009ace)) << 2 >> 0x10;
        r2_44 = (r8_6 * *((r3_153 << 1) + 0x8009c38)) << 2 >> 0x10;
        r3_93 = (r8_6 * *(0x80097fa + ((r3_153 + 0x2d4) << 1))) << 2 >> 0x10;
    }
    else
    {
        r1_49 = r4[0x26];
        r2_44 = r4[0x27];
        r3_93 = r4[0x28];
    }
    
    result[1] = r2_44 >> 4;
    *result = r1_49 >> 4;
    r4[0x4d] = r3[4];
    *(r4 + 0x9b) = r3[5];
    char r2_51 = r3[6];
    r4[0x45] = r11;
    r4[0x4e] = r2_51;
    r4[0x46] = r8_6;
    r4[0x40] = r0_4;
    *(r4 + 0xa3) = *(r4 + 0xa5);
    r4[0x52] = r2_8;
    *(r4 + 0xa5) = r2_9;
    result[2] = r3_93 >> 4;
    result[4] = var_54 >> 4;
    result[5] = r10 >> 6;
    result[6] = r4[0x29];
    result[7] = r4[0x2a];
    return result;
}

void sub_441c(int32_t* arg1)
{
    void* r3 = arg1[3];
    void* r1 = *arg1;
    *(r3 + 0x90) = 0xffffffff;
    *(r3 + 0x94) = 0xffffffff;
    *(r3 + 0x98) = 0xff;
    int16_t r1_1 = *(r1 + 0xa);
    *(r3 + 0x80) = r1_1;
    *(r3 + 0x56) = r1_1;
    *(r3 + 0x40) = r1_1;
    *(r3 + 0x32) = 0;
    *(r3 + 0x30) = 0;
    *(r3 + 0x28) = 0x3e80000;
    *(r3 + 0x20) = 0x3e80000;
    *(r3 + 0x18) = 0x3840000;
    *(r3 + 0x5c) = 0xc7c03840;
    *(r3 + 0x60) = 0xc7c03840;
    *(r3 + 0xa3) = 1;
    *(r3 + 0x64) = 0x2ee02ee0;
    *(r3 + 0x68) = 0xd120d120;
    *(r3 + 0xa6) = 1;
    *(r3 + 8) = 1;
    *(r3 + 2) = 1;
    *(r3 + 0x10) = 1;
}

int32_t sub_452a(int32_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4 @ r7, int16_t* arg5 @ r8, int16_t* arg6 @ r9, int16_t* arg7 @ r10, int16_t* arg8 @ r11, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13, int32_t arg14, int32_t arg15, int32_t arg16, int32_t arg17)
{
    int32_t r2 = (arg3 & arg1) << 4;
    int32_t r4 = r2 << 4;
    
    if (!(*0x2000035c % 0x3e8))
    {
        sub_67f4(*(r4 + 0xc), 0x28f, 0x2000010c);
        *0x20000108 = *0x2000010e;
    }
    
    *0x20000362 = *arg8 - *(r4 + 4);
    *0x20000364 = *arg7 - *(r4 + 6);
    int16_t r2_5 = *arg4 - *(r4 + 2);
    int16_t r9 = *(r4 + 0xa);
    *0x20000368 = *arg6 - *(r4 + 8);
    int16_t r4_1 = *r4;
    *0x2000036a = *arg5 - r9;
    int32_t r2_6 = r2_5;
    int16_t r3_12 = *(r2 << 4) - r4_1;
    *0x20000360 = r2_6;
    
    if (r2_6 < 0)
        r2_6 = 0 - r2_6;
    
    int32_t r3_13 = r3_12;
    *0x20000366 = r3_13;
    int32_t r1_3;
    
    if (r2_6 > 0x44c || !*0x2000036c)
        r1_3 = *0x40013444 & 0xffff7fff;
    else
        r1_3 = *0x40013444 | 0x8000;
    
    *0x40013444 = r1_3;
    
    if (r3_13 < 0)
        r3_13 = 0 - r3_13;
    
    int32_t r2_10;
    
    if (r3_13 > 0x44c || !*0x2000036c)
        r2_10 = *0x40012c44 & 0xffff7fff;
    else
        r2_10 = *0x40012c44 | 0x8000;
    
    *0x40012c44 = r2_10;
    int32_t result = 0x20000359;
    *0x2000035c += 1;
    uint32_t r2_11 = *0x20000356;
    uint32_t r12 = *0x20000359;
    uint32_t r1_5;
    int32_t r3_18;
    
    if (r2_11)
    {
        r1_5 = *0x2000035c / 0x1388;
        r3_18 = *0x20000358 + 1;
    }
    
    if (r2_11 && !(r1_5 % r3_18))
    {
        if (!r12)
        {
            *0x20000359 = 1;
            uint32_t r3_22 = *0x20000357 + 1;
            result = *0x20000355 + 2;
            *0x20000357 = r3_22;
            
            if (r3_22 > result)
                *0x20000357 = 1;
        }
        
        if (!(*0x2000035c % r2_11))
        {
            uint32_t r3_24 = *0x20000355;
            
            if (*0x20000357 <= r3_24 || !r3_24)
            {
                result = 0x40010800;
                sub_1fd6(0x40010800, 0x10);
            }
        }
    }
    else if (r12)
    {
        result = 0x40010800;
        sub_1fcc(0x40010800, 0x10, 0);
        *0x20000359 = 0;
    }
    
    int16_t r3_26;
    
    if (*0x20000101 == 2)
        r3_26 = 0x6e;
    else
        r3_26 = 0;
    
    *0x20000370 = r3_26;
    
    if (!*0x20000354)
    {
        *0x20000354 = 1;
        uint32_t r2_14 = *0x2000036c;
        
        if (r2_14)
        {
            if (!(*0x2000098a | *0x20000a46))
                r2_14 = 1;
            else
                r2_14 = 0;
        }
        
        uint8_t r2_16 = r2_14;
        *0x2000036d = r2_16;
        int32_t r12_1 = *0x40010c08;
        int32_t r1_7 = *0x40010c08;
        char r0_6 = (*0x40010c08 ^ 0x40) >> 6 & 1;
        *0x20000b0c = r2_16;
        *0x20000b11 = r0_6;
        char lr_2 = *0x20000146;
        *0x20000b12 = (r1_7 ^ 0x80) >> 7 & 1;
        int16_t r0_9 = *0x20000362;
        *0x20000b0d = lr_2;
        *0x20000b14 = r0_9;
        int16_t lr_3 = *0x20000374;
        *0x20000b16 = *0x20000364;
        int16_t r0_11 = *0x20000360;
        *0x20000b0e = lr_3;
        *0x20000b10 = (r12_1 ^ 0x20) >> 5 & 1;
        *0x20000b18 = r0_11;
        sub_357c(*0x800a880);
        int32_t r9_1 = *0x20000a40;
        int32_t r0_13 = *0x20000a42;
        int32_t lr_4 = *0x20000a44;
        int32_t r3_30 = *0x20000370;
        uint32_t r9_2;
        
        if (r9_1 + 0x3e7 >= 0x7d0 - r3_30)
            r9_2 = 0x7d0 - r3_30;
        else if (r3_30 <= r9_1 + 0x3e8)
            r9_2 = r9_1 + 0x3e8;
        else
            r9_2 = r3_30;
        
        *0x40013434 = r9_2;
        uint32_t r0_14;
        
        if (0x7d0 - r3_30 <= r0_13 + 0x3e7)
            r0_14 = 0x7d0 - r3_30;
        else if (r3_30 <= r0_13 + 0x3e8)
            r0_14 = r0_13 + 0x3e8;
        else
            r0_14 = r3_30;
        
        *0x40013438 = r0_14;
        uint32_t r3_31;
        
        if (0x7d0 - r3_30 <= lr_4 + 0x3e7)
            r3_31 = 0x7d0 - r3_30;
        else if (r3_30 <= lr_4 + 0x3e8)
            r3_31 = lr_4 + 0x3e8;
        else
            r3_31 = r3_30;
        
        *0x4001343c = r3_31;
        int32_t lr_5 = *0x40011008;
        int32_t r12_5 = *0x40011008;
        int32_t r0_16 = *0x40011008;
        char r1_8 = *0x2000036d;
        *0x20000a51 = *0x20000146;
        *0x20000a50 = r1_8;
        *0x20000a52 = *0x20000378;
        *0x20000a54 = (lr_5 ^ 0x400) >> 0xa & 1;
        *0x20000a55 = (r12_5 ^ 0x800) >> 0xb & 1;
        *0x20000a56 = (r0_16 ^ 0x1000) >> 0xc & 1;
        *0x20000a58 = *0x20000368;
        *0x20000a5a = *0x2000036a;
        *0x20000a5c = *0x20000366;
        sub_357c(*0x800a884);
        int32_t r1_9 = *0x20000984;
        int32_t r2_28 = *0x20000986;
        int32_t r6_1 = *0x20000988;
        int32_t r3_32 = *0x20000370;
        result = 0x7d0 - r3_32;
        uint32_t r1_10;
        
        if (r1_9 + 0x3e7 >= result)
            r1_10 = result;
        else if (r3_32 <= r1_9 + 0x3e8)
            r1_10 = r1_9 + 0x3e8;
        else
            r1_10 = r3_32;
        
        *0x40012c34 = r1_10;
        uint32_t r2_29;
        
        if (result <= r2_28 + 0x3e7)
            r2_29 = result;
        else if (r3_32 <= r2_28 + 0x3e8)
            r2_29 = r2_28 + 0x3e8;
        else
            r2_29 = r3_32;
        
        *0x40012c38 = r2_29;
        uint32_t r3_33;
        
        if (result <= r6_1 + 0x3e7)
            r3_33 = result;
        else if (r3_32 <= r6_1 + 0x3e8)
            r3_33 = r6_1 + 0x3e8;
        else
            r3_33 = r3_32;
        
        *0x40012c3c = r3_33;
        *0x20000354 = 0;
    }
    
    return result;
}

int32_t sub_4928(int16_t* arg1)
{
    while (true)
    {
        if (arg1 >= 0x8010800)
            return 1;
        
        if (*arg1 != 0xffff)
            break;
        
        arg1 = &arg1[2];
    }
    
    return 0;
}

uint32_t sub_494c(int32_t arg1, int32_t arg2)
{
    uint32_t r3_1 = *0x8010000;
    uint32_t r0_1 = *0x8020000;
    
    if (r0_1)
    {
        if (r3_1)
            return 0xab;
        
        if (r0_1 == 0xeeee)
            r3_1 = 0x40;
    }
    else if (r3_1 != 0xeeee)
        r3_1 = 0x40;
    else
        r3_1 = 0;
    
    int32_t r4_3 = (r3_1 + 0x10020) << 0xb;
    
    while (true)
    {
        if (r4_3 >= 0x80107ff + (r3_1 << 0xb))
            return 0x80;
        
        if (*r4_3 == 0xffffffff)
            break;
        
        r4_3 += 4;
    }
    
    int32_t r0_4 = sub_1c68(1, r4_3, arg2, 0);
    
    if (!r0_4)
        r0_4 = sub_1c68(1, r4_3 + 2, arg1, 0);
    
    return r0_4;
}

int32_t sub_49c8()
{
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_10 = 0x8010000;
    int32_t var_c = 1;
    int32_t r0 = sub_4928(0x8010000);
    int32_t result_2;
    int32_t result;
    
    if (!r0)
    {
        result_2 = sub_1d54(&var_18, &var_1c);
        result = result_2;
    }
    
    if (r0 || !result_2)
    {
        int32_t result_1 = sub_1c68(1, 0x8010000, 0, 0);
        result = result_1;
        
        if (!result_1)
        {
            int32_t var_10_1 = 0x8018000;
            
            if (!sub_4928(0x8020000))
                return sub_1d54(&var_18, &var_1c);
        }
    }
    
    return result;
}

int32_t sub_4a28(int32_t arg1, int16_t* arg2)
{
    uint32_t r3_1 = *0x8010000;
    
    if (r3_1)
    {
        if (*0x8020000)
            return 0xab;
        
        r3_1 = 0x40;
    }
    
    uint32_t r4_1 = r3_1 << 0xb;
    int16_t* r2_2 = 0x80107fe + r4_1;
    
    while (true)
    {
        if (0x8010002 + r4_1 >= r2_2)
            return 1;
        
        if (*r2_2 == arg1)
            break;
        
        r2_2 -= 4;
    }
    
    *arg2 = *(r2_2 - 2);
    return 0;
}

uint32_t sub_4a78()
{
    int16_t* r0 = 0x8020000;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    uint32_t i_1 = *0x8010000;
    uint32_t i_2 = *0x8020000;
    int32_t var_20 = 0x8010000;
    int32_t var_1c = 1;
    int32_t r0_1;
    uint32_t result;
    int32_t r1_2;
    
    if (i_1 == 0xeeee)
    {
        if (!i_2)
        {
            uint32_t i = i_2;
            int32_t r6_1 = 0xffffffff;
            int16_t* r5_1 = 0x20000120;
            
            do
            {
                uint32_t r0_5 = *r5_1;
                r5_1 = &r5_1[1];
                
                if (*0x8010006 == r0_5)
                    r6_1 = i;
                
                if (r6_1 != i && sub_4a28(r0_5, 0x2000037e) != 1)
                {
                    result = sub_494c(*(r5_1 - 2), *0x2000037e);
                    
                    if (result)
                        return result;
                }
                
                i += 1;
            } while (i != 0x13);
            
            r0_1 = sub_1c68(1, 0x8010000, 0, 0);
            
            if (!r0_1)
            {
                var_28 = r0_1;
                int32_t var_20_1 = 0x8018000;
                int32_t var_1c_1 = 1;
                r0 = 0x8020000;
                goto label_4ab6;
            }
        }
        else if (i_2 != 0xffff)
        {
        label_4aac:
            r0_1 = sub_49c8();
        label_4aee:
            
            if (!r0_1)
                return 0;
        }
        else
        {
            int32_t var_20_2 = 0x8018000;
            int32_t r0_8 = sub_4928(0x8020000);
            
            if (!r0_8)
                r0_1 = sub_1d54(&var_28, &var_2c);
            
            if (r0_8 || !r0_1)
            {
                r1_2 = 0x8010000;
            label_4aea:
                r0_1 = sub_1c68(1, r1_2, 0, 0);
                goto label_4aee;
            }
        }
    }
    else if (i_1 == 0xffff)
    {
        if (!i_2)
        {
            r0 = 0x8010000;
        label_4ab6:
            
            if (sub_4928(r0))
                return 0;
            
            r0_1 = sub_1d54(&var_28, &var_2c);
            goto label_4aee;
        }
        
        if (i_2 != 0xeeee)
            goto label_4aac;
        
        int32_t r0_3 = sub_4928(0x8010000);
        
        if (!r0_3)
            r0_1 = sub_1d54(&var_28, &var_2c);
        
        if (r0_3 || !r0_1)
        {
            r1_2 = 0x8020000;
            goto label_4aea;
        }
    }
    else
    {
        if (i_1 || !i_2)
            goto label_4aac;
        
        if (i_2 == 0xffff)
        {
            int32_t var_20_3 = 0x8018000;
            goto label_4ab6;
        }
        
        int32_t r6_2 = 0xffffffff;
        int16_t* r5_2 = 0x20000120;
        
        do
        {
            uint32_t r0_10 = *r5_2;
            r5_2 = &r5_2[1];
            
            if (*0x8020006 == r0_10)
                r6_2 = i_1;
            
            if (r6_2 != i_1 && sub_4a28(r0_10, 0x2000037e) != 1)
            {
                result = sub_494c(*(r5_2 - 2), *0x2000037e);
                
                if (result)
                    return result;
            }
            
            i_1 += 1;
        } while (i_1 != 0x13);
        
        r0_1 = sub_1c68(1, 0x8020000, 0, 0);
        
        if (!r0_1)
        {
            var_28 = r0_1;
            r0 = 0x8010000;
            int32_t var_20_4 = 0x8010000;
            int32_t var_1c_2 = 1;
            goto label_4ab6;
        }
    }
    return r0_1;
}

uint32_t sub_4c08(int32_t arg1, int32_t arg2)
{
    uint32_t i_2 = sub_494c(arg1, arg2);
    uint32_t i = i_2;
    
    if (i_2 == 0x80)
    {
        int32_t var_34 = 0;
        int32_t r5_1 = 0x8020000;
        int32_t r7_1;
        
        if (!*0x8010000)
            r7_1 = 0x8010000;
        else
        {
            if (*0x8020000)
                return 0xab;
            
            r5_1 = 0x8010000;
            r7_1 = 0x8018000;
        }
        
        int32_t r0 = sub_1c68(1, r5_1, 0xeeee, 0);
        
        if (r0)
            return r0;
        
        uint32_t i_3 = sub_494c(arg1, arg2);
        i = i_3;
        
        if (!i_3)
        {
            i = 0x13;
            int16_t* r8_1 = 0x20000120;
            
            do
            {
                uint32_t r0_2 = *r8_1;
                r8_1 = &r8_1[1];
                
                if (arg1 != r0_2 && sub_4a28(r0_2, 0x2000037e) != 1)
                {
                    uint32_t r0_7 = sub_494c(*(r8_1 - 2), *0x2000037e);
                    
                    if (r0_7)
                        return r0_7;
                }
                
                i = i - 1;
            } while (i);
            
            uint32_t i_1 = i;
            int32_t var_28_1 = r7_1;
            int32_t var_24_1 = 1;
            r0 = sub_1d54(&i_1, &var_34);
            
            if (r0)
                return r0;
            
            r0 = sub_1c68(1, r5_1, 0, 0);
            
            if (r0)
                return r0;
        }
    }
    
    return i;
}

void* sub_4cd8()
{
    int32_t var_28 = 1;
    int32_t var_24 = 0x10;
    int32_t var_18 = 0;
    int32_t var_14 = 0x380000;
    int32_t var_38 = 2;
    int32_t var_1c = 2;
    sub_1fe8(&var_38);
    int32_t var_64 = 0xf;
    int32_t var_60 = 2;
    int32_t var_58 = 0x400;
    int32_t var_54 = 0;
    int32_t var_5c = 0;
    sub_2394(&var_64, 2);
    int32_t var_48 = 0x4000;
    int32_t var_50 = 2;
    sub_2518(&var_50);
    sub_1690(sub_24cc() / 0x3e8);
    sub_16bc(4);
    return sub_1610(0xffffffff, 0, 0);
}

void sub_4d48() __noreturn
{
    sub_11a0();
    *0x40021018 |= 1;
    int32_t var_30 = *0x40021018 & 1;
    sub_15ec(3);
    sub_1610(0xfffffff4, 0, 0);
    sub_1610(0xfffffff5, 0, 0);
    sub_1610(0xfffffff6, 0, 0);
    sub_1610(0xfffffffb, 0, 0);
    sub_1610(0xfffffffc, 0, 0);
    sub_1610(0xfffffffe, 0, 0);
    sub_1610(0xffffffff, 0, 0);
    sub_4cd8();
    *0x40021014 &= 0xfffffffe;
    sub_53e4();
    sub_55fc();
    sub_57e8();
    sub_5914();
    sub_5ab8();
    sub_1fcc(0x40010800, 0x20, 1);
    sub_5d40();
    sub_137c(0x20000770);
    sub_137c(0x200005d8);
    sub_5b78();
    sub_1fcc(0x40010c00, 4, 1);
    sub_6a48();
    sub_6160();
    uint32_t var_2c = *0x200007f4 << 0x10;
    *0x200007f4;
    
    while (sub_1fc0(0x40010800, 2))
        sub_11e8(0xa);
    
    while (true)
    {
        if (*0x2000035c - *0x20000380 > 0x20)
        {
            sub_6010();
            sub_5c18();
            uint32_t r6_3 = *0x2000036c | *0x20000a46 | *0x2000098a;
            
            if (!r6_3)
            {
                void* r2_2 = *0x200003a6 * 0xe;
                int32_t r3_16 = *(r2_2 + 0x2000014a);
                
                if (r3_16 < 0)
                    r3_16 = 0 - r3_16;
                
                if (r3_16 <= 0x31)
                {
                    int32_t r3_18 = *(r2_2 + 0x20000158);
                    
                    if (r3_18 < 0)
                        r3_18 = 0 - r3_18;
                    
                    if (r3_18 <= 0x31)
                    {
                        sub_5bdc(6);
                        sub_5bdc(4);
                        sub_11e8(0x64);
                        *0x20000388 = r6_3;
                        *0x20000390 = r6_3;
                        *0x2000036c = 1;
                        sub_7610(0x8009f8a);
                    }
                }
            }
            
            sub_6b54(*(0xe * *0x200003a6 + 0x2000014a), 0x1e0, 0x20000394);
            sub_6b54(*(0xe * *0x200003a6 + 0x20000158), 0x1e0, 0x2000038c);
            sub_67f4(*0x20000394 >> 4, 0x1999, 0x20000390);
            sub_67f4(*0x2000038c >> 4, 0x1999, 0x20000388);
            int32_t r0_8 = *0x2000038a;
            int32_t r1_1 = *0x20000392;
            *0x2000050a = r0_8;
            sub_6b70(r0_8 << 4, r1_1 << 4, 0x20000502, 0x200004fe);
            int32_t r0_11 = sub_63f4();
            *0x20000378 = 0 - r0_11;
            *0x200004fe = r0_11;
            *0x20000374 = r0_11;
            *0x20000502 = r0_11;
            sub_67f4(*0x200007f4, 0x28f, &var_2c);
            int32_t r12_1 = *(&var_2c + 2);
            int32_t r2_9 = (r12_1 - 0x677) * 0x83 / 0xffffffbd + 0x166;
            *0x20000504 = r2_9;
            int32_t r0_16 = *0x20000108 * 0xf82 / 0x5d4;
            *0x20000508 = r0_16;
            uint16_t r3_28 = *0x20000b18 * 0xfffe;
            *0x20000500 = r3_28;
            uint16_t r1_6 = *0x20000a5c * 0xfffe;
            *0x20000506 = r1_6;
            *0x2000050c = r3_28 + r1_6;
            
            if (!(*0x20000430 % 0x32))
            {
                int32_t var_3c_1 = r12_1;
                int32_t var_38_1 = r2_9;
                uint32_t var_44_1 = *0x200007f0;
                int32_t var_40_1 = r0_16;
                int32_t r9_1 = 0xe * *0x200003a6;
                *(0x20000156 + r9_1);
                int32_t var_48_1 = *0x20000502;
                *0x200004fe;
                sub_7504(0x8009fa0, *(0x20000148 + r9_1));
            }
            
            sub_6a48();
            int32_t r3_37 = *0x20000108;
            
            if (r3_37 <= 0x4f1 && *0x20000b2c <= 0x13)
            {
                sub_7610(0x8009fe6);
                sub_610c();
                /* no return */
            }
            
            if (*0x2000098a | *0x20000a46)
            {
                *0x2000036c = 0;
                sub_5ba0(1, 0x18, 1);
            }
            else if (!*0x200003f8)
            {
                if (!*0x200003f9)
                {
                    uint32_t r2_20 = *0x2000037c;
                    
                    if (r2_20)
                        sub_5ba0(4, 0x18, 1);
                    else if (r3_37 > 0x522)
                    {
                        char r3_50;
                        
                        if (*0x20000502 < 0xffffffce)
                        {
                            if (*0x20000880 >= 0)
                            {
                                sub_5ba0(0, 0, 0);
                                r3_50 = 0;
                            }
                            else
                            {
                                sub_5ba0(0, 5, 1);
                                r3_50 = 1;
                            }
                        }
                        else if (*0x200004fe >= 0xffffffce || *0x20000880 >= 0)
                        {
                            sub_5ba0(0, 0, 0);
                            r3_50 = 0;
                        }
                        else
                        {
                            sub_5ba0(0, 5, 1);
                            r3_50 = 1;
                        }
                        
                        *0x20000434 = r3_50;
                    }
                    else
                        sub_5ba0(r2_20 & 0xff, 0xa, 6);
                }
                else
                    sub_5ba0(3, 0x18, 1);
            }
            
            int32_t r3_38 = *0x200004fe;
            
            if (r3_38 < 0)
                r3_38 = 0 - r3_38;
            
            int32_t r2_13 = *0x20000384 + 1;
            *0x20000384 = r2_13;
            int32_t r3_40;
            
            if (r3_38 <= 0x32)
            {
                r3_40 = *0x20000502;
                
                if (r3_40 < 0)
                    r3_40 = 0 - r3_40;
            }
            
            if (r3_38 > 0x32 || r3_40 > 0x32)
                *0x20000384 = 0;
            else if (r2_13 > 0xea60)
            {
                sub_7610(0x800a010);
                sub_610c();
                /* no return */
            }
            
            *0x200003a7 = *0x200003a6;
            *0x20000380 = *0x2000035c;
            *0x20000430 += 1;
        }
    }
}

int32_t sub_51c4()
{
    int32_t r2;
    int32_t var_8 = r2;
    int32_t r1;
    int32_t var_c = r1;
    int32_t r0;
    int32_t var_10 = r0;
    *0x40021014 |= 1;
    int32_t var_c_1 = *0x40021014 & 1;
    sub_1610(sub_0+0xc, 0, 0);
    sub_1674(0xc);
    sub_1610(&data_d, 0, 0);
    sub_1674(0xd);
    *0x20000598 = 0x40004800;
    *0x2000059c = 0x1c200;
    *0x200005a0 = 0;
    *0x200005a4 = 0;
    *0x200005ac = 0xc;
    *0x200005b0 = 0;
    *0x200005a8 = 0;
    *0x200005b4 = 0;
    /* tailcall */
    return sub_2d7c(0x20000598);
}

int32_t* sub_522c(int32_t* arg1)
{
    int32_t var_28;
    int32_t* result = &var_28;
    sub_6c34(result, 0, sub_0+0x10);
    int32_t r3 = *arg1;
    void* r2_7;
    int32_t* r10;
    
    if (r3 == 0x40004400)
    {
        *0x4002101c |= 0x20000;
        int32_t var_38_1 = *0x4002101c & 0x20000;
        *0x40021018 |= 4;
        int32_t var_34_1 = *0x40021018 & 4;
        var_28 = 4;
        int32_t var_24_1 = 2;
        int32_t var_1c_1 = 3;
        sub_1dec(0x40010800, &var_28, r10);
        var_28 = 8;
        int32_t var_24_2 = 0;
        int32_t var_20_1 = 1;
        sub_1dec(0x40010800, &var_28, r10);
        *0x20000510 = 0x4002006c;
        *0x20000514 = 0;
        *0x2000051c = 0x80;
        *0x20000520 = 0;
        *0x20000528 = 0x20;
        *0x2000052c = 0;
        *0x20000518 = 0;
        *0x20000524 = 0;
        sub_16e0(0x20000510);
        arg1[0xd] = 0x20000510;
        *0x20000534 = arg1;
        *0x200007a0 = 0x40020080;
        *0x200007a4 = 0x10;
        *0x200007a8 = 0;
        *0x200007ac = 0x80;
        *0x200007b0 = 0;
        *0x200007b4 = 0;
        *0x200007b8 = 0;
        *0x200007bc = 0;
        sub_16e0(0x200007a0);
        arg1[0xc] = 0x200007a0;
        *0x200007c4 = arg1;
        sub_1610(sub_0+0x26, 0, 0);
        result = sub_1674(0x26);
        r2_7 = *arg1;
        *(r2_7 + 0xc) |= 0x10;
    }
    else if (r3 == 0x40004800)
    {
        *0x4002101c |= 0x40000;
        int32_t var_30_1 = *0x4002101c & 0x40000;
        *0x40021018 |= 8;
        int32_t var_2c_1 = *0x40021018 & 8;
        var_28 = 0x400;
        int32_t var_24_3 = 2;
        int32_t var_1c_2 = 3;
        sub_1dec(0x40010c00, &var_28, r10);
        var_28 = 0x800;
        int32_t var_24_4 = 0;
        int32_t var_20_2 = 1;
        sub_1dec(0x40010c00, &var_28, r10);
        *0x20000554 = 0x40020030;
        *0x20000558 = 0;
        *0x2000056c = 0x20;
        *0x20000570 = 0;
        *0x20000560 = 0x80;
        *0x20000564 = 0;
        *0x2000055c = 0;
        *0x20000568 = 0;
        sub_16e0(0x20000554);
        arg1[0xd] = 0x20000554;
        *0x20000578 = arg1;
        *0x200006a4 = 0x4002001c;
        *0x200006a8 = 0x10;
        *0x200006ac = 0;
        *0x200006b0 = 0x80;
        *0x200006b4 = 0;
        *0x200006b8 = 0;
        *0x200006bc = 0;
        *0x200006c0 = 0;
        sub_16e0(0x200006a4);
        arg1[0xc] = 0x200006a4;
        *0x200006c8 = arg1;
        sub_1610(sub_0+0x27, 0, 0);
        result = sub_1674(0x27);
        r2_7 = *arg1;
        *(r2_7 + 0xc) |= 0x10;
    }
    return result;
}

int32_t sub_53e4()
{
    *0x40021018 |= 4;
    int32_t var_44 = *0x40021018 & 4;
    *0x40021018 |= 8;
    int32_t var_40 = *0x40021018 & 8;
    *0x40021018 |= 0x10;
    int32_t var_34 = 0;
    int32_t var_30 = 0;
    int32_t var_3c = *0x40021018 & 0x10;
    int32_t var_2c = 2;
    int32_t var_38 = 0x20;
    sub_1dec(0x40010c00, &var_38, sub_0);
    var_38 = 0x40;
    sub_1dec(0x40010c00, &var_38, sub_0);
    var_38 = 0x80;
    sub_1dec(0x40010c00, &var_38, sub_0);
    var_38 = 0x400;
    sub_1dec(0x40011000, &var_38, sub_0);
    var_38 = 0x800;
    sub_1dec(0x40011000, &var_38, sub_0);
    var_38 = 0x1000;
    sub_1dec(0x40011000, &var_38, sub_0);
    var_38 = 0x1000;
    int32_t var_30_1 = 1;
    sub_1dec(0x40010800, &var_38, sub_0);
    int32_t var_30_2 = 0;
    var_38 = 2;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 4;
    int32_t var_34_1 = 1;
    sub_1dec(0x40010c00, &var_38, &data_4);
    var_38 = 0x10;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 0x20;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 1;
    int32_t var_34_2 = 3;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 1;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 8;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 2;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 0x10;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 0x20;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 4;
    sub_1dec(0x40011000, &var_38, &data_4);
    var_38 = 8;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 4;
    sub_1dec(0x40010800, &var_38, &data_4);
    var_38 = 0x40;
    int32_t var_34_3 = 2;
    sub_1dec(0x40011000, &var_38, sub_0+0x100);
    var_38 = 0x80;
    sub_1dec(0x40011000, &var_38, sub_0+0x100);
    var_38 = 0x100;
    sub_1dec(0x40011000, &var_38, sub_0+0x100);
    var_38 = 0x80;
    sub_1dec(0x40010800, &var_38, sub_0+0x100);
    var_38 = 1;
    sub_1dec(0x40010c00, &var_38, sub_0+0x100);
    var_38 = 2;
    sub_1dec(0x40010c00, &var_38, sub_0+0x100);
    var_38 = 0x100;
    sub_1dec(0x40010800, &var_38, sub_0+0x100);
    var_38 = 0x200;
    sub_1dec(0x40010800, &var_38, sub_0+0x100);
    var_38 = 0x400;
    sub_1dec(0x40010800, &var_38, sub_0+0x100);
    var_38 = 0x2000;
    sub_1dec(0x40010c00, &var_38, sub_0+0x100);
    var_38 = 0x4000;
    sub_1dec(0x40010c00, &var_38, sub_0+0x100);
    var_38 = 0x8000;
    return sub_1dec(0x40010c00, &var_38, sub_0+0x100);
}

int32_t sub_55fc()
{
    *0x40021018 |= 0x800;
    int32_t var_88 = *0x40021018 & 0x800;
    *0x40021018 |= 0x2000;
    int32_t var_84 = *0x40021018 & 0x2000;
    *0x20000664 = 0x20;
    *0x20000668 = 0x7d0;
    *0x2000065c = 0x40012c00;
    *0x20000660 = 0;
    *0x2000066c = 0;
    *0x20000670 = 0;
    *0x20000674 = 0;
    sub_27c0(0x2000065c);
    int32_t var_80 = 0x10;
    int32_t var_7c = 0;
    sub_2be4(0x2000065c, &var_80);
    int32_t var_4c = 0x200;
    int32_t var_64 = 0x60;
    int32_t var_60 = 0;
    int32_t var_58 = 8;
    int32_t var_54 = 0;
    int32_t var_5c = 0;
    int32_t var_50 = 0;
    sub_2884(0x2000065c, &var_64, 0);
    sub_2884(0x2000065c, &var_64, 4);
    sub_2884(0x2000065c, &var_64, 8);
    int32_t var_48 = 0x800;
    int32_t var_44 = 0x400;
    int32_t var_3c = 0x30;
    int32_t var_38 = 0;
    int32_t var_40 = 0;
    int32_t var_34 = 0;
    int32_t var_2c = 0;
    sub_2c50(0x2000065c, &var_48);
    *0x20000844 = 0x7d0;
    *0x20000848 = 0;
    *0x20000838 = 0x40013400;
    *0x2000083c = 0;
    *0x2000084c = 0;
    *0x20000850 = 0;
    *0x20000840 = 0x20;
    sub_27c0(0x20000838);
    int32_t var_7c_1 = 0x80;
    var_80 = 0x20;
    sub_2be4(0x20000838, &var_80);
    int32_t var_78 = 5;
    int32_t var_74 = 0;
    sub_29f2(0x20000838, &var_78);
    *0x40013424 = 0x50;
    int32_t var_4c_1 = 0x200;
    var_64 = 0x60;
    int32_t var_60_1 = 0;
    int32_t var_5c_1 = 0;
    int32_t var_58_1 = 8;
    int32_t var_54_1 = 0;
    int32_t var_50_1 = 0;
    sub_2884(0x20000838, &var_64, 0);
    sub_2884(0x20000838, &var_64, 4);
    sub_2884(0x20000838, &var_64, 8);
    var_48 = 0x800;
    int32_t var_44_1 = 0x400;
    int32_t var_3c_1 = 0x30;
    int32_t var_38_1 = 0;
    int32_t var_40_1 = 0;
    int32_t var_34_1 = 0;
    int32_t var_2c_1 = 0;
    sub_2c50(0x20000838, &var_48);
    *0x40013444 &= 0xffff7fff;
    *0x40012c44 &= 0xffff7fff;
    j_sub_2a5c(0x20000838, 0);
    j_sub_2a5c(0x20000838, 4);
    j_sub_2a5c(0x20000838, 8);
    j_sub_2b38(0x20000838, 0);
    j_sub_2b38(0x20000838, 4);
    j_sub_2b38(0x20000838, 8);
    j_sub_2a5c(0x2000065c, 0);
    j_sub_2a5c(0x2000065c, 4);
    j_sub_2a5c(0x2000065c, 8);
    j_sub_2b38(0x2000065c, 0);
    j_sub_2b38(0x2000065c, 4);
    int32_t result = j_sub_2b38(0x2000065c, 8);
    *(*0x20000838 + 0x30) = 1;
    int32_t* r2_6 = *0x2000065c;
    *r2_6 |= 1;
    return result;
}

int32_t sub_57e8()
{
    *0x40021018 |= 0x200;
    int32_t var_34 = *0x40021018 & 0x200;
    *0x20000770 = 0x40012400;
    *0x20000778 = 0x100;
    *0x2000078c = 0xc0000;
    *0x2000077c = 0;
    *0x20000784 = 0;
    *0x20000774 = 0;
    *0x20000780 = 5;
    sub_1484(0x20000770);
    *0x40010004 = *0x40010004 | 0x7000000 | 0x40000;
    int32_t var_38 = 0x60000;
    sub_1598(0x20000770, &var_38);
    int32_t var_2c = 0xb;
    int32_t var_28 = 1;
    int32_t var_24 = 0;
    sub_1210(0x20000770, &var_2c);
    int32_t var_28_1 = 2;
    int32_t var_24_1 = 1;
    var_2c = 0;
    sub_1210(0x20000770, &var_2c);
    var_2c = 0xe;
    int32_t var_28_2 = 3;
    sub_1210(0x20000770, &var_2c);
    var_2c = 0xc;
    int32_t var_28_3 = 4;
    sub_1210(0x20000770, &var_2c);
    int32_t var_24_2 = 7;
    var_2c = 0x10;
    int32_t var_28_4 = 5;
    sub_1210(0x20000770, &var_2c);
    void* r2 = *0x20000770;
    *(r2 + 8) = *(r2 + 8) | 0x800000 | 0x100;
    *(r2 + 8) |= 1;
    *0x40021014 |= 1;
    int32_t var_30 = *0x40021014 & 1;
    *0x40020008 = 0;
    *0x4002000c = 5;
    *0x40020010 = 0x4001244c;
    *0x40020014 = 0x200007e4;
    *0x40020008 = 0xaa2;
    *0x40020008 |= 1;
    sub_1610(sub_0+0xb, 0, 0);
    return sub_1674(0xb);
}

int32_t sub_5914()
{
    *0x40021018 |= 0x400;
    int32_t var_28 = *0x40021018 & 0x400;
    *0x200005d8 = 0x40012800;
    *0x200005e0 = 0x100;
    *0x200005e4 = 0;
    *0x200005ec = 0;
    *0x200005f4 = 0xe0000;
    *0x200005dc = 0;
    *0x200005e8 = 5;
    sub_1484(0x200005d8);
    int32_t var_1c = 0;
    int32_t var_24 = 0xa;
    int32_t var_20 = 1;
    sub_1210(0x200005d8, &var_24);
    var_24 = 0xd;
    int32_t var_20_1 = 2;
    int32_t var_1c_1 = 1;
    sub_1210(0x200005d8, &var_24);
    var_24 = 0xf;
    int32_t var_20_2 = 3;
    sub_1210(0x200005d8, &var_24);
    int32_t var_20_3 = 4;
    var_24 = 2;
    sub_1210(0x200005d8, &var_24);
    var_24 = 3;
    int32_t var_20_4 = 5;
    int32_t result = sub_1210(0x200005d8, &var_24);
    void* r3_2 = *0x200005d8;
    *(r3_2 + 8) |= 0x100;
    *(r3_2 + 8) |= 1;
    return result;
}

int32_t sub_59c4() __pure
{
    return;
}

int32_t sub_59ce() __pure
{
    return;
}

int32_t sub_59d0() __pure
{
    return;
}

int32_t sub_59d2() __pure
{
    return;
}

int32_t sub_59d4()
{
    sub_11c4();
    /* tailcall */
    return sub_16d6();
}

int32_t sub_59e4()
{
    /* tailcall */
    return sub_1910(0x200006a4);
}

int32_t sub_59f0()
{
    /* tailcall */
    return sub_1910(0x20000554);
}

int32_t sub_59fc()
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r1;
    int32_t var_c_3 = r1;
    int32_t r0;
    int32_t var_10 = r0;
    int32_t result = sub_3020(0x20000598);
    int32_t* r3 = *0x20000598;
    
    if (r3[3] << 0x1b >= 0)
        return result;
    
    int32_t var_c = 0;
    int32_t var_c_1 = *r3;
    int32_t var_c_2 = r3[1];
    /* tailcall */
    return sub_6058();
}

int32_t sub_5a30()
{
    *0x40021000 |= 1;
    *0x40021004 &= 0xf8ff0000;
    *0x40021000 &= 0xfef6ffff;
    *0x40021000 &= 0xfffbffff;
    *0x40021004 &= 0xff80ffff;
    *0x40021008 = 0x9f0000;
    *0xe000ed08 = 0x8000000;
}

int32_t sub_5a7c(int32_t arg1, int32_t arg2)
{
    int32_t r2;
    int32_t var_8 = r2;
    int32_t result = arg2;
    int32_t var_10 = arg1;
    result = arg1;
    sub_2dd8(0x20000598, &result, 1, 0x3e8);
    return result;
}

int32_t sub_5a9c(int32_t arg1, void* arg2, int32_t arg3)
{
    void* r6 = arg2;
    
    for (int32_t i = 0; i < arg3; i += 1)
        arg2 = sub_5a7c(*(r6 + i), arg2);
    
    return arg3;
}

int32_t sub_5ab8()
{
    *0x20000102 = 0;
    *0x200000e2 = 0x5dc0;
    *0x200000d4 = 0x3e800190;
    *0x200000d8 = 0x960;
    *0x200000e8 = 0x3e805dc0;
    *0x20000101 = 1;
    *0x20000105 = 1;
    *0x20000106 = 1;
    void* r0 = sub_6c18(0x20000884, 0x20000008, sub_0+0x100);
    *(r0 + 0xfa) = 1;
    *0x20000b30 = 0x20000008;
    *0x20000b3c = 0x20000994;
    *0x20000b1c = r0;
    *0x20000b28 = 0x20000a60;
    *0x20000b34 = 0x20000b0c;
    *0x20000b20 = 0x20000a50;
    *0x20000b38 = 0x20000a40;
    *0x20000b24 = 0x20000984;
    sub_441c(0x20000b30);
    /* tailcall */
    return sub_441c(0x20000b1c);
}

int32_t sub_5b60() __pure
{
    return;
}

void sub_5b62(int32_t* arg1)
{
    void* r3 = *arg1;
    *(r3 + 0xc) &= 0xfffffeff;
    *(r3 + 0x14) &= 0xfffffffe;
}

int32_t sub_5b78()
{
    int32_t i_1 = 8;
    *0x20000355 = 0;
    int32_t result;
    int32_t i;
    
    do
    {
        *0x20000356 = i_1;
        result = sub_11e8(0x64);
        i = i_1;
        i_1 -= 1;
    } while (i >= 1);
    *0x20000356 = 0;
    return result;
}

void sub_5ba0(char arg1, char arg2, char arg3)
{
    *0x20000355 = arg1;
    *0x20000356 = arg2;
    *0x20000358 = arg3;
}

int32_t sub_5bbc(char arg1)
{
    *0x20000356 = arg1;
    *0x20000355 = 0;
    int32_t result = sub_11e8(0x1f4);
    *0x20000356 = 0;
    return result;
}

int32_t sub_5bdc(char arg1)
{
    *0x20000356 = arg1;
    *0x20000355 = 0;
    int32_t result = sub_11e8(0x64);
    *0x20000356 = 0;
    return result;
}

void sub_5bfc(int32_t arg1)
{
    for (int32_t i = 0; i != arg1; i += 1)
    {
        sub_5bdc(2);
        sub_11e8(0xc8);
    }
}

int32_t sub_5c18()
{
    uint32_t r2_1 = *0x20000a48 - *0x2000098c;
    int32_t r3_3 = ((r2_1 >> 0xf & 1) + r2_1) >> 1;
    *0x20000880 = r3_3;
    
    if (r3_3 < 0)
        r3_3 = 0 - r3_3;
    
    *0x20000b2c = r3_3;
}

int32_t sub_5c4c()
{
    int32_t result;
    
    for (uint32_t i = 6; i; i = i - 1)
    {
        *0x20000356 = 6;
        sub_11e8(0x32);
        *0x20000356 = 0;
        sub_11e8(0x32);
        *0x20000356 = 8;
        sub_11e8(0x32);
        *0x20000356 = 0;
        result = sub_11e8(0x32);
    }
    
    return result;
}

int32_t sub_5c88(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    int32_t r0 = arg1 - (arg2 - 0x1e);
    
    if (r0 < 0)
        r0 = 0 - r0;
    
    if (r0 >= (arg3 + 0x1e - (arg2 - 0x1e)) * 0xf / 0x64)
        return 0;
    
    return 1;
}

int32_t sub_5caa(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    int32_t r0 = arg1 - (arg3 + 0x1e);
    
    if (r0 < 0)
        r0 = 0 - r0;
    
    if (r0 >= (arg3 + 0x1e - (arg2 - 0x1e)) * 0xf / 0x64)
        return 0;
    
    return 1;
}

int32_t sub_5ccc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r2 = arg1 / 0x190;
    int32_t r0 = arg3 / 0x190;
    
    if (r2 != r0)
    {
        int32_t r3_1 = arg2 / 0x190;
        
        if (r0 != r3_1 && arg1 <= arg3 && arg3 >= arg2)
        {
            int32_t r1;
            int32_t result;
            
            if (r2 != r3_1)
            {
                r1 = sub_7504(0x800a06e, arg2);
                result = 2;
            }
            else
            {
                r1 = sub_7504(0x800a061, arg2);
                result = 1;
            }
            
            if (arg1 > 0x78 && arg3 <= 0xf86)
            {
                sub_7504(0x800a080, r1);
                sub_5bbc(2);
            }
            
            return result;
        }
    }
    
    sub_7504(0x800a059, arg2);
    return 0;
}

int32_t sub_5d40()
{
    sub_51c4();
    sub_2e84(0x20000598, 0x200003b4, 0x40);
    sub_5b62(0x20000598);
    sub_1bdc();
    sub_4a78();
    int16_t var_1c;
    sub_4a28(*0x20000120, &var_1c);
    int32_t r3_9;
    
    if (var_1c != 0x1001)
    {
        sub_7610(0x800a10d);
        uint32_t r3_15 = *0x2000014d;
        
        if (r3_15 != 3)
            *0x2000014c = r3_15;
        else
            *0x2000014c = sub_5ccc(*0x2000014e, *0x20000150, *0x20000152);
        
        uint32_t r3_16 = *0x2000015b;
        
        if (r3_16 != 3)
            *0x2000015a = r3_16;
        else
            *0x2000015a = sub_5ccc(*0x2000015c, *0x2000015e, *0x20000160);
        
        r3_9 = *0x20000160;
    }
    else
    {
        sub_7610(0x800a08f);
        int16_t var_1a;
        sub_4a28(*0x20000122, &var_1a);
        int16_t r3 = var_1a;
        uint32_t r0_2 = *0x20000124;
        *0x20000952 = r3;
        *0x200000d6 = r3;
        sub_4a28(r0_2, &var_1a);
        int16_t r3_1 = var_1a;
        uint32_t r0_3 = *0x20000126;
        *0x2000095e = r3_1;
        *0x200000e2 = r3_1;
        sub_4a28(r0_3, &var_1a);
        uint32_t r0_4 = *0x20000128;
        *0x2000014c = var_1a;
        sub_4a28(r0_4, &var_1a);
        uint32_t r0_5 = *0x2000012a;
        *0x2000014e = var_1a;
        sub_4a28(r0_5, &var_1a);
        uint32_t r0_6 = *0x2000012c;
        *0x20000150 = var_1a;
        sub_4a28(r0_6, &var_1a);
        uint32_t r0_7 = *0x2000012e;
        *0x20000152 = var_1a;
        sub_4a28(r0_7, &var_1a);
        uint32_t r0_8 = *0x20000130;
        *0x2000015a = var_1a;
        sub_4a28(r0_8, &var_1a);
        uint32_t r0_9 = *0x20000132;
        *0x2000015c = var_1a;
        sub_4a28(r0_9, &var_1a);
        uint32_t r0_10 = *0x20000134;
        *0x2000015e = var_1a;
        sub_4a28(r0_10, &var_1a);
        r3_9 = var_1a;
        *0x20000160 = r3_9;
    }
    
    int32_t var_28 = r3_9;
    *0x2000014e;
    int32_t var_2c = *0x2000015e;
    int32_t var_30 = *0x2000015c;
    uint32_t var_34 = *0x2000015a;
    int32_t var_38 = *0x20000152;
    *0x20000150;
    sub_7504(0x800a0b4, *0x2000014c);
    sub_1c00();
    return 0;
}

void sub_5ed4(int16_t* arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r3_11 = arg1[2];
    int32_t r3_3;
    
    if (r3_11 == 1)
    {
        int32_t r4_1 = arg1[3];
        r3_3 = arg3 * (*arg1 - r4_1) / (arg1[5] - r4_1);
    label_5efe:
        
        if (arg3 >= r3_3)
            arg3 = r3_3 & ~(r3_3 >> 0x1f);
        
        arg1[1] = arg3;
        return;
    }
    
    int32_t r3_5;
    int32_t r4_2;
    int32_t r5_1;
    int32_t r6_1;
    
    if (r3_11 == 2)
    {
        r4_2 = arg1[4];
        r6_1 = arg1[6];
        r3_5 = *arg1;
        r5_1 = r4_2 - r6_1;
    }
    
    if (r3_11 != 2 || (r3_5 > r5_1 && r3_5 < r4_2 + r6_1))
    {
        arg1[1] = 0;
        return;
    }
    
    if (r3_5 > r4_2)
    {
        int32_t r4_3 = r4_2 + r6_1;
        r3_3 = arg3 * (r3_5 - r4_3) / (arg1[5] - r4_3);
        goto label_5efe;
    }
    
    int32_t r3_10 = arg2 * (r3_5 - r5_1) / (arg1[3] - r5_1);
    int16_t r1_3;
    
    if (r3_10 > 0)
        r1_3 = 0;
    else
    {
        if (arg2 < r3_10)
            arg2 = r3_10;
        
        r1_3 = arg2;
    }
    
    arg1[1] = r1_3;
}

int32_t sub_5f5c()
{
    if (!*0x200003a6)
    {
        *0x20000148 = *0x200007f2;
        *0x20000156 = *0x200007f6;
    }
}

void sub_5f84()
{
    uint32_t r4 = *0x200003a7;
    uint32_t r2 = *0x200003a6;
    char r0_2;
    
    if (r2)
    {
        if (r4)
            return;
        
        r0_2 = 8;
    }
    else
    {
        int32_t r0 = *0x20000148;
        int32_t r5_1;
        
        if (r0 >= *0x2000014e - 0x96 && r0 <= *0x20000152 + 0x96)
            r5_1 = *0x20000156;
        
        if (r0 < *0x2000014e - 0x96 || r0 > *0x20000152 + 0x96 || r5_1 < *0x2000015c - 0x96
            || r5_1 > *0x20000160 + 0x96)
        {
            uint32_t r2_1 = *0x20000164;
            *0x20000164 = r2_1 + 1;
            
            if (r2_1 > 0x95)
            {
                *0x200003f8 = 1;
                *0x20000164 = 0x96;
            }
        }
        else
        {
            *0x200003f8 = r2;
            *0x20000164 = r2;
        }
        
        if (!r4)
            return;
        
        r0_2 = 0x12;
    }
    
    /* tailcall */
    return sub_5bdc(r0_2);
}

int32_t sub_6010()
{
    sub_5f5c();
    sub_5ed4(0x20000148 + 0xe * *0x200003a6, 0xfffffc18, 0x3e8);
    sub_5ed4(0x20000156 + 0xe * *0x200003a6, 0xfffffc18, 0x3e8);
    /* tailcall */
    return sub_5f84();
}

int32_t sub_6058()
{
    *(**0x200005cc + 4);
}

void sub_6068()
{
    int32_t lr;
    int32_t var_4 = lr;
    
    if (!(*0x200003a4 | *0x200003a8))
        return;
    
    sub_7610(0x800a134);
    sub_1bdc();
    sub_4c08(*0x20000120, 0x1001);
    sub_4c08(*0x20000122, *0x200000d6);
    sub_4c08(*0x20000124, *0x200000e2);
    sub_4c08(*0x20000126, *0x2000014c);
    sub_4c08(*0x20000128, *0x2000014e);
    sub_4c08(*0x2000012a, *0x20000150);
    sub_4c08(*0x2000012c, *0x20000152);
    sub_4c08(*0x2000012e, *0x2000015a);
    sub_4c08(*0x20000130, *0x2000015c);
    sub_4c08(*0x20000132, *0x2000015e);
    sub_4c08(*0x20000134, *0x20000160);
    /* tailcall */
    return sub_1c00();
}

void sub_610c() __noreturn
{
    int32_t r3;
    int32_t var_10 = r3;
    int32_t i = 0;
    *0x2000036c = 0;
    sub_7610(0x800a154);
    *0x20000355 = 0;
    *0x20000358 = 0;
    
    do
    {
        *0x20000356 = i;
        i += 1;
        sub_11e8(0x64);
    } while (i != 8);
    
    sub_6068();
    sub_1fcc(0x40010800, 0x20, 0);
    
    while (true)
        /* nop */
}

int32_t sub_6160()
{
    sub_5f5c();
    void* r5_1 = 0xe * *0x200003a6;
    *0x200003ac = sub_c94(*(r5_1 + 0x2000014e));
    *0x200003b0 = sub_c94(*(r5_1 + 0x2000015c));
    sub_7610(0x8009f9e);
    sub_7610(0x800a16b);
    sub_7504(0x800a1be, 0x800a1a5);
    sub_7504(0x800a1de, 0x800a1d2);
    sub_7610(0x8009f9e);
    int32_t var_38 = 0xa0000000;
    int32_t var_34 = 0x3fe99999;
    int32_t var_40 = 0x5a;
    sub_7504(0x800a1f1, 0x82);
    int32_t var_38_1 = 0xa0000000;
    int32_t var_34_1 = 0x3fe99999;
    int32_t var_40_1 = 0x82;
    sub_7504(0x800a268, 0x14a);
    int32_t var_38_2 = 0xa0000000;
    int32_t var_34_2 = 0x3fe99999;
    int32_t var_40_2 = 0xc8;
    sub_7504(0x800a2df, 0x21c);
    int32_t var_38_3 = 0xa0000000;
    int32_t var_34_3 = 0x3fe99999;
    int32_t var_40_3 = 0x12c;
    sub_7504(0x800a356, 0x3e8);
    sub_7504(0x800a3ca, 0x1e);
    sub_7610(0x8009f9e);
    int32_t r3_6 = 0xe * *0x200003a6;
    int32_t r7 = *(0x20000156 + r3_6);
    int32_t r5_3 = *(0x20000148 + r3_6);
    sub_11e8(0x12c);
    uint32_t r11 = *0x200003a6;
    void* r3_7 = 0xe * r11;
    int32_t r10 = *(r3_7 + 0x2000015c);
    int32_t r3_9 = *(r3_7 + 0x20000160);
    int32_t r0_5 = sub_5caa(r7, r10, r3_9);
    int32_t r3_10 = r3_9;
    int32_t r0_7;
    
    if (r0_5)
    {
        r0_7 = sub_5caa(r5_3, *(r3_7 + 0x2000014e), *(r3_7 + 0x20000152));
        r3_10 = r3_9;
    }
    
    int32_t r0_8;
    
    if (!r0_5 || !r0_7)
    {
        if (sub_5c88(r7, r10, r3_10))
        {
            int32_t r10_1 = *(0xe * r11 + 0x2000014e);
            int32_t r2_8 = *(0xe * r11 + 0x20000152);
            
            if (!sub_5caa(r5_3, r10_1, r2_8))
            {
                if (r0_5)
                    goto label_6366;
                
                if (sub_5c88(r5_3, r10_1, r2_8))
                {
                    r0_8 = 2;
                    *0x200003a5 = r0_8;
                    sub_5bfc(r0_8);
                }
            }
            else
            {
                r0_8 = 3;
                *0x200003a5 = r0_8;
                sub_5bfc(r0_8);
            }
        }
        else if (r0_5)
        {
        label_6366:
            
            if (sub_5c88(r5_3, *(0xe * r11 + 0x2000014e), *(0xe * r11 + 0x20000152)))
            {
                r0_8 = 1;
                *0x200003a5 = r0_8;
                sub_5bfc(r0_8);
            }
        }
    }
    else
    {
        r0_8 = 4;
        *0x200003a5 = r0_8;
        sub_5bfc(r0_8);
    }
    sub_7504(0x800a3dd, r5_3);
    int32_t r1_3 = *0x200003a5;
    
    if (r1_3)
    {
        sub_7504(0x800a5a1, r1_3);
        sub_7610(0x800a5ae);
        int32_t r10_2 = 0x34;
        
        while (true)
        {
            int32_t r6_2 = 0xe * *0x200003a6;
            
            if (sub_5c88(*(0x20000156 + r6_2), *(r6_2 + 0x2000015c), *(r6_2 + 0x20000160))
                && sub_5c88(*(0x20000148 + r6_2), *(r6_2 + 0x2000014e), *(r6_2 + 0x20000152)))
            {
                sub_7610(0x800a60d);
                /* tailcall */
                return sub_7610(0x800a61f);
            }
            
            sub_5f5c();
            int32_t temp0_1 = r10_2;
            r10_2 -= 1;
            
            if (temp0_1 == 1)
                break;
            
            sub_11e8(0x64);
        }
        
        sub_7610(0x800a5cd);
        sub_7504(0x800a3dd, r5_3);
    }
    else
    {
        sub_7610(0x800a407);
        sub_7610(0x800a460);
    }
    
    sub_610c();
    /* no return */
}

int32_t sub_63f4()
{
    uint32_t r7 = *0x200003a6;
    int32_t r5 = r7 * 0xe;
    int32_t r0_1;
    int32_t r2;
    int32_t r3;
    r0_1 = sub_c94(*(0x20000148 + r5));
    int32_t r0_2;
    int32_t r2_1;
    int32_t r3_1;
    r0_2 = sub_d3c(r0_1, 0x3dcccccd, r2, r3);
    int32_t r0_4;
    int32_t r2_2;
    int32_t r3_2;
    r0_4 = sub_d3c(*0x200003ac, 0x3f666666, r2_1, r3_1);
    int32_t r0_6 = sub_b2c(r0_2, r0_4, r2_2, r3_2);
    *0x200003ac = r0_6;
    int32_t r0_8;
    int32_t r2_3;
    int32_t r3_3;
    r0_8 = sub_c94(*(0x20000156 + r5));
    int32_t r0_9;
    int32_t r2_4;
    r0_9 = sub_d3c(r0_8, 0x3dcccccd, r2_3, r3_3);
    int32_t r0_11;
    int32_t r2_5;
    int32_t r3_4;
    r0_11 = sub_d3c(*0x200003b0, 0x3f666666, r2_4, 0x200003b0);
    int32_t r0_13 = sub_b2c(r0_9, r0_11, r2_5, r3_4);
    *0x200003b0 = r0_13;
    int32_t r3_5 = *(r5 + 0x2000014e);
    int32_t r0_15;
    int32_t r2_6;
    int32_t r3_6;
    r0_15 = sub_c94(r3_5);
    int32_t r0_17 = sub_b28(r0_6, r0_15, r2_6, r3_6);
    int32_t r0_20;
    int32_t r2_7;
    int32_t r3_8;
    r0_20 = sub_c94(*(r5 + 0x20000152) - r3_5);
    int32_t r0_22 = sub_ea4(r0_17, r0_20, r2_7, r3_8);
    int32_t r5_3 = r0_22;
    
    if (sub_10b4(r0_22, 0x3f800000))
        r5_3 = 0x3f800000;
    else if (sub_1078(r5_3, 0))
        r5_3 = 0;
    
    int32_t r11_1 = *(0xe * r7 + 0x2000015c);
    *0x20000398 = r5_3;
    int32_t r0_27;
    int32_t r2_8;
    int32_t r3_9;
    r0_27 = sub_c94(r11_1);
    int32_t r0_29 = sub_b28(r0_13, r0_27, r2_8, r3_9);
    int32_t r0_32;
    int32_t r2_9;
    int32_t r3_10;
    r0_32 = sub_c94(*(0xe * r7 + 0x20000160) - r11_1);
    int32_t r0_34 = sub_ea4(r0_29, r0_32, r2_9, r3_10);
    int32_t r5_5 = r0_34;
    
    if (sub_10b4(r0_34, 0x3f800000))
        r5_5 = 0x3f800000;
    else if (sub_1078(r5_5, 0))
        r5_5 = 0;
    
    uint32_t r2_10 = *0x200003f8;
    *0x200003a0 = r5_5;
    
    if (*0x200003f9 | r2_10 || *0x2000037c || *0x2000039c)
    {
        *0x2000039c = 1;
        int32_t r0_38 = *0x200003f4;
        *0x200003a0 = 0;
        *0x20000398 = 0;
        uint32_t r0_39;
        r0_39 = sub_10c8(r0_38);
        
        if (r0_39 + 4 <= 8)
        {
            sub_7610(0x800a63e);
            int32_t r3_16 = 0xe * *0x200003a6;
            *(0x20000156 + r3_16);
            sub_7504(0x800a662, *(0x20000148 + r3_16));
            void* r3_18 = 0xe * *0x200003a6;
            int32_t var_38 = *(r3_18 + 0x20000160);
            int32_t var_3c = *(r3_18 + 0x2000015e);
            int32_t var_40 = *(r3_18 + 0x2000015c);
            uint32_t var_44 = *(r3_18 + 0x2000015a);
            int32_t var_48 = *(r3_18 + 0x20000152);
            *(r3_18 + 0x20000150);
            *(r3_18 + 0x2000014e);
            sub_7504(0x800a67d, *(r3_18 + 0x2000014c));
            sub_7610(0x800a6da);
            sub_5c4c();
            sub_610c();
            /* no return */
        }
    }
    
    int32_t r4 = *0x200003f4;
    int32_t r3_23 = *0x200003a5;
    int32_t r2_16;
    int32_t r3_24;
    int32_t r9_1;
    
    if (r3_23 != 1)
    {
        if (r3_23 == 2)
        {
            int32_t r0_59;
            r0_59 = sub_10b4(r4, 0);
            
            if (!r0_59)
                goto label_662a;
            
            r9_1 = 0x3c46980c;
            goto label_65b8;
        }
        
        if (r3_23 == 3)
        {
            int32_t r0_61;
            r0_61 = sub_10b4(r4, 0);
            
            r9_1 = r0_61 ? 0x3bf2b9d6 : 0x3ca3d70b;
            
            goto label_65b8;
        }
        
        if (r3_23 == 4)
        {
            int32_t r0_67;
            int32_t r2_26;
            int32_t r3_35;
            
            if (!*0x2000039c)
            {
                int32_t r8_2 = *0x20000398;
                int32_t r0_69 = sub_10b4(r8_2, 0x3f4ccccd);
                int32_t r9_2 = *0x200003a0;
                int32_t r7_2 = r0_69;
                
                if (r0_69)
                    r7_2 = 1;
                
                int32_t r7_3;
                
                if (!sub_10b4(r9_2, 0x3f4ccccd))
                    r7_3 = 0;
                else
                    r7_3 = r7_2 & 1;
                
                int32_t r0_73;
                
                if (r7_3)
                    r0_73 = sub_10b4(r4, 0x442f0000);
                
                if (!r7_3 || !r0_73)
                {
                    int32_t r0_86;
                    int32_t r2_34;
                    int32_t r3_43;
                    r0_86 = sub_10b4(r4, 0);
                    int32_t r1_20;
                    
                    r1_20 = r0_86 ? 0x3b83126f : 0x3c5a740e;
                    
                    int32_t r0_87;
                    int32_t r2_35;
                    int32_t r3_44;
                    r0_87 = sub_b28(0x3f800000, r1_20, r2_34, r3_43);
                    int32_t r0_88;
                    int32_t r2_36;
                    int32_t r3_45;
                    r0_88 = sub_d3c(r0_87, r4, r2_35, r3_44);
                    int32_t r0_90;
                    int32_t r2_37;
                    int32_t r3_46;
                    r0_90 = sub_d3c(r8_2, 0x3f4ccccd, r2_36, r3_45);
                    int32_t r0_91;
                    int32_t r2_38;
                    int32_t r3_47;
                    r0_91 = sub_d3c(r0_90, 0x40a00000, r2_37, r3_46);
                    int32_t r0_93;
                    int32_t r2_39;
                    int32_t r3_48;
                    r0_93 = sub_b2c(r0_88, r0_91, r2_38, r3_47);
                    int32_t r0_95;
                    int32_t r2_40;
                    int32_t r3_49;
                    r0_95 = sub_d3c(r9_2, 0x3f4ccccd, r2_39, r3_48);
                    int32_t r0_96;
                    int32_t r2_41;
                    int32_t r3_50;
                    r0_96 = sub_d3c(r0_95, 0x40a00000, r2_40, r3_49);
                    int32_t r0_98;
                    r0_98 = sub_b28(r0_93, r0_96, r2_41, r3_50);
                    *0x200003f4 = r0_98;
                    r0_67 = sub_d3c(*0x200003fc, 0x3f733333, r2_26, r3_35);
                }
                else
                {
                    int32_t r0_75;
                    int32_t r2_27;
                    int32_t r3_36;
                    r0_75 = sub_10b4(r4, 0);
                    int32_t r1_17;
                    
                    r1_17 = r0_75 ? 0x3b83126f : 0x3c5a740e;
                    
                    int32_t r0_76;
                    int32_t r2_28;
                    int32_t r3_37;
                    r0_76 = sub_b28(0x3f800000, r1_17, r2_27, r3_36);
                    int32_t r0_77;
                    int32_t r2_29;
                    int32_t r3_38;
                    r0_77 = sub_d3c(r0_76, r4, r2_28, r3_37);
                    int32_t r0_79;
                    int32_t r2_30;
                    int32_t r3_39;
                    r0_79 = sub_d3c(r8_2, 0x3f4ccccd, r2_29, r3_38);
                    int32_t r0_80;
                    int32_t r2_31;
                    int32_t r3_40;
                    r0_80 = sub_d3c(r0_79, 0x40a00000, r2_30, r3_39);
                    int32_t r0_82;
                    int32_t r2_32;
                    int32_t r3_41;
                    r0_82 = sub_b2c(r0_77, r0_80, r2_31, r3_40);
                    *0x200003f4 = r0_82;
                    int32_t r0_84;
                    int32_t r2_33;
                    int32_t r3_42;
                    r0_84 = sub_d3c(*0x200003fc, 0x3f733333, r2_32, r3_41);
                    r0_67 = sub_b2c(r0_84, 0x41c80000, r2_33, r3_42);
                }
            }
            else
            {
                int32_t r0_63;
                int32_t r2_24;
                int32_t r3_33;
                r0_63 = sub_10b4(r4, 0);
                int32_t r1_14;
                
                r1_14 = r0_63 ? 0x3b23d70b : 0x3c5a740e;
                
                int32_t r0_64;
                int32_t r2_25;
                int32_t r3_34;
                r0_64 = sub_b28(0x3f800000, r1_14, r2_24, r3_33);
                int32_t r0_65;
                r0_65 = sub_d3c(r0_64, r4, r2_25, r3_34);
                *0x200003f4 = r0_65;
                r0_67 = sub_d3c(*0x200003fc, 0x3f7c28f6, r2_26, r3_35);
            }
            *0x200003fc = r0_67;
        }
    }
    else
    {
        int32_t r0_42;
        r0_42 = sub_10b4(r4, 0);
        
        if (r0_42)
        {
        label_662a:
            r9_1 = 0x3cfc0fc1;
            goto label_65b8;
        }
        
        r9_1 = 0x3d360b61;
    label_65b8:
        int32_t r0_44;
        int32_t r2_17;
        int32_t r3_25;
        r0_44 = sub_d3c(*0x20000398, 0x3f4ccccd, r2_16, r3_24);
        int32_t r0_45;
        int32_t r2_18;
        int32_t r3_26;
        r0_45 = sub_d3c(r0_44, 0x40a00000, r2_17, r3_25);
        int32_t r0_46;
        int32_t r2_19;
        int32_t r3_27;
        r0_46 = sub_b28(0x3f800000, r9_1, r2_18, r3_26);
        int32_t r0_47;
        int32_t r2_20;
        int32_t r3_28;
        r0_47 = sub_d3c(r0_46, r4, r2_19, r3_27);
        int32_t r0_49;
        int32_t r2_21;
        int32_t r3_29;
        r0_49 = sub_b2c(r0_45, r0_47, r2_20, r3_28);
        int32_t r0_51;
        int32_t r2_22;
        int32_t r3_30;
        r0_51 = sub_d3c(*0x200003a0, 0x3f4ccccd, r2_21, r3_29);
        int32_t r0_52;
        int32_t r2_23;
        int32_t r3_31;
        r0_52 = sub_d3c(r0_51, 0x40a00000, r2_22, r3_30);
        int32_t r0_54;
        r0_54 = sub_b28(r0_49, r0_52, r2_23, r3_31);
        *0x200003f4 = r0_54;
    }
    int32_t result = sub_10c8(sub_b2c(*0x200003f4, *0x200003fc, r2_10, r3_23));
    
    if (result < 0xfffffc18)
        result = 0xfffffc18;
    
    if (result >= 0x5dc)
        return 0x5dc;
    
    return result;
}

int32_t sub_67f4(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r6 = *arg3;
    int32_t r0_1;
    int32_t r1;
    r1 = HIGHD(((arg1 << 4) - (r6 >> 0xc)) * arg2);
    r0_1 = LOWD(((arg1 << 4) - (r6 >> 0xc)) * arg2);
    int32_t r4_1 = r0_1 >> 4 | r1 << 0x1c;
    int32_t r5 = r1 >> 4;
    bool cond:0 = r4_1 < 0x80000000;
    bool n = r5 + 1 < 0;
    bool v = r5 + 1 < r5 == !r5;
    
    if (n != v)
        r4_1 = 0x80000000;
    
    if (n != v)
        r5 = 0xffffffff;
    
    bool cond:1 = 0x7fffffff < r4_1;
    
    if (0 - r5 < 0 != 0 - r5 < 0)
        r4_1 = 0x7fffffff;
    
    *arg3 = r4_1 + r6;
    return 0x7fffffff;
}

void sub_6834()
{
    sub_5c18();
    
    if (*0x20000b2c > 5)
        return;
    
    sub_7610(0x800a6e7);
    sub_7610(0x800a707);
    sub_7610(0x800a74e);
    sub_7610(0x800a77f);
    sub_5f5c();
    int32_t r10_1 = 0;
    uint32_t r1_1 = *0x200003a6;
    int32_t r4_1 = 0x7fff;
    int32_t r3_1 = r1_1 * 0xe;
    int32_t r5_1 = 0xffff8000;
    int32_t var_30 = *(0x20000148 + r3_1) << 0x10;
    uint32_t r8_1 = 0xfa1;
    int32_t r7_1 = 0xffff8000;
    int32_t var_2c = *(0x20000156 + r3_1) << 0x10;
    int16_t r3_4;
    
    r3_4 = r1_1 ? 0 : 0x1e;
    
    int32_t r11_1 = 0;
    int32_t r6_1 = 0x7fff;
    
    while (!sub_1fc0(0x40010800, 2))
    {
        r8_1 = r8_1 - 1;
        
        if (!r8_1)
            break;
        
        sub_5f5c();
        sub_67f4(*(0x20000148 + 0xe * *0x200003a6), 0x1999, &var_30);
        sub_67f4(*(0x20000156 + 0xe * *0x200003a6), 0x1999, &var_2c);
        r11_1 = *(&var_30 + 2);
        r10_1 = *(&var_2c + 2);
        
        if (r6_1 >= r11_1)
            r6_1 = r11_1;
        
        if (r7_1 < r11_1)
            r7_1 = r11_1;
        
        if (r4_1 >= r10_1)
            r4_1 = r10_1;
        
        if (r5_1 < r10_1)
            r5_1 = r10_1;
        
        sub_11e8(5);
    }
    
    sub_7504(0x800a7c3, 2);
    uint32_t r8_3 = sub_5ccc(r6_1, r11_1, r7_1);
    uint32_t r3_7 = *(0xe * *0x200003a6 + 0x2000014d);
    int32_t r1_3;
    
    if (r8_3 == r3_7 || r3_7 == 3)
        r1_3 = sub_7610(0x800a7ce);
    else
    {
        r1_3 = sub_7610(0x800a7d4);
        r8_3 = 0;
    }
    
    sub_7504(0x800a7db, r1_3);
    uint32_t r3_8 = sub_5ccc(r4_1, r10_1, r5_1);
    uint32_t r2_7 = *(0xe * *0x200003a6 + 0x2000015b);
    uint32_t r3_9;
    
    if (r3_8 == r2_7 || r2_7 == 3)
    {
        sub_7610(0x800a7ce);
        r3_9 = r3_8;
        
        if (r3_9 | r8_3)
            goto label_69ac;
        
        sub_7610(0x800a7e6);
        return;
    }
    
    sub_7610(0x800a7d4);
    
    if (!r8_3)
    {
        sub_7610(0x800a7e6);
        return;
    }
    
    r3_9 = 0;
label_69ac:
    int32_t r0_8 = 0xe * *0x200003a6;
    *(r0_8 + 0x2000014c) = r8_3;
    *(r0_8 + 0x20000150) = r11_1;
    int32_t r7_3 = r7_1 - r3_4;
    *(r0_8 + 0x2000014e) = r3_4 + r6_1;
    *(r0_8 + 0x20000152) = r7_3;
    int32_t r4_3 = r4_1 + r3_4;
    int32_t r5_3 = r5_1 - r3_4;
    *(r0_8 + 0x2000015a) = r3_9;
    *(r0_8 + 0x2000015c) = r4_3;
    *(r0_8 + 0x2000015e) = r10_1;
    *(r0_8 + 0x20000160) = r5_3;
    *0x200003a8 = 1;
    uint32_t var_54_1 = r3_9;
    int32_t var_50_1 = r4_3;
    int32_t var_4c_1 = r10_1;
    int32_t var_48_1 = r5_3;
    int32_t var_58_1 = r7_3;
    sub_7504(0x800a0b4, r8_3);
}

int32_t sub_6a48()
{
    int32_t result = sub_1fc0(0x40010800, 2);
    
    if (result)
    {
        uint32_t r4_1 = 0;
        
        while (true)
        {
            result = sub_1fc0(0x40010800, 2);
            
            if (!result)
                break;
            
            sub_11e8(0xa);
            
            if (r4_1 != 0x1f4)
                r4_1 = r4_1 + 1;
            else
            {
                sub_5bdc(5);
                r4_1 = 0x1f5;
            }
        }
        
        if (r4_1 > 8)
        {
            *0x2000036c = result;
            
            if (r4_1 < 0x1f4)
            {
                sub_7610(0x800a859);
                sub_610c();
                /* no return */
            }
            
            sub_11e8(0x3e8);
            
            if (!sub_1fc0(0x40010800, 2))
            {
                sub_5bbc(0x10);
                sub_6834();
                result = sub_5bdc(5);
                *0x200003f4 = 0;
            }
            else
            {
                int32_t r0_1;
                
                while (true)
                {
                    r0_1 = sub_1fc0(0x40010800, 2);
                    
                    if (!r0_1)
                        break;
                    
                    sub_11e8(0xa);
                }
                
                result = sub_10c8(*0x200003f4) + 4;
                
                if (result <= 8)
                {
                    sub_5bbc(0x10);
                    sub_11e8(0xc8);
                    sub_5bbc(0x10);
                    *0x2000036c = r0_1;
                    sub_7610(0x800a81c);
                    *0x20000101 = 2;
                    *0x2000097d = 2;
                    sub_7610(0x800a82f);
                    *0x2000036c = 1;
                    result = sub_7610(0x800a847);
                    *0x200003f4 = 0;
                }
            }
        }
    }
    
    return result;
}

int32_t sub_6b54(int32_t arg1, int32_t arg2, int16_t* arg3)
{
    int16_t r3 = *arg3;
    int32_t result = (arg1 << 4) - r3;
    
    if (result <= arg2)
    {
        arg2 = 0 - arg2;
        
        if (arg2 < result)
            arg2 = result;
    }
    
    *arg3 = arg2 + r3;
    return result;
}

int32_t sub_6b70(int32_t arg1, int32_t arg2, int16_t* arg3, int16_t* arg4)
{
    int32_t r4 = arg1 - (arg2 >> 1);
    
    if (r4 < 0xffff8000)
        r4 = 0xffff8000;
    
    if (r4 >= 0x7fff)
        r4 = 0x7fff;
    
    int32_t r4_1 = r4 >> 4;
    
    if (r4_1 < 0xfffffc18)
        r4_1 = 0xfffffc18;
    
    int32_t r0 = arg1 + (arg2 >> 1);
    
    if (r4_1 >= 0x3e8)
        r4_1 = 0x3e8;
    
    if (r0 < 0xffff8000)
        r0 = 0xffff8000;
    
    if (r0 >= 0x7fff)
        r0 = 0x7fff;
    
    int32_t result = r0 << 0xc >> 0x10;
    
    if (result < 0xfffffc18)
        result = 0xfffffc18;
    
    if (result >= 0x3e8)
        result = 0x3e8;
    
    *arg3 = r4_1;
    *arg4 = result;
    return result;
}

void sub_6bd0()
{
    int32_t i = 0;
    int32_t* r5 = 0x800ac64;
    
    for (; i; i += 1)
    {
        int32_t r3_1 = *r5;
        r5 = &r5[1];
        r3_1();
    }
    
    int32_t i_1 = 0;
    int32_t* r5_1 = 0x800ac64;
    
    for (; i_1 != 1; i_1 += 1)
    {
        int32_t r3_2 = *r5_1;
        r5_1 = &r5_1[1];
        r3_2();
    }
}

void sub_6c18(void* arg1, char* arg2, void* arg3)
{
    void* r2 = arg3 + arg2;
    char* r3 = arg1 - 1;
    
    if (arg2 == r2)
        return;
    
    do
    {
        char r4_1 = *arg2;
        arg2 = &arg2[1];
        r3 = &r3[1];
        *r3 = r4_1;
    } while (arg2 != r2);
}

void sub_6c34(char* arg1, char arg2, void* arg3)
{
    for (char* i = arg1; i != arg3 + arg1; i = &i[1])
        *i = arg2;
}

char* sub_6c44(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, char* arg5, int32_t arg6, char* arg7, int32_t* arg8, int32_t arg9, void** arg10)
{
    int32_t* r7 = arg4;
    char r3_1;
    
    if (arg4 < 0)
    {
        r7 = &arg4[-0x20000000];
        r3_1 = 0x2d;
    }
    else
        r3_1 = 0;
    
    char* r5 = arg5;
    *arg7 = r3_1;
    int32_t r8 = arg9 & 0xffffffdf;
    uint32_t r3_3;
    
    if (r8 == 0x46)
        r3_3 = 3;
    else
    {
        if (r8 == 0x45)
            r5 = &r5[1];
        
        r3_3 = 2;
    }
    
    int32_t* var_28;
    char* var_24;
    char* result = sub_78c0(arg1, arg2, arg3, r7, r3_3, r5, arg8, &var_28, &var_24);
    
    if (r8 != 0x47 || arg6 << 0x1f < 0)
    {
        char* r9_1 = result + r5;
        
        if (r8 == 0x46)
        {
            if (*result == 0x30 && !sub_a40(arg3, r7, 0, 0))
                *arg8 = 1 - r5;
            
            r9_1 = &r9_1[*arg8];
        }
        
        if (sub_a40(arg3, r7, 0, 0))
            var_24 = r9_1;
        
        while (true)
        {
            char* r3_9 = var_24;
            
            if (r3_9 >= r9_1)
                break;
            
            var_24 = &r3_9[1];
            *r3_9 = 0x30;
        }
    }
    
    *arg10 = var_24 - result;
    return result;
}

void* sub_6d02(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    char* var_20 = arg1;
    *arg1 = arg3;
    char r2;
    
    if (arg2 < 0)
    {
        r2 = 0x2d;
        arg2 = 0 - arg2;
    }
    else
        r2 = 0x2b;
    
    arg1[1] = r2;
    void* r3_1;
    
    if (arg2 <= 9)
    {
        arg1[2] = 0x30;
        arg1[3] = arg2 + 0x30;
        r3_1 = &arg1[4];
    }
    else
    {
        void* r4_1 = (&var_1c + 3);
        void* lr_1;
        bool cond:2_1;
        
        do
        {
            int32_t r6_1 = arg2 / 0xa;
            lr_1 = r4_1;
            cond:2_1 = arg2 > 0x63;
            char r5_2 = arg2 - 0xa * r6_1 + 0x30;
            arg2 = r6_1;
            r4_1 -= 1;
            *(lr_1 - 1) = r5_2;
        } while (cond:2_1);
        *(r4_1 - 1) = arg2 + 0x30;
        char* i = lr_1 - 2;
        char* r4_2 = &arg1[1];
        
        while (i < (&var_1c + 3))
        {
            char r2_3 = *i;
            i = &i[1];
            r4_2 = &r4_2[1];
            *r4_2 = r2_3;
        }
        
        int32_t r2_2 = (&var_18 + 1) - lr_1;
        
        if (lr_1 - 2 > (&var_1c + 3))
            r2_2 = 0;
        
        r3_1 = &arg1[2 + r2_2];
    }
    
    return r3_1 - arg1;
}

int32_t sub_6d80(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    char* r3 = *0x200002bc;
    void* r0_1 = sub_1e8(r3);
    int32_t (* var_30)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
        int32_t arg5 @ r7, int32_t arg6 @ r9) = sub_0;
    int32_t* r3_3 = (*arg5 + 7) & 0xfffffff8;
    uint32_t r9 = arg2[6];
    int32_t r11 = *arg2;
    *arg5 = &r3_3[2];
    int32_t r3_4 = r3_3[1];
    arg2[0x12] = *r3_3;
    arg2[0x13] = r3_4;
    int32_t* r8_1 = arg2[0x12];
    int32_t* r10 = arg2[0x13];
    void* r3_5 = r10 & 0x7fffffff;
    int32_t r0_3 = sub_aa4(r8_1, r3_5, 0xffffffff, 0x7fefffff);
    int32_t r0_5;
    
    if (!r0_3)
        r0_5 = sub_a68(r8_1, r3_5, 0xffffffff, 0x7fefffff);
    
    char* r0_8;
    char* r3_6;
    
    if (!r0_3 && !r0_5)
    {
        if (sub_a54(r8_1, r10, 0, 0))
            *(arg2 + 0x43) = 0x2d;
        
        r3_6 = 0x800a88c;
        r0_8 = 0x800a890;
        goto label_6e0e;
    }
    
    int32_t* r3_9 = r10;
    int32_t var_34;
    char* r8_2;
    int32_t (* r10_1)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
        int32_t arg5 @ r7, int32_t arg6 @ r9);
    
    if (!sub_aa4(r8_1, r10, r8_1, r3_9))
    {
        int32_t r3_10 = arg2[1];
        int32_t r1_5 = r9 & 0xdf;
        
        if (r3_10 == 0xffffffff)
            arg2[1] = 6;
        else if (r1_5 == 0x47 && !r3_10)
            arg2[1] = 1;
        
        int32_t var_50_1 = 0;
        int32_t r3_12 = r11 | 0x400;
        *arg2 = r3_12;
        char var_35;
        r8_2 = sub_6c44(arg1, r1_5, r8_1, r10, arg2[1], r3_12, &var_35, &var_34, r9, &var_30);
        int32_t r1_7 = var_34;
        
        if (r1_5 != 0x47)
            goto label_6eb8;
        
        int16_t* const r3_21;
        
        if (r1_7 < 0xfffffffd || r1_7 > arg2[1])
        {
            r9 = r9 - 2;
        label_6eb8:
            
            if (r9 > 0x65)
            {
                if (r9 != 0x66)
                    goto label_6f36;
                
                void* r3_19 = arg2[1];
                
                if (r1_7 <= 0)
                {
                    if (r3_19 || *arg2 << 0x1f < 0)
                        r3_21 = r3_19 + 2;
                    else
                        r3_21 = &*(nullptr + 1);
                    
                    goto label_6f18;
                }
                
                arg2[4] = r1_7;
                
                if (r3_19 || *arg2 << 0x1f < 0)
                {
                    r3_21 = r3_19 + 1 + r1_7;
                    goto label_6f18;
                }
                
                r10_1 = sub_0;
                arg2[0x16] = r1_7;
            }
            else
            {
                var_34 = r1_7 - 1;
                int32_t (* r0_19)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                    int32_t arg5 @ r7, int32_t arg6 @ r9) = sub_6d02(&arg2[0x14], r1_7 - 1, r9);
                int32_t (* r2_7)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                    int32_t arg5 @ r7, int32_t arg6 @ r9) = var_30;
                r10_1 = r0_19;
                void* r3_16 = r2_7 + r0_19;
                arg2[4] = r3_16;
                
                if (r2_7 > 1 || *arg2 << 0x1f < 0)
                    arg2[4] = r3_16 + 1;
            }
        }
        else
        {
            r9 = 0x67;
        label_6f36:
            int32_t (* r3_22)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                int32_t arg5 @ r7, int32_t arg6 @ r9) = var_30;
            
            if (r1_7 < r3_22)
            {
                int32_t r2_13;
                
                r2_13 = r1_7 > 0 ? 1 : 2 - r1_7;
                
                r3_21 = r3_22 + r2_13;
                goto label_6f18;
            }
            
            int32_t r3_23 = *arg2;
            arg2[4] = r1_7;
            
            if (r3_23 << 0x1f >= 0)
            {
                r10_1 = sub_0;
                arg2[0x16] = r1_7;
            }
            else
            {
                r3_21 = r1_7 + 1;
            label_6f18:
                arg2[4] = r3_21;
                r10_1 = sub_0;
                arg2[0x16] = r1_7;
            }
        }
        
        if (var_35)
            *(arg2 + 0x43) = 0x2d;
    }
    else
    {
        if (r10 < 0)
            r3_9 = &data_2d;
        
        r0_8 = 0x800a898;
        
        if (r10 < 0)
            *(arg2 + 0x43) = r3_9;
        
        r3_6 = 0x800a894;
    label_6e0e:
        
        r8_2 = r9 <= 0x47 ? r3_6 : r0_8;
        
        r10_1 = sub_0;
        arg2[4] = 3;
        *arg2 = r11 & 0xfffffffb;
    }
    
    int32_t var_2c;
    
    if (sub_71d8(arg1, arg2, &var_2c, arg3, arg4) != 0xffffffff)
    {
        int32_t r3_24 = *arg2;
        char* r2_15;
        int32_t (* r3_25)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
            int32_t arg5 @ r7, int32_t arg6 @ r9);
        
        if (r3_24 << 0x15 >= 0)
        {
            r3_25 = arg2[4];
        label_6f5e:
            r2_15 = r8_2;
        label_6f64:
            
            if (arg4(arg1, arg3, r2_15, r3_25) != 0xffffffff)
            {
            label_6fc6:
                
                if (*arg2 << 0x1e < 0)
                {
                    for (int32_t i = 0; arg2[3] - var_2c > i; i += 1)
                    {
                        if (arg4(arg1, arg3, arg2 + 0x19, 1) == 0xffffffff)
                            return 0xffffffff;
                    }
                }
                
                int32_t r0_12 = arg2[3];
                int32_t r3_33 = var_2c;
                
                if (r0_12 < r3_33)
                    return r3_33;
                
                return r0_12;
            }
        }
        else if (r9 > 0x65)
        {
            if (sub_a40(arg2[0x12], arg2[0x13], 0, 0))
            {
                if (arg4(arg1, arg3, 0x800a89c, 1) != 0xffffffff)
                {
                    if (var_34 >= var_30 && *arg2 << 0x1f >= 0)
                        goto label_6fc6;
                    
                    if (arg4(arg1, arg3, r3, r0_1) != 0xffffffff)
                    {
                        for (int32_t i_1 = 0; var_30 - 1 > i_1; i_1 += 1)
                        {
                            if (arg4(arg1, arg3, arg2 + 0x1a, 1) == 0xffffffff)
                                return 0xffffffff;
                        }
                        
                        goto label_6fc6;
                    }
                }
            }
            else if (var_34 > 0)
            {
                int32_t (* r2_22)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                    int32_t arg5 @ r7, int32_t arg6 @ r9) = var_30;
                int32_t (* r3_41)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                    int32_t arg5 @ r7, int32_t arg6 @ r9) = arg2[0x16];
                
                if (r2_22 >= r3_41)
                    r2_22 = r3_41;
                
                int32_t r0_50;
                
                if (r2_22 > 0)
                    r0_50 = arg4(arg1, arg3, r8_2, r2_22);
                
                if (r2_22 <= 0 || r0_50 != 0xffffffff)
                {
                    int32_t r11_1 = 0;
                    int32_t r10_3;
                    
                    while (true)
                    {
                        r10_3 = arg2[0x16];
                        
                        if (r10_3 - (r2_22 & ~(r2_22 >> 0x1f)) <= r11_1)
                            break;
                        
                        if (arg4(arg1, arg3) == 0xffffffff)
                            return 0xffffffff;
                        
                        r11_1 += 1;
                    }
                    
                    if (var_34 < var_30 || *arg2 << 0x1f < 0)
                    {
                        if (arg4(arg1, arg3, r3, r0_1) != 0xffffffff)
                            goto label_709a;
                    }
                    else
                    {
                    label_709a:
                        int32_t (* r2_26)(int32_t arg1, int32_t* arg2, int32_t* arg3, 
                            int32_t* arg4 @ r6, int32_t arg5 @ r7, int32_t arg6 @ r9) = var_30;
                        void* r3_45 = r2_26 - r10_3;
                        void* r9_5 = r2_26 - var_34;
                        
                        if (r9_5 >= r3_45)
                            r9_5 = r3_45;
                        
                        int32_t r0_59;
                        
                        if (r9_5 > 0)
                            r0_59 = arg4(arg1, arg3, &r8_2[r10_3], r9_5);
                        
                        if (r9_5 <= 0 || r0_59 != 0xffffffff)
                        {
                            for (int32_t i_2 = 0; var_30 - var_34 - (r9_5 & ~(r9_5 >> 0x1f)) > i_2; 
                                i_2 += 1)
                            {
                                if (arg4(arg1, arg3, arg2 + 0x1a, 1) == 0xffffffff)
                                    return 0xffffffff;
                            }
                            
                            goto label_6fc6;
                        }
                    }
                }
            }
            else if (arg4(arg1, arg3, 0x800a89c, 1) != 0xffffffff)
            {
                if (!(var_30 | var_34) && *arg2 << 0x1f >= 0)
                    goto label_6fc6;
                
                if (arg4(arg1, arg3, r3, r0_1) != 0xffffffff)
                {
                    for (int32_t i_3 = 0; 0 - var_34 > i_3; i_3 += 1)
                    {
                        if (arg4(arg1, arg3, arg2 + 0x1a, 1) == 0xffffffff)
                            return 0xffffffff;
                    }
                    
                    r3_25 = var_30;
                    goto label_6f5e;
                }
            }
        }
        else
        {
            char* r2_35;
            int16_t* const r3_55;
            
            if (var_30 > 1 || r3_24 << 0x1f < 0)
            {
                if (arg4(arg1, arg3, r8_2, 1) != 0xffffffff
                    && arg4(arg1, arg3, r3, r0_1) != 0xffffffff)
                {
                    if (!sub_a40(arg2[0x12], arg2[0x13], 0, 0))
                    {
                        r2_35 = &r8_2[1];
                        r3_55 = var_30 - 1;
                        goto label_7172;
                    }
                    
                    for (int32_t i_4 = 0; var_30 - 1 > i_4; i_4 += 1)
                    {
                        if (arg4(arg1, arg3, arg2 + 0x1a, 1) == 0xffffffff)
                            return 0xffffffff;
                    }
                    
                    goto label_7196;
                }
            }
            else
            {
                r3_55 = &*(nullptr + 1);
                r2_35 = r8_2;
            label_7172:
                
                if (arg4(arg1, arg3, r2_35, r3_55) != 0xffffffff)
                {
                label_7196:
                    r3_25 = r10_1;
                    r2_15 = &arg2[0x14];
                    goto label_6f64;
                }
            }
        }
    }
    
    return 0xffffffff;
}

int32_t sub_71d8(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    int32_t r2 = arg2[2];
    int32_t r3 = arg2[4];
    
    if (r3 < r2)
        r3 = r2;
    
    *arg3 = r3;
    
    if (*(arg2 + 0x43))
        *arg3 = r3 + 1;
    
    if (*arg2 << 0x1a < 0)
        *arg3 += 2;
    
    int32_t i = *arg2 & 6;
    
    if (!i)
    {
        for (; arg2[3] - *arg3 > i; i += 1)
        {
            if (arg5(arg1, arg4, arg2 + 0x19, 1) == 0xffffffff)
                return 0xffffffff;
        }
    }
    
    uint32_t r2_3 = *(arg2 + 0x43);
    int16_t* const r3_7 = r2_3;
    
    if (r2_3)
        r3_7 = &*(nullptr + 1);
    
    if (*arg2 << 0x1a < 0)
    {
        *(arg2 + r3_7 + 0x43) = 0x30;
        void* r2_11 = r3_7 + 1 + arg2;
        r3_7 = &r3_7[1];
        *(r2_11 + 0x43) = *(arg2 + 0x45);
    }
    
    if (arg5(arg1, arg4, arg2 + 0x43, r3_7) != 0xffffffff)
    {
        int32_t r5_1 = arg2[3];
        int32_t r3_9 = *arg2 & 6;
        
        if (r3_9 != 4)
            r5_1 = 0;
        
        int32_t r6_1 = 0;
        int32_t r3_10 = arg2[2];
        
        if (r3_9 == 4)
            r5_1 -= *arg3;
        
        int32_t r2_8 = arg2[4];
        
        if (r3_9 == 4)
            r5_1 &= ~(r5_1 >> 0x1f);
        
        if (r3_10 > r2_8)
            r5_1 += r3_10 - r2_8;
        
        while (true)
        {
            if (r5_1 == r6_1)
                return 0;
            
            if (arg5(arg1, arg4, arg2 + 0x1a, 1) == 0xffffffff)
                break;
            
            r6_1 += 1;
        }
    }
    
    return 0xffffffff;
}

int32_t sub_72b8(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    int32_t var_24 = arg4;
    int32_t var_28 = arg3;
    int32_t* var_2c = arg2;
    int32_t var_30_1 = arg1;
    uint32_t r7 = arg2[6];
    char* r6;
    
    if (r7 > 0x78)
    {
    label_72e0:
        r6 = arg2 + 0x42;
        *(arg2 + 0x42) = r7;
        arg2[4] = 1;
        *(arg2 + 0x43) = 0;
    }
    else
    {
        if (r7 > 0x62)
        {
            if (r7 - 0x63 <= 0x15)
                /* jump -> *(&data_72f8 + ((r7 - 0x63) << 2)) */
            
            goto label_72e0;
        }
        
        if (!r7)
        {
            r6 = arg2 + 0x43;
            arg2[4] = 0;
        }
        else
        {
            if (r7 != 0x58)
                goto label_72e0;
            
            *(arg2 + 0x45) = r7;
            int32_t* r6_2 = *arg5;
            int32_t r3_4 = *arg2;
            uint32_t r5_1 = *r6_2;
            *arg5 = &r6_2[1];
            
            if (r3_4 << 0x18 >= 0 && r3_4 << 0x19 < 0)
                r5_1 = r5_1;
            
            if (r3_4 << 0x1f < 0)
                *arg2 = r3_4 | 0x20;
            
            if (!r5_1)
                *arg2 &= 0xffffffdf;
            
            int32_t r1_1 = 0;
            *(arg2 + 0x43) = 0;
            int32_t r6_1 = arg2[1];
            
            if (r6_1 >= 0)
                r1_1 = *arg2;
            
            arg2[2] = r6_1;
            
            if (r6_1 >= 0)
                *arg2 = r1_1 & 0xfffffffb;
            
            if (r5_1 || r6_1)
            {
                r6 = arg2 + 0x43;
                bool cond:3_1;
                
                do
                {
                    r6 -= 1;
                    *r6 = *(0x800a89e + r5_1 % 0x10);
                    cond:3_1 = 0x10 <= r5_1;
                    r5_1 u/= 0x10;
                } while (cond:3_1);
            }
            else
                r6 = arg2 + 0x43;
            
            arg2[4] = arg2 + 0x43 - r6;
        }
    }
    
    if (sub_71d8(arg1, arg2, &var_24, arg3, arg4) != 0xffffffff
        && arg4(arg1, arg3, r6, arg2[4]) != 0xffffffff)
    {
        if (*arg2 << 0x1e < 0)
        {
            for (int32_t i = 0; arg2[3] - var_24 > i; i += 1)
            {
                if (arg4(arg1, arg3, arg2 + 0x19, 1) == 0xffffffff)
                    return 0xffffffff;
            }
        }
        
        int32_t r0_3 = arg2[3];
        int32_t r3_11 = var_24;
        
        if (r0_3 < r3_11)
            return r3_11;
        
        return r0_3;
    }
    
    return 0xffffffff;
}

int32_t (*)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, int32_t arg5 @ r7, int32_t arg6 @ r9) sub_7504(char* arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_4 = r3;
    int32_t r2;
    int32_t var_8 = r2;
    int32_t var_c = arg2;
    int32_t var_1c = arg2;
    char* var_20 = arg1;
    int32_t* r4 = *0x20000168;
    
    if (r4 && !r4[6])
        sub_86d0(r4);
    
    int32_t* var_1c_1 = &var_c;
    int32_t r7;
    return sub_91f0(r4, r4[2], arg1, &var_c, r7);
}

int32_t sub_7534(int32_t* arg1, int32_t arg2)
{
    if (arg1 && !arg1[6])
        sub_86d0(arg1);
    
    int32_t* r4 = arg1[2];
    
    if (!arg1[6])
        sub_86d0(arg1);
    
    if (r4 == 0x800a970)
        r4 = arg1[1];
    else if (r4 == 0x800a990)
        r4 = arg1[2];
    else if (r4 == 0x800a950)
        r4 = arg1[3];
    
    if (r4[0x19] << 0x1f >= 0 && r4[3] << 0x16 >= 0)
        r4[0x16];
    
    int32_t r0_7;
    
    if (r4[3] << 0x1c >= 0 || !r4[4])
        r0_7 = sub_76c4(arg1, r4);
    
    int32_t result;
    
    if ((r4[3] << 0x1c < 0 && r4[4]) || !r0_7)
    {
        char* r6_1 = arg2 - 1;
        int32_t r3_9;
        
        while (true)
        {
            r6_1 = &r6_1[1];
            uint32_t r1_1 = *r6_1;
            r3_9 = r4[2] - 1;
            r4[2] = r3_9;
            
            if (!r1_1)
                break;
            
            if (r3_9 < 0 && (r4[6] > r3_9 || r1_1 == 0xa))
            {
                if (sub_7620(arg1, r1_1, r4) == 0xffffffff)
                    goto label_75b8_1;
                
                continue;
            }
            
            uint8_t* r3_13 = *r4;
            *r4 = &r3_13[1];
            *r3_13 = r1_1;
        }
        
        if (r3_9 >= 0)
        {
            result = 0xa;
            char* r3_14 = *r4;
            *r4 = &r3_14[1];
            *r3_14 = 0xa;
        }
        else if (sub_7620(arg1, 0xa, r4) == 0xffffffff)
        {
        label_75b8:
            result = 0xffffffff;
        }
        else
            result = 0xa;
    }
    else
    {
    label_75b8_1:
        result = 0xffffffff;
    }
    
    if (r4[0x19] << 0x1f >= 0 && r4[3] << 0x16 >= 0)
        r4[0x16];
    
    return result;
}

int32_t sub_7610(int32_t arg1)
{
    /* tailcall */
    return sub_7534(*0x20000168, arg1);
}

uint32_t sub_7620(int32_t* arg1, char arg2, int32_t* arg3)
{
    int32_t* r4 = arg3;
    
    if (arg1 && !arg1[6])
        sub_86d0(arg1);
    
    if (r4 == 0x800a970)
        r4 = arg1[1];
    else if (r4 == 0x800a990)
        r4 = arg1[2];
    else if (r4 == 0x800a950)
        r4 = arg1[3];
    
    r4[2] = r4[6];
    int32_t r0_8;
    
    if (r4[3] << 0x1c >= 0 || !r4[4])
        r0_8 = sub_76c4(arg1, r4);
    
    if ((r4[3] << 0x1c < 0 && r4[4]) || !r0_8)
    {
        uint32_t result = arg2;
        int32_t r0_1 = *r4 - r4[4];
        
        if (r4[5] > r0_1)
        {
        label_7668:
            r4[2] -= 1;
            uint8_t* r3_9 = *r4;
            *r4 = &r3_9[1];
            *r3_9 = result;
            int32_t r0_5;
            
            if (r4[5] == r0_1 + 1 || (r4[3] << 0x1f < 0 && result == 0xa))
                r0_5 = sub_85a8(arg1, r4);
            
            if ((r4[5] != r0_1 + 1 && (r4[3] << 0x1f >= 0 || result != 0xa)) || !r0_5)
                return result;
        }
        else
        {
            r0_1 = sub_85a8(arg1, r4);
            
            if (!r0_1)
                goto label_7668;
        }
    }
    
    return 0xffffffff;
}

int32_t sub_76c4(int32_t* arg1, void** arg2)
{
    int32_t* r5 = *0x20000168;
    void** r4 = arg2;
    
    if (r5 && !r5[6])
        sub_86d0(r5);
    
    if (r4 == 0x800a970)
        r4 = r5[1];
    else if (r4 == 0x800a990)
        r4 = r5[2];
    else if (r4 == 0x800a950)
        r4 = r5[3];
    
    uint32_t r3_2 = r4[3];
    int16_t r2 = r4[3];
    int32_t result;
    
    if (r3_2 << 0x1c < 0)
    {
    label_7754:
        
        if (!r4[4] && (r4[3] & 0x280) != 0x200)
            sub_8864(arg1, r4);
        
        uint32_t r0_4 = r4[3];
        r2 = r4[3];
        int32_t r3_13 = r0_4 & 1;
        
        if (!r3_13)
        {
            if (r0_4 << 0x1e >= 0)
                r3_13 = r4[5];
            
            r4[2] = r3_13;
        }
        else
        {
            r4[2] = 0;
            r4[6] = 0 - r4[5];
        }
        
        if (r4[4])
            return 0;
        
        result = r0_4 & 0x80;
        
        if (result)
        {
            result = 0xffffffff;
            r4[3] = r2 | 0x40;
        }
    }
    else
    {
        if (r3_2 << 0x1b < 0)
        {
            if (r3_2 << 0x1d < 0)
            {
                int32_t r1_1 = r4[0xd];
                
                if (r1_1)
                {
                    if (r1_1 != &r4[0x11])
                        sub_9054(arg1, r1_1);
                    
                    r4[0xd] = 0;
                }
                
                r4[3] &= 0xffdb;
                r4[1] = 0;
                *r4 = r4[4];
            }
            
            r4[3] |= 8;
            goto label_7754;
        }
        
        *arg1 = 9;
        result = 0xffffffff;
        r4[3] = r2 | 0x40;
    }
    
    return result;
}

uint32_t sub_77a0(void* arg1, void* arg2)
{
    int32_t r2;
    int32_t var_28 = r2;
    void* var_2c_1 = arg2;
    void* var_30 = arg1;
    int32_t r4 = *(arg2 + 0x10);
    
    if (*(arg1 + 0x10) < r4)
        return 0;
    
    int32_t r4_1 = r4 - 1;
    int32_t* r8_1 = arg2 + 0x14;
    int32_t r2_1 = (arg1 + 0x14)[r4_1];
    int32_t r3_3 = r8_1[r4_1] + 1;
    uint32_t result = r2_1 / r3_3;
    void* r9_1 = &r8_1[r4_1];
    
    if (r2_1 >= r3_3)
    {
        uint32_t lr_1 = 0;
        int32_t* r0 = r8_1;
        int32_t* r12_1 = arg1 + 0x14;
        int32_t r10_1 = 0;
        
        do
        {
            int32_t r2_2 = *r0;
            r0 = &r0[1];
            int32_t r3_5 = lr_1 + result * r2_2;
            int32_t r2_4 = (r3_5 >> 0x10) + result * (r2_2 >> 0x10);
            lr_1 = r2_4 >> 0x10;
            int32_t r3_8 = r10_1 - r3_5 + *r12_1;
            int32_t r2_7 = (*r12_1 >> 0x10) - r2_4 + (r3_8 >> 0x10);
            r10_1 = r2_7 >> 0x10;
            *r12_1 = r3_8 | r2_7 << 0x10;
            r12_1 = &r12_1[1];
        } while (r9_1 >= r0);
        
        if (!(arg1 + 0x14)[r4_1])
        {
            int32_t* i = &(arg1 + 0x14)[r4_1] - 4;
            
            while (arg1 + 0x14 < i)
            {
                int32_t r2_15 = *i;
                i -= 4;
                
                if (r2_15)
                    break;
                
                r4_1 -= 1;
            }
            
            *(arg1 + 0x10) = r4_1;
        }
    }
    
    if (sub_8e28(arg1, arg2) >= 0)
    {
        int32_t* r0_3 = arg1 + 0x14;
        int32_t r12_2 = 0;
        result += 1;
        
        do
        {
            int32_t r1 = *r8_1;
            r8_1 = &r8_1[1];
            int32_t lr_3 = *r0_3;
            int32_t r3_15 = r12_2 - r1 + lr_3;
            int32_t r2_12 = (lr_3 >> 0x10) - (r1 >> 0x10) + (r3_15 >> 0x10);
            r12_2 = r2_12 >> 0x10;
            *r0_3 = r3_15 | r2_12 << 0x10;
            r0_3 = &r0_3[1];
        } while (r9_1 >= r8_1);
        
        if (!(arg1 + 0x14)[r4_1])
        {
            int32_t* i_1 = &(arg1 + 0x14)[r4_1] - 4;
            
            while (arg1 + 0x14 < i_1)
            {
                int32_t r2_16 = *i_1;
                i_1 -= 4;
                
                if (r2_16)
                    break;
                
                r4_1 -= 1;
            }
            
            *(arg1 + 0x10) = r4_1;
        }
    }
    
    return result;
}

char* sub_78c0(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, uint32_t arg5, char* arg6, int32_t* arg7, int32_t** arg8, int32_t* arg9)
{
    int32_t r6 = arg3;
    int32_t r4 = arg1[9];
    int32_t var_78 = r6;
    int32_t* var_74 = arg4;
    
    if (r4)
        goto label_78f6;
    
    int32_t* r0 = sub_88e4(0x10);
    arg3 = r0;
    arg1[9] = r0;
    int32_t r1;
    int32_t r3;
    
    if (r0)
    {
        r0[1] = r4;
        r0[2] = r4;
        *r0 = r4;
        r0[3] = r4;
    label_78f6:
        int32_t* r3_1 = arg1[9];
        int32_t* r1_1 = *r3_1;
        
        if (r1_1)
        {
            int32_t r2 = r3_1[1];
            r1_1[1] = r2;
            r1_1[2] = 1 << r2;
            sub_89b4(arg1, r1_1);
            arg3 = sub_0;
            *arg1[9] = 0;
        }
        
        int32_t* r3_5;
        
        if (arg4 >= 0)
            r3_5 = sub_0;
        else
        {
            arg3 = &*(nullptr + 1);
            r3_5 = arg4 & 0x7fffffff;
            var_74 = r3_5;
        }
        
        if (arg4 >= 0)
            *arg8 = r3_5;
        
        if (arg4 < 0)
            *arg8 = arg3;
        
        if (!(0x7ff00000 & ~var_74))
        {
            *arg7 = 0x270f;
            char* var_68_1;
            int32_t r3_11;
            
            if (!((var_74 & 0xfffff) | r6))
            {
                if (!arg9)
                    return 0x800a8c0;
                
                var_68_1 = 0x800a8c0;
                r3_11 = 0x800a8c8;
            }
            else
            {
                if (!arg9)
                    return 0x800a8c9;
                
                var_68_1 = 0x800a8c9;
                r3_11 = 0x800a8cc;
            }
            
            *arg9 = r3_11;
            return var_68_1;
        }
        
        int32_t var_58_1 = var_78;
        int32_t* var_54_1 = var_74;
        int32_t r0_4;
        uint32_t r1_3;
        r0_4 = sub_a40(var_58_1, var_54_1, 0, 0);
        
        if (r0_4)
        {
            *arg7 = 1;
            
            if (!arg9)
                return 0x800a89c;
            
            *arg9 = 0x800a89d;
            return 0x800a89c;
        }
        
        void* var_30;
        void* var_2c;
        char* r0_6 = sub_8f80(arg1, r1_3, var_58_1, var_54_1, &var_2c, &var_30);
        int32_t r4_2 = var_74 >> 0x14 & 0x7ff;
        int32_t* r10_1 = r0_6;
        int32_t var_3c_1;
        int32_t r0_7;
        int32_t r1_5;
        void* r4_3;
        
        if (!r4_2)
        {
            void* r4_6 = var_30 + var_2c;
            int32_t r3_34;
            
            if (r4_6 + 0x432 > 0x20)
            {
                r0_6 = r4_6 + 0x412;
                r3_34 = var_74 << (0x40 - (r4_6 + 0x432));
            }
            else
                r3_34 = 0x20 - (r4_6 + 0x432);
            
            int32_t r0_25;
            
            r0_25 = r4_6 + 0x432 > 0x20 ? r6 >> r0_6 | r3_34 : r6 << r3_34;
            
            int32_t r1_16;
            r0_7 = sub_47c(r0_25);
            r1_5 = r1_16 - 0x1f00000;
            r4_3 = r4_6 - 1;
            var_3c_1 = 1;
        }
        else
        {
            r0_7 = var_58_1;
            r4_3 = r4_2 - 0x3ff;
            r1_5 = (var_54_1 & 0xfffff) | 0x3fc00000 | 0x300000;
            var_3c_1 = r0_4;
        }
        
        int32_t r0_8;
        int32_t r1_6;
        r0_8 = sub_200(r0_7, r1_5, 0, 0x3ff80000);
        int32_t r0_9;
        int32_t r1_7;
        r0_9 = sub_570(r0_8, r1_6, 0x636f4361, 0x3fd287a7, r4_3, arg1, r6);
        int32_t r0_10;
        int32_t r1_8;
        r0_10 = sub_204(r0_9, r1_7, 0x8b60c8b3, 0x3fc68a28);
        int32_t r0_12;
        int32_t r1_9;
        r0_12 = sub_49c(r4_3);
        int32_t r0_13;
        int32_t r1_10;
        r0_13 = sub_570(r0_12, r1_9, 0x509f79fb, 0x3fd34413, r4_3, arg1, r0_10);
        int32_t r0_15;
        int32_t r1_12;
        r0_15 = sub_204(r0_10, r1_8, r0_13, r1_10);
        uint32_t r9_2 = sub_ad0(r0_15, r1_12);
        
        if (sub_a54(r0_15, r1_12, 0, 0))
        {
            int32_t r0_20;
            int32_t r1_14;
            r0_20 = sub_49c(r9_2);
            
            if (!sub_a40(r0_20, r1_14, r0_15, r1_12))
                r9_2 -= 1;
        }
        
        int32_t var_4c_1;
        
        if (r9_2 > 0x16)
            var_4c_1 = 1;
        else
        {
            int32_t r0_23 =
                sub_a54(var_58_1, var_54_1, *(0x800aa40 + (r9_2 << 3)), *((r9_2 << 3) + 0x800aa44));
            
            if (!r0_23)
                var_4c_1 = r0_23;
            else
            {
                r9_2 -= 1;
                var_4c_1 = 0;
            }
        }
        
        int16_t* const r4_4 = var_30 - r4_3;
        int32_t (* var_64_1)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
            int32_t arg5 @ r7, int32_t arg6 @ r9) = r4_4 - 1;
        int32_t (* var_70)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
            int32_t arg5 @ r7, int32_t arg6 @ r9);
        
        if (r4_4 - 1 < 0)
            var_70 = 1 - r4_4;
        
        if (r4_4 - 1 >= 0)
            var_70 = sub_0;
        else
            var_64_1 = sub_0;
        
        uint32_t var_60_1;
        uint32_t var_50_1;
        
        if (r9_2 < 0)
        {
            var_70 -= r9_2;
            var_60_1 = 0 - r9_2;
            var_50_1 = 0;
        }
        else
        {
            var_50_1 = r9_2;
            var_64_1 += r9_2;
            var_60_1 = 0;
        }
        
        char* var_80_1;
        int32_t* var_5c_1;
        char* r3_40;
        char* r11_1;
        
        if (arg5 > 9)
        {
            r4_4 = &*(nullptr + 1);
            var_5c_1 = &*(nullptr + 1);
            arg5 = 0;
        label_7b74:
            r11_1 = 0xffffffff;
            r3_40 = &data_12;
            var_80_1 = 0xffffffff;
            arg6 = sub_0;
        }
        else
        {
            bool cond:5_1 = arg5 > 5;
            bool cond:6_1 = arg5 <= 5;
            
            if (arg5 > 5)
                arg5 -= 4;
            
            if (cond:5_1)
                r4_4 = sub_0;
            
            if (cond:6_1)
                r4_4 = &*(nullptr + 1);
            
            if (arg5 - 2 > 3)
            {
                var_5c_1 = &*(nullptr + 1);
                goto label_7b74;
            }
            
            int32_t* r3_38;
            int32_t* r3_41;
            
            switch (arg5)
            {
                case 2:
                {
                    r3_38 = sub_0;
                label_7b0e:
                    var_5c_1 = r3_38;
                    
                    if (arg6 > 0)
                    {
                        r11_1 = arg6;
                        r3_40 = r11_1;
                        var_80_1 = r11_1;
                    }
                    else
                    {
                        r11_1 = &*(nullptr + 1);
                        r3_40 = &*(nullptr + 1);
                        var_80_1 = &*(nullptr + 1);
                        arg6 = &*(nullptr + 1);
                    }
                    break;
                }
                case 3:
                {
                    r3_41 = sub_0;
                label_7b52:
                    var_5c_1 = r3_41;
                    r11_1 = &arg6[r9_2];
                    r3_40 = &r11_1[1];
                    var_80_1 = r3_40;
                    
                    if (r3_40 < 1)
                        r3_40 = &*(nullptr + 1);
                    break;
                }
                case 4:
                {
                    r3_38 = &*(nullptr + 1);
                    goto label_7b0e;
                }
                case 5:
                {
                    r3_41 = &*(nullptr + 1);
                    goto label_7b52;
                }
            }
        }
        
        void* r0_26 = arg1[9];
        *(r0_26 + 4) = 0;
        int32_t r2_8 = 4;
        int32_t r1_17;
        int32_t* r6_3;
        
        while (true)
        {
            r6_3 = r2_8 + 0x14;
            r1_17 = *(r0_26 + 4);
            
            if (r6_3 > r3_40)
                break;
            
            *(r0_26 + 4) = r1_17 + 1;
            r2_8 <<= 1;
        }
        
        char* r0_28 = sub_8934(arg1, r1_17);
        
        if (r0_28)
        {
            *arg1[9] = r0_28;
            
            if (var_80_1 > 0xe || !r4_4)
                goto label_7d3c;
            
            int32_t r7_3;
            int32_t r0_32;
            int32_t* r1_22;
            
            if (r9_2 > 0)
            {
                int32_t r3_47 = *(0x800aa40 + ((r9_2 & 0xf) << 3));
                int32_t var_48_1 = r3_47;
                int32_t var_44_1 = *(r3_47 + 4);
                int32_t i = r9_2 >> 4;
                
                if (!(r9_2 & 0x100))
                    r7_3 = 2;
                else
                {
                    r7_3 = 3;
                    int32_t r0_30;
                    int32_t* r1_20;
                    r0_30 = sub_7c4(var_58_1, var_54_1, *0x800aa38, *0x800aa3c, i, arg1, r6_3);
                    var_78 = r0_30;
                    var_74 = r1_20;
                    i &= 0xf;
                }
                
                r6_3 = 0x800aa18;
                
                while (i)
                {
                    if (i << 0x1f < 0)
                    {
                        int32_t r0_34;
                        int32_t r1_25;
                        r0_34 = sub_570(var_48_1, var_44_1, *r6_3, r6_3[1], i, arg1, r6_3);
                        var_48_1 = r0_34;
                        var_44_1 = r1_25;
                        r7_3 += 1;
                    }
                    
                    i s>>= 1;
                    r6_3 = &r6_3[2];
                }
                
                r0_32 = sub_7c4(var_78, var_74, var_48_1, var_44_1, i, arg1, r6_3);
                var_78 = r0_32;
                var_74 = r1_22;
            }
            else if (!r9_2)
                r7_3 = 2;
            else
            {
                r0_32 = sub_570(var_58_1, var_54_1, *(0x800aa40 + (((0 - r9_2) & 0xf) << 3)), 
                    *((((0 - r9_2) & 0xf) << 3) + 0x800aa44), 0 - r9_2, arg1, r6_3);
                r7_3 = 2;
                int32_t r3_53 = 0;
                var_78 = r0_32;
                var_74 = r1_22;
                r6_3 = 0x800aa18;
                int32_t i_1 = (0 - r9_2) >> 4;
                
                while (i_1)
                {
                    if (i_1 << 0x1f < 0)
                    {
                        r0_32 = sub_570(r0_32, r1_22, *r6_3, r6_3[1], i_1, arg1, r6_3);
                        r3_53 = 1;
                        r7_3 += 1;
                    }
                    
                    i_1 s>>= 1;
                    r6_3 = &r6_3[2];
                }
                
                if (r3_53)
                {
                    var_78 = r0_32;
                    var_74 = r1_22;
                }
            }
            char* r4_10;
            int32_t* r6_4;
            char* r7_5;
            uint32_t r8_2;
            
            if (!var_4c_1)
            {
            label_7db4:
                r8_2 = r9_2;
                r4_10 = var_80_1;
            label_7cdc:
                int32_t r0_41;
                int32_t r1_30;
                r0_41 = sub_49c(r7_3);
                int32_t r0_42;
                int32_t r1_31;
                r0_42 = sub_570(r0_41, r1_30, var_78, var_74, r4_10, arg1, r6_3);
                int32_t* r0_43;
                int32_t r1_32;
                r0_43 = sub_204(r0_42, r1_31, 0, 0x401c0000);
                r6_3 = r1_32 - 0x3400000;
                int32_t var_44_3 = r1_32;
                int32_t* var_44_4 = r6_3;
                
                if (!r4_10)
                {
                    int32_t r0_45;
                    int32_t r1_34;
                    r0_45 = sub_200(var_78, var_74, 0, 0x40140000);
                    
                    if (sub_a90(r0_45, r1_34, r0_43, r6_3))
                    {
                        r9_2 = r8_2;
                        r6_4 = r4_10;
                    label_7d90:
                        r9_2 += 1;
                        *r0_28 = 0x31;
                        r7_5 = &r0_28[1];
                        goto label_8228;
                    }
                    
                    if (sub_a54(r0_45, r1_34, r0_43, &r6_3[-0x20000000]))
                        goto label_8258;
                    
                    goto label_7d38;
                }
                
                char* r1_39 = r0_28 + r4_10;
                r6_3 = r0_43;
                int32_t r2_22 = *((r4_10 << 3) + 0x800aa38);
                int32_t r3_70 = *((r4_10 << 3) + 0x800aa3c);
                
                if (var_5c_1)
                {
                    int32_t r0_52;
                    int32_t r1_41;
                    r0_52 = sub_7c4(0, 0x3fe00000, r2_22, r3_70, r4_10, arg1, r6_3);
                    int32_t r0_53;
                    int32_t r1_42;
                    r0_53 = sub_200(r0_52, r1_41, r6_3, var_44_4);
                    int32_t var_48_4 = r0_53;
                    int32_t var_44_5 = r1_42;
                    r7_5 = r0_28;
                    
                    while (true)
                    {
                        uint32_t r0_55 = sub_ad0(var_78, var_74);
                        int32_t r0_56;
                        int32_t r1_44;
                        r0_56 = sub_49c(r0_55);
                        int32_t r0_58;
                        int32_t r1_46;
                        r0_58 = sub_200(var_78, var_74, r0_56, r1_44);
                        *r7_5 = r0_55 + 0x30;
                        r7_5 = &r7_5[1];
                        
                        if (sub_a54(r0_58, r1_46, var_48_4, var_44_5))
                            break;
                        
                        int32_t r0_60;
                        int32_t r1_47;
                        r0_60 = sub_200(0, 0x3ff00000, r0_58, r1_46);
                        
                        if (sub_a54(r0_60, r1_47, var_48_4, var_44_5))
                            goto label_7fa4;
                        
                        if (r7_5 == r1_39)
                            goto label_7d38;
                        
                        int32_t r0_63;
                        int32_t r1_49;
                        r0_63 =
                            sub_570(var_48_4, var_44_5, 0, 0x40240000, r0_55 + 0x30, arg1, r6_3);
                        var_48_4 = r0_63;
                        var_44_5 = r1_49;
                        int32_t r0_65;
                        int32_t* r1_51;
                        r0_65 = sub_570(r0_58, r1_46, 0, 0x40240000, r0_55 + 0x30, arg1, r6_3);
                        var_78 = r0_65;
                        var_74 = r1_51;
                    }
                    
                    goto label_7f08;
                }
                
                int32_t r0_67;
                int32_t r1_53;
                r0_67 = sub_570(r6_3, var_44_4, r2_22, r3_70, r4_10, arg1, r6_3);
                char* r4_15 = r0_28;
                char* var_38_1 = r1_39;
                int32_t r1_57;
                
                while (true)
                {
                    char r0_69 = sub_ad0(var_78, var_74);
                    int32_t r0_70;
                    int32_t r1_55;
                    r0_70 = sub_49c(r0_69);
                    int32_t r0_72;
                    r0_72 = sub_200(var_78, var_74, r0_70, r1_55);
                    r6_3 = r0_72;
                    *r4_15 = r0_69 + 0x30;
                    r4_15 = &r4_15[1];
                    
                    if (r4_15 == r1_39)
                        break;
                    
                    int32_t r0_80;
                    int32_t* r1_63;
                    r0_80 = sub_570(r0_72, r1_57, 0, 0x40240000, r4_15, arg1, r6_3);
                    var_78 = r0_80;
                    var_74 = r1_63;
                }
                
                int32_t r0_74;
                int32_t r1_59;
                r0_74 = sub_204(r0_67, r1_53, 0, 0x3fe00000);
                
                if (!sub_a90(r6_3, r1_57, r0_74, r1_59))
                {
                    int32_t r0_77;
                    int32_t r1_61;
                    r0_77 = sub_200(0, 0x3fe00000, r0_67, r1_53);
                    
                    if (!sub_a54(r6_3, r1_57, r0_77, r1_61))
                        goto label_7d38;
                    
                    do
                    {
                        r7_5 = var_38_1;
                        var_38_1 = r7_5 - 1;
                    } while (*(r7_5 - 1) == 0x30);
                    
                    goto label_7f08;
                }
                
                r7_5 = r4_15;
            label_7fa4:
                char* r3_98 = r7_5;
                
                while (true)
                {
                    r7_5 = r3_98;
                    r3_98 -= 1;
                    
                    if (*r3_98 != 0x39)
                        break;
                    
                    if (r0_28 == r3_98)
                    {
                        r8_2 += 1;
                        *r0_28 = 0x30;
                        break;
                    }
                }
                
                *r3_98 += 1;
            label_7f08:
                r9_2 = r8_2;
            label_7f86:
                sub_89b4(arg1, r10_1);
                *r7_5 = 0;
                *arg7 = r9_2 + 1;
                
                if (arg9)
                    *arg9 = r7_5;
                
                return r0_28;
            }
            
            if (!sub_a54(var_78, var_74, 0, 0x3ff00000) || !var_80_1)
                goto label_7db4;
            
            if (r11_1 > 0)
            {
                int32_t r0_39;
                int32_t* r1_29;
                r0_39 = sub_570(var_78, var_74, 0, 0x40240000, var_74, arg1, r6_3);
                r4_10 = r11_1;
                var_78 = r0_39;
                var_74 = r1_29;
                r8_2 = r9_2 - 1;
                r7_3 += 1;
                goto label_7cdc;
            }
            
        label_7d38:
            var_78 = var_58_1;
            var_74 = var_54_1;
        label_7d3c:
            void* r3_62 = var_2c;
            int32_t* r8_5;
            
            if (r3_62 >= 0 && r9_2 <= 0xe)
            {
                int32_t r3_64 = *(0x800aa40 + (r9_2 << 3));
                uint32_t r4_12 = *(r3_64 + 4);
                uint32_t var_6c_1 = r4_12;
                
                if (arg6 < 0 && var_80_1 <= 0)
                {
                    if (var_80_1)
                    {
                        r4_10 = sub_0;
                    label_8258:
                        r6_4 = r4_10;
                    label_8222:
                        r7_5 = r0_28;
                        r9_2 = ~arg6;
                    label_8228:
                        r8_5 = sub_0;
                    label_8230:
                        sub_89b4(arg1, r4_10);
                        
                        if (r6_4)
                        {
                            if (r8_5 && r8_5 != r6_4)
                                sub_89b4(arg1, r8_5);
                            
                            sub_89b4(arg1, r6_4);
                        }
                        
                        goto label_7f86;
                    }
                    
                    int32_t r0_50;
                    int32_t r1_37;
                    r0_50 = sub_570(r3_64, var_6c_1, 0, 0x40140000, r4_12, arg1, r6_3);
                    r4_10 = var_80_1;
                    r6_4 = r4_10;
                    
                    if (sub_a7c(r0_50, r1_37, var_78, var_74))
                        goto label_8222;
                    
                    goto label_7d90;
                }
                
                r7_5 = r0_28;
                int32_t i_2;
                
                do
                {
                    int32_t r0_82;
                    int32_t r1_65;
                    r0_82 = sub_7c4(var_78, var_74, r3_64, var_6c_1, r4_12, arg1, r6_3);
                    uint32_t r0_83 = sub_ad0(r0_82, r1_65);
                    r4_12 = r0_83;
                    int32_t r0_84;
                    int32_t r1_66;
                    r0_84 = sub_49c(r0_83);
                    int32_t r0_85;
                    int32_t r1_67;
                    r0_85 = sub_570(r0_84, r1_66, r3_64, var_6c_1, r4_12, arg1, r6_3);
                    int32_t r0_87;
                    int32_t r1_69;
                    r0_87 = sub_200(var_78, var_74, r0_85, r1_67);
                    *r7_5 = r4_12 + 0x30;
                    r7_5 = &r7_5[1];
                    r6_3 = r7_5 - r0_28;
                    
                    if (var_80_1 == r6_3)
                    {
                        int32_t r0_88;
                        int32_t r1_70;
                        r0_88 = sub_204(r0_87, r1_69, r0_87, r1_69);
                        
                        if (!sub_a90(r0_88, r1_70, r3_64, var_6c_1))
                        {
                            if (!sub_a40(r0_88, r1_70, r3_64, var_6c_1))
                                goto label_7f86;
                            
                            if (r4_12 << 0x1f >= 0)
                                goto label_7f86;
                        }
                        
                        r8_2 = r9_2;
                        goto label_7fa4;
                    }
                    
                    int32_t r0_94;
                    int32_t* r1_75;
                    r0_94 = sub_570(r0_87, r1_69, 0, 0x40240000, r4_12, arg1, r6_3);
                    var_78 = r0_94;
                    var_74 = r1_75;
                    i_2 = sub_a40(r0_94, r1_75, 0, 0);
                } while (!i_2);
                goto label_7f86;
            }
            
            uint32_t r4_16;
            int32_t (* r7_8)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                int32_t arg5 @ r7, int32_t arg6 @ r9);
            
            if (!var_5c_1)
            {
                r4_16 = var_60_1;
                r7_8 = var_70;
                r6_4 = var_5c_1;
            }
            else
            {
                uint32_t r2_46 = arg5;
                char* r3_100;
                
                if (r2_46 > 1)
                {
                    r4_16 = var_80_1 - 1;
                    uint32_t r3_123 = var_60_1;
                    bool cond:11_1 = r3_123 < r4_16;
                    bool cond:12_1 = r3_123 < r4_16;
                    
                    if (r3_123 < r4_16)
                    {
                        r2_46 = r4_16 - var_60_1;
                        r3_123 = var_50_1;
                    }
                    else
                        r4_16 = r3_123 - r4_16;
                    
                    if (cond:11_1)
                    {
                        var_60_1 = r4_16;
                        var_50_1 = r3_123 + r2_46;
                    }
                    
                    if (cond:12_1)
                        r4_16 = 0;
                    
                    r7_8 = var_80_1 < 0 ? var_70 - var_80_1 : var_70;
                    
                    r3_100 = var_80_1 >= 0 ? var_80_1 : sub_0;
                }
                else
                {
                    r3_100 = !var_3c_1 ? 0x36 - var_30 : r3_62 + 0x433;
                    
                    r4_16 = var_60_1;
                    r7_8 = var_70;
                }
                
                var_70 += r3_100;
                var_64_1 += r3_100;
                r6_4 = sub_8b28(arg1, 1);
            }
            
            if (r7_8 > 0)
            {
                int32_t (* r3_101)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
                    int32_t arg5 @ r7, int32_t arg6 @ r9) = var_64_1;
                
                if (r3_101 > 0)
                {
                    if (r3_101 >= r7_8)
                        r3_101 = r7_8;
                    
                    r7_8 -= r3_101;
                    var_70 -= r3_101;
                    var_64_1 -= r3_101;
                }
            }
            
            if (var_60_1)
            {
                if (!var_5c_1)
                    r10_1 = sub_8c9c(arg1, r10_1, var_60_1);
                else
                {
                    if (r4_16 > 0)
                    {
                        int32_t* r0_98 = sub_8c9c(arg1, r6_4, r4_16);
                        r6_4 = r0_98;
                        char* r0_100 = sub_8b54(arg1, r0_98, r10_1);
                        sub_89b4(arg1, r10_1);
                        r10_1 = r0_100;
                    }
                    
                    if (var_60_1 != r4_16)
                        r10_1 = sub_8c9c(arg1, r10_1, var_60_1 - r4_16);
                }
            }
            
            int32_t* r0_105 = sub_8b28(arg1, 1);
            r4_10 = r0_105;
            int16_t* const r0_110;
            uint32_t r8_4;
            
            if (var_50_1 <= 0)
            {
                if (arg5 <= 1 && !var_78 && !(var_74 & 0xfffff))
                {
                label_81ba:
                    uint32_t r3_135 = var_74 & 0x7ff00000;
                    
                    if (!r3_135)
                        r8_4 = r3_135;
                    else
                    {
                        r8_4 = 1;
                        var_70 += 1;
                        var_64_1 += 1;
                    }
                    
                    goto label_81d0;
                }
                
            label_81da:
                r8_4 = 0;
            label_81d0:
                
                if (var_50_1)
                    r0_110 = 0x20 - sub_8a8c(*(r4_10 + (*(r4_10 + 0x10) << 2) + 0x10));
                else
                    r0_110 = &*(nullptr + 1);
            }
            else
            {
                r4_10 = sub_8c9c(arg1, r0_105, var_50_1);
                
                if (arg5 <= 1)
                {
                    if (var_78 || var_74 & 0xfffff)
                        goto label_81da;
                    
                    goto label_81ba;
                }
                
                r8_4 = 0;
                r0_110 = 0x20 - sub_8a8c(*(r4_10 + (*(r4_10 + 0x10) << 2) + 0x10));
            }
            
            void* r0_112 = (r0_110 + var_64_1) & 0x1f;
            
            if (!r0_112)
                goto label_81ea;
            
            void* r0_113;
            
            if (0x20 - r0_112 > 4)
            {
                r0_113 = 0x1c - r0_112;
                goto label_80d6;
            }
            
            if (0x20 - r0_112 != 4)
            {
                r0_112 = 0x20 - r0_112;
            label_81ea:
                r0_113 = r0_112 + 0x1c;
            label_80d6:
                r7_8 += r0_113;
                var_70 += r0_113;
                var_64_1 += r0_113;
            }
            
            if (var_70 > 0)
                r10_1 = sub_8d50(arg1, r10_1, var_70);
            
            if (var_64_1 > 0)
                r4_10 = sub_8d50(arg1, r4_10, var_64_1);
            
            if (!var_4c_1)
            {
            label_81f0:
                
                if (var_80_1 > 0 || arg5 <= 2)
                {
                    r11_1 = var_80_1;
                    
                    if (!var_5c_1)
                        goto label_8466;
                    
                    goto label_8270;
                }
                
                r11_1 = var_80_1;
            label_81fe:
                
                if (r11_1)
                    goto label_8222;
                
                int32_t* r0_125 = sub_89f8(arg1, r4_10, 5, r11_1);
                r4_10 = r0_125;
                
                if (sub_8e28(r10_1, r0_125) > 0)
                    goto label_7d90;
                
                goto label_8222;
            }
            
            if (sub_8e28(r10_1, r4_10) >= 0)
                goto label_81f0;
            
            r10_1 = sub_89f8(arg1, r10_1, 0xa, 0);
            r9_2 -= 1;
            int32_t r3_159;
            
            if (!var_5c_1)
            {
                if (r11_1 <= 0 && arg5 > 2)
                    goto label_81fe;
                
            label_8466:
                char* r7_12 = r0_28;
                
                while (true)
                {
                    r3_159 = sub_77a0(r10_1, r4_10) + 0x30;
                    *r7_12 = r3_159;
                    r7_12 = &r7_12[1];
                    
                    if (r11_1 <= r7_12 - r0_28)
                        break;
                    
                    r10_1 = sub_89f8(arg1, r10_1, 0xa, 0);
                }
                
                char* r7_11;
                
                if (r11_1 > 0)
                    r7_11 = r11_1;
                else
                    r7_11 = &*(nullptr + 1);
                
                r8_5 = sub_0;
                r7_5 = r7_11 + r0_28;
            label_840e:
                int32_t* r0_160 = sub_8d50(arg1, r10_1, 1);
                r10_1 = r0_160;
                int32_t r0_161 = sub_8e28(r0_160, r4_10);
                
                if (r0_161 <= 0 && (r0_161 || r3_159 << 0x1f >= 0))
                {
                    char* r3_166 = r7_5;
                    
                    do
                    {
                        r7_5 = r3_166;
                        r3_166 -= 1;
                    } while (*r3_166 == 0x30);
                    
                    goto label_8230;
                }
                
            label_8384:
                char* r3_161 = r7_5;
                
                while (true)
                {
                    r7_5 = r3_161;
                    uint32_t r2_72 = *(r7_5 - 1);
                    r3_161 -= 1;
                    
                    if (r2_72 != 0x39)
                    {
                        *r3_161 = r2_72 + 1;
                        break;
                    }
                    
                    if (r0_28 == r3_161)
                    {
                        r9_2 += 1;
                        *r0_28 = 0x31;
                        break;
                    }
                }
                
                goto label_8230;
            }
            
            r6_4 = sub_89f8(arg1, r6_4, 0xa, 0);
            
            if (r11_1 <= 0 && arg5 > 2)
                goto label_81fe;
            
        label_8270:
            
            if (r7_8 > 0)
                r6_4 = sub_8d50(arg1, r6_4, r7_8);
            
            char* r0_137;
            
            if (!r8_4)
            {
                r0_137 = r6_4;
            label_82b6:
                r8_5 = r6_4;
                r6_4 = r0_137;
                char* var_80_3 = &r0_28[1];
                int32_t r3_151 = var_78 & 1;
                
                while (true)
                {
                    uint32_t r0_139 = sub_77a0(r10_1, r4_10);
                    int32_t r0_141 = sub_8e28(r10_1, r8_5);
                    char* r0_143 = sub_8e60(arg1, r4_10, r6_4);
                    int32_t r3_155 = r0_139 + 0x30;
                    int32_t r2_68;
                    
                    if (*(r0_143 + 0xc))
                        r2_68 = 1;
                    else
                    {
                        r2_68 = sub_8e28(r10_1, r0_143);
                        r3_155 = r0_139 + 0x30;
                    }
                    
                    sub_89b4(arg1, r0_143);
                    r7_5 = var_80_3;
                    r3_159 = r3_155;
                    
                    if (!(r3_151 | arg5 | r2_68))
                    {
                        if (r3_159 == 0x39)
                        {
                            var_80_3[0xffffffff] = 0x39;
                            break;
                        }
                        
                        if (r0_141 > 0)
                            r3_159 = r0_139 + 0x31;
                    }
                    else if (r0_141 < 0 || !(r0_141 | arg5 | r3_151))
                    {
                        if (r2_68 > 0)
                        {
                            char* r0_150 = sub_8d50(arg1, r10_1, 1);
                            r10_1 = r0_150;
                            int32_t r0_151 = sub_8e28(r0_150, r4_10);
                            
                            if (r0_151 > 0)
                            {
                            label_837a:
                                
                                if (r3_159 == 0x39)
                                {
                                    var_80_3[0xffffffff] = 0x39;
                                    break;
                                }
                                
                                r3_159 = r0_139 + 0x31;
                            }
                            else if (!r0_151 && r3_159 << 0x1f < 0)
                                goto label_837a;
                        }
                    }
                    else if (r2_68 <= 0)
                    {
                        *(var_80_3 - 1) = r3_159;
                        
                        if (var_80_3 == r0_28 + r11_1)
                            goto label_840e;
                        
                        r10_1 = sub_89f8(arg1, r10_1, 0xa, 0);
                        
                        if (r8_5 != r6_4)
                        {
                            r8_5 = sub_89f8(arg1, r8_5, 0xa, 0);
                            r6_4 = sub_89f8(arg1, r6_4, 0xa, 0);
                        }
                        else
                        {
                            int32_t* r0_155 = sub_89f8(arg1, r8_5, 0xa, 0);
                            r8_5 = r0_155;
                            r6_4 = r0_155;
                        }
                        
                        var_80_3 = &var_80_3[1];
                        continue;
                    }
                    else
                    {
                        if (r3_159 == 0x39)
                        {
                            var_80_3[0xffffffff] = 0x39;
                            break;
                        }
                        
                        r3_159 += 1;
                    }
                    
                    var_80_3[0xffffffff] = r3_159;
                    goto label_8230;
                }
                
                goto label_8384;
            }
            
            char* r0_134 = sub_8934(arg1, r6_4[1]);
            
            if (r0_134)
            {
                sub_6c18(&r0_134[0xc], &r6_4[3], (r6_4[4] + 2) << 2);
                r0_137 = sub_8d50(arg1, r0_134, 1);
                goto label_82b6;
            }
            
            arg3 = r0_134;
            r1 = 0x2ea;
            r3 = 0x800a93d;
        }
        else
        {
            arg3 = r0_28;
            r1 = 0x1aa;
            r3 = 0x800a93d;
        }
    }
    else
    {
        r1 = 0xea;
        r3 = 0x800a8cd;
    }
    
    sub_9534(0x800a8e4, r1, arg3, r3);
    /* no return */
}

int32_t sub_849c(int32_t* arg1, int32_t* arg2)
{
    uint32_t r2_7 = arg2[3];
    
    if (r2_7 << 0x1c < 0)
    {
        int32_t r7_2 = arg2[4];
        
        if (r7_2)
        {
            uint32_t r3_12 = r2_7 << 0x1e;
            bool cond:1_1 = !r3_12;
            
            if (r3_12)
                r3_12 = 0;
            
            if (cond:1_1)
                r3_12 = arg2[5];
            
            int32_t r8_1 = *arg2 - r7_2;
            *arg2 = r7_2;
            arg2[2] = r3_12;
            
            while (true)
            {
                if (r8_1 <= 0)
                    return 0;
                
                int32_t r0_5 = arg2[0xa](arg1, arg2[8], r7_2, r8_1);
                
                if (r0_5 <= 0)
                    break;
                
                r7_2 += r0_5;
                r8_1 -= r0_5;
            }
            
            arg2[3] |= 0x40;
            return 0xffffffff;
        }
    }
    else if (arg2[1] > 0 || arg2[0x10] > 0)
    {
        int32_t r6_1 = arg2[0xb];
        
        if (r6_1)
        {
            int32_t r2 = r2_7 & 0x1000;
            int32_t r7_1 = *arg1;
            *arg1 = 0;
            int32_t result;
            
            if (!r2)
            {
                result = r6_1(arg1, arg2[8], r2, 1);
                
                if (result != 0xffffffff)
                    goto label_84d4;
                
                int32_t r3_10 = *arg1;
                
                if (!r3_10)
                    goto label_84d4;
                
                if (r3_10 != 0x1d && r3_10 != 0x16)
                {
                    arg2[3] |= 0x40;
                    return result;
                }
                
                *arg1 = r7_1;
            }
            else
            {
                result = arg2[0x15];
            label_84d4:
                
                if (arg2[3] << 0x1d < 0)
                {
                    result -= arg2[1];
                    
                    if (arg2[0xd])
                        result -= arg2[0x10];
                }
                
                result = arg2[0xb](arg1, arg2[8], result, 0);
                uint32_t r3_7 = arg2[3];
                int32_t r1_1;
                
                if (result == 0xffffffff)
                    r1_1 = *arg1;
                
                if (result == 0xffffffff && (r1_1 > 0x1d || 0x20400001 >> r1_1 << 0x1f >= 0))
                {
                    arg2[3] = r3_7 | 0x40;
                    return result;
                }
                
                arg2[1] = 0;
                *arg2 = arg2[4];
                
                if (r3_7 << 0x13 < 0 && (result != 0xffffffff || !*arg1))
                    arg2[0x15] = result;
                
                int32_t r1_3 = arg2[0xd];
                *arg1 = r7_1;
                
                if (r1_3)
                {
                    if (r1_3 != &arg2[0x11])
                        sub_9054(arg1, r1_3);
                    
                    arg2[0xd] = 0;
                }
            }
        }
    }
    
    return 0;
}

int32_t sub_85a8(int32_t* arg1, int32_t* arg2)
{
    int32_t* r4 = arg2;
    
    if (arg2[4])
    {
        if (arg1 && !arg1[6])
            sub_86d0(arg1);
        
        if (r4 == 0x800a970)
            r4 = arg1[1];
        else if (r4 == 0x800a990)
            r4 = arg1[2];
        else if (r4 == 0x800a950)
            r4 = arg1[3];
        
        int32_t r3_2 = r4[3];
        
        if (r3_2)
        {
            if (r4[0x19] << 0x1f >= 0 && r3_2 << 0x16 >= 0)
                r4[0x16];
            
            int32_t result = sub_849c(arg1, r4);
            
            if (r4[0x19] << 0x1f >= 0 && r4[3] << 0x16 >= 0)
                r4[0x16];
            
            return result;
        }
    }
    
    return 0;
}

char* sub_8620(int32_t* arg1, int16_t arg2, int16_t arg3)
{
    *arg1 = 0;
    arg1[1] = 0;
    arg1[4] = 0;
    arg1[5] = 0;
    arg1[2] = 0;
    arg1[3] = arg2;
    arg1[0x19] = 0;
    *(arg1 + 0xe) = arg3;
    arg1[6] = 0;
    sub_6c34(&arg1[0x17], 0, sub_0+8);
    arg1[8] = arg1;
    arg1[9] = 0x8009471;
    arg1[0xa] = 0x8009493;
    arg1[0xb] = 0x80094cb;
    arg1[0xc] = 0x80094ef;
    return &arg1[0x17];
}

int32_t sub_8668(int32_t arg1)
{
    /* tailcall */
    return sub_87cc(arg1, 0x80085a9);
}

int32_t* sub_8674(int32_t* arg1, int32_t arg2)
{
    void* r5 = (arg2 - 1) * 0x68;
    int32_t* result = sub_90ec(arg1, r5 + 0x74);
    
    if (result)
    {
        *result = 0;
        result[1] = arg2;
        result[2] = &result[3];
        sub_6c34(&result[3], 0, r5 + 0x68);
    }
    
    return result;
}

int32_t sub_86a0()
{
    /* tailcall */
    return sub_8816();
}

int32_t sub_86ac()
{
    /* tailcall */
    return sub_8818();
}

int32_t sub_86b8()
{
    /* tailcall */
    return sub_8816();
}

int32_t sub_86c4()
{
    /* tailcall */
    return sub_8818();
}

int32_t sub_86d0(int32_t* arg1)
{
    sub_86b8();
    int32_t r3 = arg1[6];
    
    if (!r3)
    {
        arg1[0x12] = r3;
        arg1[0x13] = r3;
        arg1[0x14] = r3;
        int32_t r3_1 = *0x800a888;
        arg1[0xa] = 0x8008669;
        bool cond:0_1 = r3_1 == arg1;
        
        if (r3_1 == arg1)
            r3_1 = 1;
        
        if (cond:0_1)
            arg1[6] = r3_1;
        
        arg1[1] = sub_8740(arg1);
        arg1[2] = sub_8740(arg1);
        arg1[3] = sub_8740(arg1);
        sub_8620(arg1[1], 4, 0);
        sub_8620(arg1[2], 9, 1);
        sub_8620(arg1[3], 0x12, 2);
        arg1[6] = 1;
    }
    
    /* tailcall */
    return sub_86c4();
}

int32_t* sub_8740(int32_t* arg1)
{
    sub_86a0();
    int32_t* r6 = *0x800a888;
    
    if (!r6[6])
        sub_86d0(r6);
    
    void** r6_1 = &r6[0x12];
    
    while (true)
    {
        int32_t r3_1 = r6_1[1];
        int32_t* result = r6_1[2];
        
        while (true)
        {
            int32_t temp0_1 = r3_1;
            r3_1 -= 1;
            
            if (temp0_1 - 1 >= 0)
            {
                int32_t r5_1 = result[3];
                
                if (r5_1)
                {
                    result = &result[0x1a];
                    continue;
                }
                else
                {
                    result[3] = 0xffff0001;
                    result[0x19] = r5_1;
                    sub_86ac();
                    result[1] = r5_1;
                    result[2] = r5_1;
                    result[4] = r5_1;
                    result[5] = r5_1;
                    *result = r5_1;
                    result[6] = r5_1;
                    sub_6c34(&result[0x17], r5_1, sub_0+8);
                    result[0xd] = r5_1;
                    result[0xe] = r5_1;
                    result[0x12] = r5_1;
                    result[0x13] = r5_1;
                }
            }
            else
            {
                if (*r6_1)
                    break;
                
                int32_t* result_1 = sub_8674(arg1, 4);
                result = result_1;
                *r6_1 = result_1;
                
                if (result_1)
                    break;
                
                sub_86ac();
                *arg1 = 0xc;
            }
            
            return result;
        }
        
        r6_1 = *r6_1;
    }
}

int32_t sub_87cc(void* arg1, int32_t arg2)
{
    int32_t result = 0;
    void** i = arg1 + 0x48;
    
    do
    {
        int32_t r9_1 = i[1];
        void* r5_1 = i[2];
        
        while (true)
        {
            int32_t temp0_1 = r9_1;
            r9_1 -= 1;
            
            if (temp0_1 - 1 < 0)
                break;
            
            if (*(r5_1 + 0xc) > 1 && *(r5_1 + 0xe) != 0xffffffff)
                result |= arg2(arg1, r5_1);
            
            r5_1 += 0x68;
        }
        
        i = *i;
    } while (i);
    
    return result;
}

int32_t sub_880c() __pure
{
    return 0x200002bc;
}

int32_t sub_8814() __pure
{
    return;
}

int32_t sub_8816() __pure
{
    return;
}

int32_t sub_8818() __pure
{
    return;
}

int32_t sub_881a(int32_t* arg1, void* arg2, int32_t* arg3, int32_t* arg4)
{
    int32_t r0;
    
    if (*(arg2 + 0xe) >= 0)
        r0 = sub_95b4(arg1);
    
    int32_t r3_2;
    
    if (*(arg2 + 0xe) < 0 || r0 < 0)
    {
        *arg4 = 0;
        
        if (*(arg2 + 0xc) << 0x18 < 0)
            r3_2 = 0x40;
        else
            r3_2 = 0x400;
    }
    else
    {
        int32_t var_64;
        *arg4 = 0 - ((var_64 & 0xf000) - 0x2000) + (var_64 & 0xf000) - 0x2000;
        r3_2 = 0x400;
    }
    
    *arg3 = r3_2;
    return 0;
}

void sub_8864(int32_t* arg1, void** arg2)
{
    uint32_t r3_12 = arg2[3];
    void** var_14 = arg2;
    int32_t* var_18 = arg1;
    int32_t* r6 = arg1;
    
    if (r3_12 << 0x1e < 0)
        goto label_8874;
    
    int16_t r0 = sub_881a(arg1, arg2, &var_18, &var_14);
    arg1 = sub_90ec(r6, var_18);
    
    if (arg1)
    {
        r6[0xa] = 0x8008669;
        int16_t r3_5 = arg2[3];
        *arg2 = arg1;
        arg2[3] = r3_5 | 0x80;
        int32_t* r3_7 = var_18;
        arg2[4] = arg1;
        arg2[5] = r3_7;
        
        if (var_14)
        {
            *(arg2 + 0xe);
            
            if (sub_95d8(r6))
                arg2[3] = (arg2[3] & 0xfffc) | 1;
        }
        
        arg2[3] |= r0;
    }
    else
    {
        int32_t r3_2 = arg2[3];
        
        if (r3_2 << 0x16 >= 0)
        {
            arg2[3] = (r3_2 & 0xfffc) | 2;
        label_8874:
            *arg2 = arg2 + 0x47;
            arg2[4] = arg2 + 0x47;
            arg2[5] = 1;
        }
    }
}

int32_t sub_88e4(int32_t arg1)
{
    /* tailcall */
    return sub_90ec(*0x20000168, arg1);
}

char* sub_88f4(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4)
{
    void var_4;
    
    if (!arg2)
        arg2 = &var_4;
    
    if (!arg3)
        return arg3;
    
    if (!arg4)
        return 0xfffffffe;
    
    *arg2 = *arg3;
    uint32_t r2 = *arg3;
    
    if (r2)
        return &*(nullptr + 1);
    
    return r2;
}

char* sub_8918(char* arg1, char arg2, void* arg3)
{
    char* result_1 = arg1;
    char* result;
    
    do
    {
        result = result_1;
        
        if (result_1 == arg3 + arg1)
            return sub_0;
        
        result_1 = &result_1[1];
    } while (*result != arg2);
    
    return result;
}

char* sub_8934(int32_t* arg1, int32_t arg2)
{
    int32_t r6 = arg1[9];
    
    if (!r6)
    {
        int32_t* r0 = sub_88e4(0x10);
        arg1[9] = r0;
        
        if (!r0)
        {
            sub_9534(0x800a9ba, 0x66, r0, 0x800a8cd);
            /* no return */
        }
        
        r0[1] = r6;
        r0[2] = r6;
        *r0 = r6;
        r0[3] = r6;
    }
    
    void* r6_1 = arg1[9];
    void* r3_3;
    
    if (!*(r6_1 + 0xc))
    {
        char* r0_3 = sub_9038(arg1, 4, 0x21);
        r3_3 = arg1[9];
        *(r6_1 + 0xc) = r0_3;
    }
    
    if (*(r6_1 + 0xc) || *(r3_3 + 0xc))
    {
        int32_t r3_2 = *(arg1[9] + 0xc);
        char* result = *(r3_2 + (arg2 << 2));
        
        if (result)
        {
            *(r3_2 + (arg2 << 2)) = *result;
        label_89a4:
            *(result + 0xc) = 0;
            *(result + 0x10) = 0;
            return result;
        }
        
        int32_t r6_2 = 1 << arg2;
        result = sub_9038(arg1, 1, (r6_2 + 5) << 2);
        
        if (result)
        {
            *(result + 4) = arg2;
            *(result + 8) = r6_2;
            goto label_89a4;
        }
    }
    
    return sub_0;
}

void sub_89b4(int32_t* arg1, int32_t* arg2)
{
    int32_t r6 = arg1[9];
    int32_t* r5 = arg1;
    
    if (!r6)
    {
        arg1 = sub_88e4(0x10);
        r5[9] = arg1;
        
        if (!arg1)
        {
            sub_9534(0x800a9ba, 0x8a, arg1, 0x800a8cd);
            /* no return */
        }
        
        arg1[1] = r6;
        arg1[2] = r6;
        *arg1 = r6;
        arg1[3] = r6;
    }
    
    if (!arg2)
        return;
    
    int32_t r2_2 = arg2[1];
    int32_t r3_2 = *(r5[9] + 0xc);
    *arg2 = *(r3_2 + (r2_2 << 2));
    *(r3_2 + (r2_2 << 2)) = arg2;
}

int32_t* sub_89f8(int32_t* arg1, int32_t* arg2, int32_t arg3, uint32_t arg4)
{
    uint32_t r8 = arg4;
    int32_t* result = arg2;
    int32_t r3 = 0;
    int32_t r6 = arg2[4];
    int32_t* r0 = &arg2[5];
    
    do
    {
        int32_t r5_1 = *r0;
        r3 += 1;
        int32_t r1_1 = r8 + arg3 * r5_1;
        int32_t r5_3 = (r1_1 >> 0x10) + arg3 * (r5_1 >> 0x10);
        r8 = r5_3 >> 0x10;
        *r0 = r1_1 + (r5_3 << 0x10);
        r0 = &r0[1];
    } while (r6 > r3);
    
    if (r8)
    {
        if (result[2] <= r6)
        {
            char* result_1 = sub_8934(arg1, result[1] + 1);
            
            if (!result_1)
            {
                sub_9534(0x800a9ba, 0xb5, result_1, 0x800a93d);
                /* no return */
            }
            
            sub_6c18(&result_1[0xc], &result[3], (result[4] + 2) << 2);
            sub_89b4(arg1, result);
            result = result_1;
        }
        
        result[r6 + 5] = r8;
        result[4] = r6 + 1;
    }
    
    return result;
}

int32_t sub_8a8c(int32_t arg1) __pure
{
    int32_t r3 = arg1;
    int32_t result;
    
    if (arg1 & 0xffff0000)
        result = 0;
    else
    {
        r3 = arg1 << 0x10;
        result = 0x10;
    }
    
    if (!(r3 & 0xff000000))
    {
        r3 <<= 8;
        result += 8;
    }
    
    if (!(r3 & 0xf0000000))
    {
        r3 <<= 4;
        result += 4;
    }
    
    if (!(r3 & 0xc0000000))
    {
        r3 <<= 2;
        result += 2;
    }
    
    if (r3 >= 0)
    {
        result += 1;
        
        if (!(r3 & 0x40000000))
            return 0x20;
    }
    
    return result;
}

int32_t sub_8acc(int32_t* arg1)
{
    uint32_t r3_1 = *arg1;
    int32_t r0 = r3_1 & 7;
    
    if (r0)
    {
        if (r3_1 << 0x1f < 0)
            return 0;
        
        int32_t r0_1 = r3_1 << 0x1e;
        bool cond:0 = r0_1 >= 0;
        uint32_t r3;
        
        if (r0_1 < 0)
        {
            r3 = r3_1 >> 1;
            r0_1 = 1;
            *arg1 = r3;
        }
        else
            r3 = r3_1 >> 2;
        
        if (cond:0)
        {
            r0_1 = 2;
            *arg1 = r3;
        }
        
        return r0_1;
    }
    
    if (!r3_1)
    {
        r0 = 0x10;
        r3_1 u>>= 0x10;
    }
    
    if (!(r3_1 & 0xff))
    {
        r3_1 u>>= 8;
        r0 += 8;
    }
    
    if (!(r3_1 << 0x1c))
    {
        r3_1 u>>= 4;
        r0 += 4;
    }
    
    if (!(r3_1 << 0x1e))
    {
        r3_1 u>>= 2;
        r0 += 2;
    }
    
    if (r3_1 << 0x1f >= 0)
    {
        r3_1 u>>= 1;
        r0 += 1;
        
        if (!r3_1)
            return 0x20;
    }
    
    *arg1 = r3_1;
    return r0;
}

char* sub_8b28(int32_t* arg1, int32_t arg2)
{
    char* result = sub_8934(arg1, 1);
    
    if (!result)
    {
        sub_9534(0x800a9ba, 0x140, result, 0x800a93d);
        /* no return */
    }
    
    *(result + 0x14) = arg2;
    *(result + 0x10) = 1;
    return result;
}

char* sub_8b54(int32_t* arg1, void* arg2, void* arg3)
{
    void* r4 = arg3;
    void* r5 = arg2;
    
    if (*(arg2 + 0x10) < *(r4 + 0x10))
    {
        r5 = r4;
        r4 = arg2;
    }
    
    int32_t r10 = *(r5 + 0x10);
    int32_t r9 = *(r4 + 0x10);
    int32_t r1 = *(r5 + 4);
    int32_t i_2 = r10 + r9;
    
    if (*(r5 + 8) < i_2)
        r1 += 1;
    
    char* result = sub_8934(arg1, r1);
    
    if (!result)
    {
        sub_9534(0x800a9ba, 0x15d, result, 0x800a93d);
        /* no return */
    }
    
    int32_t* i_4 = &result[0x14];
    int32_t* i = i_4;
    int32_t* r8;
    
    for (r8 = &i_4[i_2]; i < r8; i = &i[1])
        *i = 0;
    
    int16_t* i_1 = r4 + 0x14;
    void* r12_1 = r5 + 0x14 + (r10 << 2);
    int32_t r2_6 = ((r12_1 - r5 - 0x15) & 0xfffffffc) + 4;
    
    if (r12_1 < r5 + 0x15)
        r2_6 = 4;
    
    while (&i_1[r9 * 2] > i_1)
    {
        uint32_t r10_1 = *i_1;
        
        if (r10_1)
        {
            int32_t* i_5 = i_4;
            uint32_t r2_8 = 0;
            int32_t* lr_1 = r5 + 0x14;
            
            do
            {
                int32_t r4_1 = *lr_1;
                lr_1 = &lr_1[1];
                int32_t r1_4 = *i_5 + r10_1 * r4_1 + r2_8;
                int32_t r4_4 = (*i_5 >> 0x10) + r10_1 * (r4_1 >> 0x10) + (r1_4 >> 0x10);
                r2_8 = r4_4 >> 0x10;
                *i_5 = r1_4 | r4_4 << 0x10;
                i_5 = &i_5[1];
            } while (r12_1 > lr_1);
            
            *(i_4 + r2_6) = r2_8;
        }
        
        int16_t* i_3 = i_1;
        i_1 = &i_1[2];
        uint32_t r9_1 = i_3[1];
        
        if (r9_1)
        {
            int32_t* i_6 = i_4;
            uint32_t r10_2 = 0;
            int32_t r4_5 = *i_4;
            int32_t* r1_8 = r5 + 0x14;
            
            do
            {
                int32_t r10_3 = r10_2 + *(i_6 + 2) + r9_1 * *r1_8;
                *i_6 = r4_5 | r10_3 << 0x10;
                i_6 = &i_6[1];
                int32_t r4_8 = *r1_8;
                r1_8 = &r1_8[1];
                r4_5 = *i_6 + r9_1 * (r4_8 >> 0x10) + (r10_3 >> 0x10);
                r10_2 = r4_5 >> 0x10;
            } while (r12_1 > r1_8);
            
            *(i_4 + r2_6) = r4_5;
        }
        
        i_4 = &i_4[1];
    }
    
    for (; i_2 > 0; i_2 -= 1)
    {
        r8 -= 4;
        
        if (*r8)
            break;
    }
    
    *(result + 0x10) = i_2;
    return result;
}

int32_t* sub_8c9c(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t r2 = arg3 & 3;
    int32_t* result = arg2;
    
    if (r2)
        result = sub_89f8(arg1, arg2, *(0x800ab08 + ((r2 - 1) << 2)), 0);
    
    int32_t r5_1 = arg3 >> 2;
    
    if (r5_1)
    {
        int32_t r4_1 = arg1[9];
        
        if (!r4_1)
        {
            int32_t* r0_1 = sub_88e4(0x10);
            arg1[9] = r0_1;
            
            if (!r0_1)
            {
                sub_9534(0x800a9ba, 0x1ae, r0_1, 0x800a8cd);
                /* no return */
            }
            
            r0_1[1] = r4_1;
            r0_1[2] = r4_1;
            *r0_1 = r4_1;
            r0_1[3] = r4_1;
        }
        
        void* r8_1 = arg1[9];
        char** r4_2 = *(r8_1 + 8);
        
        if (!r4_2)
        {
            char* r0_3 = sub_8b28(arg1, 0x271);
            r4_2 = r0_3;
            *(r8_1 + 8) = r0_3;
            *r0_3 = 0;
        }
        
        while (true)
        {
            if (r5_1 << 0x1f < 0)
            {
                char* result_1 = sub_8b54(arg1, result, r4_2);
                sub_89b4(arg1, result);
                result = result_1;
            }
            
            r5_1 s>>= 1;
            
            if (!r5_1)
                break;
            
            char* r0_6 = *r4_2;
            
            if (!r0_6)
            {
                r0_6 = sub_8b54(arg1, r4_2, r4_2);
                *r4_2 = r0_6;
                *r0_6 = 0;
            }
            
            r4_2 = r0_6;
        }
    }
    
    return result;
}

char* sub_8d50(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t r1 = arg2[1];
    int32_t r8 = arg2[4] + (arg3 >> 5);
    int32_t i = arg2[2];
    int32_t r10 = arg3 >> 5;
    int32_t r6;
    
    for (r6 = r8 + 1; i < r6; i <<= 1)
        r1 += 1;
    
    char* result = sub_8934(arg1, r1);
    
    if (!result)
    {
        sub_9534(0x800a9ba, 0x1d9, result, 0x800a93d);
        /* no return */
    }
    
    int32_t i_1 = 0;
    int32_t* r2_1 = &result[0x10];
    
    for (; i_1 < r10; i_1 += 1)
    {
        r2_1 = &r2_1[1];
        *r2_1 = 0;
    }
    
    int32_t* r3_1 = &arg2[5];
    int32_t r9_1 = arg3 & 0x1f;
    int32_t* r1_2 = &result[0x14 + ((r10 & ~(r10 >> 0x1f)) << 2)];
    void* r12 = &r3_1[arg2[4]];
    
    if (!r9_1)
    {
        int32_t* r1_4 = r1_2 - 4;
        
        do
        {
            int32_t r2_5 = *r3_1;
            r3_1 = &r3_1[1];
            r1_4 = &r1_4[1];
            *r1_4 = r2_5;
        } while (r12 > r3_1);
    }
    else
    {
        int32_t* r10_2 = r1_2;
        uint32_t r2_2 = 0;
        
        do
        {
            *r10_2 = r2_2 | *r3_1 << r9_1;
            r10_2 = &r10_2[1];
            int32_t r2_4 = *r3_1;
            r3_1 = &r3_1[1];
            r2_2 = r2_4 >> (0x20 - r9_1);
        } while (r12 > r3_1);
        
        int32_t r3_5 = ((r12 - arg2 - 0x15) & 0xfffffffc) + 4;
        
        if (r12 < arg2 + 0x15)
            r3_5 = 4;
        
        *(r1_2 + r3_5) = r2_2;
        
        if (r2_2)
            r6 = r8 + 2;
    }
    
    *(result + 0x10) = r6 - 1;
    sub_89b4(arg1, arg2);
    return result;
}

int32_t sub_8e28(void* arg1, void* arg2)
{
    int32_t r2 = *(arg2 + 0x10);
    int32_t r0 = *(arg1 + 0x10);
    
    if (r0 == r2)
    {
        int32_t* i = arg1 + 0x14 + (r2 << 2);
        int32_t* r1_1 = arg2 + 0x14 + (r2 << 2);
        
        do
        {
            i -= 4;
            int32_t r5_1 = *i;
            r1_1 -= 4;
            int32_t r2_1 = *r1_1;
            
            if (r5_1 != r2_1)
            {
                if (r5_1 < r2_1)
                    return 0xffffffff;
                
                return 1;
            }
        } while (arg1 + 0x14 < i);
    }
    
    return r0 - r2;
}

char* sub_8e60(int32_t* arg1, void* arg2, void* arg3)
{
    void* r4 = arg2;
    void* r10 = arg3;
    int32_t r0_1;
    void* r3;
    r0_1 = sub_8e28(r4, arg3);
    char* result;
    
    if (r0_1)
    {
        if (r0_1 >= 0)
        {
            r3 = r10;
            r10 = r4;
        }
        
        int32_t r5_1;
        
        if (r0_1 >= 0)
        {
            r4 = r3;
            r5_1 = 0;
        }
        else
            r5_1 = 1;
        
        char* result_2 = sub_8934(arg1, *(r10 + 4));
        result = result_2;
        
        if (!result_2)
        {
            sub_9534(0x800a9ba, 0x240, result, 0x800a93d);
            /* no return */
        }
        
        int32_t r7_1 = *(r10 + 0x10);
        *(result_2 + 0xc) = r5_1;
        int32_t r12_1 = 0;
        int32_t* r0_5 = r10 + 0x10;
        int32_t* r10_1 = &result_2[0x14];
        int32_t* r9_1 = r4 + 0x14;
        void* lr_1 = r10 + 0x14 + (r7_1 << 2);
        void* r6_2 = &r9_1[*(r4 + 0x10)];
        
        do
        {
            r0_5 = &r0_5[1];
            int32_t r11_1 = *r0_5;
            int32_t r3_1 = *r9_1;
            r9_1 = &r9_1[1];
            int32_t r1_6 = r11_1 + r12_1 - r3_1;
            int32_t r3_4 = (r11_1 >> 0x10) - (r3_1 >> 0x10) + (r1_6 >> 0x10);
            r12_1 = r3_4 >> 0x10;
            *r10_1 = r1_6 | r3_4 << 0x10;
            r10_1 = &r10_1[1];
        } while (r6_2 > r9_1);
        
        int32_t* const r3_9 = ((r6_2 - r4 - 0x15) & 0xfffffffc) + 4;
        
        if (r6_2 < r4 + 0x15)
            r3_9 = &data_4;
        
        int32_t* r5_3 = r10 + 0x14 + r3_9;
        int32_t* r3_10 = r3_9 + &result_2[0x14];
        int32_t* r6_3 = r3_10;
        int32_t* r4_2 = r5_3;
        
        while (r4_2 < lr_1)
        {
            int32_t r8_2 = *r4_2;
            r4_2 = &r4_2[1];
            int32_t r1_13 = r8_2 + r12_1;
            int32_t r0_7 = (r1_13 >> 0x10) + (r8_2 >> 0x10);
            r12_1 = r0_7 >> 0x10;
            *r6_3 = r1_13 | r0_7 << 0x10;
            r6_3 = &r6_3[1];
        }
        
        int32_t (* r1_10)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
            int32_t arg5 @ r7, int32_t arg6 @ r9) = (lr_1 + 3 - r5_3) & 0xfffffffc;
        
        if (lr_1 < r5_3 - 3)
            r1_10 = sub_0;
        
        int32_t* r1_11 = r1_10 + r3_10;
        
        while (true)
        {
            r1_11 -= 4;
            
            if (*r1_11)
                break;
            
            r7_1 -= 1;
        }
        
        *(result + 0x10) = r7_1;
    }
    else
    {
        char* result_1 = sub_8934(arg1, r0_1);
        result = result_1;
        
        if (!result_1)
        {
            sub_9534(0x800a9ba, 0x232, result, 0x800a93d);
            /* no return */
        }
        
        *(result_1 + 0x10) = 1;
        *(result_1 + 0x14) = r0_1;
    }
    
    return result;
}

char* sub_8f80(int32_t* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t* arg6)
{
    uint32_t var_1c = arg2;
    int32_t* var_20 = arg1;
    char* result = sub_8934(arg1, 1);
    
    if (!result)
    {
        sub_9534(0x800a9ba, 0x30a, result, 0x800a93d);
        /* no return */
    }
    
    uint32_t r3 = arg4 & 0xfffff;
    int32_t r5_1 = arg4 >> 0x14 & 0x7ff;
    
    if (r5_1)
        r3 |= 0x100000;
    
    var_1c = r3;
    int32_t r0_1;
    int32_t r1_1;
    
    if (!arg3)
    {
        int32_t r0_5 = sub_8acc(&var_1c);
        r1_1 = 1;
        uint32_t r3_6 = var_1c;
        *(result + 0x10) = 1;
        *(result + 0x14) = r3_6;
        r0_1 = r0_5 + 0x20;
    }
    else
    {
        var_20 = arg3;
        r0_1 = sub_8acc(&var_20);
        int32_t* r1 = var_20;
        
        if (!r0_1)
            *(result + 0x14) = r1;
        else
        {
            uint32_t r2_1 = var_1c;
            *(result + 0x14) = r2_1 << (0x20 - r0_1) | r1;
            var_1c = r2_1 >> r0_1;
        }
        
        uint32_t r3_5 = var_1c;
        
        r1_1 = r3_5 ? 2 : 1;
        
        *(result + 0x18) = r3_5;
        *(result + 0x10) = r1_1;
    }
    
    if (!r5_1)
    {
        *arg5 = r0_1 - 0x432;
        *arg6 = (r1_1 << 5) - sub_8a8c(*(result + (r1_1 << 2) + 0x10));
    }
    else
    {
        *arg5 = r5_1 - 0x433 + r0_1;
        *arg6 = 0x35 - r0_1;
    }
    
    return result;
}

char* sub_9038(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    void* r5 = arg3 * arg2;
    char* result = sub_90ec(arg1, r5);
    
    if (result)
        sub_6c34(result, 0, r5);
    
    return result;
}

void sub_9054(int32_t* arg1, int32_t arg2)
{
    int32_t lr;
    int32_t var_4 = lr;
    
    if (!arg2)
        return;
    
    int32_t r3 = *(arg2 - 4);
    int32_t* r4 = arg2 - 4;
    
    if (r3 < 0)
        r4 += r3;
    
    sub_961c();
    int32_t* r3_1 = *0x20000400;
    
    if (!r3_1)
    {
        r4[1] = r3_1;
        *0x20000400 = r4;
    }
    else if (r3_1 <= r4)
    {
        int32_t* r2_4;
        
        do
        {
            r2_4 = r3_1;
            r3_1 = r3_1[1];
            
            if (!r3_1)
                break;
        } while (r3_1 <= r4);
        
        int32_t r1_1 = *r2_4;
        void* r0_2 = r2_4 + r1_1;
        
        if (r0_2 == r4)
        {
            int32_t r1_2 = r1_1 + *r4;
            *r2_4 = r1_2;
            
            if (r3_1 == r2_4 + r1_2)
            {
                int32_t r3_2 = r3_1[1];
                *r2_4 = r1_2 + *r3_1;
                r2_4[1] = r3_2;
            }
        }
        else if (r0_2 <= r4)
        {
            int32_t r0_6 = *r4;
            
            if (r3_1 == r4 + r0_6)
            {
                int32_t r1_5 = *r3_1;
                r3_1 = r3_1[1];
                *r4 = r1_5 + r0_6;
            }
            
            r4[1] = r3_1;
            r2_4[1] = r4;
        }
        else
            *arg1 = 0xc;
    }
    else
    {
        int32_t r1 = *r4;
        
        if (r3_1 == r4 + r1)
        {
            int32_t r2_2 = *r3_1;
            r3_1 = r3_1[1];
            *r4 = r2_2 + r1;
        }
        
        r4[1] = r3_1;
        *0x20000400 = r4;
    }
    
    /* tailcall */
    return sub_9628();
}

void* sub_90ec(int32_t* arg1, int32_t arg2)
{
    int32_t r5_2 = ((arg2 + 3) & 0xfffffffc) + 8;
    
    if (r5_2 < 0xc)
        r5_2 = 0xc;
    
    if (r5_2 < 0 || arg2 > r5_2)
        *arg1 = 0xc;
    else
    {
        sub_961c();
        int32_t* r2_1 = *0x20000400;
        int32_t* r4_1 = r2_1;
        
        while (true)
        {
            if (r4_1)
            {
                int32_t r3_3 = *r4_1;
                int32_t r3_4 = r3_3 - r5_2;
                
                if (r3_3 - r5_2 < 0)
                {
                    r2_1 = r4_1;
                    r4_1 = r4_1[1];
                    continue;
                }
                else if (r3_4 <= 0xb)
                {
                    int32_t r3_5 = r4_1[1];
                    
                    if (r2_1 == r4_1)
                        *0x20000400 = r3_5;
                    else
                        r2_1[1] = r3_5;
                }
                else
                {
                    *r4_1 = r3_4;
                    r4_1 += r3_4;
                    *r4_1 = r5_2;
                }
            }
            else
            {
                if (!*0x20000404)
                    *0x20000404 = sub_9450(arg1, r4_1);
                
                int32_t r0_3 = sub_9450(arg1, r5_2);
                
                if (r0_3 == 0xffffffff)
                {
                label_913a:
                    *arg1 = 0xc;
                    sub_9628();
                    break;
                }
                
                r4_1 = (r0_3 + 3) & 0xfffffffc;
                
                if (r0_3 != r4_1 && sub_9450(arg1, r4_1 - r0_3) == 0xffffffff)
                    goto label_913a;
                
                *r4_1 = r5_2;
            }
            
            sub_9628();
            void* result = (r4_1 + 0xb) & 0xfffffff8;
            
            if (result != &r4_1[1])
                *(r4_1 + result - &r4_1[1]) = &r4_1[1] - result;
            
            return result;
        }
    }
    
    return sub_0;
}

int32_t sub_91a0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r3 = arg3[2] - 1;
    arg3[2] = r3;
    
    if (r3 < 0 && (r3 < arg3[6] || arg2 == 0xa))
        /* tailcall */
        return sub_7620(arg1, arg2, arg3);
    
    char* r3_2 = *arg3;
    *arg3 = &r3_2[1];
    *r3_2 = arg2;
    return arg2;
}

int32_t sub_91ca(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    char* r4 = arg3;
    int32_t i;
    
    do
    {
        if (r4 == &arg3[arg4])
            return 0;
        
        uint32_t r1 = *r4;
        r4 = &r4[1];
        i = sub_91a0(arg1, r1, arg2);
    } while (i != 0xffffffff);
    
    return i;
}

int32_t (*)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, int32_t arg5 @ r7, int32_t arg6 @ r9) sub_91f0(int32_t* arg1, void** arg2, char* arg3, int32_t* arg4, int32_t arg5 @ r7)
{
    int32_t var_18 = arg5;
    void** r5 = arg2;
    char* r4 = arg3;
    
    if (arg1 && !arg1[6])
        sub_86d0(arg1);
    
    if (r5 == 0x800a970)
        r5 = arg1[1];
    else if (r5 == 0x800a990)
        r5 = arg1[2];
    else if (r5 == 0x800a950)
        r5 = arg1[3];
    
    if (r5[0x19] << 0x1f >= 0 && r5[3] << 0x16 >= 0)
        r5[0x16];
    
    int32_t r0_2;
    
    if (r5[3] << 0x1c >= 0 || !r5[4])
        r0_2 = sub_76c4(arg1, r5);
    
    if ((r5[3] << 0x1c < 0 && r5[4]) || !r0_2)
    {
        int32_t (* result)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, 
            int32_t arg5 @ r7, int32_t arg6 @ r9) = sub_0;
        char var_6f_1 = 0x20;
        int32_t* var_8c = arg4;
        char var_6e_1 = 0x30;
        
        while (true)
        {
            char* r3_8 = r4;
            char* r10_1;
            uint32_t i;
            
            do
            {
                r10_1 = r3_8;
                i = *r3_8;
                r3_8 = &r3_8[1];
                
                if (!i)
                    break;
            } while (i != 0x25);
            void* r11_1 = r10_1 - r4;
            
            if (r10_1 != r4)
            {
                if (sub_91ca(arg1, r5, r4, r11_1) == 0xffffffff)
                    break;
                
                result += r11_1;
            }
            
            if (!*r10_1)
                break;
            
            int32_t var_84_1 = 0xffffffff;
            int32_t var_80_1 = 0;
            char* r10_2 = &r10_1[1];
            int32_t var_88 = 0;
            int32_t var_7c_1 = 0;
            char var_45_1 = 0;
            int32_t var_30_1 = 0;
            int32_t r2_4;
            char* r4_3;
            
            while (true)
            {
                r4_3 = &r10_2[1];
                char* r0_9 = sub_8918(0x800ab14, *r10_2, &*(data_4 + 1));
                r2_4 = var_88;
                
                if (!r0_9)
                    break;
                
                r10_2 = r4_3;
                var_88 = 1 << (r0_9 - 0x800ab14) | r2_4;
            }
            
            if (r2_4 << 0x1b < 0)
                char var_45_2 = 0x20;
            
            if (r2_4 << 0x1c < 0)
                char var_45_3 = 0x2b;
            
            if (*r10_2 == 0x2a)
            {
                int32_t* r3_18 = var_8c;
                int32_t r3_19 = *r3_18;
                var_8c = &r3_18[1];
                
                if (r3_19 < 0)
                {
                    r2_4 |= 2;
                    int32_t var_7c_4 = 0 - r3_19;
                }
                else
                    int32_t var_7c_3 = r3_19;
                
                if (r3_19 < 0)
                    var_88 = r2_4;
            }
            else
            {
                r4_3 = r10_2;
                int32_t r0_10 = 0;
                int32_t r2_5 = var_7c_1;
                
                while (true)
                {
                    int32_t r3_14 = *r4_3 - 0x30;
                    
                    if (r3_14 > 9)
                        break;
                    
                    r4_3 = &r4_3[1];
                    r0_10 = 1;
                    r2_5 = r3_14 + 0xa * r2_5;
                }
                
                if (r0_10)
                    int32_t var_7c_2 = r2_5;
            }
            
            if (*r4_3 == 0x2e)
            {
                if (r4_3[1] != 0x2a)
                {
                    int32_t r3_33 = 0;
                    int32_t r1_10 = 0;
                    r4_3 = &r4_3[1];
                    int32_t var_84_3 = 0;
                    
                    while (true)
                    {
                        int32_t r2_8 = *r4_3 - 0x30;
                        
                        if (r2_8 > 9)
                            break;
                        
                        r4_3 = &r4_3[1];
                        r3_33 = 1;
                        r1_10 = r2_8 + 0xa * r1_10;
                    }
                    
                    if (r3_33)
                        int32_t var_84_4 = r1_10;
                }
                else
                {
                    int32_t* r3_23 = var_8c;
                    r4_3 = &r4_3[2];
                    int32_t r3_24 = *r3_23;
                    var_8c = &r3_23[1];
                    
                    if (r3_24 < 0)
                        r3_24 = 0xffffffff;
                    
                    int32_t var_84_2 = r3_24;
                }
            }
            
            char* r0_11 = sub_8918(0x800ab1a, *r4_3, sub_0+3);
            
            if (r0_11)
            {
                r4_3 = &r4_3[1];
                var_88 |= 0x40 << (r0_11 - 0x800ab1a);
            }
            
            char r1_9 = *r4_3;
            r4 = &r4_3[1];
            char var_70_1 = r1_9;
            int32_t r0_18;
            
            if (!sub_8918(0x800ab1e, r1_9, &*(data_4 + 2)))
                r0_18 = sub_72b8(arg1, &var_88, r5, 0x80091cb, &var_8c);
            else
                r0_18 = sub_6d80(arg1, &var_88, r5, 0x80091cb, &var_8c);
            
            if (r0_18 == 0xffffffff)
                break;
            
            result += r0_18;
        }
        
        if (r5[0x19] << 0x1f >= 0 && r5[3] << 0x16 >= 0)
            r5[0x16];
        
        if (r5[3] << 0x19 >= 0)
            return result;
    }
    else if (r5[0x19] << 0x1f >= 0 && r5[3] << 0x16 >= 0)
        r5[0x16];
    
    return 0xffffffff;
}

int32_t sub_9450(int32_t* arg1, int32_t arg2)
{
    *0x20000b4c = 0;
    int32_t result = sub_9760(arg2);
    
    if (result == 0xffffffff)
    {
        int32_t r3_1 = *0x20000b4c;
        
        if (r3_1)
            *arg1 = r3_1;
    }
    
    return result;
}

int32_t sub_9470(int32_t* arg1, void* arg2)
{
    *(arg2 + 0xe);
    int32_t result = sub_9634(arg1);
    int32_t r3_2;
    
    if (result >= 0)
        r3_2 = *(arg2 + 0x54) + result;
    else
        r3_2 = *(arg2 + 0xc) & 0xffffefff;
    
    if (result >= 0)
        *(arg2 + 0x54) = r3_2;
    else
        *(arg2 + 0xc) = r3_2;
    
    return result;
}

int32_t sub_9492(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    if (*(arg2 + 0xc) << 0x17 < 0)
    {
        *(arg2 + 0xe);
        sub_95f8(arg1);
    }
    
    *(arg2 + 0xc) &= 0xefff;
    /* tailcall */
    return sub_9510(arg1, *(arg2 + 0xe), arg3, arg4);
}

int32_t sub_94ca(int32_t* arg1, void* arg2)
{
    *(arg2 + 0xe);
    int32_t result = sub_95f8(arg1);
    int16_t r3 = *(arg2 + 0xc);
    int16_t r3_1;
    
    if (result != 0xffffffff)
    {
        *(arg2 + 0x54) = result;
        r3_1 = r3 | 0x1000;
    }
    else
    {
        r3_1 = r3 & 0xefff;
        *(arg2 + 0xc) = r3_1;
    }
    
    if (result != 0xffffffff)
        *(arg2 + 0xc) = r3_1;
    
    return result;
}

int32_t sub_94ee(int32_t arg1, void* arg2)
{
    *(arg2 + 0xe);
    /* tailcall */
    return sub_9570(arg1);
}

char* sub_94f6(int32_t* arg1, char* arg2, int32_t arg3)
{
    char* result = arg2;
    
    if (arg2)
    {
        if (arg3 > 0xff)
        {
            *arg1 = 0x8a;
            return 0xffffffff;
        }
        
        result = &*(nullptr + 1);
        *arg2 = arg3;
    }
    
    return result;
}

int32_t sub_9510(int32_t* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    *0x20000b4c = 0;
    int32_t result = sub_5a9c(arg2, arg3, arg4);
    
    if (result == 0xffffffff)
    {
        int32_t r3_1 = *0x20000b4c;
        
        if (r3_1)
            *arg1 = r3_1;
    }
    
    return result;
}

void sub_9534(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __noreturn
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    int32_t var_14_1 = arg2;
    int32_t var_18_1 = arg1;
    int32_t r4 = arg3;
    int32_t r3_1;
    
    if (!r4)
    {
        r3_1 = 0x8009fe5;
        r4 = 0x8009fe5;
    }
    else
        r3_1 = 0x800ab25;
    
    int32_t var_14 = r3_1;
    int32_t var_10 = r4;
    int32_t var_18 = arg2;
    sub_9590(*(*0x20000168 + 0xc), 0x800ab32, arg4);
    sub_9658();
    /* no return */
}

int32_t sub_9570(int32_t* arg1)
{
    *0x20000b4c = 0;
    sub_96f0();
    int32_t r3_1 = *0x20000b4c;
    
    if (r3_1)
        *arg1 = r3_1;
    
    return 0xffffffff;
}

int32_t (*)(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4 @ r6, int32_t arg5 @ r7, int32_t arg6 @ r9) sub_9590(void** arg1, char* arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_4 = r3;
    int32_t var_8 = arg3;
    char* var_14 = arg2;
    void** var_18 = arg1;
    int32_t* var_14_1 = &var_8;
    int32_t r7;
    return sub_91f0(*0x20000168, arg1, arg2, &var_8, r7);
}

int32_t sub_95b4(int32_t* arg1)
{
    *0x20000b4c = 0;
    sub_9700();
    int32_t r3_1 = *0x20000b4c;
    
    if (r3_1)
        *arg1 = r3_1;
    
    return 0xffffffff;
}

int32_t sub_95d8(int32_t* arg1)
{
    *0x20000b4c = 0;
    sub_9720();
    return 0;
}

int32_t sub_95f8(int32_t* arg1)
{
    int32_t r3;
    int32_t var_10 = r3;
    *0x20000b4c = 0;
    sub_9740();
    int32_t r3_2 = *0x20000b4c;
    
    if (r3_2)
        *arg1 = r3_2;
    
    return 0xffffffff;
}

int32_t sub_961c()
{
    /* tailcall */
    return sub_8816();
}

int32_t sub_9628()
{
    /* tailcall */
    return sub_8818();
}

int32_t sub_9634(int32_t* arg1)
{
    int32_t r3;
    int32_t var_10 = r3;
    *0x20000b4c = 0;
    sub_9750();
    int32_t r3_2 = *0x20000b4c;
    
    if (r3_2)
        *arg1 = r3_2;
    
    return 0xffffffff;
}

void sub_9658() __noreturn
{
    int32_t r3;
    int32_t var_8 = r3;
    sub_96b8(6);
    sub_977c();
    /* no return */
}

int32_t sub_9666(int32_t* arg1, int32_t arg2)
{
    int32_t lr;
    int32_t var_4 = lr;
    
    if (arg2 > 0x1f)
    {
        *arg1 = 0x16;
        return 0xffffffff;
    }
    
    int32_t r2_1 = arg1[0x11];
    
    if (r2_1)
    {
        int32_t r3_1 = *(r2_1 + (arg2 << 2));
        
        if (r3_1)
        {
            if (r3_1 != 1)
            {
                if (r3_1 == 0xffffffff)
                {
                    *arg1 = 0x16;
                    return 1;
                }
                
                *(r2_1 + (arg2 << 2)) = 0;
                r3_1(arg2, r3_1 + 1);
            }
            
            return 0;
        }
    }
    
    j_sub_9710();
    /* tailcall */
    return sub_96c8(arg1);
}

int32_t sub_96b8(int32_t arg1)
{
    /* tailcall */
    return sub_9666(*0x20000168, arg1);
}

int32_t sub_96c8(int32_t* arg1)
{
    *0x20000b4c = 0;
    sub_9730();
    int32_t r3_1 = *0x20000b4c;
    
    if (r3_1)
        *arg1 = r3_1;
    
    return 0xffffffff;
}

int32_t sub_96ea()
{
    /* tailcall */
    return j_sub_9710();
}

int32_t j_sub_9710()
{
    /* tailcall */
    return sub_9710();
}

int32_t sub_96f0()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9700()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9710()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9720()
{
    *0x20000b4c = 0x58;
    return 0;
}

int32_t sub_9730()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9740()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9750()
{
    *0x20000b4c = 0x58;
    return 0xffffffff;
}

int32_t sub_9760(int32_t arg1)
{
    int32_t result = *0x20000408;
    
    if (!result)
        result = 0x20000b50;
    
    *0x20000408 = arg1 + result;
    return result;
}

void sub_977c() __noreturn
{
    while (true)
        /* nop */
}

void sub_9780() __noreturn
{
    int32_t r1 = 0;
    
    while (0x20000000 + r1 < 0x20000338)
    {
        *(0x20000000 + r1) = *(0x800ac6c + r1);
        r1 += 4;
    }
    
    for (int32_t* i = 0x20000338; i < 0x20000b50; i = &i[1])
        *i = 0;
    
    sub_5a30();
    sub_6bd0();
    sub_4d48();
    /* no return */
}

void sub_97c8() __noreturn
{
    while (true)
        /* nop */
}

int32_t sub_97cc() __pure
{
    return;
}

int32_t sub_97d8() __pure
{
    return;
}

int32_t sub_9a82(int32_t arg1 @ r4, int32_t arg2 @ r7)
{
    void*** r4_1 = arg1 - 0x102;
    int32_t* r7_10 = arg2 - 0x54b;
    int32_t* r0_9;
    int32_t* r1_8;
    void** r2_11;
    void*** r3_10;
    void*** r5_3;
    int32_t r6_2;
    bool n_1;
    bool z_1;
    bool v_1;
    
    do
    {
        n_1 = r7_10 + 0x6d < 0;
        z_1 = r7_10 == 0xffffff93;
        v_1 = r7_10 + 0x6d;
        int32_t* r0_1 = *(r4_1 - 0x102);
        void* r2_1 = *(r4_1 - 0xfe);
        void** r2_2 = *(r2_1 + 4);
        int32_t* r3_1 = *(r2_1 + 8);
        int32_t* r5_1 = *(r2_1 + 0x10);
        int32_t* r1_1 = *r0_1;
        int32_t* r4_4 = r0_1[1];
        int32_t r6_1 = r0_1[2];
        int32_t* r7_11 = r0_1[3];
        *r7_11 = &r0_1[4];
        r7_11[1] = r1_1;
        r7_11[2] = r3_1;
        r7_11[3] = r4_4;
        *r5_1 = &r0_1[4];
        r5_1[1] = r1_1;
        r5_1[2] = r2_2;
        r5_1[3] = r4_4;
        r5_1[4] = &r7_11[4];
        *r4_4 = &r0_1[4];
        r4_4[1] = r1_1;
        r4_4[2] = r2_2;
        r4_4[3] = r6_1;
        *r3_1 = &r0_1[4];
        r3_1[1] = r1_1;
        r3_1[2] = r2_2;
        r3_1[3] = &r5_1[5];
        *r2_2 = &r3_1[4];
        r2_2[1] = &r4_4[4];
        r2_2[2] = &r5_1[5];
        *r1_1 = &r0_1[4];
        r1_1[1] = r1_1;
        r1_1[2] = &r2_2[3];
        r1_1[3] = &r4_4[4];
        r1_1[4] = &r5_1[5];
        r1_1[5] = r6_1;
        r0_1[4] = &r0_1[4];
        r0_1[5] = &r5_1[5];
        r0_1[6] = r6_1;
        r0_1[7] = &r7_11[4];
        r0_1[4] = &r0_1[4];
        r0_1[5] = &r1_1[6];
        r0_1[6] = &r4_4[4];
        r0_1[7] = &r5_1[5];
        r0_1[8] = r6_1;
        r0_1[4] = &r2_2[3];
        r0_1[5] = &r3_1[4];
        r0_1[6] = &r5_1[5];
        r0_1[7] = &r0_1[7];
        r0_1[8] = &r1_1[6];
        r0_1[9] = &r2_2[3];
        r0_1[7] = &r0_1[7];
        r0_1[7] = &r1_1[6];
        r0_1[8] = &r2_2[3];
        r0_1[9] = &r4_4[4];
        r0_1[0xa] = &r0_1[0xa];
        r0_1[0xb] = &r1_1[6];
        r0_1[0xc] = r6_1;
        r0_1[0xa] = &r0_1[0xa];
        r0_1[0xb] = &r1_1[6];
        r0_1[0xc] = &r7_11[4];
        r0_1[0xa] = &r2_2[3];
        r0_1[0xb] = &r4_4[4];
        r0_1[0xc] = r6_1;
        r0_1[0xd] = &r7_11[4];
        r1_1[6] = &r0_1[0xe];
        r1_1[7] = &r4_4[4];
        r1_1[8] = &r5_1[5];
        r1_1[9] = &r0_1[0xe];
        r1_1[0xa] = &r1_1[9];
        r1_1[0xb] = &r2_2[3];
        r1_1[0xc] = &r4_4[4];
        r1_1[0xd] = &r7_11[4];
        r2_2[3] = &r1_1[0xe];
        r2_2[4] = &r1_1[0xe];
        r2_2[5] = &r2_2[4];
        r2_2[6] = &r3_1[4];
        r2_2[7] = &r5_1[5];
        r2_2[8] = r6_1;
        r2_2[9] = &r3_1[4];
        r2_2[0xa] = &r4_4[4];
        r2_2[0xb] = r6_1;
        r2_2[0xc] = &r7_11[4];
        r3_1[4] = &r0_1[0xe];
        r3_1[5] = &r2_2[0xd];
        r3_1[6] = &r3_1[4];
        r3_1[7] = &r4_4[4];
        r3_1[8] = &r5_1[5];
        r3_1[9] = &r0_1[0xe];
        r3_1[0xa] = &r1_1[0xe];
        r3_1[0xb] = &r3_1[9];
        r3_1[0xc] = &r4_4[4];
        r3_1[0xd] = &r7_11[4];
        r3_1[0xe] = &r0_1[0xe];
        r3_1[0xf] = &r1_1[0xe];
        r3_1[0x10] = &r2_2[0xd];
        r3_1[0x11] = &r3_1[0xe];
        r3_1[0x12] = &r5_1[5];
        r3_1[0x13] = r6_1;
        r3_1[0x14] = &r7_11[4];
        r4_4[4] = &r1_1[0xe];
        r4_4[5] = &r2_2[0xd];
        r4_4[6] = &r4_4[4];
        r4_4[7] = &r5_1[5];
        r4_4[8] = &r4_4[8];
        r4_4[9] = &r5_1[5];
        r4_4[0xa] = r6_1;
        r4_4[8] = &r1_1[0xe];
        r4_4[9] = &r3_1[0x15];
        r4_4[0xa] = &r4_4[8];
        r4_4[0xb] = &r7_11[4];
        r4_4[0xc] = &r2_2[0xd];
        r4_4[0xd] = &r4_4[0xc];
        r4_4[0xe] = &r5_1[5];
        r4_4[0xf] = &r7_11[4];
        r4_4[0x10] = &r2_2[0xd];
        r4_4[0x11] = &r3_1[0x15];
        r4_4[0x12] = &r4_4[0x10];
        r4_4[0x13] = &r5_1[5];
        r4_4[0x14] = &r7_11[4];
        r4_4[0x15] = &r2_2[0xd];
        r4_4[0x16] = &r4_4[0x15];
        r4_4[0x17] = &r5_1[5];
        r4_4[0x18] = &r7_11[4];
        r4_4[0x19] = &r1_1[0xe];
        r4_4[0x1a] = &r3_1[0x15];
        r4_4[0x1b] = &r4_4[0x19];
        r4_4[0x1c] = &r7_11[4];
        r4_4[0x1d] = &r4_4[0x1d];
        r4_4[0x1e] = &r5_1[5];
        r4_4[0x1f] = r6_1;
        r4_4[0x1d] = &r1_1[0xe];
        r4_4[0x1e] = &r2_2[0xd];
        r4_4[0x1f] = &r4_4[0x1d];
        r4_4[0x20] = &r5_1[5];
        r3_1[0x15] = &r0_1[0xe];
        r3_1[0x16] = &r1_1[0xe];
        r3_1[0x17] = &r2_2[0xd];
        r3_1[0x18] = &r3_1[0x15];
        r3_1[0x19] = &r5_1[5];
        r3_1[0x1a] = r6_1;
        r3_1[0x1b] = &r7_11[4];
        r3_1[0x1c] = &r0_1[0xe];
        r3_1[0x1d] = &r1_1[0xe];
        r3_1[0x1e] = &r3_1[0x1c];
        r3_1[0x1f] = &r4_4[0x21];
        r3_1[0x20] = &r7_11[4];
        r3_1[0x21] = &r0_1[0xe];
        r3_1[0x22] = &r2_2[0xd];
        r3_1[0x23] = &r3_1[0x21];
        r3_1[0x24] = &r4_4[0x21];
        r3_1[0x25] = &r5_1[5];
        r2_2[0xd] = &r3_1[0x26];
        r2_2[0xe] = &r4_4[0x21];
        r2_2[0xf] = r6_1;
        r2_2[0x10] = &r7_11[4];
        r2_2[0x11] = &r1_1[0xe];
        r2_2[0x12] = &r2_2[0x11];
        r2_2[0x13] = &r3_1[0x26];
        r2_2[0x14] = &r5_1[5];
        r2_2[0x15] = r6_1;
        r2_2[0x16] = &r1_1[0xe];
        r1_1[0xe] = &r0_1[0xe];
        r1_1[0xf] = &r1_1[0xe];
        r1_1[0x10] = &r2_2[0x17];
        r1_1[0x11] = &r4_4[0x21];
        r1_1[0x12] = &r7_11[4];
        r1_1[0x13] = &r0_1[0xe];
        r1_1[0x14] = &r4_4[0x21];
        r1_1[0x15] = &r5_1[5];
        r0_1[0xe] = &r2_2[0x17];
        r0_1[0xf] = &r4_4[0x21];
        r0_1[0x10] = r6_1;
        r0_1[0x11] = &r7_11[4];
        r0_1[0x12] = &r0_1[0x12];
        r0_1[0x13] = &r1_1[0x16];
        r0_1[0x14] = &r7_11[4];
        r0_1[0x12] = &r0_1[0x12];
        r0_1[0x13] = &r1_1[0x16];
        r0_1[0x14] = r6_1;
        r0_1[0x12] = &r1_1[0x16];
        r0_1[0x13] = &r2_2[0x17];
        r0_1[0x14] = &r4_4[0x21];
        r0_1[0x15] = &r0_1[0x15];
        r0_1[0x15] = &r0_1[0x15];
        r0_1[0x16] = &r1_1[0x16];
        r0_1[0x17] = &r2_2[0x17];
        r0_1[0x15] = &r2_2[0x17];
        r0_1[0x16] = &r3_1[0x26];
        r0_1[0x17] = &r5_1[5];
        r0_1[0x18] = &r0_1[0x18];
        r0_1[0x19] = &r1_1[0x16];
        r0_1[0x1a] = &r4_4[0x21];
        r0_1[0x1b] = &r5_1[5];
        r0_1[0x1c] = r6_1;
        r0_1[0x18] = &r0_1[0x18];
        r0_1[0x19] = &r5_1[5];
        r0_1[0x1a] = r6_1;
        r0_1[0x1b] = &r7_11[4];
        r1_1[0x16] = &r0_1[0x18];
        r1_1[0x17] = &r1_1[0x16];
        r1_1[0x18] = &r2_2[0x17];
        r1_1[0x19] = &r4_4[0x21];
        r1_1[0x1a] = &r5_1[5];
        r1_1[0x1b] = r6_1;
        r2_2[0x17] = &r3_1[0x26];
        r2_2[0x18] = &r4_4[0x21];
        r2_2[0x19] = &r5_1[5];
        r3_1[0x26] = &r0_1[0x18];
        r3_1[0x27] = &r1_1[0x1c];
        r3_1[0x28] = &r2_2[0x1a];
        r3_1[0x29] = &r5_1[5];
        r4_4[0x21] = &r0_1[0x18];
        r4_4[0x22] = &r1_1[0x1c];
        r4_4[0x23] = &r2_2[0x1a];
        r4_4[0x24] = r6_1;
        r5_1[5] = &r0_1[0x18];
        r5_1[6] = &r1_1[0x1c];
        r5_1[7] = &r2_2[0x1a];
        r5_1[8] = &r4_4[0x25];
        r5_1[9] = &r7_11[4];
        r7_11[4] = &r0_1[0x18];
        r7_11[5] = &r1_1[0x1c];
        r7_11[6] = &r3_1[0x2a];
        r7_11[7] = &r4_4[0x25];
        r1_8 = r2_2[0x1a];
        int32_t* r4_14 = r2_2[0x1d];
        r0_9 = *r4_14;
        r2_11 = r4_14[1];
        r3_10 = r4_14[2];
        r6_2 = r4_14[4];
        int32_t* r7_13 = r4_14[5];
        r4_1 = *r7_13;
        r5_3 = r7_13[1];
        r7_10 = &r7_13[2];
    } while (!z_1);
    
    if (!n_1)
    {
        if (!v_1)
            /* undefined */
        
        /* jump -> 0x9b50 */
    }
    
    if (n_1 != v_1)
    {
        if (!v_1)
            /* jump -> sub_9cae+0x2e */
        
        /* jump -> 0x9c30 */
    }
    
    *r1_8 = r0_9;
    r1_8[1] = r1_8;
    r1_8[2] = r2_11;
    r1_8[3] = r4_1;
    r1_8[4] = r7_10;
    r1_8[5] = r0_9;
    r1_8[6] = r4_1;
    r1_8[7] = r5_3;
    *r0_9 = r2_11;
    r0_9[1] = r4_1;
    r0_9[2] = r6_2;
    r0_9[3] = r7_10;
    r0_9[4] = &r0_9[4];
    r0_9[5] = &r1_8[8];
    r0_9[6] = r7_10;
    r0_9[4] = &r0_9[4];
    r0_9[5] = &r1_8[8];
    r0_9[6] = r6_2;
    r0_9[4] = &r1_8[8];
    r0_9[5] = r2_11;
    r0_9[6] = r4_1;
    r0_9[7] = &r0_9[7];
    r0_9[7] = &r0_9[7];
    r0_9[8] = &r1_8[8];
    r0_9[9] = r2_11;
    r0_9[7] = r2_11;
    r0_9[8] = r3_10;
    r0_9[9] = r5_3;
    r0_9[0xa] = &r0_9[0xa];
    r0_9[0xb] = &r1_8[8];
    r0_9[0xc] = r4_1;
    r0_9[0xd] = r5_3;
    r0_9[0xe] = r6_2;
    r0_9[0xa] = &r0_9[0xa];
    r0_9[0xb] = r5_3;
    r0_9[0xc] = r6_2;
    r0_9[0xd] = r7_10;
    r1_8[8] = &r0_9[0xa];
    r1_8[9] = &r1_8[8];
    r1_8[0xa] = r2_11;
    r1_8[0xb] = r4_1;
    r1_8[0xc] = r5_3;
    r1_8[0xd] = r6_2;
    *r2_11 = r3_10;
    r2_11[1] = r4_1;
    r2_11[2] = r5_3;
    *r3_10 = &r0_9[0xa];
    r3_10[1] = &r1_8[0xe];
    r3_10[2] = &r2_11[3];
    r3_10[3] = r5_3;
    *r4_1 = &r0_9[0xa];
    r4_1[1] = &r1_8[0xe];
    r4_1[2] = &r2_11[3];
    r4_1[3] = r6_2;
    *r5_3 = &r0_9[0xa];
    r5_3[1] = &r1_8[0xe];
    r5_3[2] = &r2_11[3];
    r5_3[3] = &r4_1[4];
    r5_3[4] = r7_10;
    *r7_10 = &r0_9[0xa];
    r7_10[1] = &r1_8[0xe];
    r7_10[2] = &r3_10[4];
    r7_10[3] = &r4_1[4];
    r2_11[3];
    int32_t* r4_16 = r2_11[6];
    *r4_16;
    r4_16[1];
    r4_16[2];
    r4_16[4];
    int32_t* r7_14 = r4_16[5];
    *r7_14;
    r7_14[1];
    
    if (!z_1)
        /* jump -> sub_9cae-0x10 */
    
    /* jump -> sub_9d76-0x48 */
}

int32_t j_sub_9d76(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4)
{
    /* tailcall */
    return sub_9d76(arg1, arg2, arg3, arg4, arg5);
}

int32_t sub_9c34(int32_t* arg1 @ r7)
{
    (*arg1)[3];
    /* undefined */
}

int32_t sub_9cae(int32_t* arg1 @ r7)
{
    int32_t* r4_18 = *arg1;
    int32_t* r0 = *r4_18;
    void* r2 = r4_18[1];
    void** r2_1 = *(r2 + 4);
    int32_t* r3 = *(r2 + 8);
    int32_t* r5 = *(r2 + 0x10);
    int32_t* r1 = *r0;
    int32_t* r4 = r0[1];
    int32_t r6 = r0[2];
    int32_t* r7 = r0[3];
    *r7 = &r0[4];
    r7[1] = r1;
    r7[2] = r3;
    r7[3] = r4;
    *r5 = &r0[4];
    r5[1] = r1;
    r5[2] = r2_1;
    r5[3] = r4;
    r5[4] = &r7[4];
    *r4 = &r0[4];
    r4[1] = r1;
    r4[2] = r2_1;
    r4[3] = r6;
    *r3 = &r0[4];
    r3[1] = r1;
    r3[2] = r2_1;
    r3[3] = &r5[5];
    *r2_1 = &r3[4];
    r2_1[1] = &r4[4];
    r2_1[2] = &r5[5];
    *r1 = &r0[4];
    r1[1] = r1;
    r1[2] = &r2_1[3];
    r1[3] = &r4[4];
    r1[4] = &r5[5];
    r1[5] = r6;
    r0[4] = &r0[4];
    r0[5] = &r5[5];
    r0[6] = r6;
    r0[7] = &r7[4];
    r0[4] = &r0[4];
    r0[5] = &r1[6];
    r0[6] = &r4[4];
    r0[7] = &r5[5];
    r0[8] = r6;
    r0[4] = &r2_1[3];
    r0[5] = &r3[4];
    r0[6] = &r5[5];
    r0[7] = &r0[7];
    r0[8] = &r1[6];
    r0[9] = &r2_1[3];
    r0[7] = &r0[7];
    r0[7] = &r1[6];
    r0[8] = &r2_1[3];
    r0[9] = &r4[4];
    r0[0xa] = &r0[0xa];
    r0[0xb] = &r1[6];
    r0[0xc] = r6;
    r0[0xa] = &r0[0xa];
    r0[0xb] = &r1[6];
    r0[0xc] = &r7[4];
    r0[0xa] = &r2_1[3];
    r0[0xb] = &r4[4];
    r0[0xc] = r6;
    r0[0xd] = &r7[4];
    r1[6] = &r0[0xe];
    r1[7] = &r4[4];
    r1[8] = &r5[5];
    r1[9] = &r0[0xe];
    r1[0xa] = &r1[9];
    r1[0xb] = &r2_1[3];
    r1[0xc] = &r4[4];
    r1[0xd] = &r7[4];
    r2_1[3] = &r1[0xe];
    r2_1[4] = &r1[0xe];
    r2_1[5] = &r2_1[4];
    r2_1[6] = &r3[4];
    r2_1[7] = &r5[5];
    r2_1[8] = r6;
    r2_1[9] = &r3[4];
    r2_1[0xa] = &r4[4];
    r2_1[0xb] = r6;
    r2_1[0xc] = &r7[4];
    r3[4] = &r0[0xe];
    r3[5] = &r2_1[0xd];
    r3[6] = &r3[4];
    r3[7] = &r4[4];
    r3[8] = &r5[5];
    r3[9] = &r0[0xe];
    r3[0xa] = &r1[0xe];
    r3[0xb] = &r3[9];
    r3[0xc] = &r4[4];
    r3[0xd] = &r7[4];
    r3[0xe] = &r0[0xe];
    r3[0xf] = &r1[0xe];
    r3[0x10] = &r2_1[0xd];
    r3[0x11] = &r3[0xe];
    r3[0x12] = &r5[5];
    r3[0x13] = r6;
    r3[0x14] = &r7[4];
    r4[4] = &r1[0xe];
    r4[5] = &r2_1[0xd];
    r4[6] = &r4[4];
    r4[7] = &r5[5];
    r4[8] = &r4[8];
    r4[9] = &r5[5];
    r4[0xa] = r6;
    r4[8] = &r1[0xe];
    r4[9] = &r3[0x15];
    r4[0xa] = &r4[8];
    r4[0xb] = &r7[4];
    r4[0xc] = &r2_1[0xd];
    r4[0xd] = &r4[0xc];
    r4[0xe] = &r5[5];
    r4[0xf] = &r7[4];
    r4[0x10] = &r2_1[0xd];
    r4[0x11] = &r3[0x15];
    r4[0x12] = &r4[0x10];
    r4[0x13] = &r5[5];
    r4[0x14] = &r7[4];
    r4[0x15] = &r2_1[0xd];
    r4[0x16] = &r4[0x15];
    r4[0x17] = &r5[5];
    r4[0x18] = &r7[4];
    r4[0x19] = &r1[0xe];
    r4[0x1a] = &r3[0x15];
    r4[0x1b] = &r4[0x19];
    r4[0x1c] = &r7[4];
    r4[0x1d] = &r4[0x1d];
    r4[0x1e] = &r5[5];
    r4[0x1f] = r6;
    r4[0x1d] = &r1[0xe];
    r4[0x1e] = &r2_1[0xd];
    r4[0x1f] = &r4[0x1d];
    r4[0x20] = &r5[5];
    r3[0x15] = &r0[0xe];
    r3[0x16] = &r1[0xe];
    r3[0x17] = &r2_1[0xd];
    r3[0x18] = &r3[0x15];
    r3[0x19] = &r5[5];
    r3[0x1a] = r6;
    r3[0x1b] = &r7[4];
    r3[0x1c] = &r0[0xe];
    r3[0x1d] = &r1[0xe];
    r3[0x1e] = &r3[0x1c];
    r3[0x1f] = &r4[0x21];
    r3[0x20] = &r7[4];
    r3[0x21] = &r0[0xe];
    r3[0x22] = &r2_1[0xd];
    r3[0x23] = &r3[0x21];
    r3[0x24] = &r4[0x21];
    r3[0x25] = &r5[5];
    r2_1[0xd] = &r3[0x26];
    r2_1[0xe] = &r4[0x21];
    r2_1[0xf] = r6;
    r2_1[0x10] = &r7[4];
    r2_1[0x11] = &r1[0xe];
    r2_1[0x12] = &r2_1[0x11];
    r2_1[0x13] = &r3[0x26];
    r2_1[0x14] = &r5[5];
    r2_1[0x15] = r6;
    r2_1[0x16] = &r1[0xe];
    r1[0xe] = &r0[0xe];
    r1[0xf] = &r1[0xe];
    r1[0x10] = &r2_1[0x17];
    r1[0x11] = &r4[0x21];
    r1[0x12] = &r7[4];
    r1[0x13] = &r0[0xe];
    r1[0x14] = &r4[0x21];
    r1[0x15] = &r5[5];
    r0[0xe] = &r2_1[0x17];
    r0[0xf] = &r4[0x21];
    r0[0x10] = r6;
    r0[0x11] = &r7[4];
    r0[0x12] = &r0[0x12];
    r0[0x13] = &r1[0x16];
    r0[0x14] = &r7[4];
    r0[0x12] = &r0[0x12];
    r0[0x13] = &r1[0x16];
    r0[0x14] = r6;
    r0[0x12] = &r1[0x16];
    r0[0x13] = &r2_1[0x17];
    r0[0x14] = &r4[0x21];
    r0[0x15] = &r0[0x15];
    r0[0x15] = &r0[0x15];
    r0[0x16] = &r1[0x16];
    r0[0x17] = &r2_1[0x17];
    r0[0x15] = &r2_1[0x17];
    r0[0x16] = &r3[0x26];
    r0[0x17] = &r5[5];
    r0[0x18] = &r0[0x18];
    r0[0x19] = &r1[0x16];
    r0[0x1a] = &r4[0x21];
    r0[0x1b] = &r5[5];
    r0[0x1c] = r6;
    r0[0x18] = &r0[0x18];
    r0[0x19] = &r5[5];
    r0[0x1a] = r6;
    r0[0x1b] = &r7[4];
    r1[0x16] = &r0[0x18];
    r1[0x17] = &r1[0x16];
    r1[0x18] = &r2_1[0x17];
    r1[0x19] = &r4[0x21];
    r1[0x1a] = &r5[5];
    r1[0x1b] = r6;
    r2_1[0x17] = &r3[0x26];
    r2_1[0x18] = &r4[0x21];
    r2_1[0x19] = &r5[5];
    r3[0x26] = &r0[0x18];
    r3[0x27] = &r1[0x1c];
    r3[0x28] = &r2_1[0x1a];
    r3[0x29] = &r5[5];
    r4[0x21] = &r0[0x18];
    r4[0x22] = &r1[0x1c];
    r4[0x23] = &r2_1[0x1a];
    r4[0x24] = r6;
    r5[5] = &r0[0x18];
    r5[6] = &r1[0x1c];
    r5[7] = &r2_1[0x1a];
    r5[8] = &r4[0x25];
    r5[9] = &r7[4];
    r7[4] = &r0[0x18];
    r7[5] = &r1[0x1c];
    r7[6] = &r3[0x2a];
    r7[7] = &r4[0x25];
    int32_t* r4_10 = r2_1[0x1d];
    int32_t* r7_2 = r4_10[5];
    bool z;
    
    if (!z)
    {
        /* unimplemented  {strex r4, lr, [r5, #0x268]} */
        /* tailcall */
        return sub_9ec4(*r4_10, r2_1[0x1a], r4_10[1], r4_10[2], *r7_2, r7_2[1], r4_10[4], &r7_2[2]);
    }
    
    bool n;
    
    if (n)
        /* undefined */
    
    /* jump -> 0x9d30 */
}

int32_t j_sub_9f58(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r7;
    int32_t r8;
    int32_t r9;
    int32_t r10;
    int32_t r11;
    /* tailcall */
    return sub_9f58(arg1, arg2, arg3, r7, r8, r9, r10, r11);
}

int32_t sub_9d76(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4)
{
    bool n = arg4 - 0x250 < 0;
    bool z = arg4 == 0x250;
    bool v = arg4 - 0x20c - 0x44;
    int32_t r0 = *(arg5 - 0x139);
    int32_t* r2 = *(arg5 - 0x135);
    int32_t* r3_4 = *(arg5 - 0x131);
    int32_t r6 = *(arg5 - 0x129);
    int32_t* r7 = *(arg5 - 0x125);
    int32_t* r4_3 = *r7;
    int32_t* r5 = r7[1];
    
    if (z)
    {
        if (n)
        {
            if (n == v)
                /* jump -> sub_9f58+6 */
            
            /* jump -> 0x9e8a */
        }
        
        if (!v)
            /* jump -> 0x9e58 */
        
        /* jump -> 0x9dac */
    }
    
    *arg2 = r0;
    arg2[1] = arg2;
    arg2[2] = r2;
    arg2[3] = r4_3;
    arg2[4] = r5;
    arg2[5] = r6;
    *r2 = r3_4;
    r2[1] = r4_3;
    r2[2] = r5;
    *r3_4 = r0;
    r3_4[1] = &arg2[6];
    r3_4[2] = &r2[3];
    r3_4[3] = r5;
    *r4_3 = r0;
    r4_3[1] = &arg2[6];
    r4_3[2] = &r2[3];
    r4_3[3] = r6;
    *r5 = r0;
    r5[1] = &arg2[6];
    r5[2] = &r2[3];
    r5[3] = &r4_3[4];
    r5[4] = &r7[2];
    r7[2] = r0;
    r7[3] = &arg2[6];
    r7[4] = &r3_4[4];
    r7[5] = &r4_3[4];
    int32_t* r4_11 = r2[6];
    int32_t* r7_2 = r4_11[5];
    
    if (!z)
    {
        /* unimplemented  {strex r4, lr, [r5, #0x268]} */
        /* tailcall */
        return sub_9ec4(*r4_11, r2[3], r4_11[1], r4_11[2], *r7_2, r7_2[1], r4_11[4], &r7_2[2]);
    }
    
    if (n)
        /* undefined */
    
    /* jump -> 0x9d30 */
}

int32_t j_sub_96ea()
{
    /* tailcall */
    return sub_96ea();
}

int32_t sub_9e90(int32_t* arg1 @ r7)
{
    int32_t* r4_2 = *arg1;
    int32_t* r0 = *r4_2;
    void* r2 = r4_2[1];
    void** r2_1 = *(r2 + 4);
    int32_t* r3 = *(r2 + 8);
    int32_t* r5 = *(r2 + 0x10);
    int32_t* r1 = *r0;
    int32_t* r4 = r0[1];
    int32_t r6 = r0[2];
    int32_t* r7 = r0[3];
    *r7 = &r0[4];
    r7[1] = r1;
    r7[2] = r3;
    r7[3] = r4;
    *r5 = &r0[4];
    r5[1] = r1;
    r5[2] = r2_1;
    r5[3] = r4;
    r5[4] = &r7[4];
    *r4 = &r0[4];
    r4[1] = r1;
    r4[2] = r2_1;
    r4[3] = r6;
    *r3 = &r0[4];
    r3[1] = r1;
    r3[2] = r2_1;
    r3[3] = &r5[5];
    *r2_1 = &r3[4];
    r2_1[1] = &r4[4];
    r2_1[2] = &r5[5];
    *r1 = &r0[4];
    r1[1] = r1;
    r1[2] = &r2_1[3];
    r1[3] = &r4[4];
    r1[4] = &r5[5];
    r1[5] = r6;
    r0[4] = &r0[4];
    r0[5] = &r5[5];
    r0[6] = r6;
    r0[7] = &r7[4];
    r0[4] = &r0[4];
    r0[5] = &r1[6];
    r0[6] = &r4[4];
    r0[7] = &r5[5];
    r0[8] = r6;
    r0[4] = &r2_1[3];
    r0[5] = &r3[4];
    r0[6] = &r5[5];
    r0[7] = &r0[7];
    r0[8] = &r1[6];
    r0[9] = &r2_1[3];
    r0[7] = &r0[7];
    r0[7] = &r1[6];
    r0[8] = &r2_1[3];
    r0[9] = &r4[4];
    r0[0xa] = &r0[0xa];
    r0[0xb] = &r1[6];
    r0[0xc] = r6;
    r0[0xa] = &r0[0xa];
    r0[0xb] = &r1[6];
    r0[0xc] = &r7[4];
    r0[0xa] = &r2_1[3];
    r0[0xb] = &r4[4];
    r0[0xc] = r6;
    r0[0xd] = &r7[4];
    r1[6] = &r0[0xe];
    r1[7] = &r4[4];
    r1[8] = &r5[5];
    r1[9] = &r0[0xe];
    r1[0xa] = &r1[9];
    r1[0xb] = &r2_1[3];
    r1[0xc] = &r4[4];
    r1[0xd] = &r7[4];
    r2_1[3] = &r1[0xe];
    r2_1[4] = &r1[0xe];
    r2_1[5] = &r2_1[4];
    r2_1[6] = &r3[4];
    r2_1[7] = &r5[5];
    r2_1[8] = r6;
    r2_1[9] = &r3[4];
    r2_1[0xa] = &r4[4];
    r2_1[0xb] = r6;
    r2_1[0xc] = &r7[4];
    r3[4] = &r0[0xe];
    r3[5] = &r2_1[0xd];
    r3[6] = &r3[4];
    r3[7] = &r4[4];
    r3[8] = &r5[5];
    r3[9] = &r0[0xe];
    r3[0xa] = &r1[0xe];
    r3[0xb] = &r3[9];
    r3[0xc] = &r4[4];
    r3[0xd] = &r7[4];
    /* tailcall */
    return sub_9ec4(&r0[0xe], &r1[0xe], &r2_1[0xd], &r3[0xe], &r4[4], &r5[5], r6, &r7[4]);
}

int32_t sub_9ec4(void** arg1, int32_t* arg2, void** arg3, int32_t* arg4, int32_t* arg5 @ r4, void*** arg6 @ r5, int32_t arg7 @ r6, void** arg8 @ r7)
{
    *arg4 = arg1;
    arg4[1] = arg2;
    arg4[2] = arg3;
    arg4[3] = arg4;
    arg4[4] = arg6;
    arg4[5] = arg7;
    arg4[6] = arg8;
    *arg5 = arg2;
    arg5[1] = arg3;
    arg5[2] = arg5;
    arg5[3] = arg6;
    arg5[4] = &arg5[4];
    arg5[5] = arg6;
    arg5[6] = arg7;
    arg5[4] = arg2;
    arg5[5] = &arg4[7];
    arg5[6] = &arg5[4];
    arg5[7] = arg8;
    arg5[8] = arg3;
    arg5[9] = &arg5[8];
    arg5[0xa] = arg6;
    arg5[0xb] = arg8;
    arg5[0xc] = arg3;
    arg5[0xd] = &arg4[7];
    arg5[0xe] = &arg5[0xc];
    arg5[0xf] = arg6;
    arg5[0x10] = arg8;
    arg5[0x11] = arg3;
    arg5[0x12] = &arg5[0x11];
    arg5[0x13] = arg6;
    arg5[0x14] = arg8;
    arg5[0x15] = arg2;
    arg5[0x16] = &arg4[7];
    arg5[0x17] = &arg5[0x15];
    arg5[0x18] = arg8;
    arg5[0x19] = &arg5[0x19];
    arg5[0x1a] = arg6;
    arg5[0x1b] = arg7;
    arg5[0x19] = arg2;
    arg5[0x1a] = arg3;
    arg5[0x1b] = &arg5[0x19];
    arg5[0x1c] = arg6;
    arg4[7] = arg1;
    arg4[8] = arg2;
    arg4[9] = arg3;
    arg4[0xa] = &arg4[7];
    arg4[0xb] = arg6;
    arg4[0xc] = arg7;
    arg4[0xd] = arg8;
    arg4[0xe] = arg1;
    arg4[0xf] = arg2;
    arg4[0x10] = &arg4[0xe];
    arg4[0x11] = &arg5[0x1d];
    arg4[0x12] = arg8;
    arg4[0x13] = arg1;
    arg4[0x14] = arg3;
    arg4[0x15] = &arg4[0x13];
    arg4[0x16] = &arg5[0x1d];
    arg4[0x17] = arg6;
    *arg3 = &arg4[0x18];
    arg3[1] = &arg5[0x1d];
    arg3[2] = arg7;
    arg3[3] = arg8;
    arg3[4] = arg2;
    arg3[5] = &arg3[4];
    arg3[6] = &arg4[0x18];
    arg3[7] = arg6;
    arg3[8] = arg7;
    arg3[9] = arg2;
    *arg2 = arg1;
    arg2[1] = arg2;
    arg2[2] = &arg3[0xa];
    arg2[3] = &arg5[0x1d];
    arg2[4] = arg8;
    arg2[5] = arg1;
    arg2[6] = &arg5[0x1d];
    arg2[7] = arg6;
    *arg1 = &arg3[0xa];
    arg1[1] = &arg5[0x1d];
    arg1[2] = arg7;
    arg1[3] = arg8;
    arg1[4] = &arg1[4];
    arg1[5] = &arg2[8];
    arg1[6] = arg8;
    arg1[4] = &arg1[4];
    arg1[5] = &arg2[8];
    arg1[6] = arg7;
    arg1[4] = &arg2[8];
    arg1[5] = &arg3[0xa];
    arg1[6] = &arg5[0x1d];
    arg1[7] = &arg1[7];
    arg1[7] = &arg1[7];
    arg1[8] = &arg2[8];
    arg1[9] = &arg3[0xa];
    arg1[7] = &arg3[0xa];
    arg1[8] = &arg4[0x18];
    arg1[9] = arg6;
    arg1[0xa] = &arg1[0xa];
    arg1[0xb] = &arg2[8];
    arg1[0xc] = &arg5[0x1d];
    arg1[0xd] = arg6;
    arg1[0xe] = arg7;
    arg1[0xa] = &arg1[0xa];
    arg1[0xb] = arg6;
    arg1[0xc] = arg7;
    arg1[0xd] = arg8;
    arg2[8] = &arg1[0xa];
    arg2[9] = &arg2[8];
    arg2[0xa] = &arg3[0xa];
    arg2[0xb] = &arg5[0x1d];
    arg2[0xc] = arg6;
    arg2[0xd] = arg7;
    arg3[0xa] = &arg4[0x18];
    arg3[0xb] = &arg5[0x1d];
    arg3[0xc] = arg6;
    arg4[0x18] = &arg1[0xa];
    arg4[0x19] = &arg2[0xe];
    arg4[0x1a] = &arg3[0xd];
    arg4[0x1b] = arg6;
    arg5[0x1d] = &arg1[0xa];
    arg5[0x1e] = &arg2[0xe];
    arg5[0x1f] = &arg3[0xd];
    arg5[0x20] = arg7;
    *arg6 = &arg1[0xa];
    arg6[1] = &arg2[0xe];
    arg6[2] = &arg3[0xd];
    arg6[3] = &arg5[0x21];
    arg6[4] = arg8;
    *arg8 = &arg1[0xa];
    arg8[1] = &arg2[0xe];
    arg8[2] = &arg4[0x1c];
    arg8[3] = &arg5[0x21];
    arg3[0xd];
    int32_t* r4_8 = arg3[0x10];
    arg3[0x11];
    *r4_8;
    r4_8[1];
    r4_8[2];
    r4_8[3];
    r4_8[4];
    r4_8[5];
    /* undefined */
}

int32_t j_sub_a5d4(int32_t arg1, char arg2, int32_t arg3, void* arg4 @ r4, void* arg5 @ r5, void* arg6 @ r6, char arg7 @ r7, void* arg8 @ r8)
{
    /* tailcall */
    return sub_a5d4(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

int32_t sub_9f3c(int32_t arg1, int32_t arg2, int32_t arg3, char arg4, void* arg5 @ r5, void* arg6 @ r6, char arg7 @ r7, int32_t arg8 @ r8, int32_t arg9 @ r9, int32_t arg10 @ r10, int32_t arg11 @ r11)
{
    *(arg5 + 9) = arg7;
    *(arg5 + 0x14) = arg5;
    void* r5 = *(arg5 + 0x14);
    *(arg6 + 0x54) = arg3;
    *(arg6 + 0x11) = arg4;
    void* r1 = *(r5 + 0x64);
    int32_t r4 = arg6 << 1;
    int32_t r0_1 = *(arg6 + 0x74) >> r4;
    void* r6 = arg6 + arg9;
    *r4 = r0_1;
    int32_t r2 = *(r6 + 0x74);
    *(r6 + 0x54) = r4;
    *(r4 + 0x11) = arg4;
    *(r4 + 0x44) = r5;
    *(r0_1 + r4) = r0_1;
    void* r3 = *(r6 + 0x14);
    *(r5 + 0x74) = r6;
    *(r4 + 0x10) = r0_1;
    *(r5 + 0x54) = r0_1;
    *(r4 + 0x30) = r0_1;
    void* r6_1 = *(r4 + 0x14);
    *(r4 + 0x15) = *(r5 + 0x64);
    *(r6_1 + 0x14) = r2;
    *(*(r6_1 + 0x14) + 0x60) = r0_1;
    int32_t r2_1 = *(r6_1 + 0x74);
    *(r6_1 + 9) = 0x6d;
    void* r4_2 = *(r1 + 0x14);
    void* r5_2 = *(r1 + 0x14);
    *(r6_1 + 0xd) = r4_2;
    *(r5_2 + 1) = r6_1;
    *(r6_1 + 0x11) = r5_2;
    *(r4_2 + 0x6d) = 0x6d;
    __builtin_strncpy(r3 + 0x69666e6f, "onfi", 4);
    void* r4_3 = *(arg9 + 0x44454564);
    void* r5_4 = *(((0x44454550 + arg9) >> 8) + 0x14);
    *(r6_1 + 0xd) = r4_3;
    *(r5_4 + 1) = r6_1;
    *(r6_1 + 0x11) = r5_4;
    *(r4_3 + 0x69) = 0x69;
    *(r3 + 0x23000d2d) = 0x23000d2d;
    int32_t* r5_5 = (0x50535f58 + arg9) >> 8;
    *(&data_69 + r4_3) = 0x69;
    r5_5[0x1d] = r6_1;
    *(r4_3 + 0x10) = 0x69;
    r5_5[0x15] = 0x69;
    *(r4_3 + 0x30) = 0x69;
    void* r6_2 = *(r4_3 + 0x14);
    *(r4_3 + 0x15) = r5_5[0x19];
    *(r6_2 + 0x14) = r2_1 - 0x1af;
    void* r4_4 = *(r6_2 + 0x14);
    *(r4_4 + 0x60) = 0x69;
    void* r2_8 = *(r6_2 + 0x74);
    int32_t r3_1 = *(r4_4 + 0x74);
    r5_5[0x19] = r6_2;
    r5_5[0x1d] = 0x50535f58 + arg9;
    void* r6_3 = *r5_5;
    *(r2_8 + 0x14) = r3_1;
    *(arg9 + 0x50535fcc) = *(r6_3 + 0x14);
    *(r4_4 + 0x30) = 0x6d;
    void* r6_5 = *(r4_4 + 0x14);
    *(r4_4 + 0x15) = *(arg9 + 0x50535fbc);
    *(r6_5 + 0x14) = r2_8;
    void* r4_5 = *(r6_5 + 0x14);
    *(r4_5 + 0x10) = 0x6d;
    *(r6_5 + 9) = 0x6f;
    int32_t r7_3 = *(arg9 + 0x50535fac);
    *0x32303231 = r7_3;
    *0x32303229 = r7_3;
    void* r4_6 = *(r4_5 + 0x14);
    *(r6_5 + 0x14) = r3_1;
    __builtin_strncpy(r4_6 + 0x44, " 202", 4);
    data_33c = r7_3;
    *(r4_6 + 9) = 0x23;
    *(r4_6 + 9) = 0x50535f58 + arg9;
    void* r6_6 = *(r4_6 + 0x14);
    int32_t r2_9 = *(r6_6 + 0x54);
    *(r6_6 + 0x14) = r7_3;
    *(r6_6 + 0x54) = r2_9;
    *(r4_6 + 0x34) = 0x50535f58 + arg9;
    *0x300105fe = r4_6;
    *(r6_6 + 0xd) = r2_9;
    *(r4_6 + 0x24) = 0x97c908;
    data_8d = 0;
    data_b6 = 0x300105ea;
    *0x300105fb = 0x50535f58 + arg9;
    *0x300105f2 = 0x38;
    void* r5_7 = *(r4_6 + 0x44);
    *(r4_6 + 0x14) = r5_7;
    data_1d4 = 0x2e;
    *0x97c9ac = 0x180;
    data_18d = 0x58;
    void* r1_3 = *(r5_7 + 0x74);
    *(r1_3 + 0x14) = r1_3;
    data_38 = r1_3 + 0x50;
    data_78 = 0x1b1;
    *sub_204 = 0x1b1;
    data_1bd = 0x20;
    *0x50535f9c = 0xee7;
    int16_t* r1_4 = *0x800982e;
    *0x57524f46 = 0xee7;
    *(r1_4 * 2) = arg11;
    int32_t r1_6 = 0x69 * (r1_4 + 0x4d);
    int32_t r2_15 = *(r1_3 + 0x1f + arg10 + 0x3a);
    *(&data_69 + r1_6) = r1_6;
    data_a3 = 0x1b1;
    int32_t r5_8 = 0x4d5f5344 + r1_6;
    int32_t r0_2 = *(0xffffc908 + r5_8);
    *(r2_15 - 3 + r1_6) = 0xffffc908;
    int32_t r4_7 = *(r0_2 + r5_8);
    void* r2_21 = r2_15 - 3 + r0_2 + arg10 + 0x69 + arg10;
    int32_t r3_2 = *(r2_21 + 0x3a);
    data_211 = r2_21;
    *(r4_7 + 0x10) = 0x69;
    *0x97c90809 = 0x3a;
    *(r4_7 + 0x54) = r4_7;
    int32_t r5_9 = 0x80059f1 + 0;
    int32_t r0_3 = *(r3_2 + r5_9);
    data_20 = r3_2;
    int32_t r4_8 = *(r0_3 + r5_9);
    int32_t r2_22 = *(&data_20 + r5_9);
    *r0_3 = 0;
    *(r0_3 + r5_9) = r4_8;
    int32_t r5_10 = *(r4_8 + 0x10);
    int32_t r0_4 = r0_3 >> r4_8;
    bool c_3 = /* bool c_3 = unimplemented  {asrs r0, r4} */;
    *sub_0 = arg11;
    void* r2_24 = r2_22 - 0x32 + arg10;
    int32_t r3_3 = *(r2_24 + r5_10);
    *0x97c90860 = r2_24 + 0x4d;
    int32_t r1_7 = *r0_4;
    *(r3_3 + 0x41574b43) = arg11 + r2_22 - 0x32;
    void* r1_8 = r0_4 * r1_7;
    int32_t r3_4 = *(r1_8 + 0x41574b43 + arg8);
    *(r0_4 + r1_8) = r1_8;
    *(r0_4 + 0x41574b43 + arg8) = r4_8;
    int32_t r5_12 = *(r4_8 + 0x10);
    int32_t r0_5 = r0_4 >> r4_8;
    int32_t r1_9 = r0_5 * r1_8;
    *(r0_5 + r1_9) = r1_9;
    *(r0_5 + r5_12) = r4_8;
    *0x97c90815 = (r4_8 + 0x25);
    *0x97c90824 = r2_24 + 0x17;
    *0x45455097 = 0 - r0_5 * r3_4;
    int16_t* r1_10 = *(&data_65 + r1_9);
    *0x52415752 = 0 - r0_5 * r3_4;
    *(r1_10 * 2) = arg11;
    int32_t r1_11 = 0x69 * r1_10;
    int32_t r2_31 = *(r2_24 - 0x1c + arg10 + 0x3a);
    *(&data_69 + r1_11) = r1_11;
    data_a3 = r4_8 + 0x25;
    int32_t r5_13 = 0x7265776f + r1_11;
    int32_t r0_6 = *(0xffffc908 + r5_13);
    *(r2_31 - 5 + r1_11) = 0xffffc908;
    int32_t r4_10 = *(r0_6 + r5_13);
    void* r2_35 = r2_31 - 5 + r0_6 + arg10;
    void* r2_37 = r2_35 + 0x69 + arg10;
    void* r3_8 = *(r2_37 + 0x3a) + 0x4d;
    *0x97c90860 = r2_37;
    *(r4_10 + 0x10) = 0x69;
    *0x97c90809 = 0x3a;
    *(r4_10 + 0x54) = r4_10;
    int32_t r5_14 = 0x80059f1 + 0;
    int32_t r0_7 = *(r3_8 + r5_14);
    *sub_0 = r3_8;
    int32_t r4_11 = *(r0_7 + r5_14);
    int32_t r2_38 = *r5_14;
    *r0_7 = 0;
    *(r0_7 + r5_14) = r4_11;
    int32_t r5_15 = *(r4_11 + 0x10);
    int32_t r0_8 = r0_7 >> r4_11;
    bool c_8 = /* bool c_8 = unimplemented  {asrs r0, r4} */;
    *sub_0 = arg11;
    void* r2_40 = r2_38 - 0x34 + arg10;
    int32_t r3_9 = *(r2_40 + r5_15);
    *0x97c90860 = r2_40;
    int32_t r1_12 = *r0_8;
    *(r3_9 + 0x646f6d20) = arg11 + r2_38 - 0x34;
    void* r1_13 = r0_8 * r1_12;
    *(r1_13 + 0x646f6d20 + arg8);
    *(r0_8 + r1_13) = r1_13;
    *(r0_8 + 0x646f6d20 + arg8) = r4_11 + 0x4d;
    int32_t r5_17 = *(r4_11 + 0x5d);
    int32_t r0_9 = r0_8 >> (r4_11 + 0x4d);
    int32_t r1_14 = r0_9 * r1_13;
    *(r0_9 + r1_14) = r1_14;
    *(r0_9 + r5_17) = r4_11 + 0x4d;
    *0x68772830 = 0x66;
    *0x97c90809 = 0x20;
    *0x68772843;
    /* jump -> arg10 */
}

int32_t sub_9f58(int32_t arg1, int32_t arg2, void* arg3, void* arg4 @ r7, int32_t arg5 @ r8, int32_t arg6 @ r9, int32_t arg7 @ r10, int32_t arg8 @ r11, void* arg9)
{
    void* arg_1d8 = arg3;
    *(arg3 + 0x16);
    *(arg9 + 0x14) = 0xa0b0;
    data_a0f0 = arg4;
    void* r0;
    int32_t r2;
    r0 = sub_9ff0();
    /* unimplemented  {vrhadd.U8 d0, d0, d0} */
    /* unimplemented  {vrhadd.U8 d0, d0, d1} */
    int32_t r7_2 = arg4 << 0xd;
    /* unimplemented  {vhsub.U8 d0, d1, d0} */
    int32_t r4 = r0 << 0x10;
    *0x65776f61 = r7_2;
    *0x65776f59 = r7_2;
    void* r5_1 = *(r4 + 0x64);
    *(r4 + 0x24) = r0;
    *(r5_1 + 0x54) = r4;
    void* r1_2 = *(r0 + 0x64);
    char r3 = *0x6e6f69c8;
    *(0x6e6f6974 + r1_2) = 0x6974;
    data_7d = r2 + 0xeb;
    data_7d = r2 + 0xeb;
    int32_t r4_1 = *(&data_a0b0 + r1_2);
    *(r2 + 0x13f) = r4_1;
    data_3b = 0x3a;
    void* r1_3 = r1_2 + arg5;
    *(r4_1 + 0x69) = 0x69;
    void* r5_3 = *(r4_1 + 0x10);
    data_a104 = r7_2;
    *(r5_3 + 0x74) = &data_a0b0;
    *(r4_1 + 0x64) = &data_a0b0;
    __builtin_strncpy(r4_1 + 0x14, "YP:%", 4);
    data_a0c1 = r4_1;
    *(r4_1 + 9) = r5_3;
    *(r5_3 + 0x11) = r4_1;
    *(r4_1 + 0x74) = r1_3;
    *(r5_3 + 0xd) = r1_3;
    *(r4_1 + 0x10) = 0x65;
    int32_t r7_3 = *(r5_3 + 0x74);
    *(r5_3 + 0x1d) = r7_3;
    *0x6f726674 = r7_3;
    __builtin_strncpy(r1_3 + 0x74, " fro", 4);
    __builtin_strncpy(r4_1 + 0x64, " fro", 4);
    char r7_4 = *0x6f726624;
    *(r4_1 + 0x54) = r1_3;
    *(r1_3 + 0xd) = r4_1;
    *(r4_1 + 0x1c) = 0x2c;
    *(r4_1 + 9) = r1_3;
    *(r4_1 + 0x34) = *(r1_3 + 0x64);
    void* r4_2 = *0x6f726634;
    __builtin_strncpy(0x6f726674, " fro", 4);
    *(r4_2 + 0x60) = 0x65;
    *(r1_3 + 9) = r7_4;
    *(r4_2 + 0x10) = 0x65;
    int32_t r0_9 = *(r4_2 + 0x40) << 8;
    void* r4_3 = *(r0_9 + 0x10);
    char r7_5 = *(r4_3 + 0x64);
    *(r1_3 + 9) = r7_5;
    *(r4_3 + 0x44) = r1_3;
    *(r0_9 + 0x10) = r0_9;
    *(r1_3 + 9) = r7_5;
    *(r1_3 + 0x14) = r1_3;
    void* r5_5 = *(r1_3 + 0x14);
    *0x6f726674 = r0_9 << 0xc;
    *0x6f726631 = r3;
    void* r1_5 = *(r5_5 + 0x64);
    int32_t r0_11 = *0x6f726694 >> 0xdee4cc40;
    *0xdee4cc40 = r0_11;
    int32_t r2_5 = *(arg6 + 0x6f726694);
    *(arg6 + 0x6f726674) = 0xdee4cc40;
    *0xdee4cc51 = r3;
    *0xdee4cc84 = r5_5;
    *(r0_11 - 0x211b33c0) = r0_11;
    void* r3_1 = *(arg6 + 0x6f726634);
    *(r5_5 + 0x74) = 0x6f726620 + arg6;
    *0xdee4cc50 = r0_11;
    *(r5_5 + 0x54) = r0_11;
    *0xdee4cc70 = r0_11;
    void* r6_1 = *0xdee4cc54;
    *0xdee4cc55 = *(r5_5 + 0x64);
    *(r6_1 + 0x14) = r2_5;
    *(*(r6_1 + 0x14) + 0x60) = r0_11;
    int32_t r2_6 = *(r6_1 + 0x74);
    *(r6_1 + 9) = 0x6d;
    void* r4_5 = *(r1_5 + 0x14);
    void* r5_7 = *(r1_5 + 0x14);
    *(r6_1 + 0xd) = r4_5;
    *(r5_7 + 1) = r6_1;
    *(r6_1 + 0x11) = r5_7;
    *(r4_5 + 0x6d) = 0x6d;
    __builtin_strncpy(r3_1 + 0x69666e6f, "onfi", 4);
    void* r4_6 = *(arg6 + 0x44454564);
    void* r5_9 = *(((0x44454550 + arg6) >> 8) + 0x14);
    *(r6_1 + 0xd) = r4_6;
    *(r5_9 + 1) = r6_1;
    *(r6_1 + 0x11) = r5_9;
    *(r4_6 + 0x69) = 0x69;
    *(r3_1 + 0x23000d2d) = 0x23000d2d;
    int32_t* r5_10 = (0x50535f58 + arg6) >> 8;
    *(&data_69 + r4_6) = 0x69;
    r5_10[0x1d] = r6_1;
    *(r4_6 + 0x10) = 0x69;
    r5_10[0x15] = 0x69;
    *(r4_6 + 0x30) = 0x69;
    void* r6_2 = *(r4_6 + 0x14);
    *(r4_6 + 0x15) = r5_10[0x19];
    *(r6_2 + 0x14) = r2_6 - 0x1af;
    void* r4_7 = *(r6_2 + 0x14);
    *(r4_7 + 0x60) = 0x69;
    void* r2_13 = *(r6_2 + 0x74);
    int32_t r3_2 = *(r4_7 + 0x74);
    r5_10[0x19] = r6_2;
    r5_10[0x1d] = 0x50535f58 + arg6;
    void* r6_3 = *r5_10;
    *(r2_13 + 0x14) = r3_2;
    *(arg6 + 0x50535fcc) = *(r6_3 + 0x14);
    *(r4_7 + 0x30) = 0x6d;
    void* r6_5 = *(r4_7 + 0x14);
    *(r4_7 + 0x15) = *(arg6 + 0x50535fbc);
    *(r6_5 + 0x14) = r2_13;
    void* r4_8 = *(r6_5 + 0x14);
    *(r4_8 + 0x10) = 0x6d;
    *(r6_5 + 9) = 0x6f;
    int32_t r7_9 = *(arg6 + 0x50535fac);
    *0x32303231 = r7_9;
    *0x32303229 = r7_9;
    void* r4_9 = *(r4_8 + 0x14);
    *(r6_5 + 0x14) = r3_2;
    __builtin_strncpy(r4_9 + 0x44, " 202", 4);
    data_33c = r7_9;
    *(r4_9 + 9) = 0x23;
    *(r4_9 + 9) = 0x50535f58 + arg6;
    void* r6_6 = *(r4_9 + 0x14);
    int32_t r2_14 = *(r6_6 + 0x54);
    *(r6_6 + 0x14) = r7_9;
    *(r6_6 + 0x54) = r2_14;
    *(r4_9 + 0x34) = 0x50535f58 + arg6;
    *0x300105fe = r4_9;
    *(r6_6 + 0xd) = r2_14;
    *(r4_9 + 0x24) = 0x97c908;
    data_8d = 0;
    data_b6 = 0x300105ea;
    *0x300105fb = 0x50535f58 + arg6;
    *0x300105f2 = 0x38;
    void* r5_12 = *(r4_9 + 0x44);
    *(r4_9 + 0x14) = r5_12;
    data_1d4 = 0x2e;
    *0x97c9ac = 0x180;
    data_18d = 0x58;
    void* r1_8 = *(r5_12 + 0x74);
    *(r1_8 + 0x14) = r1_8;
    data_38 = r1_8 + 0x50;
    data_78 = 0x1b1;
    *sub_204 = 0x1b1;
    data_1bd = 0x20;
    *0x50535f9c = 0xee7;
    int16_t* r1_9 = *0x800982e;
    *0x57524f46 = 0xee7;
    *(r1_9 * 2) = arg8;
    int32_t r1_11 = 0x69 * (r1_9 + 0x4d);
    int32_t r2_20 = *(r1_8 + 0x1f + arg7 + 0x3a);
    *(&data_69 + r1_11) = r1_11;
    data_a3 = 0x1b1;
    int32_t r5_13 = 0x4d5f5344 + r1_11;
    int32_t r0_12 = *(0xffffc908 + r5_13);
    *(r2_20 - 3 + r1_11) = 0xffffc908;
    int32_t r4_10 = *(r0_12 + r5_13);
    void* r2_26 = r2_20 - 3 + r0_12 + arg7 + 0x69 + arg7;
    int32_t r3_3 = *(r2_26 + 0x3a);
    data_211 = r2_26;
    *(r4_10 + 0x10) = 0x69;
    *0x97c90809 = 0x3a;
    *(r4_10 + 0x54) = r4_10;
    int32_t r5_14 = 0x80059f1 + 0;
    int32_t r0_13 = *(r3_3 + r5_14);
    data_20 = r3_3;
    int32_t r4_11 = *(r0_13 + r5_14);
    int32_t r2_27 = *(&data_20 + r5_14);
    *r0_13 = 0;
    *(r0_13 + r5_14) = r4_11;
    int32_t r5_15 = *(r4_11 + 0x10);
    int32_t r0_14 = r0_13 >> r4_11;
    bool c_3 = /* bool c_3 = unimplemented  {asrs r0, r4} */;
    *sub_0 = arg8;
    void* r2_29 = r2_27 - 0x32 + arg7;
    int32_t r3_4 = *(r2_29 + r5_15);
    *0x97c90860 = r2_29 + 0x4d;
    int32_t r1_12 = *r0_14;
    *(r3_4 + 0x41574b43) = arg8 + r2_27 - 0x32;
    void* r1_13 = r0_14 * r1_12;
    int32_t r3_5 = *(r1_13 + 0x41574b43 + arg5);
    *(r0_14 + r1_13) = r1_13;
    *(r0_14 + 0x41574b43 + arg5) = r4_11;
    int32_t r5_17 = *(r4_11 + 0x10);
    int32_t r0_15 = r0_14 >> r4_11;
    int32_t r1_14 = r0_15 * r1_13;
    *(r0_15 + r1_14) = r1_14;
    *(r0_15 + r5_17) = r4_11;
    *0x97c90815 = (r4_11 + 0x25);
    *0x97c90824 = r2_29 + 0x17;
    *0x45455097 = 0 - r0_15 * r3_5;
    int16_t* r1_15 = *(&data_65 + r1_14);
    *0x52415752 = 0 - r0_15 * r3_5;
    *(r1_15 * 2) = arg8;
    int32_t r1_16 = 0x69 * r1_15;
    int32_t r2_36 = *(r2_29 - 0x1c + arg7 + 0x3a);
    *(&data_69 + r1_16) = r1_16;
    data_a3 = r4_11 + 0x25;
    int32_t r5_18 = 0x7265776f + r1_16;
    int32_t r0_16 = *(0xffffc908 + r5_18);
    *(r2_36 - 5 + r1_16) = 0xffffc908;
    int32_t r4_13 = *(r0_16 + r5_18);
    void* r2_40 = r2_36 - 5 + r0_16 + arg7;
    void* r2_42 = r2_40 + 0x69 + arg7;
    void* r3_9 = *(r2_42 + 0x3a) + 0x4d;
    *0x97c90860 = r2_42;
    *(r4_13 + 0x10) = 0x69;
    *0x97c90809 = 0x3a;
    *(r4_13 + 0x54) = r4_13;
    int32_t r5_19 = 0x80059f1 + 0;
    int32_t r0_17 = *(r3_9 + r5_19);
    *sub_0 = r3_9;
    int32_t r4_14 = *(r0_17 + r5_19);
    int32_t r2_43 = *r5_19;
    *r0_17 = 0;
    *(r0_17 + r5_19) = r4_14;
    int32_t r5_20 = *(r4_14 + 0x10);
    int32_t r0_18 = r0_17 >> r4_14;
    bool c_8 = /* bool c_8 = unimplemented  {asrs r0, r4} */;
    *sub_0 = arg8;
    void* r2_45 = r2_43 - 0x34 + arg7;
    int32_t r3_10 = *(r2_45 + r5_20);
    *0x97c90860 = r2_45;
    int32_t r1_17 = *r0_18;
    *(r3_10 + 0x646f6d20) = arg8 + r2_43 - 0x34;
    void* r1_18 = r0_18 * r1_17;
    *(r1_18 + 0x646f6d20 + arg5);
    *(r0_18 + r1_18) = r1_18;
    *(r0_18 + 0x646f6d20 + arg5) = r4_14 + 0x4d;
    int32_t r5_22 = *(r4_14 + 0x5d);
    int32_t r0_19 = r0_18 >> (r4_14 + 0x4d);
    int32_t r1_19 = r0_19 * r1_18;
    *(r0_19 + r1_19) = r1_19;
    *(r0_19 + r5_22) = r4_14 + 0x4d;
    *0x68772830 = 0x66;
    *0x97c90809 = 0x20;
    *0x68772843;
    /* jump -> arg7 */
}

int32_t sub_a5d4(int32_t arg1, char arg2, int32_t arg3, void* arg4 @ r4, void* arg5 @ r5, void* arg6 @ r6, char arg7 @ r7, void* arg8 @ r8)
{
    *(arg4 + 0x10) = arg1;
    *(arg6 + 0x54) = arg3;
    int32_t r0 = *(arg4 + 0x60);
    *(arg5 + 0x11) = arg7;
    *(arg4 + 0x10) = r0;
    void* r5_1 = *(*(arg6 + 0x64) + 0x14);
    int32_t r0_1 = *(arg6 + 0x74);
    char* r4 = *(arg6 + 0x14);
    int32_t r7 = *(r5_1 + 0x64);
    *(r4 + 0x60) = r0_1;
    *(r5_1 + 9) = r7;
    r4[0xc] = r0_1;
    *(r4 + 0x34) = r5_1 + 0x20;
    *(arg6 + 0x54) = r7;
    *(r5_1 + 0x94) = arg6;
    int32_t r0_2 = *(r4 + 0x70);
    *(r4 + 0x64) = arg6;
    uint32_t r6 = (r5_1 + 0x20) >> 0x14;
    *r4 = r0_2;
    *(r5_1 + 0x31) = r7;
    *(r5_1 + 0x2d) = arg2;
    r4[8] = r0_2;
    void* r5_3 = *(r4 + 0x44);
    *(r4 + 0x14) = r5_3;
    *(r6 + 0x54) = 0;
    uint32_t r4_1 = r4 >> 0x15;
    *(r4_1 + 0x40) = r0_2;
    void* r2 = *(r6 + 0x14);
    void* r6_1 = *(r6 + 0x14);
    *(r5_3 + 0x74) = r6_1;
    *(r5_3 + 0x44) = r7;
    *(r4_1 + 0x54) = r4_1;
    *(r6_1 + 0x54) = r4_1;
    *(r4_1 + 0x11) = 0;
    void* r1 = *(r5_3 + 0x74);
    *(r5_3 + 0x54) = r6_1;
    void* r4_2 = *(r6_1 + 0x14);
    *(r4_2 + 0xc) = *(r2 + 0x74);
    *(r1 + 0x74) = r1;
    void* r6_2 = *(r4_2 + 0x14);
    *(r4_2 + 0x14) = 0;
    *(r1 + 0x11) = r6_2;
    *(r6_2 + 0x11) = r1;
    *(r6_2 + 0x14) = r2;
    *(r1 + 0x74) = r6_2;
    void* r1_1 = *(r1 + 0x64);
    *(r6_2 + 0x15) = 0x23;
    int32_t r1_3 = *(r1_1 + 0xd8);
    *(r6_2 + 0x15) = 0x2c;
    uint32_t r5_5 = r1_3 >> 8;
    *(r5_5 + 0x11) = *(r5_5 + 0x54);
    *(r6_2 + 0x15) = 0x73;
    data_4b = 0;
    *0x756f6582 = 0x73;
    void* r4_3 = *(r2 + 0x29);
    *0x747570c2 = r7;
    data_9e = r7;
    uint32_t r6_3 = r4_3 >> 0x15;
    data_3b = r6_3;
    *(r6_3 + 0x11) = 0x3a;
    *(r4_3 + 0x30) = 0x72;
    data_5e = *(r4_3 + 0x44);
    *(r6_3 + 0x14) = 0;
    void* r4_4 = *(r6_3 + 0x14);
    *(r4_4 + 0xc) = 0x72;
    *(r6_3 + 0x14) = r4_4;
    *(r6_3 + 0x11) = 0;
    *(r4_4 + 0x44) = 0x3a;
    data_53 = 0;
    data_54 = 0x8009781;
    data_4b = 0;
    *(data_8d + 1) = 0x3a;
    data_54 = 0x8009781;
    data_d = 0;
    *0x80097e1 = 0x80059f1;
    data_54 = 0;
    void* r5_6 = *0x80097c5;
    *0x8005a01 = 0x79;
    *(r5_6 + 0x54) = 0x79;
    *0x8005a01 = *0x8005a41;
    *(r5_6 + 0x44) = 0;
    void* r1_6 = *(r5_6 + 0x54);
    *(r5_6 + 0x11) = r1_6;
    data_54 = 0;
    data_54 = 0x73;
    *0x8005a02 = r1_6;
    *0x8005a35 = r5_6;
    uint32_t r4_5 = *(r5_6 + 5);
    data_54 = 0;
    *(r1_6 + 0x54) = r4_5;
    *(r4_5 + 0xd) = r1_6;
    data_54 = r4_5;
    *(r1_6 + 0x11) = 0;
    *(r1_6 + 0x54) = r1_6;
    data_54 = r4_5;
    data_d = 0;
    *(r4_5 + 0x10) = 0xf1;
    data_54 = 0;
    data_11 = 0;
    data_11 = 0;
    char r1_7 = *(r1_6 + 0x74);
    uint32_t r6_4 = r1_6 >> 0x15;
    *0x8009781 = 0xf1;
    *(r6_4 + 0x54) = 0;
    *(r6_4 + 0xd) = 0;
    *0x8009791 = 0xf1;
    *(r1_6 + 0x54) = 0x80059f1;
    *0x8009781 = 0xf1;
    *(r1_6 + 0x1d) = 0;
    *0x800978a = r1_6;
    *0x80097a1 = 0x80059f1;
    *(r6_4 + 0x11) = r1_6;
    void* r4_6 = *(r6_4 + 0x74);
    *(r4_6 + 0x30) = 0x6e;
    int32_t r7_1 = *(r1_6 + 0x64);
    void* r6_5 = *(r4_6 + 0x14);
    *(r6_5 + 0x14) = r7_1;
    *(r1_6 + 0x11) = r1_7;
    *(r4_6 + 0x60) = 0x72;
    *(r1_6 + 9) = r7_1;
    *(r4_6 + 0x10) = 0x72;
    *(r1_6 + 0x54) = 0x72;
    *(r6_5 + 0x54) = 0;
    *(r1_6 + 0x54) = r1_6;
    *(r1_6 + 0x15) = r7_1;
    *(r1_6 + 1) = r6_5;
    *(r6_5 + 0x11) = r1_6;
    *(r1_6 + 0xd) = 0x6e;
    *0x7475706f = r6_5;
    *(r6_5 + 0x11) = 0x6e;
    *0x7475707b = 0x6e;
    int16_t* r2_6 = *((r6_5 >> 0x15) + 0x74);
    void* r4_8 = *(r6_5 + 4);
    *0x7475706f = r6_5;
    *(r6_5 + 0x11) = 0x6e;
    *(r4_8 + 0x14) = 0x3a3;
    *0x7475707f = 0x31;
    *(r4_8 + 0x20) = 0x73;
    __builtin_strncpy(0x747570e2, "nput", 4);
    void* r6_6 = *0x747570e2;
    *(r6_6 + 0x54) = r2_6;
    *(r4_8 + 0x30) = 0x65;
    void* r1_8 = *(r4_8 + 0x44);
    *0x74757092 = r1_8;
    *(r6_6 + 0x14) = r2_6;
    void* r4_9 = *(r6_6 + 0x14);
    *(r4_9 + 8) = 0x65;
    *(r4_9 + 0x34) = *(r4_9 + 0x24);
    *(r6_6 + 0x54) = r4_9;
    void* r5_10 = *(r1_8 + 0x74);
    void* r4_10 = *(r6_6 + 0x74);
    *(r6_6 + 0xd) = r2_6;
    *(r4_10 + 0x40) = 0x23;
    *(r5_10 + 0xd) = r1_8;
    *(r4_10 + 0x24) = r1_8;
    *(r5_10 + 0x54) = r4_10;
    uint32_t r4_11 = r4_10 >> 0x15;
    *(r4_11 + 0xc) = 0x23;
    *(r6_6 + 0x34) = r4_11;
    *(r5_10 + 0x54) = 0x23;
    *(r2_6 + r1_8) = *(r6_6 + 0x74);
    uint32_t r4_13 = r1_8 >> 0x15;
    *(r5_10 + 0x11) = 0;
    *(r5_10 + 9) = 0;
    void* r5_11 = *(r4_13 + 0x64);
    *(r4_13 + 0x24) = r1_8;
    *(r5_11 + 0x54) = r4_13;
    uint32_t r4_14 = r4_13 >> 0x15;
    data_e6 = 0x73;
    *(r5_11 + 0x1d) = 0;
    *(r4_14 + 9) = r5_11;
    void* r1_9 = *(r5_11 + 0x64);
    *(r5_11 + 0x64) = 0;
    *(r4_14 + 0x20) = 0x67;
    *(r6_6 + 0x11) = r5_11;
    char* r4_15 = *(r6_6 + 0x74);
    *(r5_11 + 0x14) = 0x6e;
    *(r4_15 + 0x54) = r2_6;
    int32_t r5_12 = *(r4_15 + 0x64);
    *r4_15 = 0x73;
    *(r6_6 + 0x54) = r2_6;
    *(r6_6 + 0xd) = 0;
    *(r4_15 + 0x44) = r5_12;
    *(r1_9 + 0x14) = *(r1_9 + 0x64) << 1;
    int32_t r6_8 = r1_9 << 1;
    data_46 = 0 - r6_8;
    *((r1_9 << 5) + 0x67) = r2_6 + 0x31;
    *((r1_9 << 5) + 0x87) = (r1_9 << 5) + 0x33;
    char* r1_12 = *(0 - r6_8 + 0x64);
    uint32_t r4_18 = *(*(arg8 + 0x14) + 5);
    *((r6_8 - 0x37) * 2) = r6_8 - 0x37;
    *(r1_12 * 2) = 0;
    int32_t r1_13 = *(r4_18 + 0x44);
    void* r4_19 = *(arg8 + 0x74);
    data_15 = 0x32 + arg8;
    *(r4_19 + 0x34) = 0x32 + arg8;
    *(r4_19 + 0x54) = arg8;
    *(r4_19 + 0x54) = r4_19;
    int32_t r4_20 = r4_19 << 1;
    *(arg8 + 0xd) = 0x36;
    *(arg8 + 0x54) = arg8;
    *(arg8 + 0x74) = r4_20;
    int32_t r7_2 = *(arg8 + r4_20);
    *(arg8 + 9) = r7_2;
    *(r4_20 + 9) = r1_13;
    void* r6_10 = *(arg8 + 0x74);
    *(arg8 + 0x54) = r6_10;
    *(arg8 + 0x50) = arg8;
    *(r4_20 + 0x24) = r1_13;
    *(r4_20 + 0x34) = r7_2;
    int32_t r3_1 = *(r6_10 + 0x74);
    *(r6_10 + 9) = arg8;
    *(r4_20 + 0x54) = r3_1;
    *(arg8 + 0x54) = r6_10;
    *(arg8 + 0x24) = r1_13;
    int32_t r7_3 = *(arg8 + 0x60);
    *(r4_20 + 0x1d) = arg8;
    void* r4_21 = *(arg8 + 0x14);
    *(r4_21 + 0x34) = r2_6 + 0x31;
    *(arg8 + 0xc) = r7_3;
    *(r6_10 + 0x44) = r4_21;
    void* r4_22 = *(arg8 + 0x14);
    *(r4_22 + 0x11) = r4_22;
    *(arg8 + 0x14) = r7_3;
    *(arg8 + 0x30) = r6_10;
    void* r4_23 = *(arg8 + 0x74);
    *(r6_10 + 0x15) = r3_1;
    *(r4_23 + 0x34) = r3_1;
    *(r4_23 + 0x54) = arg8;
    *(r4_23 + 0x54) = r4_23;
    int32_t r4_24 = r4_23 << 1;
    *(arg8 + 0xd) = 0xcf;
    int16_t* r0_9 = *(arg8 + 0x74);
    *(arg8 + 0x54) = arg8;
    *(arg8 + 0x74) = r4_24;
    int32_t r7_4 = *(arg8 + r4_24);
    *(arg8 + 9) = r7_4;
    *(r4_24 + 9) = 0x43;
    void* r6_11 = *(arg8 + 0x74);
    *(arg8 + 0x54) = r6_11;
    *(arg8 + 0x50) = arg8;
    *(r4_24 + 0x24) = 0x44ea7843;
    *(r4_24 + 0x34) = r7_4;
    int32_t r3_2 = *(r6_11 + 0x74);
    *(r6_11 + 9) = arg8;
    *(r4_24 + 0x54) = r3_2;
    *(arg8 + 0x54) = r6_11;
    *(arg8 + 0x24) = 0x44ea7843;
    char r7_5 = *(arg8 + 0x60);
    *(r4_24 + 0x1d) = arg8;
    void* r4_25 = *(arg8 + 0x14);
    *(r4_25 + 0x34) = r2_6 + 0x31;
    *(arg8 + 0xc) = r7_5;
    *(r6_11 + 0x44) = r4_25;
    int32_t r4_26 = *(arg8 + 0x14);
    *(arg8 + 1) = arg8;
    *(r6_11 + 0x54) = r2_6 + 0x31;
    int32_t* r3_3 = r4_26 << 1;
    *r0_9 = r0_9;
    *r3_3 = r0_9;
    r3_3[1] = r3_3;
    r3_3[2] = r4_26;
    r3_3[3] = arg8;
    r3_3[4] = r6_11;
    *(r2_6 + 0x91);
    void* var_8 = r2_6 + 0x31;
    int16_t* var_c = r0_9;
    /* undefined */
}

int32_t sub_aa2e(int32_t arg1 @ r6)
{
    /* undefined */
}

int32_t sub_aaf8(void* arg1, int32_t arg2 @ r5, int32_t arg3 @ r6, int32_t* arg4 @ r7, int32_t arg5 @ r8, int32_t arg6 @ r10)
{
    *arg4 = arg1;
    arg4[1] = arg2;
    arg4[2] = arg3;
    arg4[3] = arg4;
    int32_t r5 = &arg4[4] << 1;
    *(r5 + 0x44);
    *((*(arg1 + 1) << 1) + 0x64) = r5;
    /* jump -> arg5 */
}

