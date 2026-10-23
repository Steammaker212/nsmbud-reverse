/* sub_6002336C
 * address: 0x6002336C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6002336C(int a1, int a2)
{
  if ( a2 <= 0 )
  {
    FIELD_U32(a1, 28) = 0;
    return sub_60023294(a1);
  }
  else if ( FIELD_U32(a1, 28) < a2 )
  {
    FIELD_U32(a1, 28) = a2;
  }
  return a1;
}
