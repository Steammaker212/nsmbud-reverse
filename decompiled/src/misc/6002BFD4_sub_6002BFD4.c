/* sub_6002BFD4
 * address: 0x6002BFD4   size: 1764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002BFD4(Enemy *a1)
{
  char *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  unsigned int v5; // r0
  char *v6; // r7
  float v7; // r0
  char *v8; // r8
  _DWORD *v9; // r0
  char *v10; // r5
  _DWORD *v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  sead_ListNode *v14; // r0
  const char *v15; // r1
  float x; // r0
  float y; // s0
  TileCheck *v18; // r0
  int result; // r0
  _DWORD *v20; // r1
  unsigned int v21; // r0
  char *v22; // r6
  _DWORD *v23; // t1
  int *v24; // r1
  unsigned int v25; // r0
  int v26; // r0
  int v27; // r1
  int direction; // r0
  float v29; // s0
  float v30; // s0
  char *v31; // r5
  float v32; // s0
  int v33; // r5
  int v34; // r1
  _DWORD *v35; // r0
  int v36; // r1
  unsigned int v37; // r0
  int v38; // r1
  unsigned int v39; // r0
  TileCheck_Result speed; // [sp+8h] [bp-B0h] BYREF
  TileCheck target; // [sp+30h] [bp-88h] BYREF
  TileCheck_Param v42; // [sp+80h] [bp-38h] BYREF
  int (**v43)(); // [sp+8Ch] [bp-2Ch] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-28h] BYREF
  Vec2 a3; // [sp+98h] [bp-20h] BYREF

  v4 = *(unsigned __int16 *)&a1[1]._._.collisionMgr[476];
  v2 = &a1[1]._._.collisionMgr[476];
  v3 = v4;
  if ( v4 )
    *(_WORD *)v2 = v3 - 1;
  v6 = &a1[1]._._.collisionMgr[479];
  v5 = (unsigned __int8)a1[1]._._.collisionMgr[479];
  if ( v5 > 0x1D )
  {
    if ( v5 == 30 )
    {
      CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
      CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
      x = FIELD_F32(a1, 0x6C);
      y = FIELD_F32(a1, 0x70);
      *(_WORD *)&v42.field_0 = 0;
      positionOffset.x = x;
      a3.x = x;
      positionOffset.y = y;
      a3.y = y + -5.0;
      v43 = off_60BC1F98;
      v42.field_2 = FIELD_U8(a1, 0x56);
      v42.field_3 = FIELD_U8(a1, 0x57);
      v42.field_4 = 0;
      v42.field_8 = (int)&v43;
      v18 = TileCheck_ctor(&target, &v42);
      speed.field_C = 0;
      speed.field_10 = 0;
      if ( !TileCheck_check(v18, &speed, &a3, &positionOffset, 15) )
        FIELD_F32(a1, 0x74) = 1500.0;
      CollisionMgr_process(FIELD_U8(a1, 0x288));
      if ( FIELD_F32(a1, 0x7C) < 0.0 )
      {
LABEL_24:
        *v6 = 100;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v5 != 100 )
        goto LABEL_25;
      CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
      CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
      CollisionMgr_process(FIELD_U8(a1, 0x288));
      if ( FIELD_F32(a1, 0x70) < (float)(*(float *)&a1[1]._._.collisionMgr[420] + 10.0) )
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] &= ~4u;
      if ( !*(_WORD *)&a1[1]._._.collisionMgr[468] && (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
      {
        FIELD_F32(a1, 0x78) = 0.0;
        FIELD_F32(a1, 0x7C) = 0.0;
        FIELD_F32(a1, 0x80) = 0.0;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2532] &= ~4u;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2540] &= ~4u;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] &= ~4u;
        v7 = FIELD_F32(a1, 0x6C);
        target.field_4 = LODWORD(FIELD_F32(a1, 0x70));
        *(float *)&target.field_0 = v7;
        target.field_8 = 1166843904;
        EffectData_create(971, (Vec3 *)&target, 0, 0);
        *(_DWORD *)&target.field_0 = 15;
        strcpy((char *)&target.field_4, "333?");
        sub_60813430(&a1[1]._._._._.field_20, "SE_BOSS_KK_LAND", &target);
        AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 1, 0, 0);
        if ( !a1[1]._._.collisionMgr[485] )
        {
LABEL_25:
          (*(void (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C7F868);
          goto LABEL_26;
        }
      }
    }
    goto LABEL_26;
  }
  if ( a1[1]._._.collisionMgr[479] )
  {
    if ( v5 == 10 )
    {
      CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
      CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
      CollisionMgr_process(FIELD_U8(a1, 0x288));
      if ( FIELD_F32(a1, 0x7C) >= 0.0 )
        goto LABEL_26;
      *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] &= ~4u;
      goto LABEL_24;
    }
    goto LABEL_25;
  }
  v8 = &a1[1]._._.collisionMgr[478];
  if ( a1[1]._._.collisionMgr[478] == 15 )
  {
    v10 = &a1[1]._._.collisionMgr[148];
    v9 = *(_DWORD **)&a1[1]._._.collisionMgr[148];
    v11 = (_DWORD *)v9[3];
    v12 = v9[2];
    v13 = v9[17];
    if ( v12 > v13 )
      v11 += v13;
    if ( sub_60418548(*v11 + 4) )
    {
      v14 = &a1[1]._._._._.field_20;
      v15 = "SE_VOC_BKK_RCV_SIGN";
LABEL_36:
      sub_60813430(v14, v15, 0);
      goto LABEL_37;
    }
    v20 = *(_DWORD **)(*(_DWORD *)v10 + 12);
    v21 = *(_DWORD *)(*(_DWORD *)v10 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v10 + 8) > v21 )
      v20 += v21;
    if ( sub_60418548(*v20 + 4) )
    {
      v14 = &a1[1]._._._._.field_20;
      v15 = "SE_VOC_BKK_RCV_SHAKE";
      goto LABEL_36;
    }
  }
LABEL_37:
  CollisionActor__handleGravity(&FIELD_U32(a1, 0x0));
  CollisionActor__handleSpeed(&FIELD_U32(a1, 0x0));
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
    FIELD_F32(a1, 0x7C) = 0.0;
  v23 = *(_DWORD **)&a1[1]._._.collisionMgr[148];
  v22 = &a1[1]._._.collisionMgr[148];
  v24 = (int *)v23[3];
  v25 = v23[17];
  if ( v23[2] > v25 )
    v24 += v25;
  v26 = *v24;
  v27 = (unsigned __int8)*v8;
  if ( (FIELD_F32(v26, 20) <= 65.0 || v27 != 15) && (v27 != 5 || (FIELD_U8(v26, 28) & 0x20) == 0) )
    goto LABEL_26;
  sub_60813430(&a1[1]._._._._.field_20, "SE_VOC_BKK_JUMP", 0);
  sub_60813430(&a1[1]._._._._.field_20, "SE_BOSS_CMN_JUMP_L", 0);
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2532] |= 4u;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2540] |= 4u;
  *(_DWORD *)&FIELD_U8(a1, 0x288)[2556] |= 4u;
  FIELD_F32(a1, 0x74) = 1500.0;
  direction = FIELD_U32(a1, 0x50);
  if ( FIELD_F32(a1, 0x6C) < FIELD_F32(dword_60CC6484, 116) )
  {
    if ( !direction )
      goto LABEL_50;
    goto LABEL_49;
  }
  if ( direction != 1 )
LABEL_49:
    FIELD_U32(a1, 0x50) = direction ^ 1;
LABEL_50:
  a1[1]._._.collisionMgr[485] = 1;
  FIELD_F32(a1, 0x130) = 0.0;
  FIELD_F32(a1, 0x134) = 18.0;
  FIELD_F32(a1, 0x138) = 18.0;
  FIELD_F32(a1, 0x13C) = 18.0;
  v29 = FIELD_F32(a1, 0x70);
  if ( v29 >= -680.0 )
  {
    if ( v29 >= -560.0 )
      goto LABEL_26;
    *(_DWORD *)&a1[1]._._.collisionMgr[452] = 2;
    *v6 = 30;
    *(_WORD *)&a1[1]._._.collisionMgr[468] = 36;
    FIELD_F32(a1, 0x78) = ((float (__fastcall *)(Enemy *, char *, int))loc_6002F720)(a1, &a1[1]._._.collisionMgr[416], 2);
    v30 = *(_DWORD *)&a1[1]._._.collisionMgr[452] > 2u
        ? 0.0
        : *(float *)&dword_60AF51A4[*(_DWORD *)&a1[1]._._.collisionMgr[452]];
    FIELD_F32(a1, 0x7C) = v30;
    if ( *v8 == 6 )
      goto LABEL_26;
    v33 = *(_DWORD *)&a1[1]._._.collisionMgr[432];
    v34 = *(_DWORD *)&a1[1]._._.collisionMgr[152];
    v35 = *(_DWORD **)v22;
  }
  else
  {
    *(_DWORD *)&a1[1]._._.collisionMgr[452] = 0;
    v31 = &a1[1]._._.collisionMgr[452];
    *v6 = 10;
    FIELD_F32(a1, 0x78) = ((float (__fastcall *)(Enemy *, char *, _DWORD))loc_6002F720)(
                          a1,
                          &a1[1]._._.collisionMgr[416],
                          0);
    if ( *(_DWORD *)v31 > 2u )
      v32 = 0.0;
    else
      v32 = *(float *)&dword_60AF51A4[*(_DWORD *)v31];
    FIELD_F32(a1, 0x7C) = v32;
    if ( *v8 == 6 )
      goto LABEL_26;
    v33 = *(_DWORD *)&a1[1]._._.collisionMgr[432];
    v34 = *(_DWORD *)&a1[1]._._.collisionMgr[152];
    v35 = *(_DWORD **)v22;
  }
  sub_60421938(v35, v34, (int)&dword_60C7F750);
  v36 = *(_DWORD *)(*(_DWORD *)v22 + 12);
  v37 = *(_DWORD *)(*(_DWORD *)v22 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v22 + 8) > v37 )
    v36 += 4 * v37;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v36 + 4), 0);
  v38 = *(_DWORD *)(*(_DWORD *)v22 + 12);
  v39 = *(_DWORD *)(*(_DWORD *)v22 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v22 + 8) > v39 )
    v38 += 4 * v39;
  *(_DWORD *)(*(_DWORD *)v38 + 24) = v33;
  *v8 = 6;
LABEL_26:
  if ( *(_WORD *)&a1[1]._._.collisionMgr[468] )
    --*(_WORD *)&a1[1]._._.collisionMgr[468];
  result = (unsigned __int8)a1[1]._._.collisionMgr[485];
  if ( a1[1]._._.collisionMgr[485] )
  {
    *(_DWORD *)&target.field_0 = (int)(float)((float)(2147500000.0 * 35.0) / 180.0) * byte_60AFE3F4[FIELD_U32(a1, 0x50)];
    *(_DWORD *)&speed.field_0 = 0x8000000;
    result = moveValueTo(&FIELD_U32(a1, 0xA0), (int *)&target.field_0, (int *)&speed.field_0);
    if ( result == 1 )
    {
      result = 0;
      a1[1]._._.collisionMgr[485] = 0;
    }
  }
  return result;
}
