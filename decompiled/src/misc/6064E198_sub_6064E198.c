/* sub_6064E198
 * address: 0x6064E198   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064E198(int a1)
{
  SolidOnTopColliderInfo a5; // [sp+0h] [bp-38h] BYREF
  _DWORD v4[8]; // [sp+18h] [bp-20h] BYREF

  sub_6064E2B0((int *)a1);
  sub_6064D604(a1);
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U8(a1, 6552) = -1;
  memset(&a5, 0, 16);
  v4[0] = -1025507328;
  v4[1] = 1090519040;
  v4[2] = 1121976320;
  v4[3] = 1090519040;
  a5.points = (Vec2 *)v4;
  a5.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6104), (StageActor *)a1, &a5);
  FIELD_U32(a1, 6276) = 0;
  FIELD_U32(a1, 6280) = 0;
  FIELD_U32(a1, 6560) = 1125122048;
  FIELD_U32(a1, 6556) = 3;
  FIELD_U32(a1, 6564) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1128267776;
  FIELD_U32(a1, 504) = 1119879168;
  FIELD_U32(a1, 508) = 1128267776;
  FIELD_U32(a1, 512) = 1119879168;
  sub_6064E408(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB610C);
  return 1;
}
