/* sub_609407C0
 * address: 0x609407C0   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609407C0(_DWORD *a1)
{
  int v2; // r5

  *a1 = &off_60C5E378;
  if ( a1[16] || a1[15] )
  {
    v2 = a1[18];
    if ( v2 )
    {
      sead__ListNode__erase((_DWORD *)((char *)a1 + FIELD_U32(v2, 48)));
      --FIELD_U32(v2, 44);
      a1[18] = 0;
    }
  }
  *a1 = &off_60C5E40C;
  return a1;
}
