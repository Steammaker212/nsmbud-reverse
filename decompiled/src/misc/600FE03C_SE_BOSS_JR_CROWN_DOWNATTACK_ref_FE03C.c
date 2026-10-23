/* SE_BOSS_JR_CROWN_DOWNATTACK_ref_FE03C
 * address: 0x600FE03C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CROWN_DOWNATTACK_ref_FE03C(int a1)
{
  float v2; // r1
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&v4, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CROWN_DOWNATTACK", &v4, 0);
  if ( !FIELD_U16(a1, 6276) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F14);
  return CollisionMgr_process((_BYTE *)(a1 + 648));
}
