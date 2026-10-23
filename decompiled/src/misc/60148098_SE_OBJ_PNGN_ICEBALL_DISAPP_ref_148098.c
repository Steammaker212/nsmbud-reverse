/* SE_OBJ_PNGN_ICEBALL_DISAPP_ref_148098
 * address: 0x60148098   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICEBALL_DISAPP_ref_148098(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4
  int v4; // r5
  float v5; // r1
  int v6; // r4
  float v7; // r1
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C88164 & ~(1611956404 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
  {
    dword_60C88160 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C88164);
  }
  if ( v3 )
  {
    v4 = (**v3)(v3, &dword_60C88160);
    if ( v4 )
      v4 = (int)v3;
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_F32(v4, 112);
  v6 = Global_BasicSoundActor2;
  position.x = FIELD_F32(v4, 108);
  position.y = v5;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICEBALL_DISAPP", &out.x, 0);
  v7 = FIELD_F32(v4, 112);
  position.x = FIELD_F32(v4, 108);
  position.y = v7;
  position.z = 4500.0;
  EffectData_create(9, &position, 0, 0);
  return 1;
}
