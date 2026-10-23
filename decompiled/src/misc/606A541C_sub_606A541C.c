/* sub_606A541C
 * address: 0x606A541C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A541C(float *a1)
{
  float v1; // s0
  float v2; // s10
  float v3; // s2
  float v4; // s6
  float v5; // s4
  float v6; // s8
  int v7; // r4
  _DWORD v9[14]; // [sp+0h] [bp-38h] BYREF

  v1 = a1[143];
  v2 = a1[27];
  v3 = a1[144];
  v4 = a1[28];
  v5 = a1[145];
  v6 = a1[29];
  v9[0] = 1065353216;
  v9[1] = 0;
  v9[2] = 0;
  v9[4] = 0;
  v9[5] = 1065353216;
  v9[6] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 1065353216;
  v7 = (int)(a1 + 1698);
  *(float *)&v9[3] = v2 + v1;
  *(float *)&v9[7] = v4 + v3;
  *(float *)&v9[11] = v6 + v5;
  ((void (__fastcall *)(float *, _DWORD *, float))loc_60630830)(a1 + 1698, v9, 0.0);
  sub_60630B04(v7);
  return 1;
}
