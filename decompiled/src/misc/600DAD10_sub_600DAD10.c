/* sub_600DAD10
 * address: 0x600DAD10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_600DAD10(int a1)
{
  float v1; // r2
  Vec3 v3; // [sp+4h] [bp-14h] BYREF

  v1 = FIELD_F32(a1, 112);
  v3.x = FIELD_F32(a1, 108);
  v3.y = v1;
  v3.z = 4500.0;
  if ( (FIELD_U32(a1, 5956) & 0xFF00) != 0xB00 )
    return KoopalingBase__vf4D8((float *)a1);
  else
    return (float *)EffectData_create(760, &v3, 0, 0);
}
