/* sub_607C8168
 * address: 0x607C8168   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C8168(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r5
  ActiveColliderMgr *v7; // r6
  ActiveColliderMgr *v8; // r6
  ActiveColliderMgr *v9; // r6

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  sub_60158FA8(v2, 4088);
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 336) = -327681;
  FIELD_U32(a1, 300) = a1 + 9568;
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7136));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(a1 + 7136));
  ActiveColldierMgr_removeFromList3(v4, a1 + 7136);
  sub_60158FA8((ActiveCollider *)(a1 + 7136), 4088);
  FIELD_U32(a1, 7276) = 0;
  FIELD_U32(a1, 7284) = -327681;
  FIELD_U32(a1, 7248) = a1 + 9568;
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7440));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(a1 + 7440));
  ActiveColldierMgr_removeFromList3(v5, a1 + 7440);
  sub_60158FA8((ActiveCollider *)(a1 + 7440), 3);
  FIELD_U32(a1, 7580) = 0;
  FIELD_U32(a1, 7588) = -65537;
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7744));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(a1 + 7744));
  ActiveColldierMgr_removeFromList3(v6, a1 + 7744);
  sub_60158FA8((ActiveCollider *)(a1 + 7744), 5);
  FIELD_U32(a1, 7884) = 0;
  FIELD_U32(a1, 7892) = 1024;
  v7 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8048));
  ActiveColldierMgr_removeFromCreateList(v7, (ActiveCollider *)(a1 + 8048));
  ActiveColldierMgr_removeFromList3(v7, a1 + 8048);
  sub_60158FA8((ActiveCollider *)(a1 + 8048), 2040);
  FIELD_U32(a1, 8188) = 0;
  FIELD_U32(a1, 8196) = 0;
  v8 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8352));
  ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 8352));
  ActiveColldierMgr_removeFromList3(v8, a1 + 8352);
  sub_60158FA8((ActiveCollider *)(a1 + 8352), 7);
  FIELD_U32(a1, 8492) = 0;
  FIELD_U32(a1, 8500) = 0;
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 8656));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 8656));
  ActiveColldierMgr_removeFromList3(v9, a1 + 8656);
  sub_60158FA8((ActiveCollider *)(a1 + 8656), 760);
  FIELD_U32(a1, 8796) = 0;
  FIELD_U32(a1, 8804) = 0;
  return 8804;
}
