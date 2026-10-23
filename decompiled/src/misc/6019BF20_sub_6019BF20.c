/* sub_6019BF20
 * address: 0x6019BF20   size: 2364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6019BF20(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // r5
  int v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r0
  _DWORD *v10; // r11
  char v11; // r12
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r5
  int v15; // r0
  float *v16; // r2
  int v17; // r3
  float v18; // r2
  float v19; // r0
  unsigned __int8 v20; // r0
  unsigned __int8 *v21; // r5
  int v22; // r6
  int *v23; // r7
  int v24; // r0
  int v25; // r1
  bool v26; // zf
  StateMethodExecuter *result; // r0
  int v28; // r4
  int v29; // r0
  unsigned int v30; // r1
  int v31; // r0
  int v32; // r2
  float *v33; // r1
  int v34; // r0
  int v35; // r1
  int v36; // r4
  _DWORD *v37; // r6
  int v38; // r0
  int k; // r2
  int v40; // r4
  int m; // r2
  int v42; // r4
  int v43; // r1
  unsigned int v44; // r0
  int v45; // r1
  unsigned int v46; // r0
  int v47; // r0
  int v48; // r4
  int i; // r2
  int v50; // r4
  int j; // r2
  float v52; // s6
  int v53; // r6
  unsigned int currentState; // r3
  char *vtable; // r1
  int v56; // r1
  unsigned int v57; // r0
  int v58; // r1
  unsigned int v59; // r0
  _DWORD *v60; // [sp+8h] [bp-40h]
  int v61; // [sp+Ch] [bp-3Ch]
  int speed; // [sp+10h] [bp-38h] BYREF
  int v63; // [sp+14h] [bp-34h]
  int target; // [sp+18h] [bp-30h] BYREF
  float v65; // [sp+1Ch] [bp-2Ch]
  float v66; // [sp+20h] [bp-28h]

  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  v61 = a1;
  if ( FIELD_U8(a1, 12892) )
  {
    if ( v2 )
    {
      target = v2[45] - 0x40000000;
      speed = 50331648;
      moveValueTo((int *)(a1 + 12660), &target, &speed);
      v3 = v2[20];
      FIELD_U32(a1, 12644) = v3;
      v4 = v2[21];
      FIELD_U32(a1, 12648) = v4;
      v5 = v2[22];
      FIELD_U32(a1, 12652) = v5;
      FIELD_U32(a1, 80) = v3;
      FIELD_U32(a1, 84) = v4;
      FIELD_U32(a1, 88) = v5;
    }
    v6 = (_DWORD *)v2[68];
    if ( v6 )
    {
      v60 = v2;
      v7 = a1;
      v8 = 1;
      do
      {
        target = v6[45] - 0x40000000;
        speed = 50331648;
        v9 = v8;
        if ( v8 >= 6 )
          v9 = 0;
        v10 = (_DWORD *)(v7 + 40 * v9);
        moveValueTo(v10 + 3165, &target, &speed);
        ++v8;
        v10[3161] = v6[20];
        v10[3162] = v6[21];
        v10[3163] = v6[22];
        v6 = (_DWORD *)v6[68];
      }
      while ( v6 );
      v26 = v8 == 4;
      a1 = v7;
      v2 = v60;
      if ( v26 )
      {
        if ( ((unsigned int)algn_60C89DC4 & ~(1612300384 << v11) & 1) == 0
          && _cxa_guard_acquire((__guard *)algn_60C89DC4) )
        {
          dword_60C89DC0 = FIELD_U8(a1, 12891) - 1;
          _cxa_guard_release((__guard *)algn_60C89DC4);
        }
        sub_601C6300(&target, (float)(75.0 * (float)dword_60C89DC0) + 6.0);
        v12 = dword_60C89DC0;
        a1 = v61;
        v13 = 0;
        v14 = 0;
        if ( (unsigned int)dword_60C89DC0 < 6 )
          v13 = dword_60C89DC0;
        v15 = 5 * v13;
        v16 = (float *)(v61 + 8 * v15);
        if ( (float)(*(float *)&target - v16[3161]) == 0.0
          && (float)(v65 - v16[3162]) == 0.0
          && (float)(v66 - v16[3163]) == 0.0 )
        {
          v17 = target;
          v18 = v65;
          v19 = v66;
        }
        else
        {
          v28 = v61 + 12628;
          v29 = v61 + 12628 + 8 * v15 + 16;
          v30 = FIELD_U32(v61, 12600);
          if ( v30 >= 6 )
            v30 = 0;
          v31 = sub_608332B0(v29, v28 + 40 * v30 + 16) - 0x40000000;
          v12 = dword_60C89DC0;
          if ( (unsigned int)dword_60C89DC0 < 6 )
            v14 = dword_60C89DC0;
          v32 = v28 + 40 * v14;
          a1 = v61;
          FIELD_U32(v32, 32) = v31;
          v17 = target;
          v18 = v65;
          v19 = v66;
        }
        if ( v12 >= 6 )
          v12 = 0;
        v33 = (float *)(a1 + 40 * v12);
        *((_DWORD *)v33 + 3161) = v17;
        v33[3162] = v18;
        v33[3163] = v19;
      }
    }
    sub_6019D6B4(a1);
    FIELD_U32(a1, 12868) = 0;
    if ( !v2 )
      goto LABEL_93;
    *(float *)&target = NAN;
    v65 = NAN;
    v66 = NAN;
    sub_6019EC34(&target, v2 + 258);
    v34 = sub_601E0010(&target);
    speed = (int)&sead__SafeStringBase__vtable;
    v35 = a1;
    v36 = FIELD_U32(v34, 4);
    v63 = v36;
    v37 = (_DWORD *)(v35 + 12880);
    if ( FIELD_U32(v35, 12880) == -1 )
    {
LABEL_71:
      v47 = target;
      if ( target == 3 )
      {
        (*(void (__fastcall **)(int *))(speed + 12))(&speed);
        (*(void (__fastcall **)(int *))(speed + 12))(&speed);
        v48 = v63;
        (*(void (__fastcall **)(int *))(dword_60C89DD8 + 12))(&dword_60C89DD8);
        if ( v48 == dword_60C89DDC )
        {
LABEL_91:
          FIELD_U16(v61, 12888) = 0;
          *v37 = sub_601E4EA4(dword_60C8B13C, 195, v61 + 12888, v61 + 80, 1);
          sub_601E4F60(dword_60C8B13C);
          FIELD_U16(v61, 12888) = 0;
          FIELD_U32(v61, 12884) = -1;
          goto LABEL_92;
        }
        for ( i = 1; *(unsigned __int8 *)(v63 + i - 1) == *(unsigned __int8 *)(dword_60C89DDC + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v63 + i - 1) )
            goto LABEL_91;
          if ( i >= 524289 || *(unsigned __int8 *)(v63 + i) != *(unsigned __int8 *)(dword_60C89DDC + i) )
            break;
          if ( !*(_BYTE *)(v63 + i) )
            goto LABEL_91;
        }
        v47 = target;
      }
      if ( v47 == 5 )
      {
        (*(void (__fastcall **)(int *))(speed + 12))(&speed);
        (*(void (__fastcall **)(int *))(speed + 12))(&speed);
        v50 = v63;
        (*(void (__fastcall **)(int *))(dword_60C89DE0 + 12))(&dword_60C89DE0);
        if ( v50 != dword_60C89DE4 )
        {
          for ( j = 1; *(unsigned __int8 *)(v63 + j - 1) == *(unsigned __int8 *)(dword_60C89DE4 + j - 1); j += 2 )
          {
            if ( !*(_BYTE *)(v63 + j - 1) )
              goto LABEL_91;
            if ( j >= 524289 || *(unsigned __int8 *)(v63 + j) != *(unsigned __int8 *)(dword_60C89DE4 + j) )
              break;
            if ( !*(_BYTE *)(v63 + j) )
              goto LABEL_91;
          }
          goto LABEL_92;
        }
        goto LABEL_91;
      }
LABEL_92:
      a1 = v61;
LABEL_93:
      v52 = FIELD_F32(a1, 80) - FIELD_F32(a1, 92);
      FIELD_U16(a1, 12888) = (int)(float)(sqrtf(
                                              (float)((float)((float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 96))
                                                            * (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 96)))
                                                    + (float)(v52 * v52))
                                            + (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 100))
                                                    * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 100))))
                                          * 64.0);
      result = (StateMethodExecuter *)FIELD_U8(a1, 12890);
      if ( result == (StateMethodExecuter *)1 )
      {
        v53 = a1 + 12628;
        result = *(StateMethodExecuter **)(a1 + 12628);
        currentState = result[5].currentState;
        vtable = (char *)result[1].vtable;
        if ( FIELD_U32(result, 0x8) > currentState )
          vtable += 4 * currentState;
        if ( (*(_BYTE *)(*(_DWORD *)vtable + 28) & 0x20) != 0 )
        {
          sub_60421938(result, FIELD_U32(a1, 12624), (int)&dword_60C89D24);
          v56 = *(_DWORD *)(*(_DWORD *)v53 + 12);
          v57 = *(_DWORD *)(*(_DWORD *)v53 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v53 + 8) > v57 )
            v56 += 4 * v57;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v56 + 4), 1);
          v58 = *(_DWORD *)(*(_DWORD *)v53 + 12);
          v59 = *(_DWORD *)(*(_DWORD *)v53 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v53 + 8) > v59 )
            v58 += 4 * v59;
          *(_DWORD *)(*(_DWORD *)v58 + 24) = 1065353216;
          FIELD_U8(a1, 12890) = 0;
          return 0;
        }
      }
      return result;
    }
    v38 = target;
    if ( target == 3 )
    {
      (*(void (__fastcall **)(int *))(dword_60C89DC8 + 12))(&dword_60C89DC8);
      if ( v36 == dword_60C89DCC )
        goto LABEL_63;
      for ( k = 1; *(unsigned __int8 *)(v63 + k - 1) == *(unsigned __int8 *)(dword_60C89DCC + k - 1); k += 2 )
      {
        if ( !*(_BYTE *)(v63 + k - 1) )
          goto LABEL_63;
        if ( k >= 524289 || *(unsigned __int8 *)(v63 + k) != *(unsigned __int8 *)(dword_60C89DCC + k) )
          break;
        if ( !*(_BYTE *)(v63 + k) )
          goto LABEL_63;
      }
      v38 = target;
    }
    if ( v38 != 5 )
      goto LABEL_70;
    (*(void (__fastcall **)(int *))(speed + 12))(&speed);
    (*(void (__fastcall **)(int *))(speed + 12))(&speed);
    v40 = v63;
    (*(void (__fastcall **)(int *))(dword_60C89DD0 + 12))(&dword_60C89DD0);
    if ( v40 != dword_60C89DD4 )
    {
      for ( m = 1; *(unsigned __int8 *)(v63 + m - 1) == *(unsigned __int8 *)(dword_60C89DD4 + m - 1); m += 2 )
      {
        if ( !*(_BYTE *)(v63 + m - 1) )
          goto LABEL_63;
        if ( m >= 524289 || *(unsigned __int8 *)(v63 + m) != *(unsigned __int8 *)(dword_60C89DD4 + m) )
          break;
        if ( !*(_BYTE *)(v63 + m) )
          goto LABEL_63;
      }
LABEL_70:
      if ( *v37 != -1 )
        goto LABEL_92;
      goto LABEL_71;
    }
LABEL_63:
    sub_601E4F60(dword_60C8B13C);
    *v37 = -1;
    FIELD_U16(v61, 12888) = 0;
    FIELD_U32(v61, 12884) = sub_601E4EA4(dword_60C8B13C, 196, v61 + 12888, v61 + 80, 1);
    if ( FIELD_U8(v61, 12890) != 1 )
    {
      v42 = v61 + 12628;
      sub_60421938(*(_DWORD **)(v61 + 12628), FIELD_U32(v61, 12624), (int)&algn_60C89D28[4]);
      v43 = *(_DWORD *)(FIELD_U32(v61, 12628) + 12);
      v44 = *(_DWORD *)(FIELD_U32(v61, 12628) + 68);
      if ( *(_DWORD *)(FIELD_U32(v61, 12628) + 8) > v44 )
        v43 += 4 * v44;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v43 + 4), 0);
      v45 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v46 = *(_DWORD *)(*(_DWORD *)v42 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v42 + 8) > v46 )
        v45 += 4 * v46;
      *(_DWORD *)(*(_DWORD *)v45 + 24) = 1065353216;
      FIELD_U8(v61, 12890) = 1;
    }
    sub_601E4C88(dword_60C8B13C, 197, v61 + 80, 1);
    goto LABEL_70;
  }
  sub_6019EBE8(dword_60C89DF8);
  sub_6019D04C(a1);
  v21 = (unsigned __int8 *)(a1 + 12891);
  v20 = FIELD_U8(a1, 12891);
  if ( v20 )
  {
    v22 = 0;
    v23 = (int *)(a1 + 12660);
    do
    {
      if ( v22 )
      {
        v24 = 0;
        if ( (unsigned int)v22 < 6 )
          v24 = v22;
        *(_DWORD *)(v61 + 40 * v24 + 12660) = sub_608332B0(v61 + 40 * v24 + 12632, v61 + 40 * v24 + 12644) - 0x40000000;
        a1 = v61;
        v20 = *v21;
      }
      else
      {
        v25 = FIELD_U32(a1, 240);
        v26 = v25 == 3;
        if ( v25 == 3 )
          v25 = -1073741824;
        else
          *v23 = 0x80000000;
        if ( v26 )
          *v23 = v25;
      }
      ++v22;
    }
    while ( v22 < v20 );
  }
  sub_6019DE18(a1);
  return StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C89D54);
}
