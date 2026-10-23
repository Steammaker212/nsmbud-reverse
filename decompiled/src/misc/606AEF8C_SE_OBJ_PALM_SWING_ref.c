/* SE_OBJ_PALM_SWING_ref
 * address: 0x606AEF8C   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PALM_SWING_ref(int a1)
{
  int v2; // r5
  float v3; // r1
  int v4; // r6
  int v5; // r0
  int v7; // r0
  unsigned int v8; // r0
  float v9; // r1
  _BYTE v10[12]; // [sp+4h] [bp-64h] BYREF
  float v11; // [sp+10h] [bp-58h]
  float v12; // [sp+20h] [bp-48h]
  float v13; // [sp+30h] [bp-38h]
  Vec3 v14; // [sp+34h] [bp-34h] BYREF
  Vec2 out; // [sp+40h] [bp-28h] BYREF
  Vec3 position; // [sp+48h] [bp-20h] BYREF

  if ( !FIELD_U32(a1, 912) )
    StageActor__cullCheck((StageActor *)a1, 16);
  sub_606AEC9C(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  v2 = sub_606AF2F8(a1);
  if ( FIELD_U8(a1, 1250) )
  {
    sub_606AF450(a1);
    FIELD_U8(a1, 1250) = 0;
    sub_6040F4B8(FIELD_U32(a1, 644), (int)&dword_60CBA230[6 * FIELD_U32(a1, 648) + 23], 0, 1.0, 0.0);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4), 0);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4));
    (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(a1 + 644) + 108))(**(_DWORD **)(a1 + 644), 3, v10);
    v14.x = v11;
    v14.y = v12;
    v14.z = v13;
    EffectData_create(dword_60AF2B04[2 * FIELD_U32(a1, 648) + 1], &v14, 0, 0);
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
LABEL_5:
    BasicSoundActor2_play(v4, "SE_OBJ_PALM_SWING", &out.x, 0);
    goto LABEL_6;
  }
  v7 = FIELD_U32(a1, 1252);
  if ( v2 != v7 )
  {
    v8 = abs32(v2 - v7);
    if ( (v8 & 1) != 0 && FIELD_U32(a1, 1256) )
      --v8;
    if ( (v8 & 2) != 0 && FIELD_U32(a1, 1260) )
      v8 -= 2;
    if ( (v8 & 4) != 0 && FIELD_U32(a1, 1264) )
      v8 -= 4;
    if ( (v8 & 8) != 0 && FIELD_U32(a1, 1268) )
      v8 -= 8;
    if ( v8 )
    {
      sub_6040F4B8(FIELD_U32(a1, 644), (int)&dword_60CBA230[6 * FIELD_U32(a1, 648) + 21], 0, 1.0, 0.0);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4), 0);
      sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4));
      (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(a1 + 644) + 108))(**(_DWORD **)(a1 + 644), 3, v10);
      v14.x = v11;
      v14.y = v12;
      v14.z = v13;
      EffectData_create(dword_60AF2B04[2 * FIELD_U32(a1, 648)], &v14, 0, 0);
      v9 = FIELD_F32(a1, 112);
      v4 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v9;
      mapPositionToScreen(&out, &position);
      goto LABEL_5;
    }
  }
LABEL_6:
  if ( FIELD_U8(a1, 1249) )
  {
    sub_606AF450(a1);
    FIELD_U8(a1, 1249) = 0;
  }
  v5 = FIELD_U32(a1, 644);
  if ( (*(_BYTE *)(**(_DWORD **)(v5 + 12) + 28) & 0x20) != 0 )
  {
    sub_6040F4B8(v5, (int)&dword_60CBA230[6 * FIELD_U32(a1, 648) + 19], 1, 1.0, 0.0);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4), 1);
    sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4));
  }
  FIELD_U32(a1, 1252) = v2;
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 656));
  return 1;
}
