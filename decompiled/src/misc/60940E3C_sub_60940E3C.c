/* sub_60940E3C
 * address: 0x60940E3C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60940E3C(int a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r0

  result = FIELD_U8(a1, 56);
  if ( (result & 1) != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
    v3 = FIELD_U32(a1, 40);
    if ( v3 != a1 + 36 )
    {
      v4 = FIELD_U32(a1, 48);
      v5 = (_DWORD *)(v3 - v4);
      do
      {
        sub_60940904(v5);
        v3 = FIELD_U32(v3, 4);
        v5 = (_DWORD *)(v3 - v4);
      }
      while ( v3 - v4 != a1 + 36 - v4 );
    }
    result = FIELD_U16(a1, 56) & 0xFFFE;
    FIELD_U16(a1, 56) = result;
  }
  return result;
}
