/* sub_60023FA8
 * address: 0x60023FA8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60023FA8(int a1)
{
  int result; // r0

  result = dword_60C7F558;
  if ( dword_60C7F558 )
  {
    if ( !dword_60CC6484 || (result = sub_607FCA54()) == 0 )
    {
      if ( !dword_60CC6D78 )
        return sub_6002336C(dword_60C7F558, a1);
      if ( !FIELD_U8(dword_60CC6D78, 109032) )
        return sub_6002336C(dword_60C7F558, a1);
      result = FIELD_U32(dword_60C7F558, 40);
      if ( result != 17 )
        return sub_6002336C(dword_60C7F558, a1);
    }
  }
  return result;
}
