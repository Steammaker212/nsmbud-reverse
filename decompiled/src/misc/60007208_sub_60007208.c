/* sub_60007208
 * address: 0x60007208   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60007208(float *a1, float *a2)
{
  return *a1 > (float)(FIELD_F32(dword_60CC6484, 80) + a2[3])
      || (float)(FIELD_F32(dword_60CC6484, 72) - a2[2]) > a1[2]
      || a1[1] > (float)(FIELD_F32(dword_60CC6484, 84) + *a2)
      || (float)(FIELD_F32(dword_60CC6484, 76) - a2[1]) > a1[3];
}
