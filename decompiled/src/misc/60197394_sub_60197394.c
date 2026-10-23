/* sub_60197394
 * address: 0x60197394   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60197394(int a1, float a2, float a3)
{
  int result; // r0
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  _DWORD *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r0
  _DWORD *v18; // r0
  int v19; // r1
  unsigned int v20; // r2
  unsigned int v21; // r0
  float v22; // s2
  float v23; // s4
  float v24; // s6
  int v25; // r1
  float v26; // s0
  signed int v27; // [sp+Ch] [bp-44h] BYREF
  signed int v28; // [sp+10h] [bp-40h] BYREF
  _BYTE v29[60]; // [sp+14h] [bp-3Ch] BYREF

  result = FIELD_U32(a1, 480);
  if ( result == 1 )
  {
    sub_60833AF0(a2, a3);
    FIELD_U32(a1, 424) = sub_608332B0(a1 + 80, v29);
    v28 = 201326592;
    v27 = 0x100000;
    sub_608322C0((int *)(a1 + 180), (int *)(a1 + 424), &v28, &v27);
    sub_608332CC(a1 + 80, v29, 0.1, 100.0, 3.0);
    v25 = FIELD_U32(a1, 500);
    result = FIELD_U32(a1, 496);
    if ( result > v25 / 2 )
    {
      v26 = FIELD_F32(a1, 348);
      if ( FIELD_F32(a1, 80) < v26 )
        FIELD_F32(a1, 80) = v26;
    }
    FIELD_U32(a1, 496) = result + 1;
    if ( result >= v25 )
      goto LABEL_23;
  }
  else if ( !result )
  {
    sub_60198DFC(a1);
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    v5 = FIELD_U32(a1, 492) + 60817408;
    FIELD_U32(a1, 492) = v5;
    FIELD_F32(a1, 84) = (float)(FIELD_F32(a1, 364) + 490.0)
                        + (float)(FIELD_F32(a1, 464)
                                * (float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                        + (float)((float)((float)(v5 & 0xFFFFFF)
                                                        * *(float *)((char *)&sinLutTable[1] + ((v5 >> 20) & 0xFF0)))
                                                * 0.000000059605)));
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, 0.0, 0.1, 0.03, 0.005);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 464, 0.0, 0.1, 0.005, 0.001);
    result = FIELD_U32(a1, 476) - 1;
    FIELD_U32(a1, 476) = result;
    if ( !result )
    {
      if ( FIELD_U8(a1, 516) )
      {
        sub_60421938(*(_DWORD **)(a1 + 300), FIELD_U32(a1, 304), (int)&dword_60C89CAC);
        v6 = *(_DWORD **)(a1 + 300);
        v7 = v6[3];
        v8 = v6[2];
        v9 = v6[17];
        if ( v8 > v9 )
          v7 += 4 * v9;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v7 + 4), 1);
        v10 = *(_DWORD **)(a1 + 300);
        v11 = v10[3];
        v12 = v10[2];
        v13 = v10[17];
        if ( v12 > v13 )
          v11 += 4 * v13;
        *(_DWORD *)(*(_DWORD *)v11 + 24) = 1065353216;
        FIELD_U8(a1, 516) = 0;
      }
      if ( FIELD_U8(a1, 517) )
      {
        sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CCC);
        v14 = *(_DWORD **)(a1 + 308);
        v15 = v14[3];
        v16 = v14[2];
        v17 = v14[17];
        if ( v16 > v17 )
          v15 += 4 * v17;
        AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v15 + 4), 1);
        v18 = *(_DWORD **)(a1 + 308);
        v19 = v18[3];
        v20 = v18[2];
        v21 = v18[17];
        if ( v20 > v21 )
          v19 += 4 * v21;
        *(_DWORD *)(*(_DWORD *)v19 + 24) = 1065353216;
        FIELD_U8(a1, 517) = 0;
      }
      FIELD_U32(a1, 512) = 0;
      if ( FIELD_U32(a1, 472) != -1 )
        sub_601E4F60(dword_60C8B13C);
      sub_601E4C88(dword_60C8B13C, 87, a1 + 80, 1);
      sub_601E4C88(dword_60C8B13C, 163, a1 + 80, 1);
      FIELD_U32(a1, 384) = FIELD_U32(a1, 80);
      FIELD_U32(a1, 388) = FIELD_U32(a1, 84);
      FIELD_U32(a1, 392) = FIELD_U32(a1, 88);
      v22 = FIELD_F32(a1, 348);
      v23 = FIELD_F32(a1, 352);
      v24 = FIELD_F32(a1, 356);
      FIELD_F32(a1, 408) = v22 + -350.0;
      FIELD_F32(a1, 412) = v23 + -230.0;
      FIELD_F32(a1, 416) = v24 + -900.0;
      FIELD_F32(a1, 396) = v22 + 750.0;
      FIELD_F32(a1, 400) = v23 + 750.0;
      FIELD_F32(a1, 404) = v24 + -500.0;
      FIELD_U32(a1, 496) = 0;
      FIELD_U32(a1, 500) = 30;
LABEL_23:
      result = FIELD_U32(a1, 480) + 1;
      FIELD_U32(a1, 480) = result;
    }
  }
  return result;
}
