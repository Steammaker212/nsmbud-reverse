/* sub_603877D4
 * address: 0x603877D4   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603877D4(float *a1, int a2, float a3)
{
  float *v4; // r0
  float v5; // s4
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1

  *((_DWORD *)a1 + 29) = a2;
  v4 = *((float **)a1 + 109);
  a1[18] = v4[27];
  a1[19] = v4[28];
  a1[20] = v4[29];
  v5 = v4[28];
  v6 = 0;
  a1[19] = v5 - (float)((float)((float)((float)a2 * 16.0) + 4.0) * a3);
  a1[21] = 0.0;
  if ( a3 > 0.0 )
    v6 = 0x80000000;
  *((_DWORD *)a1 + 23) = v6;
  v7 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 8))(a1);
  v8 = 0x10000000;
  if ( !v7 )
    v8 = dword_60AF2354[((unsigned __int8)*((_DWORD *)a1 + 28) + 3) & 3];
  *((_DWORD *)a1 + 22) = v8;
  a1[24] = 1.0;
  a1[25] = 1.0;
  a1[26] = 1.0;
  return 1065353216;
}
