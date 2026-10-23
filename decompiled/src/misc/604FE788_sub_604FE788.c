/* sub_604FE788
 * address: 0x604FE788   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FE788(int result, _DWORD *a2)
{
  if ( FIELD_U8(result, 3553) )
    return sub_60473B88((_DWORD *)(result + 4), a2, 0);
  return result;
}
