/* sub_60921D30
 * address: 0x60921D30   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921D30(int a1, signed int a2, int a3)
{
  __int64 v5; // r0
  int v6; // r0
  int v7; // r1
  int result; // r0

  if ( a2 >= 1 )
  {
    v5 = 4LL * (unsigned int)a2;
    if ( !is_mul_ok(4u, a2) )
      HIDWORD(v5) = 1;
    if ( HIDWORD(v5) )
      LODWORD(v5) = -1;
    v6 = sub_608DE334(v5, a3, 4);
    if ( v6 )
    {
      FIELD_U32(a1, 132) = a2;
      FIELD_U32(a1, 136) = v6;
    }
  }
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 68) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 92) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 108) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 124) = 0;
  v7 = FIELD_U32(a1, 132);
  if ( v7 )
    memset(*(void **)(a1 + 136), 0, 4 * v7);
  result = FIELD_U8(a1, 140) & 0xFC | 2;
  FIELD_U8(a1, 140) = result;
  return result;
}
