/* sub_602E39B4
 * address: 0x602E39B4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602E39B4(int a1)
{
  float v2; // s4
  float v3; // s6
  float v4; // s8
  float v5; // s10
  float v6; // s2
  signed int result; // r0

  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 6376);
  v4 = FIELD_F32(a1, 6380);
  v5 = FIELD_F32(a1, 6384);
  v6 = v4 - FIELD_F32(a1, 112);
  FIELD_F32(a1, 6388) = v3 - FIELD_F32(a1, 108);
  FIELD_F32(a1, 6392) = v6;
  FIELD_F32(a1, 6396) = v5 - v2;
  FIELD_F32(a1, 108) = v3;
  FIELD_F32(a1, 112) = v4;
  FIELD_F32(a1, 116) = v5;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1124073472;
  FIELD_U32(a1, 504) = 1124073472;
  sub_602E7078(a1 + 6328, 1);
  FIELD_U8(a1, 6369) = 1;
  FIELD_U8(a1, 15384) = 1;
  j_ibaramushi_ref((_DWORD *)(a1 + 6300), 1, 1);
  result = Enemy__beginState_DieFumi((Enemy *)a1);
  FIELD_U32(a1, 160) = 0;
  return result;
}
