/* sub_60193B54
 * address: 0x60193B54   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60193B54(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3

  v2 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  FIELD_U32(v2, 24) = 1065353216;
  FIELD_U32(v2, 20) = FIELD_U32(v2, 8);
  FIELD_U32(v2, 28) |= 2u;
  AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
  sub_60193BDC(a1);
  v3 = FIELD_U32(a1, 240);
  if ( v3 == 8 )
  {
    v3 = 8;
    v4 = 0;
  }
  else
  {
    v4 = FIELD_U8(a1, 244);
    v3 = (unsigned __int8)v3;
  }
  return sub_60427BC8(dword_60C9BBD4, **(_DWORD **)(a1 + 268), v3, v4);
}
