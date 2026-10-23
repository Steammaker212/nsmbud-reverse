/* sub_607D5238
 * address: 0x607D5238   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D5238(int a1, float a2)
{
  int result; // r0
  _DWORD *v4; // r5
  float v5; // s0

  result = sub_60793C54(a1, a2);
  v4 = *(_DWORD **)(a1 + 40);
  if ( v4 )
  {
    v5 = sub_6079321C(a1);
    return sub_60793088(v4, v5);
  }
  return result;
}
