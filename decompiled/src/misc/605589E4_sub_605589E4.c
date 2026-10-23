/* sub_605589E4
 * address: 0x605589E4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605589E4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r2
  int result; // r0
  int v4; // t1

  v2 = a1 + 910;
  if ( a1[910] == a2
    || (v2 = a1 + 911, a1[911] == a2)
    || (v2 = a1 + 912, a1[912] == a2)
    || (v4 = a1[913], result = (int)(a1 + 913), v2 = (_DWORD *)result, v4 == a2) )
  {
    *v2 = -1;
    return -1;
  }
  return result;
}
