/* sub_605425EC
 * address: 0x605425EC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605425EC(int result, _DWORD *a2)
{
  if ( !FIELD_U8(result, 3609) )
    return sub_60473B88((_DWORD *)(result + 60), a2, 0);
  return result;
}
