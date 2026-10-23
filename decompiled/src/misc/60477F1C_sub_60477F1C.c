/* sub_60477F1C
 * address: 0x60477F1C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60477F1C(int a1)
{
  return *(float *)(FIELD_U32(a1, 112) + 16) == 0.0 && *(float *)(FIELD_U32(a1, 128) + 16) == 0.0;
}
