/* SE_BOSS_JR_CLOWN_MOVE_ref_FCC1C
 * address: 0x600FCC1C   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_FCC1C(int a1)
{
  int v2; // r6
  float v3; // r1
  int v4; // r1
  unsigned int v5; // r0
  int result; // r0
  Vec2 v7; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = a1 + 6304;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  ((void (__fastcall *)(int))loc_601005C0)(a1);
  v3 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v7, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v7, 0);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
    v4 += 4 * v5;
  result = *(unsigned __int8 *)(*(_DWORD *)v4 + 28);
  if ( (result & 0x20) != 0 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85DB4);
  return result;
}
