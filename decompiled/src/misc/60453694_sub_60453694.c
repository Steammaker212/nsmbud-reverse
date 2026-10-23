/* sub_60453694
 * address: 0x60453694   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60453694(int a1)
{
  int v2; // r0
  int result; // r0
  char v4; // [sp+Bh] [bp-15h] BYREF
  char v5; // [sp+Ch] [bp-14h] BYREF
  char v6; // [sp+Dh] [bp-13h] BYREF
  __int16 v7; // [sp+Eh] [bp-12h] BYREF

  if ( FIELD_U32(a1, 1316) == 2 )
  {
    sub_600242D8(&v7, &v6, &v5, &v4, 120);
    v2 = FIELD_U32(a1, 1388);
    FIELD_U8(a1, 1360) = FIELD_U8(v2, 184) & 7;
    FIELD_U8(a1, 1361) = FIELD_U8(v2, 185);
    FIELD_U8(a1, 1362) = sub_60456480();
    result = *(unsigned __int16 *)(FIELD_U32(a1, 1388) + 186);
    FIELD_U16(a1, 1358) = result;
  }
  else
  {
    sub_600242D8((_WORD *)(a1 + 1358), (_BYTE *)(a1 + 1360), (_BYTE *)(a1 + 1361), (_BYTE *)(a1 + 1362), 120);
    result = FIELD_U32(a1, 1316);
    if ( result == 1 )
      return sub_60456464(
               FIELD_U32(a1, 1388),
               FIELD_U8(a1, 1360),
               FIELD_U8(a1, 1361),
               FIELD_U8(a1, 1362),
               FIELD_U16(a1, 1358));
  }
  return result;
}
