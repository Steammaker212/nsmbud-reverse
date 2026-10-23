/* sub_607DF074
 * address: 0x607DF074   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DF074(int a1)
{
  int v2; // r6

  *(_DWORD *)a1 = off_60C26504;
  sub_60482208((_DWORD *)(a1 + 356));
  FIELD_U32(a1, 296) = off_60C26570;
  if ( FIELD_U8(a1, 352) )
  {
    v2 = FIELD_U32(a1, 324);
    if ( v2 )
    {
      FIELD_U32(a1, 324) = 0;
      sead__ListNode__erase(a1 + 312);
      --FIELD_U32(v2, 8);
    }
    FIELD_U8(a1, 352) = 0;
  }
  sead__IDisposer__dtor((_DWORD *)(a1 + 296));
  sub_60954610(a1 + 228);
  return sead__CalculateTask__dtor((_DWORD *)a1);
}
