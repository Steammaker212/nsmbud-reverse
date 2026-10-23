/* sub_604A3BD4
 * address: 0x604A3BD4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3BD4(int a1)
{
  int v2; // r0

  sub_604A6A20(a1, 0, 1.0);
  if ( dword_60C99E24 )
  {
    v2 = sub_603FF0A8(dword_60C99E24, a1);
    if ( v2 )
    {
      FIELD_U32(v2, 40108) = FIELD_U32(a1, 20456);
      FIELD_U8(v2, 40096) = 1;
      FIELD_U8(v2, 40101) = 0;
      FIELD_U8(v2, 40102) = 0;
      FIELD_U8(v2, 40099) = 1;
    }
  }
  FIELD_U8(a1, 20547) = 1;
  return 20547;
}
