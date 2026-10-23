/* sub_60007318
 * address: 0x60007318   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60007318(float *a1)
{
  return *a1 > (float)(FIELD_F32(AreaTask_intance, 1820) + 128.0)
      || (float)(FIELD_F32(AreaTask_intance, 1812) + -128.0) > a1[2]
      || a1[1] > (float)(FIELD_F32(AreaTask_intance, 1824) + 128.0)
      || (float)(FIELD_F32(AreaTask_intance, 1816) + -128.0) > a1[3];
}
