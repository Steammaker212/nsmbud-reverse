/* sub_603FF56C
 * address: 0x603FF56C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF56C(int result)
{
  if ( FIELD_U8(result, 7765) )
  {
    result += 16;
    if ( FIELD_U8(result, 7749) )
      return sub_60473B88(result + 40);
  }
  return result;
}
