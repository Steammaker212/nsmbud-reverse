/* SE_OBJ_COIN_POP_UP_ref_2
 * address: 0x605CDB68   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_COIN_POP_UP_ref_2(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r5
  int v5; // r5
  float *v6; // r0
  float v7; // r1
  float v8; // r0
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U8(a1, 99);
  if ( result )
  {
    v4 = FIELD_U32(dword_60C995D0, 32);
    if ( ((unsigned int)&dword_60C99888 & ~(1616698272 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C99888) )
    {
      dword_60C99884 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C99888);
    }
    if ( !v4 || (result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C99884)) == 0 )
    {
      v5 = Global_BasicSoundActor2;
      v6 = *(float **)(a1 + 40);
      v7 = *v6;
      v8 = v6[1];
      position.x = v7;
      position.y = v8;
      mapPositionToScreen(&v9, &position);
      return BasicSoundActor2_play(v5, "SE_OBJ_COIN_POP_UP", &v9.x, 0);
    }
  }
  return result;
}
