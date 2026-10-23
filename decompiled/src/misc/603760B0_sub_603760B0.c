/* sub_603760B0
 * address: 0x603760B0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603760B0(int a1)
{
  float result; // s0

  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24) = 0x40000000;
  result = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 0.8;
  FIELD_F32(a1, 120) = result;
  FIELD_U32(a1, 11712) = 180;
  return result;
}
