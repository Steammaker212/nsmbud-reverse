/* sub_6069723C
 * address: 0x6069723C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069723C(int a1, _BYTE *a2)
{
  int result; // r0
  unsigned __int8 *v4; // r6
  unsigned __int8 *v5; // r6

  *a2 = 0;
  switch ( FIELD_U8(a1, 6137) )
  {
    case 0:
      result = sub_606D4BD4(FIELD_U8(a1, 6138));
      break;
    case 1:
      result = sub_606D4ABC(FIELD_U8(a1, 6138));
      break;
    case 2:
      v4 = (unsigned __int8 *)(a1 + 6138);
      result = sub_606D4150(FIELD_U8(a1, 6138));
      if ( result )
      {
        *a2 = 0;
      }
      else
      {
        result = sub_606D4268(*v4);
        if ( !result )
          goto LABEL_10;
        *a2 = 1;
      }
      break;
    case 3:
      v5 = (unsigned __int8 *)(a1 + 6138);
      if ( sub_606D41DC(FIELD_U8(a1, 6138)) )
        *a2 = 0;
      if ( sub_606D42F4(*v5) )
        *a2 = 1;
      goto LABEL_10;
    default:
LABEL_10:
      result = 0;
      break;
  }
  return result;
}
