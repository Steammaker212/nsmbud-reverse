/* sub_601C2BE0
 * address: 0x601C2BE0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2BE0(int a1, int a2)
{
  int v4; // r0
  float v5; // s0
  float v6; // s6
  float v7; // s2
  float v8; // s8
  float v9; // s4
  float v10; // s10
  float *v11; // r6
  int v12; // r7
  int v13; // r0

  v4 = sub_601CF9C0(dword_60C8AEF0);
  FIELD_U32(a1, 1096) = FIELD_U32(v4, 1100);
  v5 = FIELD_F32(a1, 80);
  v6 = FIELD_F32(v4, 80);
  v7 = FIELD_F32(a1, 84);
  v8 = FIELD_F32(v4, 84);
  v9 = FIELD_F32(a1, 88);
  v10 = FIELD_F32(v4, 88);
  FIELD_F32(a1, 948) = v5;
  FIELD_F32(a1, 952) = v7;
  FIELD_F32(a1, 956) = v9;
  FIELD_U32(a1, 1112) = a2;
  FIELD_F32(a1, 1116) = v6 - v5;
  FIELD_F32(a1, 1120) = v8 - v7;
  FIELD_F32(a1, 1124) = v10 - v9;
  sub_601BA0F8(a1, 7, 0.0, 0.0);
  v11 = *(float **)(a1 + 1112);
  sub_601BA0F8(a1, 7, 0.0, 0.0);
  v12 = *(__int16 *)v11;
  v13 = sub_601C5EEC(a1);
  ((void (__fastcall *)(int, int, int, _DWORD, float, float, float, _DWORD, int))loc_60185F9C)(
    a1,
    a1 + 948,
    v12 * v13,
    *((__int16 *)v11 + 4),
    v11[1],
    v11[3] * 2.3,
    2.3 * v11[4],
    *((__int16 *)v11 + 5),
    a1 + 1116);
  FIELD_U32(a1, 1128) = 0;
  return 0;
}
