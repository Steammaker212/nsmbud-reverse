/* sub_606FE194
 * address: 0x606FE194   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606FE194(int a1)
{
  ActiveColliderMgr *v2; // r6
  int v3; // r0
  ShapedColliderInfo v5; // [sp+0h] [bp-50h] BYREF
  _DWORD v6[10]; // [sp+28h] [bp-28h] BYREF

  sub_606FE3C0();
  FIELD_U32(a1, 116) = 1163575296;
  FIELD_U32(a1, 144) = 1057269648;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 1065353216;
  ef_waterpillar_ref_2(a1);
  FIELD_U32(a1, 6140) = 1022739087;
  FIELD_U32(a1, 6144) = 1022739087;
  FIELD_U32(a1, 6148) = 978433815;
  FIELD_U32(a1, 6152) = 1006834287;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C20818, 0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  v3 = FIELD_U32(a1, 6128);
  memset(&v5, 0, 16);
  v6[0] = -1039977677;
  v6[1] = v3;
  v6[2] = 1107505971;
  v6[3] = v3;
  LODWORD(v5.topLeft.x) = v6;
  v5.topLeft.y = 0.0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6192), (StageActor *)a1, (SolidOnTopColliderInfo *)&v5);
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6368) = 0;
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6192), 11);
  FIELD_U32(a1, 6504) = sub_606FEC00;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6192));
  memset(&v5, 0, 16);
  v5.topLeft.x = -16.582;
  v5.topLeft.y = 16.0;
  v5.bottomRight.x = 16.582;
  v5.bottomRight.y = 0.0;
  v5.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6640), (StageActor *)a1, &v5);
  ColliderBase_setType((ColliderBase *)(a1 + 6640), 37);
  ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6640), 11);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6640));
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1124073472;
  FIELD_U32(a1, 500) = 1119879168;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1119879168;
  FIELD_U32(a1, 512) = 1132462080;
  return 1;
}
