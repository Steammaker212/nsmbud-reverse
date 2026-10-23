/* sub_60987184
 * address: 0x60987184   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60987184(_DWORD *a1)
{
  int v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60C5FDD4;
  v2 = a1[9];
  if ( a1[5] || a1[4] )
  {
    sead__ListNode__erase((_DWORD *)((char *)a1 + FIELD_U32(v2, 32)));
    --FIELD_U32(v2, 28);
  }
  sub_6098D9AC(a1 + 6);
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}
