/* sub_6071F0DC
 * address: 0x6071F0DC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071F0DC(int a1, _DWORD *a2)
{
  float *v4; // r6
  float v5; // s16
  float v6; // s0
  float v8[49]; // [sp+4h] [bp-C4h] BYREF

  sub_6090B260(a2[3], a2[10]);
  sub_6090E560(a2[8], a2[10], a2[3]);
  v4 = (float *)a2[7];
  v5 = (*(float (__fastcall **)(float *))(*(_DWORD *)v4 + 16))(v4);
  v6 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)v4 + 20))(v4, v5);
  sub_6090C77C(v8, v5, v6, -v4[39], -v4[40], v4[41], v4[42]);
  sub_604157F4((_DWORD *)(a1 + 10224), a2[10], 1, v8, FIELD_U32(a1, 6632));
  return nullsub_113(v8);
}
