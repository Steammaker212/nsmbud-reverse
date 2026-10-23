/* sub_6061E208
 * address: 0x6061E208   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6061E208(int a1)
{
  float v2; // s4
  ShapedColliderInfo v4; // [sp+4h] [bp-34h] BYREF

  lift_icebox_ref_2();
  v2 = FIELD_F32(a1, 1316);
  FIELD_U32(a1, 516) = 1132462080;
  FIELD_U32(a1, 520) = 1132462080;
  FIELD_F32(a1, 524) = 160.0 + 80.0;
  FIELD_F32(a1, 528) = 160.0 + 80.0;
  FIELD_U32(a1, 572) = 0;
  FIELD_F32(a1, 576) = v2 * 0.5;
  FIELD_U32(a1, 580) = 0;
  v4.distToCenter.x = 0.0;
  v4.distToCenter.y = v2 * 0.5;
  v4.field_C = 0.0;
  v4.field_8 = 0.0;
  v4.topLeft.x = v2 * -0.5;
  v4.topLeft.y = v2 * 0.5;
  v4.bottomRight.x = v2 * 0.5;
  v4.bottomRight.y = v2 * -0.5;
  v4.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 656), (StageActor *)a1, &v4);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 656), 1);
  FIELD_U32(a1, 792) |= 0x10u;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 656));
  if ( FIELD_U32(a1, 1312) )
    sub_6061E454(a1);
  sub_6061E5A8(a1);
  StateMgr__changeState((StateMgr *)(a1 + 1348), (StateBase *)&dword_60CB36A8);
  return 1;
}
