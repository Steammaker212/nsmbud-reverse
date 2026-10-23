/* sub_6002B314
 * address: 0x6002B314   size: 1660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002B314(CollisionActor *a1)
{
  float x; // s0
  int result; // r0
  char *v4; // r6
  float y; // s0
  float v6; // r0
  float v7; // s0
  TileCheck *v8; // r0
  float v9; // r0
  int y_low; // r1
  char *v11; // r7
  int v12; // r8
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int v17; // r0
  __int16 v18; // r1
  int v19; // r0
  float v20; // r0
  char *v21; // r7
  int v22; // r8
  int v23; // r1
  unsigned int v24; // r0
  int v25; // r1
  unsigned int v26; // r0
  _DWORD *v27; // r0
  int v28; // r1
  unsigned int v29; // r2
  unsigned int v30; // r0
  float v31; // r0
  _DWORD *v32; // r0
  int v33; // r1
  unsigned int v34; // r2
  unsigned int v35; // r0
  TileCheck_Result speed; // [sp+8h] [bp-B8h] BYREF
  TileCheck v37; // [sp+30h] [bp-90h] BYREF
  TileCheck_Param v38; // [sp+80h] [bp-40h] BYREF
  int (**v39)(); // [sp+8Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+90h] [bp-30h] BYREF
  Vec2 a3; // [sp+98h] [bp-28h] BYREF

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  x = FIELD_F32(a1, 0x6C);
  if ( x < (float)(FIELD_F32(AreaTask_intance, 1812) + 80.0)
    || x > (float)(FIELD_F32(AreaTask_intance, 1820) + -80.0) )
  {
    FIELD_F32(a1, 0x78) = 0.0;
  }
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  v4 = &a1[1].collisionMgr[715];
  result = (unsigned __int8)a1[1].collisionMgr[715];
  switch ( a1[1].collisionMgr[715] )
  {
    case 0:
      y = FIELD_F32(a1, 0x7C);
      if ( y < 4.0 )
      {
        *(_DWORD *)&v37.field_0 = -1014089500;
        *(_DWORD *)&speed.field_0 = 0x8000000;
        result = moveValueTo(&FIELD_U32(a1, 0x9C), (int *)&v37.field_0, (int *)&speed.field_0);
        y = FIELD_F32(a1, 0x7C);
      }
      if ( y < 0.0 )
        goto LABEL_39;
      break;
    case 1:
      v6 = FIELD_F32(a1, 0x6C);
      v7 = FIELD_F32(a1, 0x70);
      *(_WORD *)&v38.field_0 = 0;
      positionOffset.x = v6;
      a3.x = v6;
      positionOffset.y = v7;
      a3.y = v7 + -8.0;
      v39 = off_60BC1F98;
      v38.field_2 = FIELD_U8(a1, 0x56);
      v38.field_3 = FIELD_U8(a1, 0x57);
      v38.field_4 = 0;
      v38.field_8 = (int)&v39;
      v8 = TileCheck_ctor(&v37, &v38);
      speed.field_C = 0;
      speed.field_10 = 0;
      if ( TileCheck_check(v8, &speed, &a3, &positionOffset, 15) == 1 )
        FIELD_F32(a1, 0x74) = -2500.0;
      *(_DWORD *)&v37.field_0 = -1014089500;
      *(_DWORD *)&speed.field_0 = 0x8000000;
      moveValueTo(&FIELD_U32(a1, 0x9C), (int *)&v37.field_0, (int *)&speed.field_0);
      result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
      if ( (result & 1) != 0 )
      {
        FIELD_F32(a1, 0x130) = 0.0;
        FIELD_F32(a1, 0x134) = 22.0;
        FIELD_F32(a1, 0x138) = 20.0;
        FIELD_F32(a1, 0x13C) = 18.0;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2532] &= ~4u;
        *(_DWORD *)&FIELD_U8(a1, 0x288)[2540] &= ~4u;
        v9 = FIELD_F32(a1, 0x6C);
        v37.field_4 = LODWORD(FIELD_F32(a1, 0x70));
        *(float *)&v37.field_0 = v9;
        v37.field_8 = 1166843904;
        EffectData_create(971, (Vec3 *)&v37, 0, 0);
        y_low = LODWORD(FIELD_F32(a1, 0x70));
        *(float *)&v37.field_0 = FIELD_F32(a1, 0x6C);
        v37.field_4 = y_low;
        v37.field_8 = 1166843904;
        EffectWrapper_update((EffectWrapper *)&a1[1].collisionMgr[396], 1007, (Vec3 *)&v37, 0, 0);
        sub_608134C8(&a1[1]._.aCollider.field_50, "SE_BOSS_KK_PIYO", 0);
        *(_DWORD *)&v37.field_0 = 15;
        strcpy((char *)&v37.field_4, "333?");
        sub_60813430(&a1[1]._.aCollider.field_50, "SE_BOSS_KK_LAND", &v37);
        AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 7, 1, 0, 0);
        FIELD_U32(a1, 0x9C) = 0;
        FIELD_F32(a1, 0x78) = 0.0;
        FIELD_F32(a1, 0x7C) = 0.0;
        FIELD_F32(a1, 0x80) = 0.0;
        if ( a1[1].collisionMgr[714] != 14 )
        {
          v11 = &a1[1].collisionMgr[384];
          v12 = *(_DWORD *)&a1[1].collisionMgr[668];
          sub_60421938(*(_DWORD **)&a1[1].collisionMgr[384], *(_DWORD *)&a1[1].collisionMgr[388], (int)&dword_60C7F790);
          v13 = *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 12);
          v14 = *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 68);
          if ( *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 8) > v14 )
            v13 += 4 * v14;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 1);
          v15 = *(_DWORD *)(*(_DWORD *)v11 + 12);
          v16 = *(_DWORD *)(*(_DWORD *)v11 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v16 )
            v15 += 4 * v16;
          *(_DWORD *)(*(_DWORD *)v15 + 24) = v12;
          a1[1].collisionMgr[714] = 14;
        }
        v17 = (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 720))(a1);
        v18 = 240;
        if ( !v17 )
        {
          v19 = (*(int (__fastcall **)(CollisionActor *))(FIELD_U32(a1, 0x0) + 724))(a1);
          v18 = 300;
          if ( v19 )
            v18 = 180;
        }
        LOWORD(a1[1]._.aCollider.activeNode.prev) = v18;
        goto LABEL_39;
      }
      break;
    case 2:
      if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
        FIELD_F32(a1, 0x7C) = 0.0;
      v20 = FIELD_F32(a1, 0x6C);
      v37.field_4 = LODWORD(FIELD_F32(a1, 0x70));
      *(float *)&v37.field_0 = v20;
      v37.field_8 = 1166843904;
      EffectWrapper_update((EffectWrapper *)&a1[1].collisionMgr[396], 1007, (Vec3 *)&v37, 0, 0);
      sub_608134C8(&a1[1]._.aCollider.field_50, "SE_BOSS_KK_PIYO", 0);
      result = LOWORD(a1[1]._.aCollider.activeNode.prev);
      if ( !LOWORD(a1[1]._.aCollider.activeNode.prev) )
      {
        if ( a1[1].collisionMgr[714] != 16 )
        {
          v21 = &a1[1].collisionMgr[384];
          v22 = *(_DWORD *)&a1[1].collisionMgr[668];
          sub_60421938(*(_DWORD **)&a1[1].collisionMgr[384], *(_DWORD *)&a1[1].collisionMgr[388], (int)&dword_60C7F7A0);
          v23 = *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 12);
          v24 = *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 68);
          if ( *(_DWORD *)(*(_DWORD *)&a1[1].collisionMgr[384] + 8) > v24 )
            v23 += 4 * v24;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v23 + 4), 0);
          v25 = *(_DWORD *)(*(_DWORD *)v21 + 12);
          v26 = *(_DWORD *)(*(_DWORD *)v21 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v21 + 8) > v26 )
            v25 += 4 * v26;
          *(_DWORD *)(*(_DWORD *)v25 + 24) = v22;
          a1[1].collisionMgr[714] = 16;
        }
        FIELD_F32(a1, 0x74) = 1500.0;
        sub_60813430(&a1[1]._.aCollider.field_50, "SE_VOC_BKK_RCV_JUMP", 0);
        goto LABEL_39;
      }
      break;
    case 3:
      *(_DWORD *)&speed.field_0 = 0x4000000;
      *(_DWORD *)&v37.field_0 = 0;
      moveValueTo(&FIELD_U32(a1, 0xA0), (int *)&v37.field_0, (int *)&speed.field_0);
      if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
        FIELD_F32(a1, 0x7C) = 0.0;
      v27 = *(_DWORD **)&a1[1].collisionMgr[384];
      v28 = v27[3];
      v29 = v27[2];
      v30 = v27[17];
      if ( v29 > v30 )
        v28 += 4 * v30;
      result = *(_DWORD *)v28;
      if ( *(float *)(*(_DWORD *)v28 + 20) >= 14.0 )
      {
        v31 = FIELD_F32(a1, 0x6C);
        v37.field_4 = LODWORD(FIELD_F32(a1, 0x70));
        *(float *)&v37.field_0 = v31;
        v37.field_8 = 1166843904;
        EffectData_create(971, (Vec3 *)&v37, 0, 0);
        *(_DWORD *)&v37.field_0 = 15;
        strcpy((char *)&v37.field_4, "333?");
        sub_60813430(&a1[1]._.aCollider.field_50, "SE_BOSS_KK_LAND", &v37);
        AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 7, 1, 0, 0);
LABEL_39:
        result = (unsigned __int8)*v4 + 1;
        *v4 = result;
      }
      break;
    case 4:
      *(_DWORD *)&speed.field_0 = 0x4000000;
      *(_DWORD *)&v37.field_0 = 0;
      moveValueTo(&FIELD_U32(a1, 0xA0), (int *)&v37.field_0, (int *)&speed.field_0);
      if ( (FIELD_U8(a1, 0x288)[2224] & 1) != 0 )
        FIELD_F32(a1, 0x7C) = 0.0;
      v32 = *(_DWORD **)&a1[1].collisionMgr[384];
      v33 = v32[3];
      v34 = v32[2];
      v35 = v32[17];
      if ( v34 > v35 )
        v33 += 4 * v35;
      result = *(unsigned __int8 *)(*(_DWORD *)v33 + 28);
      if ( (result & 0x20) != 0 )
        result = (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C7F928);
      break;
    default:
      result = (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C7F928);
      break;
  }
  return result;
}
