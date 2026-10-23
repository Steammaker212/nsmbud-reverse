/* sub_604685B0
 * address: 0x604685B0   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ActiveColliderMgr *__fastcall sub_604685B0(int a1)
{
  ActiveCollider *v2; // r5
  ActiveCollider *v3; // r4
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r5
  unsigned __int8 v7[4]; // [sp+8h] [bp-20h] BYREF
  unsigned __int8 v8; // [sp+Ch] [bp-1Ch] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  v8 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BFBCC0, &v8, 0);
  v7[0] = 3;
  v3 = (ActiveCollider *)(a1 + 6332);
  ActiveCollider_init2((ActiveCollider *)(a1 + 6332), (StateActor *)a1, &stru_60B0272C, v7, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v4, v2) )
    ActiveColliderMgr_addToCreateList(v4, v2);
  v5 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, v3);
  ActiveColldierMgr_removeFromCreateList(v5, v3);
  return ActiveColldierMgr_removeFromList3(v5, (int)v3);
}
