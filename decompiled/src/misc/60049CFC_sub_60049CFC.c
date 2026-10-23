/* sub_60049CFC
 * address: 0x60049CFC   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60049CFC(_DWORD *a1)
{
  int v1; // r4
  _DWORD *v2; // r9
  ActiveColliderMgr *v3; // r5
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderMgr *v6; // r6
  int v7; // t1
  int v8; // r0
  int result; // r0

  v1 = (int)a1;
  v2 = a1 + 2864;
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 780))(a1, 2);
  sub_60045DB4(v1, 26, 0, 1, 0.0, 1.0);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v1 + 188));
  ActiveColldierMgr_removeFromList3(v3, v1 + 188);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7724));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v1 + 7724));
  ActiveColldierMgr_removeFromList3(v4, v1 + 7724);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 8028));
  ActiveColldierMgr_removeFromCreateList(v5, (ActiveCollider *)(v1 + 8028));
  ActiveColldierMgr_removeFromList3(v5, v1 + 8028);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v1 + 7348));
  ActiveColldierMgr_removeFromCreateList(v6, (ActiveCollider *)(v1 + 7348));
  ActiveColldierMgr_removeFromList3(v6, v1 + 7348);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 8336));
  sub_601601B8(v1 + 8336);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 8856));
  sub_601601B8(v1 + 8856);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v1 + 6336));
  sub_601601B8(v1 + 6336);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 1140))(*v2);
  v7 = FIELD_U32(v1, 6984);
  v1 += 6984;
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v1 + 4468) + 1040))(FIELD_U32(v1, 4468), v7);
  v8 = *(_DWORD *)v1;
  *(_DWORD *)(v1 - 700) = *(_DWORD *)v1;
  *(_DWORD *)(v1 - 6864) = dword_60AFE3F8[v8];
  *(_DWORD *)(v1 - 6860) = 1077936128;
  *(_DWORD *)(v1 - 6856) = 0;
  *(_DWORD *)(v1 - 6852) = 0;
  *(_DWORD *)(v1 - 6848) = -1056964608;
  *(_DWORD *)(v1 - 6844) = 0;
  *(_DWORD *)(v1 - 6880) = 0;
  *(_DWORD *)(v1 - 6884) = -1105618534;
  *(_DWORD *)(v1 - 6868) = 1167867904;
  result = dword_60CBC000;
  FIELD_U8(dword_60CBC000, 166) = 0;
  FIELD_U32(result, 132) = 0;
  FIELD_U32(result, 140) = 0;
  return result;
}
