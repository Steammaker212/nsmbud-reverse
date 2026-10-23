/* sub_60558A30
 * address: 0x60558A30   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60558A30(_DWORD *a1, int a2)
{
  _DWORD *v2; // r2
  int result; // r0
  int v4; // t1

  v2 = a1 + 914;
  if ( a1[914] == a2
    || (v2 = a1 + 915, a1[915] == a2)
    || (v2 = a1 + 916, a1[916] == a2)
    || (v4 = a1[917], result = (int)(a1 + 917), v2 = (_DWORD *)result, v4 == a2) )
  {
    *v2 = -1;
    return -1;
  }
  return result;
}
