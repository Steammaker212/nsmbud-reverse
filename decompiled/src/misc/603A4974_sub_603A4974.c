/* sub_603A4974
 * address: 0x603A4974   size: 1092   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Enemy *__fastcall sub_603A4974(int a1, int r1_0)
{
  Enemy **v4; // r11
  float *v5; // r10
  _BYTE *v6; // r6
  float v7; // s16
  float v8; // r5
  float v9; // s0
  float v10; // r0
  Enemy *result; // r0
  int *v12; // r9
  _BOOL4 v13; // r7
  int v14; // r0
  int v15; // r5
  float v16; // r0
  int v17; // r2
  int v18; // r4
  float v19; // r0
  int v20; // r2
  float v21; // r0
  int v22; // r2
  float v23; // r0
  int v24; // r2
  float *v25; // [sp+8h] [bp-80h]
  int *v26; // [sp+Ch] [bp-7Ch]
  float v27; // [sp+10h] [bp-78h]
  int v28; // [sp+14h] [bp-74h]
  float v29; // [sp+18h] [bp-70h]
  Enemy *v30; // [sp+1Ch] [bp-6Ch]
  int v31; // [sp+20h] [bp-68h] BYREF
  int v32; // [sp+24h] [bp-64h]
  int v33; // [sp+28h] [bp-60h]
  Vec3 a2; // [sp+2Ch] [bp-5Ch] BYREF
  Enemy *v35; // [sp+38h] [bp-50h] BYREF
  float v36[3]; // [sp+3Ch] [bp-4Ch] BYREF
  Vec2 out; // [sp+48h] [bp-40h] BYREF
  Vec3 position; // [sp+50h] [bp-38h] BYREF

  v4 = (Enemy **)(a1 + 6568);
  FIELD_U32(a1, 6572) = FIELD_U32(a1, 6568);
  v5 = (float *)(a1 + 6576);
  FIELD_U32(a1, 6580) = FIELD_U32(a1, 6576);
  v26 = (int *)(a1 + 6604);
  v28 = FIELD_U32(a1, 6604);
  v25 = (float *)(a1 + 6600);
  v29 = FIELD_F32(a1, 6600);
  v27 = FIELD_F32(a1, 6596);
  v6 = (_BYTE *)(a1 + 6592);
  v30 = (Enemy *)FIELD_U8(a1, 6592);
  v7 = FIELD_F32(a1, 112);
  v8 = FIELD_F32(a1, 108);
  v9 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 8);
  v10 = FIELD_F32(a1, 116);
  v36[0] = v8;
  v36[1] = v7 + v9;
  v36[2] = v10;
  ((void (__fastcall *)(Enemy **, float *, int, float *, _DWORD))physics_21893E8)(
    &v35,
    v5,
    a1 + 6592,
    v36,
    FIELD_U8(a1, 86));
  result = v35;
  v12 = (int *)(a1 + 6572);
  *v4 = v35;
  if ( r1_0 == 1 )
  {
    *v12 = (int)result;
    FIELD_F32(a1, 6580) = *v5;
  }
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    v13 = result == (Enemy *)2;
  }
  else
  {
    v13 = 1;
    if ( result == (Enemy *)1 )
    {
      v14 = sub_60152B40(FIELD_U8(a1, 86), v36[0], *v5);
      FIELD_U32(a1, 6588) = v14;
      v13 = v14 > 1;
      result = *v4;
      if ( (unsigned int)*v4 > 5 )
        return result;
    }
  }
  v15 = *v12;
  switch ( (unsigned int)result )
  {
    case 0u:
      FIELD_U8(a1, 6054) = 0;
      result = v30;
      if ( ((unsigned __int8)v30 & 1) != 0 && v15 == 2 )
      {
        a2.x = v27;
        a2.y = v29;
        a2.z = 6500.0;
        position.x = v27;
        position.y = v29;
        v31 = 0;
        v32 = 0;
        v33 = v28;
        v18 = Global_BasicSoundActor2;
        mapPositionToScreen(&out, &position);
        goto LABEL_25;
      }
      break;
    case 1u:
      result = sub_600038DC((Enemy *)a1);
      if ( !v15 )
      {
        v19 = *v5;
        v20 = -1;
        a2.x = v36[0];
        a2.y = v19;
        a2.z = 6500.0;
        if ( v13 )
          v20 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 752))(a1);
        result = (Enemy *)StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&a2, v20, 6, "SE_OBJ_CMN_SPLASH");
      }
      break;
    case 2u:
      result = sub_600038DC((Enemy *)a1);
      if ( !v15 )
      {
        result = (Enemy *)(unsigned __int8)*v6;
        if ( *v6 )
        {
          v21 = *v25;
          a2.x = FIELD_F32(a1, 6596);
          a2.y = v21;
          a2.z = 6500.0;
          v22 = *v26;
          v31 = 0;
          v32 = 0;
          position.x = a2.x;
          position.y = v21;
          v33 = v22;
          v18 = Global_BasicSoundActor2;
          mapPositionToScreen(&out, &position);
LABEL_25:
          BasicSoundActor2_play(v18, "SE_OBJ_CMN_SPLASH", &out.x, 0);
          result = (Enemy *)EffectData_create(1106, &a2, (int)&v31, 0);
        }
      }
      break;
    case 3u:
    case 4u:
      if ( !v15 && !FIELD_U8(a1, 6057) )
      {
        v16 = *v5;
        v17 = -1;
        a2.x = v36[0];
        a2.y = v16;
        a2.z = 6500.0;
        if ( v13 )
          v17 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
        StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&a2, v17, 16, "SE_OBJ_CMN_SPLASH_LAVA");
      }
      result = (Enemy *)(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 180))(a1, *v5);
      goto LABEL_31;
    case 5u:
      sub_600038DC((Enemy *)a1);
      if ( !v15 )
      {
        v23 = *v5;
        v24 = -1;
        a2.x = v36[0];
        a2.y = v23;
        a2.z = 6500.0;
        if ( v13 )
          v24 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
        StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&a2, v24, 23, "SE_OBJ_CMN_SPLASH_POISON");
      }
      result = (Enemy *)(*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 184))(a1, *v5);
LABEL_31:
      if ( result == (Enemy *)1 )
        result = (Enemy *)(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 164))(a1, 0);
      break;
    default:
      return result;
  }
  return result;
}
