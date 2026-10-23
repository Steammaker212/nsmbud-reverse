/* sub_6031922C
 * address: 0x6031922C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6031922C(int a1)
{
  CollisionMgr *v2; // r5
  float v3; // s0

  v2 = (CollisionMgr *)(a1 + 648);
  v3 = (float)(FIELD_F32(a1, 112) - FIELD_F32(a1, 588)) * 1.5;
  FIELD_F32(a1, 120) = (float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 584)) * 1.5;
  FIELD_F32(a1, 124) = v3;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 1017370378;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 116) = 1167867904;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
  CollisionMgr_setSensor(v2, 0, 2);
  CollisionMgr_setSensor(v2, 0, 0);
  CollisionMgr_setSensor(v2, 0, 1);
  FIELD_U8(a1, 536) = 1;
}
