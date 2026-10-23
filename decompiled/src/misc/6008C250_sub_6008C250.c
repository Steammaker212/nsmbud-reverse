/* sub_6008C250
 * address: 0x6008C250   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008C250(int a1)
{
  _DWORD *v1; // r3
  _DWORD v3[3]; // [sp+0h] [bp-20h] BYREF
  Vec3 v4; // [sp+Ch] [bp-14h] BYREF

  v4.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v4.y = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  v4.z = 4500.0;
  if ( FIELD_U8(a1, 7248) )
  {
    v1 = v3;
    v3[0] = 1069547520;
    v3[1] = 1069547520;
    v3[2] = 1069547520;
  }
  else
  {
    v1 = 0;
  }
  return EffectData_create(1171, &v4, 0, (int)v1);
}
