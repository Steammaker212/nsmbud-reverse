/* sub_605097CC
 * address: 0x605097CC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605097CC(_DWORD *a1)
{
  float32x2_t v2; // d2
  float32x2_t v3; // d0
  float v4; // s0
  int v5; // r2
  int v6; // r5
  int v7; // r6

  sub_60473DE4(a1 + 10, 2u, &dword_60CA7C90, 0);
  v2.n64_u32[0] = 1176256502;
  *(_BYTE *)(a1[930] + 65) = -1;
  v3.n64_f32[0] = (float)*(int *)(FIELD_U32(dword_60CC6E04, 40) + 4 * a1[932] + 19584) / 100.0;
  v4 = vmin_f32(v3, v2).n64_f32[0];
  v5 = (int)(float)(v4 * 100.0);
  if ( (float)v5 != (float)(v4 * 100.0) )
    --v5;
  if ( (float)(v4 * 100.0) >= 0.0 )
    v5 = (int)(float)(v4 * 100.0);
  v6 = v5 % 100;
  v7 = (int)v4;
  if ( (float)(int)v4 != v4 )
    v7 = (int)v4 - 1;
  if ( v4 >= 0.0 )
    v7 = (int)v4;
  sub_60509668((int)a1, a1[928], v7, v5 % 100);
  return sub_60509668((int)a1, a1[929], v7, v6);
}
