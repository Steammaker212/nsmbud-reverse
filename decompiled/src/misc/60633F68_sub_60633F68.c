/* sub_60633F68
 * address: 0x60633F68   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60633F68(int a1)
{
  int v2; // r0
  ActiveColliderMgr *v3; // r6
  ShapedColliderInfo a5; // [sp+0h] [bp-38h] BYREF

  FIELD_U32(a1, 116) = 1163984896;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  block_koopaJr_clown_ref(a1);
  sub_606342DC(a1);
  v2 = FIELD_U32(a1, 20) & 0xF;
  FIELD_U8(a1, 6798) = v2;
  FIELD_U16(a1, 6800) = 5 * v2;
  FIELD_U32(a1, 6804) = dword_60B07220[v2];
  memset(&a5, 0, 16);
  a5.topLeft.x = -16.0;
  a5.topLeft.y = 16.0;
  a5.bottomRight.x = 16.0;
  a5.bottomRight.y = -16.0;
  a5.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 6120), (StageActor *)a1, &a5);
  FIELD_U32(a1, 6292) = 0;
  FIELD_U32(a1, 6296) = 0;
  FIELD_U32(a1, 6256) |= 2u;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60C12A6C, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB4404);
  return 1;
}
