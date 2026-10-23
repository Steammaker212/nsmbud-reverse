/* sub_606414C8
 * address: 0x606414C8   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606414C8(int a1)
{
  float v2; // r3
  float v3; // s0
  Vec2 position; // [sp+8h] [bp-18h] BYREF

  v2 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  LineFollower_init(
    (LineFollower *)(a1 + 6808),
    &position,
    FIELD_U8(a1, 86),
    FIELD_U8(a1, 7029),
    0);
  v3 = FIELD_F32(a1, 7008) * 0.5;
  FIELD_F32(a1, 6852) = v3 + -8.0;
  FIELD_U32(a1, 6856) = 0;
  FIELD_F32(a1, 6860) = 8.0 - v3;
  FIELD_U32(a1, 6864) = 0;
  return ((int (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 6808, 0);
}
