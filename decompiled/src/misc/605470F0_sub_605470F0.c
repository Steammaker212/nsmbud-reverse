/* sub_605470F0
 * address: 0x605470F0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605470F0(_DWORD *a1)
{
  int v2; // r0
  char v3; // r1
  int result; // r0

  sub_60473DE4(a1 + 10, 0, &dword_60CAC3F8, 0);
  sub_60473DE4(a1 + 1453, 0, &dword_60CAC3F8, 0);
  v2 = a1[919];
  v3 = FIELD_U8(v2, 64);
  if ( a1[4616] )
  {
    FIELD_U8(v2, 64) = v3 & 0xFE;
    *(_BYTE *)(a1[920] + 64) |= 1u;
    result = a1[918];
    FIELD_U8(result, 64) |= 1u;
  }
  else
  {
    FIELD_U8(v2, 64) = v3 | 1;
    *(_BYTE *)(a1[920] + 64) &= ~1u;
    result = a1[918];
    FIELD_U8(result, 64) &= ~1u;
  }
  return result;
}
