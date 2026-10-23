/* sub_601EABD0
 * address: 0x601EABD0   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601EABD0(int a1)
{
  _BOOL4 result; // r0

  if ( !FIELD_U8(a1, 61) || FIELD_U8(a1, 62) )
    return 0;
  result = 1;
  if ( FIELD_U8(dword_60CC6D78, 509) )
    return (FIELD_U8(dword_60CC6D78, 44) & 8) != 0;
  return result;
}
