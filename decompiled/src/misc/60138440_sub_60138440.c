/* sub_60138440
 * address: 0x60138440   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60138440(int a1)
{
  int v2; // r2
  int v3; // r0
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6

  v2 = dword_60C87984;
  v3 = dword_60C87988;
  FIELD_U32(a1, 144) = dword_60C87980;
  FIELD_U32(a1, 148) = v2;
  FIELD_U32(a1, 152) = v3;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AF6730, 0, 0);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD270C, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6348), (StageActor *)a1, &stru_60AF673C, a1 + 6652);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6348))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6348)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6348));
  }
  FIELD_U32(a1, 76) |= 4u;
  FIELD_U32(a1, 620) = a1 + 6100;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 500) = 1090519040;
  FIELD_U32(a1, 504) = 1090519040;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
  return 1;
}
