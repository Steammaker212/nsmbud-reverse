/* sub_602AFB34
 * address: 0x602AFB34   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AFB34(int a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  int v4; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r5
  int result; // r0

  FIELD_U8(a1, 6832) = 1;
  v3 = FIELD_U32(a1, 6484);
  v2 = (_DWORD *)(a1 + 6484);
  if ( v3 == 2 )
  {
    v4 = a1 + 6300;
  }
  else
  {
    *v2 = 2;
    v4 = a1 + 6300;
    sub_60421AD4(FIELD_U32(a1, 6300));
    v5 = FIELD_U32(a1, 6304);
    if ( v5 )
      sub_60421AD4(v5);
  }
  FIELD_U32(a1, 6812) = 10;
  FIELD_U32(a1, 88) = 0x40000000;
  v6 = **(_DWORD **)(*(_DWORD *)v4 + 28);
  v7 = FIELD_U32(v6, 20);
  FIELD_U32(v6, 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(v6 + 4));
  FIELD_U32(v6, 20) = v7;
  result = FIELD_U32(v6, 28) | 2;
  FIELD_U32(v6, 28) = result;
  return result;
}
