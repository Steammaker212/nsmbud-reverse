/* sub_603F086C
 * address: 0x603F086C   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F086C(_BYTE *a1)
{
  int result; // r0
  _BYTE *v3; // r4

  if ( a1[5762] )
  {
    sub_604E29A8(a1 + 16);
    sub_604E1E10(a1 + 16);
  }
  if ( a1[11514] )
  {
    sub_604E29A8(a1 + 5768);
    sub_604E1E10(a1 + 5768);
  }
  if ( a1[17266] )
  {
    sub_604E29A8(a1 + 11520);
    sub_604E1E10(a1 + 11520);
  }
  if ( a1[23018] )
  {
    sub_604E29A8(a1 + 17272);
    sub_604E1E10(a1 + 17272);
  }
  if ( a1[28770] )
  {
    sub_604E29A8(a1 + 23024);
    sub_604E1E10(a1 + 23024);
  }
  result = (unsigned __int8)a1[34522];
  if ( a1[34522] )
  {
    v3 = a1 + 28776;
    sub_604E29A8(v3);
    return sub_604E1E10(v3);
  }
  return result;
}
