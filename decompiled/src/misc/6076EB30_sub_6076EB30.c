/* sub_6076EB30
 * address: 0x6076EB30   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076EB30(int a1)
{
  unsigned int v2; // r5
  int v3; // r0

  v2 = FIELD_S8(a1, 84);
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1232))(a1);
  return sub_60236EC4(v2, (EffectWrapper *)(a1 + 10456), v3, (Vec3 *)(a1 + 108), 0, 0);
}
