/* sub_6078B380
 * address: 0x6078B380   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6078B380()
{
  int v0; // r1
  int result; // r0
  int v2; // r1

  v0 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v0 = dword_60C99DEC + 16;
  if ( FIELD_U8(v0, 20) )
  {
    result = 999;
    if ( FIELD_S32(v0, 72) < 999 )
      result = FIELD_U32(v0, 72);
  }
  else
  {
    result = 999;
  }
  if ( FIELD_U8(v0, 92) && result > FIELD_U32(v0, 144) )
    result = FIELD_U32(v0, 144);
  if ( FIELD_U8(v0, 164) && result > FIELD_U32(v0, 216) )
    result = FIELD_U32(v0, 216);
  if ( FIELD_U8(v0, 236) )
  {
    v2 = FIELD_U32(v0, 288);
    if ( result > v2 )
      return v2;
  }
  return result;
}
