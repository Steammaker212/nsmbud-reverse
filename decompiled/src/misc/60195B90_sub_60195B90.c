/* sub_60195B90
 * address: 0x60195B90   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60195B90(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
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
  float v18; // r0
  float v19; // r1
  float v20; // r2
  _DWORD v22[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_60421938(*(_DWORD **)(a1 + 300), FIELD_U32(a1, 304), (int)&dword_60C89CAC);
  v2 = *(_DWORD **)(a1 + 300);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 1);
  v6 = *(_DWORD **)(a1 + 300);
  v7 = v6[3];
  v8 = v6[2];
  v9 = v6[17];
  if ( v8 > v9 )
    v7 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v7 + 24) = 1058474557;
  FIELD_U8(a1, 516) = 0;
  sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CCC);
  v10 = *(_DWORD **)(a1 + 308);
  v11 = v10[3];
  v12 = v10[2];
  v13 = v10[17];
  if ( v12 > v13 )
    v11 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 1);
  v14 = *(_DWORD **)(a1 + 308);
  v15 = v14[3];
  v16 = v14[2];
  v17 = v14[17];
  if ( v16 > v17 )
    v15 += 4 * v17;
  *(_DWORD *)(*(_DWORD *)v15 + 24) = 1058474557;
  FIELD_U8(a1, 517) = 0;
  FIELD_U32(a1, 244) = 1;
  v18 = FIELD_F32(a1, 348);
  FIELD_F32(a1, 360) = v18;
  v19 = FIELD_F32(a1, 352);
  FIELD_F32(a1, 364) = v19;
  v20 = FIELD_F32(a1, 356);
  FIELD_F32(a1, 368) = v20;
  FIELD_F32(a1, 84) = v19 + 490.0;
  FIELD_F32(a1, 80) = v18 + -100.0;
  FIELD_F32(a1, 88) = v20 + -25.0;
  *(float *)v22 = v18;
  *(float *)&v22[1] = v19;
  *(float *)&v22[2] = v20 + -25.0;
  FIELD_U32(a1, 192) = sub_608332B0(a1 + 80, v22);
  FIELD_U32(a1, 180) = (int)(float)((float)(2147500000.0 * 30.0) / 180.0);
  FIELD_U32(a1, 176) = 119304647;
  FIELD_U32(a1, 464) = 1103626240;
  FIELD_U32(a1, 200) = 1077936128;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 484) = 0;
  return 1077936128;
}
