/* sub_604A4C68
 * address: 0x604A4C68   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A4C68(int a1)
{
  int v1; // r4
  int v2; // r0

  v1 = 0;
  if ( dword_60C99E24 )
  {
    v2 = sub_603FF0A8(dword_60C99E24, a1);
    if ( v2 )
      return 9 * FIELD_U32(v2, 40080) + FIELD_U32(v2, 40088);
  }
  return v1;
}
