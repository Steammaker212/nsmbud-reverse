/* sub_602F2ABC
 * address: 0x602F2ABC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F2ABC(int a1, Vec3 *a2, int a3, int a4)
{
  int v6; // r0

  v6 = *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) + 4 * a4);
  return EffectData_create(v6, a2, 0, a3);
}
