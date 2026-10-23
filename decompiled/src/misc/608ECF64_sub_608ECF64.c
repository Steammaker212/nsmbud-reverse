/* sub_608ECF64
 * address: 0x608ECF64   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608ECF64(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  void *v4; // r0

  *(_DWORD *)a1 = off_60C5C4B0;
  FIELD_U32(a1, 392) = off_60BFA048;
  v2 = (_DWORD *)(a1 + 392);
  sead__MethodTreeNode__detachAll(a1 + 392);
  sead__IDisposer__dtor(v2);
  FIELD_U32(a1, 312) = off_60BFA048;
  sead__MethodTreeNode__detachAll(a1 + 312);
  sead__IDisposer__dtor((_DWORD *)(a1 + 312));
  FIELD_U32(a1, 252) = off_60C26570;
  if ( FIELD_U8(a1, 308) )
  {
    v3 = FIELD_U32(a1, 280);
    if ( v3 )
    {
      FIELD_U32(a1, 280) = 0;
      sead__ListNode__erase((_DWORD *)(a1 + 268));
      --FIELD_U32(v3, 8);
    }
    FIELD_U8(a1, 308) = 0;
  }
  sead__IDisposer__dtor((_DWORD *)(a1 + 252));
  v4 = (void *)sead__TaskBase__dtor(a1);
  operator_delete(v4);
}
