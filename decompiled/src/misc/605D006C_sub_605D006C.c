/* sub_605D006C
 * address: 0x605D006C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D006C(int result)
{
  if ( FIELD_U8(result, 7312) )
    return ((int (__fastcall *)(int, int))loc_6069B070)(result + 7240, result + 108);
  return result;
}
