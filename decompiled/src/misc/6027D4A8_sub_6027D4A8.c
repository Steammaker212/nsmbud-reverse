/* sub_6027D4A8
 * address: 0x6027D4A8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027D4A8(float *a1)
{
  _DWORD v2[3]; // [sp+0h] [bp-20h] BYREF
  Vec3 v3; // [sp+Ch] [bp-14h] BYREF

  qmemcpy(v2, "333?333?333?", sizeof(v2));
  v3.x = a1[27] + a1[143];
  v3.y = a1[28] + a1[144];
  v3.z = 4500.0;
  return EffectData_create(641, &v3, 0, (int)v2);
}
