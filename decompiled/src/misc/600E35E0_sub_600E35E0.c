/* sub_600E35E0
 * address: 0x600E35E0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600E35E0(float *a1)
{
  __n64 v2; // kr00_8
  float v3; // s2
  float v4; // s16
  int v5; // r5
  float v6; // s0
  float v7; // s0
  float result; // s0

  sub_604183EC((int)(a1 + 1626));
  v2.n64_u64[0] = sub_600DBC58((__n64 **)&dword_60C84E90, a1[1630]).n64_u64[0];
  v4 = v3;
  v5 = *((unsigned __int8 *)a1 + 6532);
  (*(void (__fastcall **)(float *, float, float, float))(*(_DWORD *)a1 + 200))(a1, v2.n64_f32[0], v2.n64_f32[1], v3);
  if ( v5 )
  {
    a1[36] = v2.n64_f32[0] * v6;
    v7 = v2.n64_f32[1] * (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 200))(a1);
  }
  else
  {
    a1[36] = v2.n64_f32[1] * v6;
    v7 = v2.n64_f32[0] * (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 200))(a1);
  }
  a1[37] = v7;
  result = v4 * (*(float (__fastcall **)(float *))(*(_DWORD *)a1 + 200))(a1);
  a1[38] = result;
  return result;
}
