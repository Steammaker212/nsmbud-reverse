/* sub_6031A440
 * address: 0x6031A440   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6031A440(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int v4; // r1
  CollisionMgr *v5; // r4

  v2 = (ActiveCollider *)(a1 + 6432);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6432));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = 1069547520;
  FIELD_U32(a1, 120) = 1069547520;
  FIELD_U32(a1, 124) = 1082549862;
  FIELD_U32(a1, 128) = 0;
  if ( FIELD_U32(a1, 80) == 1 )
  {
    v4 = -1077936128;
    FIELD_U32(a1, 120) = -1077936128;
  }
  FIELD_U32(a1, 132) = v4;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 1022739087;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0x40000000;
  FIELD_U32(a1, 164) = 0;
  v5 = (CollisionMgr *)(a1 + 648);
  CollisionMgr_setSensor(v5, 0, 3);
  CollisionMgr_setSensor(v5, 0, 2);
  CollisionMgr_setSensor(v5, 0, 0);
  CollisionMgr_setSensor(v5, 0, 1);
}
