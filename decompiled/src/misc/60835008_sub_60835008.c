/* sub_60835008
 * address: 0x60835008   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60835008()
{
  int result; // r0
  _BYTE *v1; // r0

  if ( dword_60CA146C && FIELD_U8(dword_60CA146C, 279732) )
  {
    result = FIELD_U32(dword_60CA146C, 279736);
  }
  else if ( dword_60CA059C && FIELD_U8(dword_60CA059C, 146856) )
  {
    result = FIELD_U32(dword_60CA059C, 146864);
  }
  else
  {
    v1 = (_BYTE *)(dword_60C99DD4 + 272);
    if ( !dword_60C99DD4 )
      v1 = (_BYTE *)(dword_60C99DEC + 16);
    result = sub_603FD0B4(v1);
  }
  if ( result != 1 )
    return 0;
  return result;
}
