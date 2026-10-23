/* sub_604A3F98
 * address: 0x604A3F98   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3F98(int a1)
{
  int result; // r0

  result = dword_60C99E24;
  if ( dword_60C99E24 )
  {
    result = sub_603FF0A8(dword_60C99E24, a1);
    if ( result )
      FIELD_U8(result, 40098) = 1;
  }
  return result;
}
