/* sub_607AA6F4
 * address: 0x607AA6F4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607AA6F4(int a1)
{
  unsigned int v1; // r5
  EffectData *v2; // r4
  int v3; // r1
  Vec3 *v5; // r6
  int v6; // r0

  v1 = FIELD_S8(a1, 84);
  v2 = (EffectData *)(a1 + 13192);
  v3 = FIELD_U32(a1, 11388);
  if ( FIELD_U32(a1, 1320) != 9 && v3 == 9 )
    return sub_60236F74(FIELD_S8(a1, 84), v2, 1234, (Vec3 *)(a1 + 108), 0, 0);
  v5 = (Vec3 *)(a1 + 108);
  v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 156))(a1, v3);
  return sub_60236F74(v1, v2, dword_60B0CD60[v6], v5, 0, 0);
}
