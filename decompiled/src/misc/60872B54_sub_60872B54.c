/* sub_60872B54
 * address: 0x60872B54   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60872B54(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r2

  FIELD_U32(a1, 60) = a2;
  sub_6086A3F0(a1, FIELD_U32(a2, 60), (FIELD_U16(a2, 56) >> 2) & 1);
  v4 = FIELD_U8(a2, 64);
  FIELD_U32(a1, 40) = v4;
  FIELD_U32(a1, 44) = 2139095040;
  if ( v4 && FIELD_U32(a1, 36) >= v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      *(_DWORD *)(FIELD_U32(a1, 32) + v5) = 2139095040;
      v5 += 12;
    }
    while ( v6 < FIELD_U32(a1, 40) );
  }
  return sub_60870C94(FIELD_U32(a1, 60), *(_DWORD **)(a1 + 48));
}
