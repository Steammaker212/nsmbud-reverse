/* sub_603D97BC
 * address: 0x603D97BC   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603D97BC(int a1)
{
  ActiveColliderMgr *v2; // r6
  float result; // s0

  sub_603D907C(a1, 0, 1.0);
  v2 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 18312));
  ActiveColldierMgr_removeFromCreateList(v2, (ActiveCollider *)(a1 + 18312));
  ActiveColldierMgr_removeFromList3(v2, a1 + 18312);
  Enemy__beginState_DieFall((Enemy *)a1);
  StateMgr__changeState((StateMgr *)(a1 + 12940), (StateBase *)&dword_60C991F8);
  FIELD_U8(a1, 11812) = 0;
  FIELD_U32(a1, 160) = dword_60AF1EC0[FIELD_U32(a1, 80)];
  result = FIELD_F32(a1, 124) * 1.5;
  FIELD_F32(a1, 124) = result;
  FIELD_U32(a1, 116) = 1167867904;
  return result;
}
