/* sub_602AF5EC
 * address: 0x602AF5EC   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602AF5EC(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // t1
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0

  v3 = a1[1621];
  v2 = a1 + 1621;
  if ( v3 )
  {
    *v2 = 0;
    v4 = a1 + 1575;
    sub_60421AD4(a1[1575]);
    v5 = a1[1576];
    if ( v5 )
      sub_60421AD4(v5);
  }
  else
  {
    v4 = a1 + 1575;
  }
  v6 = a1[27];
  v7 = a1[28];
  a1[1624] = a1[29];
  a1[1623] = v7;
  a1[1622] = v6;
  result = **(_DWORD **)(*v4 + 28);
  FIELD_U32(result, 24) = 0;
  return result;
}
