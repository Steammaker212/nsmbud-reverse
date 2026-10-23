/* sub_60820AA0
 * address: 0x60820AA0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60820AA0(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60C2A58C;
  v2 = a1[8];
  if ( v2 )
  {
    a1[8] = 0;
    sead__ListNode__erase(a1 + 5);
    --FIELD_U32(v2, 8);
  }
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
