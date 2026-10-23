/* sub_60324D50
 * address: 0x60324D50   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60324D50(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r3
  int v5; // r5
  int v6; // r1
  float v7; // s0
  Vec3 *v8; // r0
  int v9; // r2

  v2 = FIELD_U32(a1, 7668);
  v3 = 11;
  if ( v2 == 1 )
  {
    v4 = 16;
  }
  else if ( v2 == 2 )
  {
    v4 = 0;
  }
  else
  {
    v5 = FIELD_U32(a1, 7648);
    v4 = (16 * StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108))) & 0xFF0;
    v3 = 11;
    if ( v5 == 1 )
      v3 = 9;
  }
  v6 = v4 | v3;
  v7 = FIELD_F32(a1, 112);
  v8 = (Vec3 *)(a1 + 108);
  v9 = FIELD_U32(a1, 24) & 0xF0 | 0x100;
  if ( FIELD_U32(a1, 7656) )
  {
    FIELD_F32(a1, 112) = v7 + 8.0;
    if ( FIELD_U32(a1, 7648) )
      return SE_EMY_ref_2_helper_3230CC(v8, v6 | (FIELD_U32(a1, 7652) << 12), v9);
    else
      return sub_60322FA4(v8, v6, v9, FIELD_U16(a1, 7672));
  }
  else
  {
    FIELD_F32(a1, 112) = v7 + 48.0;
    if ( FIELD_U32(a1, 7648) )
      return sub_6032314C(v8, v4 | 0xA, v9);
    else
      return SE_EMY_ref_2_helper(v8, v6, v9);
  }
}
