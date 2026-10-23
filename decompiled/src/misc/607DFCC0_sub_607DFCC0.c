/* sub_607DFCC0
 * address: 0x607DFCC0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607DFCC0(int a1)
{
  int v2; // r5
  _DWORD *v3; // r0

  *(_DWORD *)a1 = off_60C26570;
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
  v3 = sead__IDisposer__dtor((_DWORD *)a1);
  operator_delete(v3);
}
