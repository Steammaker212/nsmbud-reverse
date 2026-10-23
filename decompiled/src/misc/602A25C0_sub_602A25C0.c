/* sub_602A25C0
 * address: 0x602A25C0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602A25C0(int a1, float a2)
{
  return (float)((float)(FIELD_F32(a1, 120) + a2) - FIELD_F32(a1, 128)) > FIELD_F32(dword_60CC6484, 124);
}
