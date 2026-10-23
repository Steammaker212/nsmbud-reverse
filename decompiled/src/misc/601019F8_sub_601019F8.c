/* sub_601019F8
 * address: 0x601019F8   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601019F8(int a1)
{
  float *result; // r0
  _DWORD v2[3]; // [sp+0h] [bp-20h] BYREF
  Vec3 v3; // [sp+Ch] [bp-14h] BYREF

  result = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( result )
  {
    v3.x = result[27] + result[143];
    v3.y = result[28] + result[144];
    v3.z = 4500.0;
    v2[0] = 1069547520;
    v2[1] = 1069547520;
    v2[2] = 1069547520;
    return (float *)EffectData_create(1171, &v3, 0, (int)v2);
  }
  return result;
}
