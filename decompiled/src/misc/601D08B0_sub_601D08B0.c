/* sub_601D08B0
 * address: 0x601D08B0   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_601D08B0()
{
  int result; // r0

  if ( FIELD_U8(dword_60C99DEC, 36) )
    result = FIELD_U32(dword_60C99DEC, 48) == 5;
  else
    result = 0;
  if ( FIELD_U8(dword_60C99DEC, 108) )
    result |= FIELD_U32(dword_60C99DEC, 120) == 5;
  if ( FIELD_U8(dword_60C99DEC, 180) )
    result |= FIELD_U32(dword_60C99DEC, 192) == 5;
  if ( FIELD_U8(dword_60C99DEC, 252) )
    return result | (FIELD_U32(dword_60C99DEC, 264) == 5);
  return result;
}
