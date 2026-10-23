/* sub_607FD80C
 * address: 0x607FD80C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FD80C(int a1, int a2)
{
  if ( !FIELD_U8(a1, 39) )
    return 1;
  if ( FIELD_U8(a2, 39) )
    return FIELD_U8(a1, 29) - FIELD_U8(a2, 29);
  return -1;
}
