/* sub_60062568
 * address: 0x60062568   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60062568(int a1)
{
  Vec3 v2; // [sp+4h] [bp-14h] BYREF

  FIELD_U16(a1, 6276) = 300;
  v2.x = FIELD_F32(dword_60CC6484, 116);
  v2.y = FIELD_F32(dword_60CC6484, 128);
  v2.z = 4500.0;
  return EffectData_create(1095, &v2, 0, 0);
}
