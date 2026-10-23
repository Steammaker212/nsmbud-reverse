/* SE_EMY_WOOCHAN_MOGURU_LAST_ref
 * address: 0x603E0504   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_WOOCHAN_MOGURU_LAST_ref(int a1)
{
  float v2; // s16
  float v3; // r1
  int v4; // r5
  int result; // r0
  float v6; // s0
  float v7; // r2
  float v8; // r0
  int v9; // [sp+4h] [bp-44h] BYREF
  Vec2 out; // [sp+8h] [bp-40h] BYREF
  int v11; // [sp+10h] [bp-38h]
  Vec3 position; // [sp+18h] [bp-30h] BYREF

  LavaGeyser_vf188();
  v2 = FIELD_F32(a1, 8216);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 640))(a1);
  if ( !FIELD_U8(a1, 8238) && FIELD_F32(a1, 148) <= 0.5 )
  {
    FIELD_U8(a1, 8238) = 1;
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    BasicSoundActor1_playSound(v4, "SE_EMY_WOOCHAN_MOGURU_LAST", (int)&out, 0);
  }
  result = 8220;
  v6 = FIELD_F32(a1, 8220);
  if ( v2 > v6 && FIELD_F32(a1, 8216) < v6 )
  {
    v7 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    TileMgr_splashRelated(TileMgr_instance, &position, 30);
    v8 = FIELD_F32(a1, 108);
    position.y = FIELD_F32(a1, 112);
    position.x = v8;
    position.z = 6500.0;
    out.x = v8;
    out.y = position.y;
    v11 = 1170939904;
    out.y = FIELD_F32(a1, 8220) + (float)(FIELD_F32(a1, 112) + -16.0);
    ((void (__fastcall *)(int *, float *, Vec2 *, _DWORD))checkLiquidCollisions)(
      &v9,
      &position.y,
      &out,
      FIELD_U8(a1, 86));
    result = v9;
    if ( v9 )
    {
      result = v9 - 3;
      if ( (unsigned int)(v9 - 3) <= 1 )
        return EffectData_create(880, &position, 0, 0);
    }
  }
  return result;
}
