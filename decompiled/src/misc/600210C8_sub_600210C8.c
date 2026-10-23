/* sub_600210C8
 * address: 0x600210C8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600210C8(int result, int a2)
{
  int v2; // r1
  int v3; // r3
  int v4; // r12
  int v5; // r3
  int v6; // r12
  int v7; // r2
  int v8; // r1

  FIELD_U32(result, 8) = 5;
  if ( a2 )
  {
    FIELD_U32(result, 4) = a2;
    FIELD_U32(a2, 628) = result;
    v2 = FIELD_U32(result, 4);
    v3 = FIELD_U8(v2, 533);
    v4 = FIELD_S8(v2, 84);
    FIELD_U32(result, 20) = 0;
    if ( v3 != 1 )
      LOBYTE(v3) = 0;
    FIELD_U8(result, 136) = v3;
    FIELD_U32(result, 132) = v4;
    v5 = FIELD_U8(v2, 533);
    v6 = FIELD_S8(v2, 84);
    FIELD_U32(result, 140) = 1;
    if ( v5 != 1 )
      LOBYTE(v5) = 0;
    FIELD_U8(result, 256) = v5;
    FIELD_U32(result, 252) = v6;
    v7 = FIELD_S8(v2, 84);
    v8 = FIELD_U8(v2, 533);
    FIELD_U32(result, 260) = 2;
    if ( v8 != 1 )
      LOBYTE(v8) = 0;
    FIELD_U8(result, 376) = v8;
    FIELD_U32(result, 372) = v7;
  }
  return result;
}
