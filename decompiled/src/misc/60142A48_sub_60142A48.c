/* sub_60142A48
 * address: 0x60142A48   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142A48(float *a1)
{
  float v1; // r2
  float v2; // r3
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = a1[28];
  v2 = a1[29];
  v4.x = a1[27];
  v4.y = v1;
  v4.z = v2;
  if ( sub_60236FD4(a1 + 146) == 1 )
    v4.z = 4500.0;
  return EffectData_create(9, &v4, 0, 0);
}
