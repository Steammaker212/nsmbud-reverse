/* Amp__vf274
 * address: 0x60259050   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Amp__vf274(int a1)
{
  ActiveCollider *v2; // r5
  float v3; // s0
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  ActiveColliderInfo v7; // [sp+0h] [bp-48h] BYREF

  v2 = (ActiveCollider *)(a1 + 188);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDAE74, 0);
  v3 = FIELD_F32(a1, 144) * 10.0;
  FIELD_F32(a1, 312) = v3;
  FIELD_F32(a1, 316) = v3;
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, v2) && !ActiveColliderMgr_isInCreateList(v4, v2) )
    ActiveColliderMgr_addToCreateList(v4, v2);
  FIELD_U8(a1, 296) = FIELD_U8(a1, 87);
  memset(&v7, 0, sizeof(v7));
  v7.field_10 = 1;
  v7.field_14 = 12;
  v7.field_1C = 2048;
  v7.field_24 = 2;
  v7.distToEdge.x = FIELD_F32(a1, 144) * 10.0;
  v7.distToEdge.y = v7.distToEdge.x;
  ActiveCollider__init((ActiveCollider *)(a1 + 6580), (StageActor *)a1, &v7, a1 + 6884);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6580))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 6580)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 6580));
  }
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E080);
}
