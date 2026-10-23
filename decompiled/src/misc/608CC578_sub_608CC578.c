/* sub_608CC578
 * address: 0x608CC578   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608CC578(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int result; // r0
  int *v5; // r0

  result = FIELD_U8(a1, 36);
  if ( result )
  {
    result = FIELD_U32(a1, 196);
    if ( result >= a2 && result <= a3 )
    {
      FIELD_U8(a1, 39) = 1;
      if ( FIELD_U8(a1, 278) )
      {
        v5 = sub_608C3C60();
        sub_608C411C((int)v5, a1 + 176);
        FIELD_U8(a1, 278) = 0;
      }
      result = FIELD_U8(a1, 37);
      if ( FIELD_U8(a1, 37) )
      {
        FIELD_U8(a1, 37) = 0;
        return 0;
      }
    }
  }
  return result;
}
