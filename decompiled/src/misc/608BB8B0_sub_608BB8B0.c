/* sub_608BB8B0
 * address: 0x608BB8B0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB8B0(int result, int a2)
{
  int i; // r5

  for ( i = FIELD_U32(result, 380); i; i = FIELD_U32(i, 368) )
  {
    result = FIELD_U8(i, 177);
    if ( FIELD_U8(i, 177) )
    {
      result = FIELD_U8(i, 176);
      if ( FIELD_U8(i, 176) )
        result = 1;
      if ( result != a2 )
      {
        FIELD_U8(i, 176) = a2;
        result = sub_608C9520(FIELD_U32(i, 364), a2);
      }
    }
  }
  return result;
}
