/* sub_6040994C
 * address: 0x6040994C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6040994C(unsigned int result)
{
  _BYTE *v1; // r1
  char v2; // t1

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && FIELD_U8(result, 6476) == 8 )
  {
    v2 = FIELD_U8(result, 6479);
    FIELD_U8(result, 6479) = v2 + 1;
    result = (unsigned __int8)(v2 + 1);
    if ( result >= 3 )
    {
      *v1 = 3;
      return 3;
    }
  }
  return result;
}
