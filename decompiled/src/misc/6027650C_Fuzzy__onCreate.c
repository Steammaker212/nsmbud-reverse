/* Fuzzy__onCreate
 * address: 0x6027650C   size: 1920   group: misc
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
signed int __fastcall Fuzzy__onCreate(int a1)
{
  unsigned int v2; // r5
  signed int v3; // r0
  int v4; // r1
  int *v5; // r2
  float v6; // s0
  int *v7; // r0
  int *v8; // r8
  int v9; // r0
  int v10; // r1
  int v11; // r0
  char v12; // r12
  int v13; // r0
  int v14; // r0
  int v15; // r3
  __int64 v16; // r0
  ActiveColliderMgr *v17; // r5
  ActiveColliderMgr *v18; // r6
  CollisionMgr *v19; // r0
  float v20; // s0
  const char *v21; // r1
  int v22; // r1
  int v23; // r0
  int v24; // s2
  unsigned int v25; // r3
  unsigned int v26; // r7
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r0
  int (__fastcall *v31)(int, Vec3 **); // r2
  unsigned __int8 v32; // r0
  bool v33; // zf
  signed int result; // r0
  Vec3 *position; // [sp+8h] [bp-60h] BYREF
  const char *position_4; // [sp+Ch] [bp-5Ch]
  int v37; // [sp+10h] [bp-58h]
  int v38; // [sp+14h] [bp-54h]
  int v39; // [sp+18h] [bp-50h]
  int v40; // [sp+1Ch] [bp-4Ch]
  int v41; // [sp+20h] [bp-48h]
  int v42; // [sp+24h] [bp-44h]
  int v43; // [sp+28h] [bp-40h]
  int v44; // [sp+2Ch] [bp-3Ch]
  int v45; // [sp+30h] [bp-38h]
  int v46; // [sp+34h] [bp-34h]
  unsigned int v47; // [sp+38h] [bp-30h] BYREF
  unsigned int v48; // [sp+3Ch] [bp-2Ch] BYREF
  unsigned int v49; // [sp+40h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = sub_6000A488((_BYTE *)EnemyCounterMaybe_instance);
  FIELD_U32(a1, 6504) = v3;
  v4 = (v2 >> 20) & 3;
  if ( v3 < 0 )
  {
    if ( v4 )
    {
      v7 = dword_602766AC;
      v8 = (int *)(a1 + 116);
      if ( v4 == 2 )
        v7 = &dword_602766AC[1];
      v9 = *v7;
      FIELD_U32(a1, 116) = v9;
    }
    else
    {
      v9 = 1153138688;
      FIELD_U32(a1, 116) = 1153138688;
      v8 = (int *)(a1 + 116);
    }
  }
  else
  {
    if ( v4 )
    {
      v5 = dword_602766AC;
      if ( v4 == 2 )
        v5 = &dword_602766AC[1];
      v6 = *(float *)v5;
    }
    else
    {
      v6 = 1500.0;
    }
    v8 = (int *)(a1 + 116);
    FIELD_F32(a1, 116) = v6 + (float)((float)v3 * 32.0);
    v10 = EnemyCounterMaybe_instance;
    if ( (unsigned int)v3 < 0xA )
      v10 = EnemyCounterMaybe_instance + v3;
    FIELD_U8(v10, 263) = 1;
    v9 = FIELD_U32(a1, 116);
  }
  FIELD_U32(a1, 0x193C) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6464) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6468) = v9;
  Fuzzy_setupModel((int *)a1);
  v11 = (FIELD_U32(a1, 20) >> 8) & 1;
  FIELD_U32(a1, 6500) = v11;
  FIELD_U32(a1, 620) = a1 + 6560;
  if ( v11 )
  {
    FIELD_U32(a1, 144) = 1072064102;
    FIELD_U32(a1, 148) = 1072064102;
    FIELD_U32(a1, 152) = 1072064102;
    FIELD_U32(a1, 6576) = 4;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDD174, 0);
    FIELD_U32(a1, 320) = 1;
    ActiveCollider__init((ActiveCollider *)(a1 + 12120), (StageActor *)a1, &stru_60AFDCA8, 0);
    FIELD_U32(a1, 12252) = 1;
    FIELD_U32(a1, 12244) = 1105199104;
    FIELD_U32(a1, 12248) = 1105199104;
    FIELD_U32(a1, 12232) = a1 + 12424;
  }
  else
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 6576) = 3;
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BDD148, 0);
    ActiveCollider__init((ActiveCollider *)(a1 + 12120), (StageActor *)a1, &stru_60AFDCA8, 0);
    FIELD_U32(a1, 12232) = a1 + 12424;
    FIELD_U32(a1, 12252) = 1;
    CollisionMgr_init((CollisionMgr *)(a1 + 6664), (StateActor *)a1, &stru_60AFDCD4, &stru_60AFDCE0, &stru_60AFDCEC);
  }
  FIELD_U32(a1, 624) = a1 + 6596;
  FIELD_U32(a1, 0x19E0) = 1;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U8(a1, 6272) = 10;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1117782016;
  FIELD_U32(a1, 504) = 1132462080;
  FIELD_U32(a1, 508) = 1117782016;
  FIELD_U32(a1, 512) = 1132462080;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 1149239296;
  FIELD_U32(a1, 528) = 1149239296;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v13 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 0x195C) = BYTE2(v13) & 1;
  if ( (v13 & 0x10000) == 0 )
  {
    if ( ((unsigned int)&algn_60C8EDE3[1] & ~(1613195276 << v12) & 1) == 0
      && _cxa_guard_acquire((__guard *)&algn_60C8EDE3[1]) )
    {
      byte_60C8EDE0 = 0;
      byte_60C8EDE1 = 6;
      byte_60C8EDE2 = 6;
      _cxa_guard_release((__guard *)&algn_60C8EDE3[1]);
    }
    EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C8EDE0);
  }
  FIELD_U32(a1, 6148) |= 0x80u;
  FIELD_U8(a1, 6056) = 1;
  sub_60276E10(a1);
  sub_60003D84((_DWORD *)a1);
  v14 = FIELD_U8(a1, 539);
  if ( !FIELD_U8(a1, 539) )
    goto LABEL_26;
  v15 = v14 - 33;
  HIDWORD(v16) = 1u >> (33 - v14);
  LODWORD(v16) = 1 << (v14 - 1);
  if ( v15 >= 0 )
  {
    HIDWORD(v16) = 1 << v15;
    LODWORD(v16) = 0;
  }
  if ( (*(_QWORD *)(EventMgr__instance + 16) & v16) == 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8EC80);
  }
  else
  {
LABEL_26:
    v17 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v17, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v17, (ActiveCollider *)(a1 + 188));
    }
    v18 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 12120))
      && !ActiveColliderMgr_isInCreateList(v18, (ActiveCollider *)(a1 + 12120)) )
    {
      ActiveColliderMgr_addToCreateList(v18, (ActiveCollider *)(a1 + 12120));
    }
    v19 = (CollisionMgr *)(a1 + 6664);
    if ( FIELD_U32(a1, 6500) )
    {
      CollisionMgr_init(v19, (StateActor *)a1, &stru_60AFDCF8, &stru_60AFDD04, &stru_60AFDD10);
      CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFDCF8, &stru_60AFDD04, &stru_60AFDD10);
    }
    else
    {
      CollisionMgr_init(v19, (StateActor *)a1, &stru_60AFDCD4, &stru_60AFDCE0, &stru_60AFDCEC);
    }
    if ( FIELD_U8(a1, 0x195C) )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECC0);
    }
    else
    {
      if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
        sub_60276FBC(v20);
      v21 = *(const char **)(a1 + 112);
      position = *(Vec3 **)(a1 + 0x6C);
      position_4 = v21;
      v22 = (FIELD_U32(a1, 20) >> 2) & 0x1C;
      v23 = FIELD_U32(a1, 20) & 1;
      FIELD_U32(a1, 80) = v23;
      FIELD_F32(a1, 6496) = *(float *)((char *)&flt_60AFDD1C[8 * v23] + v22);
      LineFollower_init((LineFollower *)(a1 + 6316), (Vec2 *)&position, FIELD_U8(a1, 86), 0, 0);
      ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 6316, 0);
      FIELD_U8(a1, 6472) = 0;
      FIELD_U32(a1, 6480) = -1;
      FIELD_U32(a1, 6476) = -1;
      FIELD_U32(a1, 6488) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8ECA0);
    }
  }
  FIELD_F64(a1, 6636) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6632))(a1 + 6632);
  FIELD_U32(a1, 6644) = v24;
  v25 = FIELD_U32(a1, 156);
  v26 = FIELD_U32(a1, 160);
  v27 = *v8;
  v28 = FIELD_U32(a1, 112);
  v29 = FIELD_U32(a1, 108);
  v49 = FIELD_U32(a1, 164);
  v48 = v26;
  v47 = v25;
  position = (Vec3 *)1065353216;
  position_4 = 0;
  v37 = 0;
  v39 = 0;
  v40 = 1065353216;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 1065353216;
  v38 = v29;
  v42 = v28;
  v46 = v27;
  Mtx34_rotateY((float32x2_t *)&position, &v48);
  Mtx34_rotateX((float32x2_t *)&position, &v47);
  Mtx34_rotateZ((float32x2_t *)&position, &v49);
  (*(void (__fastcall **)(_DWORD, Vec3 **))(**(_DWORD **)(a1 + 6308) + 60))(FIELD_U32(a1, 6308), &position);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 6636);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
  v30 = **(_DWORD **)(a1 + 6300);
  v31 = *(int (__fastcall **)(int, Vec3 **))(*(_DWORD *)v30 + 84);
  position = (Vec3 *)&sead__SafeStringBase__vtable;
  position_4 = "skl_root";
  v32 = v31(v30, &position);
  (*(void (__fastcall **)(_DWORD, _DWORD, Vec3 **))(***(_DWORD ***)(a1 + 6300) + 108))(
    **(_DWORD **)(a1 + 6300),
    v32,
    &position);
  sub_602372C0(a1 + 0x2EF0, 593, (__int64 *)&position, 0);
  v33 = Actor__getProfileId((Actor *)a1) == 654;
  result = 1;
  if ( v33 )
    FIELD_U8(a1, 534) = 0;
  return result;
}
