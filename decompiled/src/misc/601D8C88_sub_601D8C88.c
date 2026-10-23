/* sub_601D8C88
 * address: 0x601D8C88   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601D8C88(int a1, int a2, int a3)
{
  unsigned int result; // r0

  switch ( a2 )
  {
    case 0:
    case 2:
    case 6:
      result = 1;
      if ( (unsigned int)(a3 - 31) >= 2 )
        goto LABEL_3;
      break;
    case 1:
      result = 1;
      if ( a3 != 31 && a3 != 54 )
        goto LABEL_3;
      break;
    case 3:
      if ( (unsigned int)(a3 - 31) >= 0x18 )
        goto LABEL_3;
      result = (0x800007u >> (a3 - 31)) & 1;
      break;
    case 4:
      result = 1;
      if ( (unsigned int)(a3 - 31) >= 3 )
        goto LABEL_3;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}
