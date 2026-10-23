/* sub_605CB470
 * address: 0x605CB470   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605CB470(int a1)
{
  StageActor *v1; // r4
  CollisionMgr_Sensor v2; // [sp+0h] [bp-18h] BYREF

  v1 = (StageActor *)a1;
  sub_605C9CA0(a1);
  FIELD_U32(v1, 0x9C).z = 0x40000000;
  ActiveCollider__init(
    &FIELD_U32(v1, 0xBC),
    v1,
    (ActiveColliderInfo *)&qword_60CB0DE8,
    (int)&v1[10].aCollider.lastCollisionOffsetX);
  v1 = (StageActor *)((char *)v1 + 648);
  CollisionMgr_setSensor((CollisionMgr *)v1, &stru_60B057C8, 0);
  v2.b = 8.0;
  v2.a = 8.0;
  v2.c = -6.0;
  CollisionMgr_setSensor((CollisionMgr *)v1, &v2, 1);
}
