/* SE_OBJ_BOUND_BLOCK_JUMP_ref_3
 * address: 0x6056E45C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_ref_3(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v3 = FIELD_U32(a2, 144);
  if ( ((unsigned int)&dword_60CAE7B4 & ~(1616307320 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CAE7B4) )
  {
    dword_60CAE7B0 = (int)&off_60C012E8;
    _cxa_guard_release(&dword_60CAE7B4);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAE7B0) == 1 )
    {
      v4 = 1;
      if ( !FIELD_U8(v3, 7416) )
      {
        v5 = FIELD_F32(v3, 112);
        v6 = Global_BasicSoundActor2;
        position.x = FIELD_F32(v3, 108);
        position.y = v5;
        mapPositionToScreen(&v8, &position);
        BasicSoundActor2_play(v6, "SE_OBJ_BOUND_BLOCK_JUMP", &v8.x, 0);
        v4 = 1;
        FIELD_U32(v3, 7464) = 0;
        FIELD_U8(v3, 7416) = 1;
      }
    }
  }
  return v4;
}
