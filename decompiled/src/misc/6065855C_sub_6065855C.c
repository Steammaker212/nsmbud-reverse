/* sub_6065855C
 * address: 0x6065855C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6065855C(int a1, int a2, int a3)
{
  float v6; // s16
  float v7; // s18
  float v8; // s20
  float v9; // s22
  float v10; // s2
  int result; // r0
  float v12[14]; // [sp+0h] [bp-38h] BYREF

  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 108);
  v8 = FIELD_F32(a1, 572);
  v9 = FIELD_F32(a1, 576);
  sub_606D45B8(a1 + 6140, v12);
  v10 = (float)(v6 + v9) - v12[1];
  FIELD_F32(a1, 6124) = (float)(v7 + v8) - v12[0];
  FIELD_F32(a1, 6128) = v10;
  result = FIELD_U8(a1, 6852);
  if ( FIELD_U8(a1, 6852) )
    return sub_606D45F8(a1 + 164, a2, a3);
  return result;
}
