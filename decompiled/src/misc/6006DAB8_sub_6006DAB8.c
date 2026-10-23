/* sub_6006DAB8
 * address: 0x6006DAB8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6006DAB8(int a1)
{
  float result; // s0

  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  result = *(float *)&dword_60C817A8 + 2.0;
  FIELD_F32(a1, 124) = *(float *)&dword_60C817A8 + 2.0;
  FIELD_U32(a1, 100) = -1105618534;
  return result;
}
