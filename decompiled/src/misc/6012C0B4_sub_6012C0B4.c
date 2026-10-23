/* sub_6012C0B4
 * address: 0x6012C0B4   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6012C0B4(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r5
  ActiveColliderMgr *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6976));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 6976));
  ActiveColldierMgr_removeFromList3(v4, a1 + 6976);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7280));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 7280));
  ActiveColldierMgr_removeFromList3(v5, a1 + 7280);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6304));
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 152) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v6 = FIELD_U32(a1, 6960);
  FIELD_U32(a1, 108) = v6;
  v7 = FIELD_U32(a1, 6964);
  FIELD_U32(a1, 112) = v7;
  v8 = FIELD_U32(a1, 6968);
  FIELD_U32(a1, 116) = v8;
  FIELD_U32(a1, 584) = v6;
  FIELD_U32(a1, 588) = v7;
  FIELD_U32(a1, 592) = v8;
  FIELD_U32(a1, 608) = v6;
  FIELD_U32(a1, 612) = v7;
  FIELD_U32(a1, 616) = v8;
  sub_601601B8(a1 + 6304);
  FIELD_U16(a1, 6276) = 20;
  return 6276;
}
