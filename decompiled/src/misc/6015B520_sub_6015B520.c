/* sub_6015B520
 * address: 0x6015B520   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6015B520(int *result)
{
  int v1; // r1

  if ( dword_60C995D0 )
  {
    if ( !FIELD_U32(dword_60C995D0, 32) )
    {
      for ( result = (int *)result[5]; result; FIELD_U8(v1, 110) &= ~2u )
      {
        v1 = *result;
        result = (int *)result[1];
      }
    }
  }
  return result;
}
