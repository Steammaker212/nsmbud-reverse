/* sub_608BEF68
 * address: 0x608BEF68   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BEF68(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r4
  int v8; // r0

  v4 = sub_608C3C60(a1);
  sub_608C4158(v4);
  if ( FIELD_U8(a1, 177) || (v5 = FIELD_U8(a1, 179), FIELD_U8(a1, 179)) )
  {
    *(_BYTE *)a2 = FIELD_U8(a1, 260);
    FIELD_U32(a2, 4) = FIELD_U32(a1, 256);
    FIELD_U64(a2, 8) = FIELD_S32(a1, 272);
    FIELD_U64(a2, 16) = FIELD_S32(a1, 276);
    FIELD_U64(a2, 24) = FIELD_S32(a1, 264);
    v6 = FIELD_U32(a1, 268);
    FIELD_U32(a2, 36) = 0;
    FIELD_U32(a2, 32) = v6;
    v5 = FIELD_U32(a1, 304);
    if ( v5 >= 16 )
      v5 = 16;
    FIELD_U32(a2, 40) = v5;
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  v8 = sub_608C3C60(v5);
  sub_608C4160(v8);
  return v7;
}
