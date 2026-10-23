/* sub_608A21F0
 * address: 0x608A21F0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608A21F0(__int64 *a1, int a2, int a3, int a4, int a5, int a6)
{
  float v8; // s0
  float v9; // s6
  float v10; // s4
  __int64 v11; // d4
  __int64 v12; // d5
  float result; // s0

  ((void (*)(void))loc_608A01F0)();
  v8 = (float)FIELD_U32(a3, 144);
  v9 = *(float *)(FIELD_U32(a3, 136) + 2144);
  v10 = FIELD_F32(a6, 148);
  FIELD_U32(a3, 144) = 1103515245 * FIELD_U32(a3, 144) + 12345;
  v11 = *a1;
  v12 = a1[1];
  result = (float)((float)(v8 * 2.3283e-10) + (float)(v8 * 2.3283e-10)) + -1.0;
  *((float *)&v11 + 1) = (float)(v9 * v10) * result;
  *a1 = v11;
  a1[1] = v12;
  return result;
}
