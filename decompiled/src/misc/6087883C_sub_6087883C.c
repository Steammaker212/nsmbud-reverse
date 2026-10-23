/* sub_6087883C
 * address: 0x6087883C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6087883C(_DWORD *result, int a2, float a3)
{
  _DWORD *v5; // r8
  int v6; // r5
  int v7; // r9
  int v8; // r7
  int v9; // r6

  v5 = result;
  v6 = FIELD_U16(a2, 64);
  if ( FIELD_U16(a2, 64) )
  {
    v7 = *result;
    v8 = FIELD_U32(a2, 48);
    v9 = 0;
    do
    {
      result = *(_DWORD **)(a2 + 56);
      if ( (int)result[v9] >= 0 )
        result = (_DWORD *)sub_60878E50(v5, v7, v8, result[v9] & 0x7FFF, a3);
      ++v9;
      v8 += 48;
    }
    while ( v6 != v9 );
  }
  return result;
}
