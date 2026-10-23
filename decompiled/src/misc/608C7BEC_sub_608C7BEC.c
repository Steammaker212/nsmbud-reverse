/* sub_608C7BEC
 * address: 0x608C7BEC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7BEC(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 181);
  if ( !result )
  {
    if ( FIELD_U32(a1, 16) != 4 )
    {
      if ( FIELD_U32(a1, 364) )
      {
        if ( !FIELD_U8(a1, 180) )
          sub_608C9C9C();
      }
      FIELD_U32(a1, 16) = 4;
    }
    FIELD_U8(a1, 176) = 0;
    return 0;
  }
  return result;
}
