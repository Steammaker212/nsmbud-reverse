/* sub_6090BED8
 * address: 0x6090BED8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090BED8(int a1, float *a2, float *a3)
{
  float *v6; // r5
  float v7; // s4
  float v8; // s2
  float v9; // s6
  float v10; // s0
  float result; // s0

  if ( FIELD_U8(a1, 4) )
  {
    v6 = (float *)(a1 + 8);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a1 + 8);
    FIELD_U16(a1, 4) = 256;
LABEL_4:
    (*(void (__fastcall **)(int, int, float *, _DWORD))(*(_DWORD *)a1 + 48))(a1, a1 + 72, v6, FIELD_U32(a1, 136));
    FIELD_U8(a1, 5) = 0;
    goto LABEL_5;
  }
  v6 = (float *)(a1 + 8);
  if ( FIELD_U8(a1, 5) )
    goto LABEL_4;
LABEL_5:
  v7 = a3[1];
  v8 = *a3;
  v9 = a3[2];
  v10 = 1.0 / (float)(v6[15] + (float)((float)((float)(v7 * v6[13]) + (float)(*a3 * v6[12])) + (float)(v9 * v6[14])));
  *a2 = v10 * (float)(v6[3] + (float)((float)((float)(v7 * v6[1]) + (float)(*a3 * *v6)) + (float)(v9 * v6[2])));
  a2[1] = v10 * (float)(v6[7] + (float)((float)((float)(v7 * v6[5]) + (float)(v8 * v6[4])) + (float)(v9 * v6[6])));
  result = v10 * (float)(v6[11] + (float)((float)((float)(v7 * v6[9]) + (float)(v8 * v6[8])) + (float)(v9 * v6[10])));
  a2[2] = result;
  return result;
}
