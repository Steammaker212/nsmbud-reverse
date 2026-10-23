/* sub_604B7F5C
 * address: 0x604B7F5C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B7F5C(int result)
{
  if ( FIELD_U8(result, 3721) )
    return sub_60473B58((_DWORD *)(result + 4), FIELD_U32(result, 3716), 0);
  return result;
}
