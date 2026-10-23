/* sub_607F5BE0
 * address: 0x607F5BE0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F5BE0(_DWORD *a1)
{
  int v2; // r7
  int v3; // r5
  _DWORD *v4; // r5
  int v5; // r6
  _DWORD *v6; // r0

  *a1 = off_60C2786C;
  if ( (_DWORD *)dword_60CC62E0 == a1 )
  {
    dword_60CC62E0 = 0;
    v2 = dword_60CC62E4;
    v3 = dword_60CC62E4;
    FIELD_U32(dword_60CC62E4, 16) = off_60C26570;
    v4 = (_DWORD *)(v3 + 16);
    if ( FIELD_U8(v2, 72) )
    {
      v5 = FIELD_U32(v2, 44);
      if ( v5 )
      {
        FIELD_U32(v2, 44) = 0;
        sead__ListNode__erase(v2 + 32);
        --FIELD_U32(v5, 8);
      }
      FIELD_U8(v2, 72) = 0;
    }
    sead__IDisposer__dtor(v4);
    dword_60CC62E4 = 0;
  }
  v6 = sead__IDisposer__dtor(a1);
  operator_delete(v6);
}
