/* sub_607F0094
 * address: 0x607F0094   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0094(int a1)
{
  int v2; // r6

  *(_DWORD *)a1 = off_60C271A0;
  sub_60954610(a1 + 500);
  *(_DWORD *)a1 = off_60C5C4B0;
  FIELD_U32(a1, 392) = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 392);
  sead__IDisposer__dtor((_DWORD *)(a1 + 392));
  FIELD_U32(a1, 312) = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 312);
  sead__IDisposer__dtor((_DWORD *)(a1 + 312));
  FIELD_U32(a1, 252) = off_60C26570;
  if ( FIELD_U8(a1, 308) )
  {
    v2 = FIELD_U32(a1, 280);
    if ( v2 )
    {
      FIELD_U32(a1, 280) = 0;
      sead__ListNode__erase(a1 + 268);
      --FIELD_U32(v2, 8);
    }
    FIELD_U8(a1, 308) = 0;
  }
  sead__IDisposer__dtor((_DWORD *)(a1 + 252));
  return sead__TaskBase__dtor(a1);
}
