/* sub_606C8BA0
 * address: 0x606C8BA0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C8BA0(int a1)
{
  float v1; // s0
  int v2; // r0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 112);
  v4.x = FIELD_F32(a1, 108);
  v4.y = v1 + 8.0;
  v4.z = 4500.0;
  if ( FIELD_U32(a1, 7076) )
    v2 = 79;
  else
    v2 = 77;
  EffectData_create(v2, &v4, 0, 0);
  return EffectData_create(80, &v4, 0, 0);
}
