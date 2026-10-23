/* sub_608F4D40
 * address: 0x608F4D40   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4D40(int result, int a2, float *a3)
{
  float v3; // s0
  float v4; // s2
  float v5; // s4
  float v6; // s6

  v3 = *a3;
  v4 = a3[1];
  v5 = FIELD_F32(a2, 4);
  v6 = *(float *)a2;
  FIELD_U32(result, 8) = FIELD_U32(a2, 8);
  *(float *)result = v6 + (float)(v3 * 0.5);
  FIELD_F32(result, 4) = v5 + (float)(v4 * 0.5);
  FIELD_F32(result, 12) = *a3;
  FIELD_F32(result, 16) = a3[1];
  return result;
}
