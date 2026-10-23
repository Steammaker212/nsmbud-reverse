/* DryBones__vf188
 * address: 0x603169DC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A362C
// 
// Overridden by: None
int __fastcall DryBones__vf188(int a1, int a2)
{
  int result; // r0
  unsigned int v5; // r0
  int *v6; // r5
  float v7; // r1
  int v8; // r6
  Vec2 v9; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  result = FIELD_U16(a1, 7642);
  if ( !result )
  {
    if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 204))(a1, FIELD_S8(a2, 1313)) == 1 )
      SE_SYS_NICE_S_ref();
    v5 = FIELD_S8(a2, 84);
    LODWORD(position.x) = 22;
    v6 = sub_60002B90(v5, unk_60C263CC);
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&v9, &position);
    return BasicSoundActor1_playSound(v8, "SE_EMY_KALON", (int)&v9, (int)v6);
  }
  return result;
}
