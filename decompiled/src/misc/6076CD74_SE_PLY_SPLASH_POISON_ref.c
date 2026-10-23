/* SE_PLY_SPLASH_POISON_ref
 * address: 0x6076CD74   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_SPLASH_POISON_ref(int a1)
{
  float v2; // r0
  int *v3; // r6
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r3
  _DWORD v9[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v10; // [sp+Ch] [bp-1Ch] BYREF

  v3 = (int *)(a1 + 7012);
  v2 = FIELD_F32(a1, 7012);
  v10.x = FIELD_F32(a1, 108);
  v10.y = v2;
  v10.z = 6500.0;
  v4 = FIELD_S8(a1, 84);
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1268))(a1, HIWORD(FIELD_U32(a1, 1208)) & 1);
  sub_60236E40(v4, v5, &v10, 0, 0);
  v6 = *v3;
  v9[0] = FIELD_U32(a1, 108);
  v9[1] = v6;
  TileMgr_splashRelated(TileMgr_instance, v9, 20, v7);
  return sub_607734E8(a1, (int)"SE_PLY_SPLASH_POISON", 0, 0);
}
