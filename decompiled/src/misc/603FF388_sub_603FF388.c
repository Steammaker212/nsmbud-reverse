/* sub_603FF388
 * address: 0x603FF388   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF388(int a1)
{
  int result; // r0

  result = a1 + 615772;
  if ( FIELD_U8(result, 22503) )
    return sub_605588AC(result + 9296);
  return result;
}
