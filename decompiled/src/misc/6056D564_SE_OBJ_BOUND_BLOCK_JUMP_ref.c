/* SE_OBJ_BOUND_BLOCK_JUMP_ref
 * address: 0x6056D564   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_ref(int a1, int a2, int a3)
{
  int result; // r0
  float v7; // r1
  int v8; // r7
  unsigned int v9; // r0
  int *v10; // r9
  float v11; // r1
  int v12; // r7
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  result = FIELD_U8(a2, 1212);
  if ( (result & 0x80) == 0 )
  {
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor2_play(v8, "SE_OBJ_BOUND_BLOCK_BOUND", &v13.x, 0);
    v9 = FIELD_S8(a2, 84);
    LODWORD(position.x) = 39;
    v10 = sub_60002B90(v9, unk_60C26410);
    v11 = FIELD_F32(a1, 112);
    v12 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v11;
    mapPositionToScreen(&v13, &position);
    BasicSoundActor2_play(v12, "SE_OBJ_BOUND_BLOCK_JUMP", &v13.x, (int)v10);
    return (*(int (__fastcall **)(int, int, int, _DWORD, float, float))(*(_DWORD *)a2 + 748))(
             a2,
             1,
             2,
             0,
             flt_60B0446C[a3],
             FIELD_F32(a2, 88));
  }
  return result;
}
