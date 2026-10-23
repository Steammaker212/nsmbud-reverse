/* sub_60801EC4
 * address: 0x60801EC4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801EC4(int a1, int a2)
{
  int v4; // r1
  float *v5; // r5
  float *v6; // r6

  sub_60800910((sead_IDisposer *)a1);
  *(_DWORD *)a1 = off_60C27E9C;
  sub_603EADB4((sead_IDisposer *)(a1 + 36));
  FIELD_U32(a1, 64) = 0;
  FIELD_U8(a1, 68) = 0;
  FIELD_U8(a1, 69) = 1;
  FIELD_U8(a1, 70) = 0;
  FIELD_U32(a1, 72) = 1008981771;
  v4 = FIELD_U32(a2, 8);
  v5 = *(float **)a2;
  v6 = *(float **)(a2 + 12);
  sub_608009D4(a1, v4);
  sub_608009AC((float *)a1);
  FIELD_F32(a1, 28) = (float)((float)(v6[11] + v6[12]) * 0.5) - (float)(FIELD_F32(a1, 20) * 0.5);
  FIELD_F32(a1, 32) = (float)((float)((float)(v6[13] + v6[14]) * 0.5) + 16.0) + (float)(FIELD_F32(a1, 24) * 0.5);
  sub_60800A24(a1, v5);
  sub_60800A5C(a1, (int)v5);
  return a1;
}
