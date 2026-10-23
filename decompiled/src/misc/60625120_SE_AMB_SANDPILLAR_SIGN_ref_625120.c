/* SE_AMB_SANDPILLAR_SIGN_ref_625120
 * address: 0x60625120   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_AMB_SANDPILLAR_SIGN_ref_625120(int a1)
{
  _DWORD *v2; // r2
  float v3; // r1
  float v4; // s0
  int result; // r0
  float v6; // s2
  float v7; // s4
  int v8; // r4
  Vec2 out; // [sp+4h] [bp-24h] BYREF
  Vec3 position; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 6468) = 0;
  v2 = (_DWORD *)(a1 + 6472);
  do
  {
    *v2 = 0;
    v2[4] = 0;
    v2[5] = 0x40000000;
    v2 += 9;
  }
  while ( (unsigned int)v2 <= a1 + 6796 );
  FIELD_U32(a1, 148) = 0;
  FIELD_U32(a1, 6120) = 0;
  FIELD_U16(a1, 6124) = 60;
  v3 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  position.z = 4500.0;
  if ( (FIELD_U8(a1, 21) & 0x10) != 0 && FIELD_U8(dword_60CC6D8C, 17) )
    position.y = v3 + -16.0;
  EffectWrapper_update((EffectWrapper *)(a1 + 7404), 26, &position, 0, 0);
  v4 = FIELD_F32(a1, 108);
  result = a1 + 6112;
  if ( FIELD_F32(a1, 6112) <= v4 )
  {
    result = a1 + 6116;
    if ( FIELD_F32(a1, 6116) >= v4 )
    {
      v6 = FIELD_F32(a1, 6120);
      v7 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      v8 = Global_BasicSoundActor2;
      position.y = v7 + v6;
      mapPositionToScreen(&out, &position);
      return BasicSoundActor2_play(v8, "SE_AMB_SANDPILLAR_SIGN", &out.x, 0);
    }
  }
  return result;
}
