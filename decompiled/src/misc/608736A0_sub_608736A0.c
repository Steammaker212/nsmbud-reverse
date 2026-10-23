/* sub_608736A0
 * address: 0x608736A0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608736A0(int a1, int a2, int a3)
{
  int v5; // r6
  int result; // r0

  v5 = *(_DWORD *)(*(_DWORD *)a1 + 8) + 40 * a2;
  if ( (FIELD_U8(v5, 28) & 1) == 0 )
    return sub_608714C8(v5, FIELD_U32(a1, 8), a3);
  sub_608714C8(v5, FIELD_U32(a1, 12), a3);
  result = FIELD_U16(v5, 26);
  if ( FIELD_U16(v5, 26) )
  {
    *(_DWORD *)(FIELD_U32(a1, 44) + 4 * (a2 >> 5)) |= 1 << (a2 & 0x1F);
    result = FIELD_U8(a1, 64) | 1;
    FIELD_U8(a1, 64) = result;
  }
  return result;
}
