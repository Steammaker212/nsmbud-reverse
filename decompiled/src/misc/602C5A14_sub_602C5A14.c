/* sub_602C5A14
 * address: 0x602C5A14   size: 1724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C5A14(int a1)
{
  int result; // r0
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r6
  int v5; // s2
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r7
  int v12; // r3
  int v13; // r7
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r0
  float v23; // s0
  int v24; // r6
  int v25; // r0
  int v26; // r12
  int v27; // r3
  unsigned int v28; // r0
  char v29; // r0
  int v30; // r0
  int *v31; // r1
  Vec2 out; // [sp+Ch] [bp-2Ch] BYREF

  if ( StageActor__distanceToPlayer((StateActor *)a1, &out) < 0 )
    return 0;
  if ( (FIELD_U8(a1, 21) & 1) == 0 || (result = 0, out.x < 0.0 == FIELD_U32(a1, 80)) )
  {
    FIELD_U32(a1, 28080) = FIELD_U32(a1, 108);
    FIELD_U32(a1, 28084) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 28088) = FIELD_U32(a1, 116);
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6304) = 1069547520;
    FIELD_U32(a1, 6300) = 1096810496;
    FIELD_F32(a1, 524) = FIELD_F32(a1, 524) + 256.0;
    FIELD_F32(a1, 528) = FIELD_F32(a1, 528) + 256.0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      FIELD_U32(a1, 620) = a1 + 28256;
      FIELD_U32(a1, 28272) = 0;
    }
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE5550, 0);
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 336) |= 0x8000u;
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 188));
    }
    ActiveCollider__init((ActiveCollider *)(a1 + 6360), (StageActor *)a1, &stru_60AFE8BC, a1 + 6664);
    v4 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6360))
      && !ActiveColliderMgr_isInCreateList(v4, (ActiveCollider *)(a1 + 6360)) )
    {
      ActiveColliderMgr_addToCreateList(v4, (ActiveCollider *)(a1 + 6360));
    }
    FIELD_F64(a1, 6332) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6328))(a1 + 6328);
    FIELD_U32(a1, 6340) = v5;
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFE8E8, &stru_60AFE8F4, &stru_60AFE900);
    FIELD_U32(a1, 3204) |= 0x800u;
    v6 = FIELD_U32(a1, 3180);
    v7 = FIELD_U32(a1, 3188);
    v8 = FIELD_U32(a1, 3196);
    FIELD_U32(a1, 3180) = v6 | 0x400800;
    FIELD_U32(a1, 3188) = v7 | 0x400800;
    v9 = v6 | 0x1408810;
    v10 = v7 | 0x1408810;
    v11 = v8 | 0x1408800;
    v12 = FIELD_U32(a1, 3192);
    FIELD_U32(a1, 3196) = v11;
    FIELD_U32(a1, 3192) = v12 | 0x8040;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      FIELD_U32(a1, 3192) = v12 | 0xC008640;
    v13 = FIELD_U32(a1, 3184) | 0xC008640;
    FIELD_U32(a1, 3176) |= 0xC008640u;
    FIELD_U32(a1, 3180) = v9;
    FIELD_U32(a1, 3184) = v13;
    FIELD_U32(a1, 3188) = v10;
    CollisionMgr_init((CollisionMgr *)(a1 + 6672), (StateActor *)a1, &stru_60AFE90C, 0, &stru_60AFE900);
    FIELD_U32(a1, 9228) |= 0x800u;
    v14 = FIELD_U32(a1, 9204) | 0x810;
    v15 = FIELD_U32(a1, 9212) | 0x810;
    FIELD_U32(a1, 9220) |= 0x800u;
    FIELD_U32(a1, 9224) |= 0x800000u;
    FIELD_U32(a1, 9204) = v14;
    FIELD_U32(a1, 9212) = v15;
    v16 = FIELD_U32(a1, 9208) | 0xC008640;
    FIELD_U32(a1, 9200) |= 0xC008640u;
    FIELD_U32(a1, 9208) = v16;
    CollisionMgr_init((CollisionMgr *)(a1 + 17376), (StateActor *)a1, &stru_60AFE918, 0, &stru_60AFE900);
    FIELD_U32(a1, 19932) |= 0x800u;
    v17 = FIELD_U32(a1, 19908) | 0x810;
    v18 = FIELD_U32(a1, 19916) | 0x810;
    FIELD_U32(a1, 19924) |= 0x800u;
    FIELD_U32(a1, 19928) |= 0x800000u;
    FIELD_U32(a1, 19908) = v17;
    FIELD_U32(a1, 19916) = v18;
    v19 = FIELD_U32(a1, 19912) | 0xC008640;
    FIELD_U32(a1, 19904) |= 0xC008640u;
    FIELD_U32(a1, 19912) = v19;
    CollisionMgr_init((CollisionMgr *)(a1 + 12024), (StateActor *)a1, &stru_60AFE924, 0, &stru_60AFE900);
    FIELD_U32(a1, 14580) |= 0x800u;
    v20 = FIELD_U32(a1, 14556) | 0x810;
    v21 = FIELD_U32(a1, 14564) | 0x810;
    FIELD_U32(a1, 14572) |= 0x800u;
    FIELD_U32(a1, 14576) |= 0x800000u;
    FIELD_U32(a1, 14556) = v20;
    FIELD_U32(a1, 14564) = v21;
    v22 = FIELD_U32(a1, 14560) | 0xC008640;
    FIELD_U32(a1, 14552) |= 0xC008640u;
    FIELD_U32(a1, 14560) = v22;
    CollisionMgr_init((CollisionMgr *)(a1 + 22728), (StateActor *)a1, &stru_60AFE930, 0, &stru_60AFE900);
    FIELD_U32(a1, 25284) |= 0x800u;
    v24 = FIELD_U32(a1, 25260);
    v25 = FIELD_U32(a1, 25268) | 0x810;
    FIELD_U32(a1, 25276) |= 0x800u;
    v26 = FIELD_U32(a1, 25280);
    FIELD_U32(a1, 25280) = v26 | 0x800000;
    FIELD_U32(a1, 25260) = v24 | 0x810;
    FIELD_U32(a1, 25268) = v25;
    v27 = FIELD_U32(a1, 25264);
    FIELD_U32(a1, 25256) |= 0xC008640u;
    FIELD_U32(a1, 25264) = v27 | 0xC008640;
    v28 = FIELD_U32(a1, 20);
    if ( (v28 & 0x300000) == 0x100000 )
    {
      FIELD_U32(a1, 3200) |= 0x400000u;
      FIELD_U32(a1, 9224) |= 0x400000u;
      FIELD_U32(a1, 14576) |= 0x400000u;
      FIELD_U32(a1, 19928) |= 0x400000u;
      FIELD_U32(a1, 25280) = v26 | 0xC00000;
    }
    if ( (v28 & 0x40000000) == 0 )
    {
      v23 = CollisionMgr_process((_BYTE *)(a1 + 648), v23);
      v29 = FIELD_U32(a1, 2872) & 1;
      FIELD_U8(a1, 6314) = v29;
      FIELD_U8(a1, 6313) = v29 ^ 1;
      v28 = FIELD_U32(a1, 20);
    }
    if ( (v28 & 0x10000000) != 0 )
    {
      FIELD_U32(a1, 116) = 1138229248;
      (*(void (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C9168C, v23);
    }
    else if ( (v28 & 0x20000000) != 0 )
    {
      (*(void (__fastcall **)(int, void *, float))(*(_DWORD *)a1 + 192))(a1, &unk_60C916B0, v23);
    }
    else if ( (v28 & 0x40000000) != 0 )
    {
      (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, &dword_60C916D4, v23);
    }
    else
    {
      FIELD_U32(a1, 116) = 1138229248;
      v30 = HIWORD(v28) & 0xF;
      FIELD_U32(a1, 28092) = v30;
      if ( v30 )
        v31 = &dword_60C91644;
      else
        v31 = &dword_60C91668;
      (*(void (__fastcall **)(int, int *, float))(*(_DWORD *)a1 + 192))(a1, v31, v23);
    }
    return 1;
  }
  return result;
}
