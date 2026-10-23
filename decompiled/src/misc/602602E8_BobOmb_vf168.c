/* BobOmb_vf168
 * address: 0x602602E8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf168(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r0
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r5
  float v9; // s2
  float v10; // s6
  float v11; // s4
  float v12; // s8
  float v13; // s0

  v3 = FIELD_U32(a1, 6360);
  v2 = (_DWORD *)(a1 + 6360);
  if ( v3 == 1 )
  {
    v4 = *(_DWORD **)(a1 + 6352);
    v5 = (int *)v4[3];
    v6 = v4[2];
    v7 = v4[17];
    if ( v6 > v7 )
      v5 += v7;
    v8 = *v5;
    if ( *(float *)(*v5 + 24) < 0.0 )
      sub_6041838C((ModelAnimation *)(v8 + 4));
    FIELD_U32(v8, 24) = 1065353216;
  }
  else
  {
    *v2 = 1;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  FIELD_U32(a1, 160) = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 336) &= ~0x100000u;
  if ( (FIELD_U8(a1, 6364) & 4) != 0 )
  {
    v9 = FIELD_F32(a1, 576);
    v10 = FIELD_F32(a1, 112);
    v11 = FIELD_F32(a1, 580);
    v12 = FIELD_F32(a1, 116);
    v13 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    FIELD_U32(a1, 6496) = FIELD_U32(a1, 6488);
    FIELD_F32(a1, 6504) = v13;
    FIELD_F32(a1, 6508) = v10 + v9;
    FIELD_F32(a1, 6512) = v12 + v11;
  }
  FIELD_U8(a1, 6468) = 0;
  return 6468;
}
