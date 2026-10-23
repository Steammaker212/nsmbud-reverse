/* SE_OBJ_PAIPO_TO_TOGEZO_ref
 * address: 0x603BC858   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PAIPO_TO_TOGEZO_ref(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  float v5; // r1
  int v6; // r5
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 6386) = 0;
  v4 = FIELD_U32(a1, 6352);
  v2 = (_DWORD *)(a1 + 6352);
  v3 = v4;
  if ( v4 != 1 )
  {
    FIELD_U32(a1, 6356) = v3;
    *v2 = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0x40000000;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 96) = -1065353216;
  FIELD_U32(a1, 156) = 0x80000000;
  v5 = FIELD_F32(a1, 112);
  v6 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v5;
  mapPositionToScreen(&v8, &position);
  return BasicSoundActor1_playSound(v6, "SE_OBJ_PAIPO_TO_TOGEZO", (int)&v8, 0);
}
