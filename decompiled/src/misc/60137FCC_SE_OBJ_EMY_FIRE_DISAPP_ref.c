/* SE_OBJ_EMY_FIRE_DISAPP_ref
 * address: 0x60137FCC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_EMY_FIRE_DISAPP_ref(int a1, int a2, float *a3)
{
  char v3; // r12
  int v4; // r4
  float v6; // r0
  float v7; // r1
  int v8; // r5
  Vec3 v10; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v4 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C87964 & ~(1611890668 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C87964) )
  {
    dword_60C87960 = (int)&off_60BC00E0;
    _cxa_guard_release(dword_60C87964);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C87960) == 1 )
    {
      if ( FIELD_U8(v4, 6148) )
      {
        v6 = *a3;
        v7 = a3[1];
        v10.x = *a3;
        v10.y = v7;
        v10.z = 4500.0;
        if ( !FIELD_U8(v4, 19) )
        {
          position.x = v6;
          position.y = v7;
          v8 = Global_BasicSoundActor2;
          mapPositionToScreen(&out, &position);
          BasicSoundActor2_play(v8, "SE_OBJ_EMY_FIRE_DISAPP", &out.x, 0);
          EffectData_create(4, &v10, 0, 0);
          FIELD_U8(v4, 19) = 1;
        }
      }
    }
  }
  return 1;
}
