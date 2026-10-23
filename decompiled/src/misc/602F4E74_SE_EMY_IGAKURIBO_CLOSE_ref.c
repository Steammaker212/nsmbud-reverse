/* SE_EMY_IGAKURIBO_CLOSE_ref
 * address: 0x602F4E74   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_IGAKURIBO_CLOSE_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0
  float v7; // r1
  int v8; // r5
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 100) = -1103101952;
  v2 = *(_DWORD **)(a1 + 6304);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v3 + 28);
  if ( (result & 0x10) != 0 )
  {
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&v9, &position);
    BasicSoundActor1_playSound(v8, "SE_EMY_IGAKURIBO_CLOSE", (int)&v9, 0);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92850);
  }
  return result;
}
