/* sub_603BA830
 * address: 0x603BA830   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603BA830(int a1, int a2, int a3)
{
  int v3; // lr
  float v4; // r12
  float v5; // r3
  float v6; // s2
  float v7; // r4
  float v8; // s4
  int v9; // r6

  v3 = FIELD_U8(a1, 22613);
  v4 = FIELD_F32(a1, 6452);
  v5 = FIELD_F32(a1, 6456);
  if ( FIELD_U8(a1, 22613) )
  {
    v6 = v4 + FIELD_F32(a1, 22624);
    v7 = v5 + FIELD_F32(a1, 22628);
  }
  else
  {
    v6 = FIELD_F32(a1, 6452);
    v7 = FIELD_F32(a1, 6456);
  }
  v8 = FIELD_F32(a1, 112);
  v9 = FIELD_U32(a1, 116);
  FIELD_F32(a1, 6344) = FIELD_F32(a1, 108) - v6;
  FIELD_F32(a1, 6348) = v8 - v7;
  FIELD_U32(a1, 6352) = v9;
  if ( v3 )
  {
    v5 = v5 + FIELD_F32(a1, 22628);
    v4 = v4 + FIELD_F32(a1, 22624);
  }
  FIELD_F32(a1, 108) = v4;
  FIELD_F32(a1, 112) = v5;
  return Enemy__collisionIceball((Enemy *)a1, a2, a3);
}
