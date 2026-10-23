/* sub_600D5330
 * address: 0x600D5330   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D5330(int a1)
{
  float v2; // r1
  Vec3 v4; // [sp+0h] [bp-18h] BYREF

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v2 = FIELD_F32(a1, 112);
  v4.x = FIELD_F32(a1, 108);
  v4.y = v2;
  v4.z = 4500.0;
  EffectData_create(4, &v4, 0, 0);
  FIELD_U32(a1, 6136) = 10;
  return 6136;
}
