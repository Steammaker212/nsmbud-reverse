/* sub_60032608
 * address: 0x60032608   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60032608(int result)
{
  if ( FIELD_U8(dword_60C99DD4, 849) == 7 )
    FIELD_U8(result, 6121) = 1;
  return result;
}
