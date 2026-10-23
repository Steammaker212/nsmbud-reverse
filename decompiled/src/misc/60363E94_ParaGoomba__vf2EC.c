/* ParaGoomba__vf2EC
 * address: 0x60363E94   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033E5E8
// 
// Overridden by: None
int __fastcall ParaGoomba__vf2EC(Vec3 *a1)
{
  float y; // r1
  int v3; // r5
  float v5; // r1
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  sub_602A3EFC((int)&a1[565].z, 24, 0.0625);
  if ( HIBYTE(a1[570].x) )
  {
    HIBYTE(a1[570].x) = 0;
    EffectData_create(274, a1 + 569, 0, 0);
    (*(void (__fastcall **)(Vec3 *))(LODWORD(FIELD_F32(a1, 0x0)) + 644))(a1);
    y = a1[9].y;
    v3 = Global_BasicSoundActor1;
    position.x = a1[9].x;
    position.y = y;
    mapPositionToScreen(&out, &position);
    sub_60813810(v3, (int)"SE_EMY_CMN_TOUCH_DISAPPEAR", (int)&out, 1, 0);
    return (*(int (__fastcall **)(Vec3 *, int *))(LODWORD(FIELD_F32(a1, 0x0)) + 192))(a1, &dword_60C94470);
  }
  if ( (LOBYTE(a1[239].y) & 1) != 0 )
  {
    if ( !(*(int (__fastcall **)(Vec3 *))(LODWORD(FIELD_F32(a1, 0x0)) + 672))(a1) )
LABEL_7:
      (*(void (__fastcall **)(Vec3 *, int *))(LODWORD(FIELD_F32(a1, 0x0)) + 192))(a1, &dword_60C944B8);
  }
  else if ( BYTE2(a1[558].y) )
  {
    goto LABEL_7;
  }
  v5 = a1[9].y;
  position.x = a1[9].x;
  position.y = v5;
  return SE_SYS_ref_2(SoundSystem_instance, &position, 3);
}
