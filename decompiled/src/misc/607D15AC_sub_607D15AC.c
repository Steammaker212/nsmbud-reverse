/* sub_607D15AC
 * address: 0x607D15AC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D15AC(int result, int a2)
{
  if ( a2 )
  {
    FIELD_U32(result, 11432) = 1;
    FIELD_U32(result, 11444) = a2;
  }
  return result;
}
