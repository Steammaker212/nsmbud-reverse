/* sub_6052DC30
 * address: 0x6052DC30   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DC30(int result, _DWORD *a2)
{
  if ( FIELD_U8(result, 56) )
    return sub_60473B88((_DWORD *)(result + 72), a2, 0);
  return result;
}
