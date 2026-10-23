/* sub_608D08D0
 * address: 0x608D08D0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_608D08D0(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r5
  __int64 result; // r0

  v5 = a2;
  if ( nn__os__CreateThread(a2, sub_608D094C, a1, a4[1], a4[2], a4[5], a4[3]) )
  {
    v5 = -1;
    result = 0;
  }
  else
  {
    nn__os__StartThread(v5);
    result = 1;
  }
  FIELD_U32(a1, 264) = v5;
  FIELD_U32(a1, 268) = 0;
  return result;
}
