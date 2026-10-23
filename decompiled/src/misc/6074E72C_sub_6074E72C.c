/* sub_6074E72C
 * address: 0x6074E72C   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6074E72C(_DWORD *a1)
{
  int v2; // r6
  void *v3; // r0
  void *v4; // r0
  _DWORD *v5; // r0

  *a1 = off_60C23BB0;
  if ( (_DWORD *)dword_60CBEA40 == a1 )
  {
    dword_60CBEA40 = 0;
    v2 = dword_60CBEA44;
    if ( FIELD_U8(dword_60CBEA44, 16) )
    {
      v3 = *(void **)(dword_60CBEA44 + 64);
      if ( !v3 || (operator_delete(v3), FIELD_U32(v2, 64) = 0, FIELD_U8(v2, 16)) )
      {
        v4 = *(void **)(v2 + 72);
        if ( v4 )
        {
          operator_delete_8DE3FC(v4);
          FIELD_U32(v2, 68) = 0;
          FIELD_U32(v2, 72) = 0;
        }
      }
      FIELD_U8(v2, 16) = 0;
    }
    dword_60CBEA44 = 0;
  }
  v5 = sead__IDisposer__dtor(a1);
  operator_delete(v5);
}
