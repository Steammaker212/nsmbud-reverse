/* sub_6020BEA0
 * address: 0x6020BEA0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6020BEA0(float *a1)
{
  float *v2; // r0
  float v3; // s10
  float v4; // s4
  float v5; // s2
  float v7[5]; // [sp+4h] [bp-14h] BYREF

  sub_6020ADB8((int)a1, (int)&unk_60BD8C84);
  v2 = (float *)sub_601CF9C0(dword_60C8AEF0);
  v3 = v2[22];
  v4 = a1[22];
  v5 = v2[21] - a1[21];
  v7[0] = v2[20] - a1[20];
  v7[1] = v5;
  v7[2] = v3 - v4;
  sub_601862E0((int)a1, v7);
  return sub_6020ABBC((int)a1);
}
