/* sub_603F8338
 * address: 0x603F8338   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F8338(int a1)
{
  int v2; // r5

  *(_DWORD *)a1 = off_60BF9614;
  if ( FIELD_U8(a1, 56) )
  {
    v2 = FIELD_U32(a1, 28);
    if ( v2 )
    {
      FIELD_U32(a1, 28) = 0;
      sead__ListNode__erase(a1 + 16);
      --FIELD_U32(v2, 8);
    }
    FIELD_U8(a1, 56) = 0;
  }
  return sead__IDisposer__dtor((_DWORD *)a1);
}
