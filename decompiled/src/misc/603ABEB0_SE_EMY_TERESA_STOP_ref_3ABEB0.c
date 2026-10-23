/* SE_EMY_TERESA_STOP_ref_3ABEB0
 * address: 0x603ABEB0   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_TERESA_STOP_ref_3ABEB0(int a1)
{
  float v2; // r1
  int v3; // r4
  _DWORD *v4; // r7
  int v5; // r5
  int v6; // r5
  int v7; // r5
  float v8; // s16
  float v9; // s18
  float v10; // s0
  int result; // r0
  float v12; // s0
  Vec2 v13; // [sp+0h] [bp-40h] BYREF
  Vec3 position; // [sp+8h] [bp-38h] BYREF

  sub_603AD914(a1, 1);
  sub_603ADA8C(a1, 0);
  if ( !FIELD_U8(a1, 6684) && !FIELD_U32(a1, 6652) )
  {
    v2 = FIELD_F32(a1, 112);
    v3 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor1_playSound(v3, "SE_EMY_TERESA_STOP", (int)&v13, 0);
  }
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6304) + 20) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4), 0);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 20) + 4), 0);
  FIELD_U8(a1, 6684) = 1;
  v4 = (_DWORD *)(a1 + 6096);
  v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v5 != (*(int (**)(void))(dword_60C97B8C + 8))() )
  {
    v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
    if ( v6 != (*(int (**)(void))(dword_60C97B6C + 8))() )
    {
      v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v4 + 8))(*v4);
      if ( v7 != (*(int (**)(void))(dword_60C97B4C + 8))() )
        FIELD_U32(a1, 6896) = 3;
    }
  }
  FIELD_U32(a1, 6900) = 15;
  FIELD_U32(a1, 6904) = 1077936128;
  FIELD_U32(a1, 6920) = 0;
  v8 = FIELD_F32(a1, 112) - FIELD_F32(a1, 7088);
  v9 = FIELD_F32(a1, 108) - FIELD_F32(a1, 7084);
  v10 = sqrtf((float)((float)(v8 * v8) + (float)(v9 * v9)) + 0.0);
  *(float *)&result = 0.0;
  if ( v10 > 0.0 )
  {
    v12 = 1.0 / v10;
    v8 = v8 * v12;
    v9 = v9 * v12;
    *(float *)&result = v12 * 0.0;
  }
  FIELD_F32(a1, 6908) = v9;
  FIELD_F32(a1, 6912) = v8;
  FIELD_F32(a1, 6916) = *(float *)&result;
  return result;
}
