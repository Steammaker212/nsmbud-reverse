/* SE_OBJ_CMN_QUAKE_ref
 * address: 0x606D2AC4   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_QUAKE_ref(int a1, int a2)
{
  int v4; // r5
  float v5; // r0
  int result; // r0
  _DWORD v7[2]; // [sp+4h] [bp-2Ch] BYREF
  char v8; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  sub_606D465C(a1 + 108, a1 + 164);
  FIELD_U32(a1, 6100) = FIELD_U32(a2, 108);
  FIELD_U32(a1, 6104) = FIELD_U32(a2, 112);
  FIELD_U32(a1, 6108) = FIELD_U32(a2, 116);
  FIELD_F32(a1, 6112) = FIELD_F32(a2, 108) - FIELD_F32(a2, 584);
  FIELD_F32(a1, 6116) = FIELD_F32(a2, 112) - FIELD_F32(a2, 588);
  FIELD_F32(a1, 6120) = FIELD_F32(a2, 116) - FIELD_F32(a2, 592);
  FIELD_U32(a1, 6132) = FIELD_U32(a1, 164);
  if ( sub_606D4788(a2, FIELD_U32(a1, 6148)) == 1 )
  {
    v7[0] = 15;
    v7[1] = unk_60C2644C;
    v8 = 0;
    v4 = Global_BasicSoundActor2;
    v5 = FIELD_F32(a1, 6868);
    position.x = FIELD_F32(a1, 6864);
    position.y = v5;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v4, "SE_OBJ_CMN_QUAKE", &out.x, (int)v7);
  }
  result = FIELD_U32(a1, 164) + FIELD_U32(a1, 6880);
  FIELD_U32(a1, 164) = result;
  return result;
}
