/* sub_60407418
 * address: 0x60407418   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60407418()
{
  int result; // r0

  result = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    result = dword_60C99DEC + 16;
  if ( FIELD_U8(result, 20) )
    FIELD_U32(result, 28) = 0;
  if ( FIELD_U8(result, 92) )
    FIELD_U32(result, 100) = 0;
  if ( FIELD_U8(result, 164) )
    FIELD_U32(result, 172) = 0;
  if ( FIELD_U8(result, 236) )
    FIELD_U32(result, 244) = 0;
  return result;
}
