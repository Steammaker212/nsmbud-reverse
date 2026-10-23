/* sub_60519968
 * address: 0x60519968   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60519968(int result, _DWORD *a2)
{
  if ( FIELD_U8(result, 18300) )
    return sub_60473B88((_DWORD *)(result + 36), a2, 0);
  return result;
}
