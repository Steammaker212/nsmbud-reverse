/* sub_60236DF4
 * address: 0x60236DF4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60236DF4(int a1, void *a2, int a3)
{
  EffectData v7; // [sp+0h] [bp-58h] BYREF

  v7.field_34 = 0;
  v7.field_38 = -1;
  EffectData_ctor(&v7);
  return sub_60237610(&v7, a1, a2, a3);
}
