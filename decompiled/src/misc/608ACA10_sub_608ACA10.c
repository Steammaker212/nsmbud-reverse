/* sub_608ACA10
 * address: 0x608ACA10   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACA10(int result, int a2, float a3)
{
  int v5; // r5

  v5 = result;
  if ( a2 )
  {
    if ( a2 > 3 )
    {
      result = FIELD_U32(result, 84);
      if ( result )
      {
        result = sub_608B0F28();
        if ( result == 1 )
          return sub_608B0F38(FIELD_U32(v5, 84), a2, a3);
      }
    }
    else
    {
      result += 4 * a2;
      FIELD_F32(result, 68) = a3;
    }
  }
  else
  {
    FIELD_F32(result, 68) = a3;
  }
  return result;
}
