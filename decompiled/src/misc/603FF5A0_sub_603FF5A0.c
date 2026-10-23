/* sub_603FF5A0
 * address: 0x603FF5A0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF5A0(int a1, int a2, int a3)
{
  FIELD_U8(a1, 7776) = 1;
  FIELD_U32(a1, 7772) = a3;
  sub_6050120C(a1 + 16);
  FIELD_U8(a1, 4647) = 0;
  return 4647;
}
