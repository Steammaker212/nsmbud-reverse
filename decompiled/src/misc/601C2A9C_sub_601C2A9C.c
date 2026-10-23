/* sub_601C2A9C
 * address: 0x601C2A9C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2A9C(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // s2
  __n64 v7; // d0
  float v8; // s4
  float v9; // s10
  float v10; // s6
  float v11; // s12
  float v12; // s8
  float v13; // s14
  int v14; // s2
  float *v15; // r6
  int v16; // r7
  int v17; // r0

  v4 = sub_601CF9C0(dword_60C8AEF0);
  v5 = FIELD_U32(v4, 180);
  *(__n64 *)(a1 + 80) = sub_601BA56C(a1, (float *)(v4 + 80), v5);
  FIELD_U32(a1, 88) = v6;
  v7.n64_u64[0] = sub_601BA56C(a1, (float *)(v4 + 980), v5).n64_u64[0];
  FIELD_U32(a1, 1096) = FIELD_U32(v4, 1100);
  v8 = FIELD_F32(a1, 80);
  v9 = FIELD_F32(v4, 80);
  v10 = FIELD_F32(a1, 84);
  v11 = FIELD_F32(v4, 84);
  v12 = FIELD_F32(a1, 88);
  v13 = FIELD_F32(v4, 88);
  *(__n64 *)(a1 + 948) = v7;
  FIELD_U32(a1, 956) = v14;
  FIELD_U32(a1, 1112) = a2;
  FIELD_F32(a1, 1116) = v9 - v8;
  FIELD_F32(a1, 1120) = v11 - v10;
  FIELD_F32(a1, 1124) = v13 - v12;
  sub_601BA0F8(a1, 7, 0.0, 0.0);
  v15 = *(float **)(a1 + 1112);
  sub_601BA0F8(a1, 7, 0.0, 0.0);
  v16 = *(__int16 *)v15;
  v17 = sub_601C5EEC(a1);
  ((void (__fastcall *)(int, int, int, _DWORD, float, float, float, _DWORD, int))loc_60185F9C)(
    a1,
    a1 + 948,
    v16 * v17,
    *((__int16 *)v15 + 4),
    v15[1],
    v15[3] * 2.3,
    2.3 * v15[4],
    *((__int16 *)v15 + 5),
    a1 + 1116);
  FIELD_U32(a1, 1128) = 0;
  return 0;
}
