/* sub_608BB200
 * address: 0x608BB200   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BB200(int a1)
{
  int result; // r0
  int i; // r5
  int v4; // r0

  result = FIELD_U8(a1, 5);
  if ( result )
  {
    for ( i = FIELD_U32(a1, 380); i; i = FIELD_U32(i, 368) )
    {
      v4 = FIELD_U32(i, 332);
      if ( v4 >= 1 )
        FIELD_U32(i, 332) = --v4;
      if ( !v4 && FIELD_U32(i, 16) != 4 && !FIELD_U8(a1, 202) )
        sub_608C7BEC(i);
      result = FIELD_U8(i, 179);
      if ( !FIELD_U8(i, 179) )
        result = sub_608C780C(i, 1);
    }
  }
  return result;
}
