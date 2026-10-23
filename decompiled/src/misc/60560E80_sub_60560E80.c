/* sub_60560E80
 * address: 0x60560E80   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60560E80(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  int v4; // r1
  unsigned int result; // r0
  unsigned int v6; // r0

  if ( (unsigned int)(FIELD_U32(a1, 31948) - 1) <= 1 )
  {
    v2 = FIELD_U32(a1, 8);
    if ( v2 >= 9 )
      v2 = 0;
    v3 = sub_60473B4C(a1 + 3548 * v2 + 16);
    v4 = FIELD_U32(dword_60CC62E4, 120);
    FIELD_U32(v3, 24) = FIELD_U32(dword_60CC62E4, 116);
    FIELD_U32(v3, 28) = v4;
    FIELD_U32(v3, 32) = 0;
    FIELD_U8(v3, 64) |= 0x10u;
  }
  result = FIELD_U32(a1, 8);
  if ( result != 8 )
  {
    if ( FIELD_U8(a1, 31952) )
    {
      if ( result >= 9 )
        result = 0;
      if ( (*(_BYTE *)(sub_6047482C(a1 + 3548 * result + 16, 0) + 51) & 1) != 0 )
        FIELD_U8(a1, 31953) = 1;
    }
    v6 = FIELD_U32(a1, 8);
    if ( v6 >= 9 )
      v6 = 0;
    return sub_60473B58((_DWORD *)(a1 + 3548 * v6 + 16), 0xEu, 0);
  }
  return result;
}
