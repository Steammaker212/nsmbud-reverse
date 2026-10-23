/* SE_PLY_SPLASH_LAVA_ref_76CCA4
 * address: 0x6076CCA4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_SPLASH_LAVA_ref_76CCA4(int a1)
{
  float v2; // r0
  int *v3; // r6
  int v4; // r1
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r3
  _DWORD v10[2]; // [sp+4h] [bp-24h] BYREF
  Vec3 v11; // [sp+Ch] [bp-1Ch] BYREF

  v3 = (int *)(a1 + 7012);
  v2 = FIELD_F32(a1, 7012);
  v11.x = FIELD_F32(a1, 108);
  v11.y = v2;
  v11.z = 6500.0;
  v4 = *(_DWORD *)a1;
  v5 = FIELD_S8(a1, 84);
  if ( FIELD_U32(a1, 7020) == 4 )
    v6 = (*(int (__fastcall **)(int, int))(v4 + 1276))(a1, HIWORD(FIELD_U32(a1, 1208)) & 1);
  else
    v6 = (*(int (__fastcall **)(int, int))(v4 + 1272))(a1, HIWORD(FIELD_U32(a1, 1208)) & 1);
  sub_60236E40(v5, v6, &v11, 0, 0);
  v7 = *v3;
  v10[0] = FIELD_U32(a1, 108);
  v10[1] = v7;
  TileMgr_splashRelated(TileMgr_instance, v10, 13, v8);
  return sub_607734E8(a1, (int)"SE_PLY_SPLASH_LAVA", 0, 0);
}
