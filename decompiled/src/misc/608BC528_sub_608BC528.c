/* sub_608BC528
 * address: 0x608BC528   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_608BC528(int a1)
{
  void *result; // r0
  unsigned __int16 v3; // r6
  void *v4; // r5
  int v5; // r7
  char v6; // r4
  int v7; // r1
  float v8; // s0
  int v9; // r0
  int v10; // r3

  result = sub_608C3B10();
  v3 = FIELD_U16(a1, 572);
  v4 = result;
  v5 = 0;
  v6 = 0;
  do
  {
    if ( (v3 & 1) != 0 )
    {
      v7 = sub_608C2698(v4, 36, 1);
      FIELD_U32(v7, 4) = 56;
      FIELD_U32(v7, 16) = a1 + 640;
      FIELD_U32(v7, 20) = 1 << v6;
      v8 = *(float *)(a1 + v5 + 448);
      v9 = *(_DWORD *)(a1 + v5 + 452);
      v10 = *(_DWORD *)(a1 + v5 + 456);
      if ( v10 < v9 )
        v8 = *(float *)(a1 + v5 + 444)
           + (float)((float)((float)v10 * (float)(v8 - *(float *)(a1 + v5 + 444))) / (float)v9);
      FIELD_F32(v7, 24) = v8;
      result = (void *)sub_608C2C1C(v4);
    }
    v5 += 16;
    v3 >>= 1;
    ++v6;
  }
  while ( v5 != 128 );
  return result;
}
