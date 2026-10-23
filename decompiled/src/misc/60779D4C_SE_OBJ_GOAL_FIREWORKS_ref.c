/* SE_OBJ_GOAL_FIREWORKS_ref
 * address: 0x60779D4C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_GOAL_FIREWORKS_ref(int a1)
{
  int result; // r0
  int v3; // r1
  float v4; // r3
  float v5; // r5
  float *v6; // r2
  unsigned int v7; // r0
  int v8; // r4
  const char *v9; // r1
  int v10; // [sp+4h] [bp-3Ch] BYREF
  int v11; // [sp+8h] [bp-38h]
  char v12; // [sp+Ch] [bp-34h]
  Vec3 v13; // [sp+10h] [bp-30h] BYREF
  Vec2 out; // [sp+20h] [bp-20h] BYREF
  Vec3 position; // [sp+28h] [bp-18h] BYREF

  result = FIELD_U8(a1, 273);
  if ( result )
  {
    result = FIELD_U32(a1, 276);
    v3 = FIELD_U32(a1, 292);
    if ( v3 < result )
    {
      v4 = FIELD_F32(a1, 300);
      v5 = FIELD_F32(a1, 304);
      v13.x = FIELD_F32(a1, 296);
      v13.y = v4;
      v13.z = v5;
      v6 = (float *)((char *)*(&off_60C248F4 + result - 1) + 12 * v3);
      v13.x = *v6 + v13.x;
      v13.y = v6[1] + v4;
      if ( v3 )
      {
        v7 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 30;
        FIELD_U32(a1, 308) = v7;
        EffectData_create(dword_60AF2C14[v7], &v13, 0, 0);
        v10 = 15;
        v11 = unk_60C26380;
        v12 = 0;
        v8 = Global_BasicSoundActor2;
        position.x = v13.x;
        position.y = v13.y;
        mapPositionToScreen(&out, &position);
        v9 = "SE_OBJ_GOAL_FIREWORKS";
      }
      else
      {
        if ( result > 9 )
          return result;
        EffectData_create(dword_60B0AB48[result], &v13, 0, 0);
        v10 = 15;
        v11 = unk_60C2637C;
        v12 = 0;
        v8 = Global_BasicSoundActor2;
        position.x = v13.x;
        position.y = v13.y;
        mapPositionToScreen(&out, &position);
        v9 = "SE_OBJ_GOAL_FIREWORKS_FINISH";
      }
      return BasicSoundActor2_play(v8, v9, &out.x, (int)&v10);
    }
  }
  return result;
}
