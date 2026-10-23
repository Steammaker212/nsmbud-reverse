/* sub_609311F8
 * address: 0x609311F8   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609311F8(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s0
  float v5; // s6
  float v6; // s8
  float v7; // s10
  float v8; // s12
  float v9; // s4
  float v10; // s5
  float v11; // s6
  float v12; // s3
  float v13; // s14
  float v14; // s0

  sub_6092DC18(a1 - 816);
  v2 = *(float *)(a1 - 400);
  v3 = sinf(v2);
  v4 = cosf(v2);
  v5 = *(float *)(a1 - 420);
  v6 = *(float *)(a1 - 416);
  v7 = *(float *)(a1 - 440);
  v8 = *(float *)(a1 - 436);
  v9 = v4 * 0.0;
  v10 = v4 * v5;
  v11 = v3 * v5;
  v12 = (float)(v3 * 0.0) + (float)(v4 * 0.0);
  *(float *)(a1 - 60) = v10;
  v13 = (float)((float)(v4 * 0.0) - v3) * v6;
  v14 = (float)((float)(v3 * 0.0) + v4) * v6;
  *(float *)(a1 - 56) = v13;
  *(float *)(a1 - 52) = (float)((float)((float)(v13 * v8) + (float)(v10 * v7)) + (float)((float)(v12 * 0.0) * 0.0))
                      + 0.0;
  *(_DWORD *)(a1 - 48) = 0;
  *(_DWORD *)(a1 - 32) = 0;
  *(float *)(a1 - 44) = v11;
  *(float *)(a1 - 40) = v14;
  *(float *)(a1 - 36) = (float)((float)((float)(v14 * v8) + (float)(v11 * v7))
                              + (float)((float)((float)((float)(v3 * 0.0) - v9) * 0.0) * 0.0))
                      + 0.0;
  return sub_60938F1C(a1 - 848, 0);
}
