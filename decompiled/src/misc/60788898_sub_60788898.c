/* sub_60788898
 * address: 0x60788898   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60788898(int a1, unsigned __int16 *a2)
{
  float *v2; // r2
  float v3; // s2
  float v4; // s4
  int v5; // r3
  unsigned int v6; // s0
  float result; // s0

  v2 = (float *)((char *)&unk_60B0C0DC + 8 * *((unsigned __int8 *)a2 + 11));
  v3 = *v2;
  v4 = v2[1];
  v5 = -a2[1];
  v6 = *a2;
  FIELD_U32(a1, 8) = 0;
  result = (float)v6 + v3;
  *(float *)a1 = result;
  FIELD_F32(a1, 4) = v4 + (float)v5;
  return result;
}
