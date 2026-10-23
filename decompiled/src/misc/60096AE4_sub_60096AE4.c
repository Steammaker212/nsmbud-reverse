/* sub_60096AE4
 * address: 0x60096AE4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60096AE4(StageActor *a1)
{
  Vec3 a2; // [sp+14h] [bp-1Ch] BYREF

  StageActor__cullCheck(a1, 0);
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  CollisionMgr_process(&a1[1]._.heap);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0).vtable + 256))(a1);
  a2.x = FIELD_U32(a1, 0x6C).x + FIELD_U32(a1, 0x23C).x;
  a2.y = FIELD_U32(a1, 0x6C).y + FIELD_U32(a1, 0x23C).y;
  a2.z = FIELD_U32(a1, 0x6C).z + FIELD_U32(a1, 0x23C).z;
  LightSource_update2((LightSource *)&a1[9].aCollider.info.distToEdge.y, &a2, 0, 0, 0, 0, 0, 0);
  return 1;
}
