/* SE_BOSS_JR_CLOWN_MOVE_ref_903B4
 * address: 0x600903B4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref_903B4(int a1)
{
  float v2; // s0
  float v3; // r1
  float v4; // s16
  int result; // r0
  Vec2 v6; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 112,
         FIELD_F32(a1, 6812),
         0.1,
         6.0,
         0.1);
  v3 = FIELD_F32(a1, 112);
  v4 = v2;
  position.x = FIELD_F32(a1, 108);
  position.y = v3;
  mapPositionToScreen(&v6, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v6, 0);
  result = ((int (__fastcall *)(int))loc_601005C0)(a1);
  if ( v4 < 1.0 )
  {
    FIELD_U32(a1, 112) = FIELD_U32(a1, 6812);
    FIELD_U32(a1, 9420) = 0;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85E94);
  }
  return result;
}
