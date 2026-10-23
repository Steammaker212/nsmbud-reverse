/* sub_601431CC
 * address: 0x601431CC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601431CC(int a1)
{
  unsigned int v2; // r0
  int v3; // r1
  int v4; // r0
  ActiveColliderMgr *v5; // r6
  char v7; // [sp+Ch] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = (v2 >> 4) & 1;
  v4 = v2 & 3;
  FIELD_U32(a1, 80) = v3;
  FIELD_U8(a1, 86) = v4;
  v7 = 1;
  ActiveCollider_init3((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BD3864, &v7, v4, 0);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF698C, &stru_60AF6998, &stru_60AF69A4);
  FIELD_U32(a1, 6188) = 1;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C87E70);
  return 1;
}
