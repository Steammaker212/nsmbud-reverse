/* sub_603B6980
 * address: 0x603B6980   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_603B6980(int a1)
{
  ActiveCollider *v2; // r6
  ActiveColliderMgr *v3; // r5
  int *v4; // r1
  ActiveCollider *v5; // r4
  ActiveColliderMgr *v6; // r5

  v2 = (ActiveCollider *)(a1 + 188);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  CollisionMgr_vf14(a1 + 648);
  FIELD_U32(a1, 132) = 0;
  FIELD_F32(a1, 136) = -3.0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 6432) = 0;
  v4 = dword_603B6A58;
  if ( (FIELD_U8(a1, 87) & 2) != 0 )
    v4 = &dword_603B6A58[1];
  FIELD_U32(a1, 116) = *v4;
  v5 = (ActiveCollider *)(a1 + 22780);
  v6 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v5);
  ActiveColldierMgr_removeFromCreateList(v6, v5);
  return ActiveColldierMgr_removeFromList3(v6, (int)v5);
}
