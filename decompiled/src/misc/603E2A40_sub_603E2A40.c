/* sub_603E2A40
 * address: 0x603E2A40   size: 1596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E2A40(int *a1)
{
  _BYTE *v2; // r6
  _DWORD *v3; // r0
  int *v4; // r5
  int v5; // r7
  unsigned int v6; // r2
  unsigned int v7; // r3
  int v8; // r1
  int v9; // r1
  unsigned int v10; // r0
  int *v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  float v16; // s0
  _DWORD *v17; // r1
  unsigned int v18; // r0
  int result; // r0
  float v20; // r1
  int v21; // r5
  const char *v22; // r1
  float v23; // s0
  float *v24; // r10
  float *v25; // r9
  _DWORD *v26; // r1
  unsigned int v27; // r0
  float v28; // r2
  float v29; // r0
  float v30; // r1
  float v31; // r1
  int v32; // r5
  float v33; // r0
  int v34; // r6
  float v35; // r0
  int v36; // r6
  int v37; // r5
  float v38; // s16
  float v39; // r1
  int v40; // r1
  float *v41; // [sp+8h] [bp-68h]
  float *v42; // [sp+Ch] [bp-64h]
  Vec3i v43; // [sp+10h] [bp-60h] BYREF
  int v44; // [sp+1Ch] [bp-54h] BYREF
  Vec2 out; // [sp+20h] [bp-50h] BYREF
  int v46; // [sp+28h] [bp-48h]
  Vec3 position; // [sp+30h] [bp-40h] BYREF

  v2 = (char *)a1 + 8237;
  if ( *((_BYTE *)a1 + 8237) == 2 )
  {
    v4 = a1 + 1890;
    v3 = (_DWORD *)a1[1890];
    v5 = v3[3];
    v6 = v3[2];
    v7 = v3[17];
    v8 = v5;
    if ( v6 > v7 )
      v8 = v5 + 4 * v7;
    if ( (*(_BYTE *)(*(_DWORD *)v8 + 28) & 0x20) != 0 )
    {
      sub_60421938(v3, a1[1889], (int)&dword_60C995A4);
      v9 = *(_DWORD *)(*v4 + 12);
      v10 = *(_DWORD *)(*v4 + 68);
      if ( *(_DWORD *)(*v4 + 8) > v10 )
        v9 += 4 * v10;
      AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 1);
      v11 = *(int **)(*v4 + 12);
      v12 = *(_DWORD *)(*v4 + 68);
      if ( *(_DWORD *)(*v4 + 8) > v12 )
        v11 += v12;
      v13 = *v11;
      FIELD_U32(v13, 20) = 0;
      FIELD_U32(v13, 28) |= 2u;
      v14 = *(_DWORD *)(*v4 + 12);
      v15 = *(_DWORD *)(*v4 + 68);
      if ( *(_DWORD *)(*v4 + 8) > v15 )
        v14 += 4 * v15;
      *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
      *v2 = 1;
      v5 = *(_DWORD *)(*v4 + 12);
      v6 = *(_DWORD *)(*v4 + 8);
      v7 = *(_DWORD *)(*v4 + 68);
    }
    if ( v6 > v7 )
      v5 += 4 * v7;
    v16 = *(float *)(*(_DWORD *)v5 + 20);
    if ( v16 >= 32.0 )
    {
      if ( v16 >= 56.0 )
      {
        (*(void (__fastcall **)(int *))(*a1 + 640))(a1);
        return (*(int (__fastcall **)(int *))(*a1 + 636))(a1);
      }
      else
      {
        *((float *)a1 + 37) = *((float *)a1 + 37) + -0.0066667;
        (*(void (__fastcall **)(int *))(*a1 + 640))(a1);
        (*(void (__fastcall **)(int *))(*a1 + 636))(a1);
        v26 = *(_DWORD **)(*v4 + 12);
        v27 = *(_DWORD *)(*v4 + 68);
        if ( *(_DWORD *)(*v4 + 8) > v27 )
          v26 += v27;
        result = sub_60418548(*v26 + 4);
        if ( result == 1 )
        {
          v28 = *((float *)a1 + 28);
          LODWORD(position.x) = a1[27];
          position.y = v28;
          TileMgr_splashRelated(TileMgr_instance, &position, 30);
          v29 = *((float *)a1 + 27);
          LODWORD(position.y) = a1[28];
          position.x = v29;
          position.z = 6500.0;
          out.x = v29;
          out.y = position.y;
          v46 = 1170939904;
          out.y = *((float *)a1 + 2055) + (float)(*((float *)a1 + 28) + -16.0);
          ((void (__fastcall *)(Vec3i *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
            &v43,
            &position.y,
            &out,
            *((unsigned __int8 *)a1 + 86));
          if ( v43.x && (unsigned int)(v43.x - 3) <= 1 )
            EffectData_create(880, &position, 0, 0);
          v30 = *((float *)a1 + 28);
          v21 = Global_BasicSoundActor1;
          LODWORD(position.x) = a1[27];
          position.y = v30;
          mapPositionToScreen(&out, &position);
          v22 = "SE_EMY_WOOCHAN_MOGURU";
          return BasicSoundActor1_playSound(v21, v22, (int)&out, 0);
        }
      }
    }
    else
    {
      (*(void (__fastcall **)(int *))(*a1 + 640))(a1);
      (*(void (__fastcall **)(int *))(*a1 + 636))(a1);
      v17 = *(_DWORD **)(*v4 + 12);
      v18 = *(_DWORD *)(*v4 + 68);
      if ( *(_DWORD *)(*v4 + 8) > v18 )
        v17 += v18;
      result = sub_60418548(*v17 + 4);
      if ( result == 1 )
      {
        v20 = *((float *)a1 + 28);
        v21 = Global_BasicSoundActor1;
        LODWORD(position.x) = a1[27];
        position.y = v20;
        mapPositionToScreen(&out, &position);
        v22 = "SE_VOC_WC_ATTACK_SIGN";
        return BasicSoundActor1_playSound(v21, v22, (int)&out, 0);
      }
    }
  }
  else
  {
    StageActor__accelerateX((StageActor *)a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
    v41 = (float *)(a1 + 2055);
    v23 = *((float *)a1 + 2055);
    v42 = (float *)(a1 + 2054);
    if ( *((float *)a1 + 2054) >= v23 )
    {
      v25 = (float *)(a1 + 27);
      v24 = (float *)(a1 + 28);
      v31 = *((float *)a1 + 28);
      LODWORD(position.x) = a1[27];
      position.y = v31;
      position.z = 6500.0;
      out.x = position.x;
      out.y = v31;
      v46 = 1170939904;
      out.y = v23 + (float)(*((float *)a1 + 28) + -16.0);
      ((void (__fastcall *)(int *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
        &v44,
        &position.y,
        &out,
        *((unsigned __int8 *)a1 + 86));
      if ( v44 && (unsigned int)(v44 - 3) <= 1 )
      {
        memset(&v43, 0, sizeof(v43));
        if ( !a1[20] )
          v43.y = 0x80000000;
        EffectWrapper_update((EffectWrapper *)(a1 + 2062), 881, &position, &v43, 0);
      }
    }
    else
    {
      v24 = (float *)(a1 + 28);
      v25 = (float *)(a1 + 27);
    }
    v32 = a1[2];
    v33 = *v24;
    position.x = *v25;
    v34 = Global_BasicSoundActor1;
    position.y = v33;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v34, "SE_VOC_WC_MOVE", v32, &out, 0);
    v35 = *v24;
    v36 = a1[2];
    v37 = Global_BasicSoundActor1;
    position.x = *v25;
    position.y = v35;
    mapPositionToScreen(&out, &position);
    j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v37, "SE_EMY_WOOCHAN_MOVE", v36, &out, 0);
    sub_6070C124(a1);
    *((float *)a1 + 37) = *((float *)a1 + 1579) + *((float *)a1 + 37);
    v38 = *v42;
    (*(void (__fastcall **)(int *))(*a1 + 640))(a1);
    (*(void (__fastcall **)(int *))(*a1 + 636))(a1);
    if ( v38 < *v41 && *v42 > *v41 )
    {
      v39 = *v24;
      position.x = *v25;
      position.y = v39;
      TileMgr_splashRelated(TileMgr_instance, &position, 30);
    }
    result = (int)(a1 + 2059);
    v40 = *((unsigned __int8 *)a1 + 8236);
    if ( v40 == 2 )
    {
      result = (int)(a1 + 1577);
      if ( *((float *)a1 + 1577) >= (float)(*((float *)a1 + 1599) * 0.8) )
        return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C99518);
    }
    else if ( v40 == 1 && *((float *)a1 + 1577) >= (float)(*((float *)a1 + 1599) * 0.7) )
    {
      a1[1581] = 1000593162;
      *(_BYTE *)result = 2;
    }
  }
  return result;
}
