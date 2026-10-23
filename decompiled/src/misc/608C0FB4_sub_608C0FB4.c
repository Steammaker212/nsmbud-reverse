/* sub_608C0FB4
 * address: 0x608C0FB4   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C0FB4(int result)
{
  if ( !FIELD_U32(result, 55004) )
    return sub_608BF9F8(result - 164);
  return result;
}
