/* StoneEye_vf49
 * address: 0x6068D398   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall StoneEye_vf49(int a1, int a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // t1
  int result; // r0

  v2 = a1;
  sub_606D465C(a1 + 108, a1 + 164);
  FIELD_U32(v2, 6100) = FIELD_U32(a2, 108);
  FIELD_U32(v2, 6104) = FIELD_U32(a2, 112);
  FIELD_U32(v2, 6108) = FIELD_U32(a2, 116);
  FIELD_F32(v2, 6112) = FIELD_F32(a2, 108) - FIELD_F32(a2, 584);
  FIELD_F32(v2, 6116) = FIELD_F32(a2, 112) - FIELD_F32(a2, 588);
  FIELD_F32(v2, 6120) = FIELD_F32(a2, 116) - FIELD_F32(a2, 592);
  v4 = FIELD_U32(v2, 164);
  FIELD_U32(v2, 6132) = v4;
  FIELD_F32(v2, 112) = FIELD_F32(v2, 6812) + FIELD_F32(v2, 112);
  FIELD_U32(v2, 164) = FIELD_U32(v2, 6776) + v4;
  v5 = FIELD_U32(v2, 6772);
  v2 += 6772;
  FIELD_U8(v2, 55) = sub_606D46F0(a2, v5);
  FIELD_U8(v2, 56) = sub_606D4728(a2, *(_DWORD *)v2);
  result = sub_606D4788(a2, *(_DWORD *)v2);
  FIELD_U8(v2, 57) = result;
  return result;
}
