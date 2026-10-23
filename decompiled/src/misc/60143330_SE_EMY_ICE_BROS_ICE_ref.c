/* SE_EMY_ICE_BROS_ICE_ref
 * address: 0x60143330   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_ICE_BROS_ICE_ref(float *a1)
{
  float v2; // r1
  Vec2 v4; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 248))(a1);
  v2 = a1[28];
  position.x = a1[27];
  position.y = v2;
  mapPositionToScreen(&v4, &position);
  return sub_60813570(a1 + 1685, "SE_EMY_ICE_BROS_ICE", &v4, 0);
}
