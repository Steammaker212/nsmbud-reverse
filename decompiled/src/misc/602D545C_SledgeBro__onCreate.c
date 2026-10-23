/* SledgeBro__onCreate
 * address: 0x602D545C   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall SledgeBro__onCreate(int a1)
{
  ActiveColliderMgr *v2; // r6
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r7
  signed int v5; // r0
  int v6; // s2
  _DWORD **v7; // r4
  _DWORD *v8; // t1
  _BYTE v10[12]; // [sp+8h] [bp-48h] BYREF
  _DWORD *v11; // [sp+14h] [bp-3Ch]
  _DWORD *v12; // [sp+24h] [bp-2Ch]
  _DWORD *v13; // [sp+34h] [bp-1Ch]

  bros_mega_ref();
  FIELD_U32(a1, 116) = 1153138688;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U32(a1, 6340) = 1090519040;
  FIELD_U32(a1, 6336) = -1056964608;
  FIELD_U32(a1, 6356) = 1098907648;
  FIELD_U32(a1, 6352) = 1098907648;
  FIELD_U32(a1, 6348) = 1098907648;
  CollisionMgr_init(
    (CollisionMgr *)(a1 + 648),
    (StateActor *)a1,
    (CollisionMgr_Sensor *)(a1 + 6336),
    &stru_60AFEB44,
    (CollisionMgr_Sensor *)(a1 + 6348));
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE6930, 0);
  v2 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v2, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v2, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 6360), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE695C, 0);
  v3 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
    && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 6360)) )
  {
    ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 6360));
  }
  ActiveCollider__init((ActiveCollider *)(a1 + 7076), (StageActor *)a1, &stru_60AFEAFC, a1 + 7380);
  v4 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7076))
    && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 7076)) )
  {
    ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 7076));
  }
  FIELD_U32(a1, 6148) = 2;
  FIELD_U32(a1, 3200) |= 0x8000u;
  FIELD_U32(a1, 3192) |= 0x8000u;
  FIELD_U32(a1, 3176) |= 0x8000u;
  FIELD_U32(a1, 3184) |= 0x8000u;
  FIELD_U32(a1, 620) = a1 + 6300;
  FIELD_U32(a1, 6316) = 0;
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v5;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v5];
  FIELD_U32(a1, 6292) = 2;
  FIELD_U32(a1, 6744) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6748) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6752) = FIELD_U32(a1, 116);
  FIELD_U8(a1, 6672) = v5;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_F64(a1, 7388) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 7384))(a1 + 7384);
  FIELD_U32(a1, 7396) = v6;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1098907648;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1098907648;
  FIELD_U32(a1, 6668) = 2;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C91BC0);
  FIELD_U32(a1, 6244) = 1;
  sub_602D59A8(a1);
  v8 = *(_DWORD **)(a1 + 6856);
  v7 = (_DWORD **)(a1 + 6856);
  (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)*v8 + 108))(*v8, 0, v10);
  *(v7 - 37) = v11;
  *(v7 - 36) = v12;
  *(v7 - 35) = v13;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v7 + 108))(**v7, 9, v10);
  *(v7 - 34) = v11;
  *(v7 - 33) = v12;
  *(v7 - 32) = v13;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v7 + 108))(**v7, 13, v10);
  *(v7 - 43) = v11;
  *(v7 - 42) = v12;
  *(v7 - 41) = v13;
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(*(_DWORD *)**v7 + 108))(**v7, 16, v10);
  *(v7 - 40) = v11;
  *(v7 - 39) = v12;
  *(v7 - 38) = v13;
  (*(void (__fastcall **)(_DWORD, int, _DWORD **))(*(_DWORD *)**v7 + 108))(**v7, 4, v7 - 25);
  (*(void (__fastcall **)(_DWORD, int, _DWORD **))(*(_DWORD *)**v7 + 108))(**v7, 8, v7 - 13);
  return 1;
}
