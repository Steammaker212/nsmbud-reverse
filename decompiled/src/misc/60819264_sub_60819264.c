/* sub_60819264
 * address: 0x60819264   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60819264(int a1, int *a2)
{
  int result; // r0

  result = *a2;
  if ( !*a2 )
  {
    sub_603FF56C(dword_60C99E34);
    result = dword_60C99E68;
    if ( dword_60C99E68 )
      return sub_60401FEC(dword_60C99E68, (int)a2);
  }
  return result;
}
