/* sub_60153190
 * address: 0x60153190   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60153190(int a1, int a2)
{
  float result; // s0

  *(_DWORD *)a2 = FIELD_U32(a1, 8);
  result = (float)(*(float *)a1 + FIELD_F32(a1, 4)) * 0.5;
  FIELD_F32(a2, 4) = result;
  return result;
}
