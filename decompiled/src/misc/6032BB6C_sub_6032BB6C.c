/* sub_6032BB6C
 * address: 0x6032BB6C   size: 860   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6032BB6C(int a1)
{
  _DWORD *v2; // r8
  char v3; // r12
  int v4; // r2
  int v5; // r0
  ActiveColliderMgr *v6; // r7
  ActiveColliderMgr *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r0
  unsigned int v16; // r3
  int v17; // r1
  int *v18; // r1
  int v19; // r1
  float v20; // s0
  int v21; // r0
  int *v22; // r0
  int v23; // r0

  FIELD_U32(a1, 620) = a1 + 13080;
  FIELD_U32(a1, 13096) = 3;
  FIELD_U32(a1, 624) = a1 + 13116;
  FIELD_U32(a1, 13144) = 1;
  FIELD_U32(a1, 6312) = 1;
  FIELD_U32(a1, 6308) = 1;
  FIELD_U32(a1, 6316) = 0x1000000;
  v2 = (_DWORD *)(a1 + 6316);
  FIELD_U8(a1, 6320) = 0;
  BanzaiBill_initColliders((BulletBillTemp *)a1);
  if ( ((unsigned int)&algn_60C93D33[1] & ~(1613937644 << v3) & 1) == 0
    && _cxa_guard_acquire((__guard *)&algn_60C93D33[1]) )
  {
    byte_60C93D30 = 0;
    byte_60C93D31 = 1;
    byte_60C93D32 = 1;
    _cxa_guard_release((__guard *)&algn_60C93D33[1]);
  }
  EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C93D30);
  v4 = dword_60C93910;
  v5 = dword_60C93914;
  FIELD_U32(a1, 144) = dword_60C9390C;
  FIELD_U32(a1, 148) = v4;
  FIELD_U32(a1, 152) = v5;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BEBF70, a1 + 13052);
  v6 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v6, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v6, (ActiveCollider *)(a1 + 188));
  }
  ActiveCollider__init(
    (ActiveCollider *)(a1 + 13256),
    (StageActor *)a1,
    (ActiveColliderInfo *)&unk_60BEBF70,
    a1 + 13052);
  v7 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 13256))
    && !ActiveColliderMgr_isInCreateList(v7, (ActiveCollider *)(a1 + 13256)) )
  {
    ActiveColliderMgr_addToCreateList(v7, (ActiveCollider *)(a1 + 13256));
  }
  *v2 = 0x1000000;
  v8 = FIELD_U32(a1, 6304);
  FIELD_U32(a1, 80) = v8;
  v9 = dword_60AFF678[v8];
  FIELD_U32(a1, 120) = v9;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = v9;
  FIELD_U32(a1, 136) = -1107296256;
  FIELD_U32(a1, 140) = 0;
  v10 = dword_60AFF6E0[v8];
  FIELD_U32(a1, 160) = v10;
  FIELD_U32(a1, 13156) = v10;
  FIELD_U16(a1, 6322) = 8;
  FIELD_U16(a1, 6324) = 16;
  FIELD_U16(a1, 6326) = 8;
  v11 = FIELD_U32(a1, 7332);
  if ( v11 )
  {
    v12 = 15 * v11;
    FIELD_U32(a1, 13068) = 4 * v12 + 180;
    FIELD_U16(a1, 13076) = 4 * v12 - 120;
    if ( ((4 * (_WORD)v12 - 120) & 0xFFFC) == 0 )
    {
      v14 = a1 + 13064;
      v13 = FIELD_U32(a1, 13064);
      v15 = 120 - 4 * v12;
      v16 = FIELD_U32(v13, 16);
      v17 = FIELD_U32(v13, 20);
      if ( v16 > 1 )
        v17 += 4;
      *(_DWORD *)(*(_DWORD *)v17 + 24) = 1065353216;
      v18 = *(int **)(*(_DWORD *)v14 + 20);
      if ( *(_DWORD *)(*(_DWORD *)v14 + 16) > 1u )
        ++v18;
      v19 = *v18;
      v20 = (float)(unsigned int)v15;
      FIELD_F32(v19, 20) = (float)(unsigned int)v15;
      FIELD_U32(v19, 28) |= 2u;
      v21 = *(_DWORD *)(*(_DWORD *)v14 + 28);
      if ( *(_DWORD *)(*(_DWORD *)v14 + 24) > 1u )
        v21 += 4;
      *(_DWORD *)(*(_DWORD *)v21 + 24) = 1065353216;
      v22 = *(int **)(*(_DWORD *)v14 + 28);
      if ( *(_DWORD *)(*(_DWORD *)v14 + 24) > 1u )
        ++v22;
      v23 = *v22;
      FIELD_F32(v23, 20) = v20;
      FIELD_U32(v23, 28) |= 2u;
    }
  }
  FIELD_U32(a1, 500) = 1107296256;
  FIELD_U32(a1, 504) = 1098907648;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93CD0);
  return 1;
}
