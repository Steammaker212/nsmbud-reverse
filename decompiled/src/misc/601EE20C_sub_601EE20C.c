/* sub_601EE20C
 * address: 0x601EE20C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EE20C(int a1)
{
  int v2; // r5
  int v3; // r6
  _DWORD *v4; // r0
  float *v5; // r0
  float v6; // r1
  float v7; // r2
  float v8; // r0
  int v9; // r3
  float v10; // s2
  float v11; // s4
  int v12; // r0
  float v13; // r0
  Vec3 v15; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 v16[2]; // [sp+18h] [bp-20h] BYREF

  v2 = sub_601DFFE4(a1 + 388);
  v3 = 0;
  FIELD_U32(a1, 424) = 2;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  v4 = (_DWORD *)sub_60178694(v2, 2u);
  FIELD_U32(a1, 400) = v4[21];
  FIELD_U32(a1, 404) = v4[22];
  FIELD_U32(a1, 408) = v4[24];
  v5 = (float *)sub_601E0040(a1 + 400);
  v6 = *v5;
  FIELD_F32(a1, 328) = *v5;
  v7 = v5[1];
  FIELD_F32(a1, 332) = v7;
  v8 = v5[2];
  FIELD_F32(a1, 336) = v8;
  if ( FIELD_U32(a1, 424) < 6u )
    v3 = FIELD_U32(a1, 424);
  v9 = *(_DWORD *)(v2 + 4 * v3 + 48);
  FIELD_U32(a1, 428) = v9;
  if ( v9 == 7 )
  {
    v10 = FIELD_F32(a1, 84);
    v11 = FIELD_F32(a1, 88);
    v16[0].x = v6 - FIELD_F32(a1, 80);
    v16[0].y = v7 - v10;
    v16[0].z = v8 - v11;
    ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
      a1,
      a1 + 328,
      0,
      20,
      15.0,
      2.3,
      2.3,
      20,
      v16);
    sub_601ECD14(a1, 3);
  }
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 316) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 324) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 200) = 1091567616;
  v12 = sub_608332B0(a1 + 80, a1 + 328);
  FIELD_U32(a1, 412) = v12;
  FIELD_U32(a1, 180) = v12;
  FIELD_U32(a1, 192) = v12;
  v13 = FIELD_F32(a1, 84);
  v16[0].z = FIELD_F32(a1, 88);
  v16[0].y = v13;
  v16[0].x = FIELD_F32(a1, 80);
  v15.x = 1.0;
  v15.y = 1.0;
  v15.z = 1.0;
  sub_602375C4((EffectData *)(a1 + 432), 883, v16, 0, &v15);
  return sub_601ECD14(a1, 2);
}
