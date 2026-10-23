/* sub_602B04B4
 * address: 0x602B04B4   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B04B4(int a1)
{
  int v2; // r1
  ActiveColliderMgr *v3; // r7
  ActiveColliderMgr *v4; // r5
  float v5; // s0
  int v6; // s2
  char v8; // [sp+4h] [bp-1Ch] BYREF

  sub_602B06E0();
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1109393408;
  FIELD_U32(a1, 504) = 1103101952;
  FIELD_U32(a1, 508) = 1111490560;
  FIELD_U32(a1, 512) = 1107296256;
  v2 = -1073741824;
  if ( !FIELD_U32(a1, 80) )
    v2 = 0x40000000;
  FIELD_U32(a1, 160) = v2;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE37F8, a1 + 6876);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6508), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE37F8, a1 + 6876);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6508))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6508)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6508));
  }
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFE5A8, &stru_60AFE5B4, &stru_60AFE5C0);
  FIELD_U32(a1, 620) = 0;
  FIELD_U32(a1, 624) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90BD4);
  FIELD_U8(a1, 6833) = 0;
  ((void (__fastcall *)(char *, int, int, _DWORD))checkLiquidCollisions)(
    &v8,
    a1 + 6820,
    a1 + 108,
    FIELD_U8(a1, 86));
  v5 = FIELD_F32(a1, 6820) + -16.0;
  if ( FIELD_F32(a1, 112) >= v5 )
  {
    FIELD_U8(a1, 6833) = 1;
    FIELD_F32(a1, 112) = v5;
  }
  FIELD_F64(a1, 6848) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6844))(a1 + 6844);
  FIELD_U32(a1, 6856) = v6;
  sub_602B0A24(a1);
  fishbone_all_ref(a1);
  return 1;
}
