/* sub_601AF6BC
 * address: 0x601AF6BC   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AF6BC(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r0

  FIELD_U32(a1, 548) = sub_601691C0(a1);
  FIELD_U32(a1, 572) = 10;
  result = FIELD_U8(a1, 600);
  if ( FIELD_U8(a1, 600) )
  {
    sub_60421938(*(_DWORD **)(a1 + 372), FIELD_U32(a1, 380), (int)&dword_60C8A69C);
    v3 = *(_DWORD **)(a1 + 372);
    v4 = v3[3];
    v5 = v3[2];
    v6 = v3[17];
    if ( v5 > v6 )
      v4 += 4 * v6;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
    v7 = *(_DWORD **)(a1 + 372);
    v8 = v7[3];
    v9 = v7[2];
    v10 = v7[17];
    if ( v9 > v10 )
      v8 += 4 * v10;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
    FIELD_U8(a1, 600) = 0;
    return 0;
  }
  return result;
}
