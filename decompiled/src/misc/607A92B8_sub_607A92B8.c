/* sub_607A92B8
 * address: 0x607A92B8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A92B8(int a1)
{
  float v3; // s2
  float v4; // s0

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 8);
  FIELD_U32(a1, 1228) |= 0x4000000u;
  FIELD_U32(a1, 1224) |= 0x80000000;
  if ( (FIELD_U8(a1, 1214) & 0x20) == 0 )
    return sub_6076DDA8(a1);
  v3 = FIELD_F32(a1, 88);
  v4 = -1.0;
  if ( v3 >= -1.0 )
  {
    v4 = FIELD_F32(a1, 88);
    if ( v3 > 1.0 )
      v4 = 1.0;
  }
  FIELD_F32(a1, 88) = v4;
  return sub_607689EC(a1, 0);
}
