/* sub_60196AE8
 * address: 0x60196AE8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60196AE8(int a1, float a2)
{
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  _DWORD *v15; // r0
  int v16; // r1
  unsigned int v17; // r2
  unsigned int v18; // r0
  int v19; // r0
  int result; // r0

  if ( FIELD_U8(a1, 516) != 1 )
  {
    sub_60421938(*(_DWORD **)(a1 + 300), FIELD_U32(a1, 304), (int)&unk_60C89CB4);
    v3 = *(_DWORD **)(a1 + 300);
    v4 = v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
    v7 = *(_DWORD **)(a1 + 300);
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
    if ( v9 > v10 )
      v8 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    FIELD_U8(a1, 516) = 1;
  }
  if ( FIELD_U8(a1, 517) != 1 )
  {
    sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&unk_60C89CD4);
    v11 = *(_DWORD **)(a1 + 308);
    v12 = v11[3];
    v13 = v11[2];
    v14 = v11[17];
    if ( v13 > v14 )
      v12 += 4 * v14;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
    v15 = *(_DWORD **)(a1 + 308);
    v16 = v15[3];
    v17 = v15[2];
    v18 = v15[17];
    if ( v17 > v18 )
      v16 += 4 * v18;
    *(_DWORD *)(*(_DWORD *)v16 + 24) = 1065353216;
    FIELD_U8(a1, 517) = 1;
  }
  koopaJr_clown_expression_ref_1983B4(a1, 1, a2);
  v19 = **(_DWORD **)(FIELD_U32(a1, 308) + 20);
  FIELD_U32(v19, 20) = 1065353216;
  FIELD_U32(v19, 28) |= 2u;
  result = **(_DWORD **)(FIELD_U32(a1, 308) + 20);
  FIELD_U32(result, 24) = 0;
  FIELD_U32(a1, 480) = 0;
  return result;
}
