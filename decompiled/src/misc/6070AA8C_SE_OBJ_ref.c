/* SE_OBJ_ref
 * address: 0x6070AA8C   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ref(int a1)
{
  int result; // r0
  int v3; // r4
  int *v4; // r7
  float v5; // s0
  float v6; // r0
  float v7; // r1
  float v8; // r1
  int v9; // r10
  int v10; // r6
  float v11; // r1
  int v12; // r9
  int v13; // r6
  int v14; // r0
  Vec3 *p_position; // r1
  Vec2 *p_out; // r3
  float v17; // r0
  Vec2 out; // [sp+4h] [bp-54h] BYREF
  int v19; // [sp+Ch] [bp-4Ch]
  Vec3 position; // [sp+10h] [bp-48h] BYREF
  unsigned int v21; // [sp+20h] [bp-38h] BYREF
  float v22[3]; // [sp+24h] [bp-34h] BYREF
  char v23; // [sp+30h] [bp-28h] BYREF

  if ( (FIELD_U8(a1, 2872) & 1) == 0 )
  {
    result = 6988;
    v3 = 0;
    v4 = (int *)(a1 + 6988);
    goto LABEL_4;
  }
  v3 = 1;
  FIELD_U32(a1, 124) = 0;
  v4 = (int *)(a1 + 6988);
  result = FIELD_U32(a1, 6988);
  if ( !result )
  {
    result = a1 + 7024;
    if ( !FIELD_U8(a1, 7024) )
    {
      v3 = 1;
      *(_BYTE *)result = 1;
      goto LABEL_4;
    }
    v5 = FIELD_F32(a1, 108);
    result = dword_60CC6484;
    if ( (float)(FIELD_F32(dword_60CC6484, 112) + -64.0) < v5 && v5 < (float)(FIELD_F32(dword_60CC6484, 120) + 64.0) )
    {
      v6 = FIELD_F32(a1, 112);
      v7 = FIELD_F32(a1, 116);
      v22[0] = FIELD_F32(a1, 108);
      v22[1] = v6;
      v22[2] = v7;
      ((void (__fastcall *)(unsigned int *, char *, float *, _DWORD))checkLiquidCollisions)(
        &v21,
        &v23,
        v22,
        FIELD_U8(a1, 86));
      if ( FIELD_U32(a1, 7004) == 1 && v21 <= 4 && ((1 << v21) & 0x19) != 0 )
      {
        AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 2, 1, 0, 0);
        v8 = FIELD_F32(a1, 112);
        v9 = FIELD_S16(a1, 7000);
        v10 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v8;
        mapPositionToScreen(&out, &position);
        sub_60813BDC(v10, "SE_OBJ_METAL_BOX_LAND", &out, v9, 0);
        result = FIELD_U8(dword_60CC6D8C, 17);
        if ( !FIELD_U8(dword_60CC6D8C, 17) )
          goto LABEL_4;
        if ( (FIELD_U8(a1, 26) & 0x10) != 0 )
        {
          v17 = FIELD_F32(a1, 108);
          p_out = &out;
          position.y = FIELD_F32(a1, 112);
          position.x = v17;
          p_position = &position;
          position.z = 1000.0;
          out.x = 1.5;
          out.y = 1.5;
          v19 = 1069547520;
          v14 = 137;
          goto LABEL_19;
        }
        result = FIELD_U32(a1, 7064);
        if ( result )
          goto LABEL_4;
      }
      else
      {
        v11 = FIELD_F32(a1, 112);
        v12 = FIELD_S16(a1, 7000);
        v13 = Global_BasicSoundActor2;
        position.x = FIELD_F32(a1, 108);
        position.y = v11;
        mapPositionToScreen(&out, &position);
        sub_60813BDC(v13, "SE_OBJ_WOOD_BOX_LAND", &out, v12, 0);
        result = FIELD_U8(dword_60CC6D8C, 17);
        if ( !FIELD_U8(dword_60CC6D8C, 17) )
          goto LABEL_4;
      }
      v14 = 565;
      p_position = (Vec3 *)(a1 + 108);
      p_out = 0;
LABEL_19:
      result = EffectData_create(v14, p_position, 0, (int)p_out);
    }
  }
LABEL_4:
  *v4 = v3;
  return result;
}
