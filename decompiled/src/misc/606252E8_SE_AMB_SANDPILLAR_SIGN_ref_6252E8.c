/* SE_AMB_SANDPILLAR_SIGN_ref_6252E8
 * address: 0x606252E8   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_AMB_SANDPILLAR_SIGN_ref_6252E8(int a1)
{
  _WORD *v2; // r5
  StateMethodExecuter *result; // r0
  float v4; // r0
  float v5; // s0
  float v6; // s2
  float v7; // s4
  int v8; // r4
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  v2 = (_WORD *)(a1 + 6124);
  LOWORD(result) = FIELD_U16(a1, 6124) - 1;
  *v2 = (_WORD)result;
  result = (StateMethodExecuter *)(__int16)result;
  if ( (__int16)result <= 0 )
  {
    FIELD_U8(a1, 7280) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB3B94);
  }
  else if ( (__int16)result <= 60 )
  {
    v4 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v4;
    position.z = 4500.0;
    if ( (FIELD_U8(a1, 21) & 0x10) != 0 && FIELD_U8(dword_60CC6D8C, 17) )
      position.y = v4 + -16.0;
    EffectWrapper_update((EffectWrapper *)(a1 + 7404), 26, &position, 0, 0);
    result = (StateMethodExecuter *)(unsigned __int16)*v2;
    if ( result == (StateMethodExecuter *)60 )
    {
      v5 = FIELD_F32(a1, 108);
      result = (StateMethodExecuter *)(a1 + 6112);
      if ( FIELD_F32(a1, 6112) <= v5 )
      {
        result = (StateMethodExecuter *)(a1 + 6116);
        if ( FIELD_F32(a1, 6116) >= v5 )
        {
          v6 = FIELD_F32(a1, 112);
          v7 = FIELD_F32(a1, 6120);
          position.x = FIELD_F32(a1, 108);
          v8 = Global_BasicSoundActor2;
          position.y = v6 + v7;
          mapPositionToScreen(&out, &position);
          return (StateMethodExecuter *)BasicSoundActor2_play(v8, "SE_AMB_SANDPILLAR_SIGN", &out.x, 0);
        }
      }
    }
  }
  return result;
}
