/* sub_607FF8C4
 * address: 0x607FF8C4   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_607FF8C4(int a1, int a2)
{
  __n128 result; // q0
  float v4; // s4
  float v5; // s6

  sub_607FF7E4((sead_IDisposer *)a1, a2);
  *(_DWORD *)a1 = off_60C27E1C;
  sub_607FFF80(a1 + 60, 1);
  sub_607FFF80(a1 + 76, 0);
  sub_607FFF80(a1 + 92, 3);
  sub_607FFF80(a1 + 108, 2);
  FIELD_U8(a1, 124) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 152) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 128) = 0;
  result.n128_u32[0] = FIELD_U32(a1, 44);
  result.n128_u32[2] = FIELD_U32(a1, 48);
  v4 = FIELD_F32(a1, 52);
  v5 = FIELD_F32(a1, 56);
  FIELD_F32(a1, 160) = (float)(result.n128_f32[0] + result.n128_f32[2]) * 0.5;
  FIELD_F32(a1, 164) = (float)(v4 + v5) * 0.5;
  FIELD_U32(a1, 168) = result.n128_u32[0];
  FIELD_U32(a1, 172) = result.n128_u32[2];
  FIELD_F32(a1, 176) = v4;
  FIELD_F32(a1, 180) = v5;
  return result;
}
