/* sub_603FF584
 * address: 0x603FF584   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF584(int a1)
{
  int result; // r0

  FIELD_U32(a1, 7772) = 0;
  FIELD_U8(a1, 7776) = 0;
  result = a1 + 16;
  FIELD_U16(result, 7748) = 0;
  return result;
}
