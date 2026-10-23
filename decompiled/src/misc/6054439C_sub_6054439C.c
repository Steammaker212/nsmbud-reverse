/* sub_6054439C
 * address: 0x6054439C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054439C(int result)
{
  int v1; // r1

  v1 = dword_60C89E18;
  FIELD_U8(dword_60C89E18, 299212) = 1;
  FIELD_U8(v1, 299216) = 1;
  FIELD_U8(result, 33503) = 1;
  return result;
}
