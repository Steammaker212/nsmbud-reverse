/* sub_60196600
 * address: 0x60196600   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60196600(int a1)
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

  if ( FIELD_U8(a1, 516) != 2 )
  {
    sub_60421938(*(_DWORD **)(a1 + 300), FIELD_U32(a1, 304), (int)&dword_60C89CBC);
    v2 = *(_DWORD **)(a1 + 300);
    v3 = v2[3];
    v4 = v2[2];
    v5 = v2[17];
    if ( v4 > v5 )
      v3 += 4 * v5;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 0);
    v6 = *(_DWORD **)(a1 + 300);
    v7 = v6[3];
    v8 = v6[2];
    v9 = v6[17];
    if ( v8 > v9 )
      v7 += 4 * v9;
    *(_DWORD *)(*(_DWORD *)v7 + 24) = 1065353216;
    FIELD_U8(a1, 516) = 2;
  }
  if ( FIELD_U8(a1, 517) != 2 )
  {
    sub_60421938(*(_DWORD **)(a1 + 308), FIELD_U32(a1, 312), (int)&dword_60C89CDC);
    v10 = *(_DWORD **)(a1 + 308);
    v11 = v10[3];
    v12 = v10[2];
    v13 = v10[17];
    if ( v12 > v13 )
      v11 += 4 * v13;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
    v14 = *(_DWORD **)(a1 + 308);
    v15 = v14[3];
    v16 = v14[2];
    v17 = v14[17];
    if ( v16 > v17 )
      v15 += 4 * v17;
    *(_DWORD *)(*(_DWORD *)v15 + 24) = 1065353216;
    FIELD_U8(a1, 517) = 2;
  }
  sub_601E4C88(dword_60C8B13C, 172, a1 + 80, 1);
  FIELD_U32(a1, 480) = 0;
  return 0;
}
