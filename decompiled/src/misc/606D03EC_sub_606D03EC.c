/* sub_606D03EC
 * address: 0x606D03EC   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D03EC(int a1)
{
  int v2; // r0
  int *v3; // r0
  float v4; // r1
  float v5; // r1
  ShapedColliderInfo v7; // [sp+0h] [bp-38h] BYREF

  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 116) = 1166843904;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1140850688;
  FIELD_U32(a1, 504) = 1140850688;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 12564) = BYTE1(v2) & 0xF;
  FIELD_U8(a1, 12565) = ((unsigned __int16)v2 >> 12) + 1;
  sub_60602AA8(a1 + 6464, dword_60B08C98, 0);
  firebar_L_ref(a1);
  sub_606D0708(a1);
  memset(&v7, 0, 16);
  v3 = &dword_60CBB470[4 * FIELD_U32(a1, 34312)];
  v4 = *((float *)v3 + 3);
  LODWORD(v7.topLeft.y) = v3[4];
  v7.topLeft.x = v4;
  v5 = *((float *)v3 + 5);
  LODWORD(v7.bottomRight.y) = v3[6];
  v7.bottomRight.x = v5;
  v7.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 33656), (StageActor *)a1, &v7);
  FIELD_U32(a1, 33820) = a1 + 87;
  FIELD_U32(a1, 33816) = a1 + 86;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 33656));
  return 1;
}
