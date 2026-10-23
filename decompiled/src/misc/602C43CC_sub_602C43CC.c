/* sub_602C43CC
 * address: 0x602C43CC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602C43CC(int a1, int a2)
{
  float result; // s0

  FIELD_U32(a1, 108) = *(_DWORD *)a2;
  FIELD_U32(a1, 112) = FIELD_U32(a2, 4);
  result = FIELD_F32(a2, 8) + (float)((float)(FIELD_U8(a1, 6331) + 1) * -10.0);
  FIELD_F32(a1, 116) = result;
  return result;
}
