/* sub_6076F0E0
 * address: 0x6076F0E0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6076F0E0(int a1)
{
  float v2; // r6
  unsigned int v3; // r5
  int v4; // r0
  Vec3 v6; // [sp+4h] [bp-1Ch] BYREF

  ((void (*)(void))loc_60773ABC)();
  v2 = FIELD_F32(a1, 112);
  v6.x = FIELD_F32(a1, 108);
  v6.y = v2;
  v6.z = sub_600024C4(a1);
  v3 = FIELD_S8(a1, 84);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1256))(a1);
  return sub_60236E40(v3, v4, &v6, 0, 0);
}
