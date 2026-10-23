/* SE_BOSS_LEMMY_MAGIC_SHOT_ref
 * address: 0x600E3ED4   size: 484   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_BOSS_LEMMY_MAGIC_SHOT_ref(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r0
  float v5; // s0
  int v6; // r0
  int v7; // r1
  float v8; // s0
  int v9; // r0
  float v10; // r1
  int v11; // r5
  Vec2 v13; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v3 = FIELD_U32(a1, 56);
  if ( ((unsigned int)&dword_60C84B44 & ~(1611546356 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B44) )
  {
    dword_60C84B40 = (int)&off_60BC8314;
    _cxa_guard_release(&dword_60C84B44);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C84B40) == 1 )
  {
    v4 = FIELD_U32(v3, 80);
    v5 = FIELD_F32(dword_60CC6484, 116);
    if ( v4 == 1 )
    {
      if ( FIELD_F32(v3, 108) >= v5 )
      {
LABEL_12:
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 724))(v3) == 1 && !FIELD_U8(v3, 8132) )
        {
          v7 = 1077936128;
          v6 = 0x40000000;
          goto LABEL_16;
        }
        v6 = 1067030938;
LABEL_15:
        v7 = 1082130432;
LABEL_16:
        FIELD_U32(a1, 120) = v6;
        FIELD_U32(a1, 124) = v7;
        FIELD_U32(a1, 128) = 0;
        goto LABEL_17;
      }
    }
    else if ( v4 || FIELD_F32(v3, 108) <= v5 )
    {
      goto LABEL_12;
    }
    v6 = 1066192077;
    goto LABEL_15;
  }
LABEL_17:
  v8 = FIELD_F32(a1, 120);
  LOWORD(v9) = -26214;
  if ( FIELD_U32(a1, 80) == 1 )
    v8 = -v8;
  HIWORD(v9) = -16871;
  if ( FIELD_U32(a1, 80) == 1 )
    FIELD_F32(a1, 120) = v8;
  FIELD_U32(a1, 100) = v9;
  FIELD_U32(a1, 136) = -1061158912;
  FIELD_F32(a1, 6556) = v8 * -2.5;
  FIELD_U32(a1, 6560) = 1082130432;
  FIELD_U8(a1, 6564) = 1;
  v10 = FIELD_F32(a1, 112);
  v11 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v10;
  mapPositionToScreen(&v13, &position);
  BasicSoundActor1_playSound(v11, "SE_BOSS_LEMMY_MAGIC_SHOT", (int)&v13, 0);
  FIELD_U32(a1, 6568) = 300;
  return 6568;
}
