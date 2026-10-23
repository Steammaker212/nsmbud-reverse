/* sub_608BC76C
 * address: 0x608BC76C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC76C(int a1)
{
  if ( !FIELD_U8(a1, 188) )
    return 0;
  if ( FIELD_U8(a1, 676) )
    return FIELD_U32(a1, 832);
  return -1;
}
