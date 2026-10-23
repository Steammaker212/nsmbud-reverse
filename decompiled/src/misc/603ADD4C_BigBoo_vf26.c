/* BigBoo_vf26
 * address: 0x603ADD4C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BigBoo_vf26(int a1)
{
  _DWORD v2[5]; // [sp+4h] [bp-14h] BYREF

  memset(v2, 0, 12);
  return EffectData_create(375, (Vec3 *)(a1 + 6616), (int)v2, a1 + 144);
}
