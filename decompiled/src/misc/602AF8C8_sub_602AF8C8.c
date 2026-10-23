/* sub_602AF8C8
 * address: 0x602AF8C8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AF8C8(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r5
  int v7; // r6

  v3 = a1[1621];
  v2 = a1 + 1621;
  if ( v3 == 1 )
  {
    v4 = a1 + 1575;
  }
  else
  {
    *v2 = 1;
    v4 = a1 + 1575;
    sub_60421AD4(a1[1575]);
    v5 = a1[1576];
    if ( v5 )
      sub_60421AD4(v5);
  }
  a1[1703] = 40;
  v6 = **(_DWORD **)(*v4 + 28);
  v7 = FIELD_U32(v6, 20);
  FIELD_U32(v6, 24) = 1065353216;
  sub_6041838C((ModelAnimation *)(v6 + 4));
  FIELD_U32(v6, 20) = v7;
  FIELD_U32(v6, 28) |= 2u;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  return 0;
}
