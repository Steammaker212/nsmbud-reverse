/* SE_EMY_SHADOW_LAND_ref_396938
 * address: 0x60396938   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_SHADOW_LAND_ref_396938(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  float *v9; // r6
  int v10; // r0
  float v11; // r2
  int v12; // r5
  float v13; // r0
  Vec2 v15; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v2 = (_DWORD *)(a1 + 6312);
  if ( FIELD_U32(a1, 6312) != 5 )
  {
    *v2 = 5;
    v3 = a1 + 6304;
    sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&dword_60C96F78);
    v4 = *(_DWORD *)(FIELD_U32(a1, 6304) + 12);
    v5 = *(_DWORD *)(FIELD_U32(a1, 6304) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6304) + 8) > v5 )
      v4 += 4 * v5;
    *(_DWORD *)(*(_DWORD *)v4 + 24) = dword_60C96F28[4 * *v2 + 2];
    v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
      v6 += 4 * v7;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), dword_60C96F28[4 * *v2 + 3]);
  }
  FIELD_U32(a1, 6316) = 0;
  FIELD_U32(a1, 88) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v8 = FIELD_U32(a1, 6320);
  FIELD_U32(a1, 6320) = v8 | 0x20000;
  if ( (v8 & 1) != 0 )
  {
    v10 = 1;
    switch ( FIELD_U8(a1, 5957) )
    {
      case 1:
        v10 = 3;
        break;
      case 2:
        v10 = 2;
        break;
      case 4:
        break;
      case 0xB:
        v10 = 4;
        break;
      default:
        v10 = 0;
        break;
    }
    v9 = (float *)(a1 + 108);
    v11 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    position.z = 4500.0;
    EffectData_create(dword_60B00980[v10], &position, 0, 0);
  }
  else
  {
    v9 = (float *)(a1 + 108);
  }
  v12 = Global_BasicSoundActor1;
  v13 = FIELD_F32(a1, 112);
  position.x = *v9;
  position.y = v13;
  mapPositionToScreen(&v15, &position);
  BasicSoundActor1_playSound(v12, "SE_EMY_SHADOW_LAND", (int)&v15, 0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
