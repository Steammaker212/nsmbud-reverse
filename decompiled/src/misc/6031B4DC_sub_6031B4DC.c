/* sub_6031B4DC
 * address: 0x6031B4DC   size: 672   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031B4DC(int a1)
{
  int v2; // r0
  int *v3; // r1
  ActiveColliderMgr *v4; // r6
  ActiveColliderMgr *v5; // r6
  int v6; // r1
  int v7; // r0
  int v8; // r2

  v3 = (int *)(a1 + 6148);
  v2 = FIELD_U32(a1, 6148);
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 12588) = 4;
  *v3 = v2 | 0x10002;
  keronpa_ref(a1);
  sub_6031B8F4(a1);
  CollisionMgr_init((CollisionMgr *)(a1 + 7128), (StateActor *)a1, &stru_60AFF5D0, &stru_60AFF5DC, &stru_60AFF5E8);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEA9AC, 0);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 12612), (StageActor *)a1, &stru_60AFF5F4, a1 + 12916);
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12612))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 12612)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 12612));
  }
  FIELD_U32(a1, 116) = 1153138688;
  if ( FIELD_U8(a1, 30) == 1 )
    FIELD_F32(a1, 108) = FIELD_F32(dword_60CC6484, 112) + -10.0;
  v6 = 0;
  v7 = a1 + 6360;
  do
  {
    v8 = v7 + v6;
    *(_DWORD *)(v8 - 8) = FIELD_U32(a1, 108);
    *(_DWORD *)(v8 - 4) = FIELD_U32(a1, 112);
    *(_DWORD *)(v7 + v6) = FIELD_U32(a1, 108);
    v6 += 16;
    FIELD_U32(v8, 4) = FIELD_U32(a1, 112);
  }
  while ( v6 != 512 );
  FIELD_U32(a1, 6864) = 0;
  FIELD_U32(a1, 620) = a1 + 6300;
  FIELD_U32(a1, 6316) = 5;
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 640) = a1 + 6232;
  FIELD_U32(a1, 12608) = 1;
  FIELD_U32(a1, 6348) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
  FIELD_U32(a1, 6344) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
  FIELD_U32(a1, 6340) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
  FIELD_U32(a1, 6336) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 704))(a1);
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 12588) = 4;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9365C);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  return 1;
}
