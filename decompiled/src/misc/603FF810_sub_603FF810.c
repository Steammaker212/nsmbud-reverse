/* sub_603FF810
 * address: 0x603FF810   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603FF810(_BYTE *a1)
{
  _BOOL4 result; // r0

  if ( !a1[2689] )
    return 0;
  result = 1;
  if ( !a1[2699] && !a1[2691] && !a1[2702] && !a1[2701] )
    return a1[2690] != 0;
  return result;
}
