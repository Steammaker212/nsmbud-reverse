/* sub_60248F30
 * address: 0x60248F30   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60248F30(int a1)
{
  __n128 result; // q0
  float v3; // s4

  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, 0, &stru_60AFD724, 0);
  result.n128_u32[0] = 1036831949;
  result.n128_f32[2] = (float)(FIELD_U16(a1, 26) & 0xF);
  FIELD_U32(a1, 120) = 0;
  v3 = (float)(result.n128_f32[2] * 0.1) + 0.5;
  FIELD_F32(a1, 124) = v3;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_F32(a1, 136) = v3;
  FIELD_U32(a1, 140) = 0;
  return result;
}
