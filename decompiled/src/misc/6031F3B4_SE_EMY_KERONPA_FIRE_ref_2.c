/* SE_EMY_KERONPA_FIRE_ref_2
 * address: 0x6031F3B4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_FIRE_ref_2(int a1)
{
  int v2; // r5
  int *v3; // r1
  unsigned int v4; // r0
  int result; // r0
  float v6; // r1
  int v7; // r5
  Vec2 v8; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = a1 + 7124;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
  v3 = *(int **)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += v4;
  result = *v3;
  if ( (*(_BYTE *)(*v3 + 28) & 0x20) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C93838);
  if ( FIELD_F32(result, 20) == 12.0 )
  {
    SE_EMY_KERONPA_FIRE_ref_2_helper(a1);
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&v8, &position);
    return BasicSoundActor1_playSound(v7, "SE_EMY_KERONPA_FIRE", (int)&v8, 0);
  }
  return result;
}
