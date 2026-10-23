/* sub_602C64D0
 * address: 0x602C64D0   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C64D0(int a1, float *a2)
{
  int result; // r0
  _DWORD *v3; // r4
  float v4; // r0
  float v5; // r1
  Vec3 v6; // [sp+4h] [bp-14h] BYREF

  v3 = (_DWORD *)(a1 + 28252);
  result = FIELD_U32(a1, 28252);
  if ( !result )
  {
    v4 = *a2;
    v5 = a2[1];
    v6.x = v4;
    v6.y = v5;
    v6.z = 4500.0;
    EffectData_create(1152, &v6, 0, 0);
    *v3 = 13;
    return 13;
  }
  return result;
}
