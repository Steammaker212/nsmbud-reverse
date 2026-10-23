/* sub_60777478
 * address: 0x60777478   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60777478(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U32(a1, 52);
  switch ( result )
  {
    case 0:
    case 1:
      FIELD_U8(a1, 461) = result != 0;
      sub_6077A820();
      result = 2;
      goto LABEL_12;
    case 2:
      result = sub_6077A064(a1, 1);
      if ( result != 1 )
        return result;
      result = 3;
LABEL_12:
      FIELD_U32(a1, 52) = result;
      return result;
    case 4:
      if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
        sub_603FBAB8(dword_60C99DD4);
      if ( FIELD_U8(a1, 461) )
        v3 = 6;
      else
        v3 = 2;
      sub_6077A740(FIELD_U8(a1, 461), v3);
      result = 5;
      goto LABEL_12;
    case 6:
      sub_6077A740(result, 3);
      result = 7;
      goto LABEL_12;
    default:
      return result;
  }
}
