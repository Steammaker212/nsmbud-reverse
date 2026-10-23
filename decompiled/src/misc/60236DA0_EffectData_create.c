/* EffectData_create
 * address: 0x60236DA0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EffectData_create(int id, Vec3 *position, int a3, int a4)
{
  EffectData result; // [sp+8h] [bp-58h] BYREF

  result.field_34 = 0;
  result.field_38 = -1;
  EffectData_ctor(&result);
  return sub_602375C4(&result, id, position, (Vec3i *)a3, (Vec3 *)a4);
}
