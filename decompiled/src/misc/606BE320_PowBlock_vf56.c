/* PowBlock_vf56
 * address: 0x606BE320   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall PowBlock_vf56(int a1)
{
  StateMethodExecuter *result; // r0
  float v3; // r1
  int v4; // r5
  _DWORD v5[2]; // [sp+4h] [bp-2Ch] BYREF
  char v6; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  sub_605C9E44(a1);
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400
    || (result = (StateMethodExecuter *)(FIELD_U32(a1, 2872) & 1)) != 0 )
  {
    v5[0] = 15;
    v5[1] = unk_60C26434;
    v6 = 0;
    v3 = FIELD_F32(a1, 112);
    v4 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v3;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v4, "SE_OBJ_POW_BLOCK_QUAKE", &out.x, (int)v5);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBA6CC);
  }
  return result;
}
