/* KoopalingBase__vf4D8
 * address: 0x600B34E0   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
float *__fastcall KoopalingBase__vf4D8(float *result)
{
  int v1; // r1
  float v2; // r2
  float v3; // r0
  Vec3 v4; // [sp+4h] [bp-14h] BYREF

  v1 = *((_DWORD *)result + 1950);
  if ( FIELD_S32(v1, 4) >= 0 )
  {
    v2 = result[27];
    v3 = result[28];
    v4.x = v2;
    v4.y = v3;
    v4.z = 4500.0;
    return (float *)EffectData_create(FIELD_U32(v1, 4), &v4, 0, 0);
  }
  return result;
}
