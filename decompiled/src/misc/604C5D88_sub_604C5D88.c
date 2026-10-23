/* sub_604C5D88
 * address: 0x604C5D88   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C5D88(int result, _DWORD *a2)
{
  if ( FIELD_U8(result, 14168) )
    return sub_60473B88((_DWORD *)(result + 48), a2, 0);
  return result;
}
