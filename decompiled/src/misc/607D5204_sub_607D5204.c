/* sub_607D5204
 * address: 0x607D5204   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D5204(_DWORD *a1, float a2)
{
  int result; // r0
  _DWORD *v4; // r5
  float v5; // s0

  result = sub_60793D5C((int)a1, a2);
  v4 = (_DWORD *)a1[10];
  if ( v4 )
  {
    v5 = (*(float (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
    return sub_60793114(v4, v5);
  }
  return result;
}
