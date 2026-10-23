/* sub_6030D9D0
 * address: 0x6030D9D0   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030D9D0(int result, unsigned int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r2

  v2 = a2;
  if ( a2 >= 8 )
    v2 = 0;
  v3 = result + v2;
  if ( FIELD_U8(v3, 7592) != 255 )
  {
    if ( FIELD_U8(v3, 7592) )
    {
      return sub_6030DC78();
    }
    else
    {
      FIELD_U8(v3, 7568) = 32;
      return 7568;
    }
  }
  return result;
}
