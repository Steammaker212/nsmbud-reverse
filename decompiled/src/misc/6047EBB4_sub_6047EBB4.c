/* sub_6047EBB4
 * address: 0x6047EBB4   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047EBB4(int result, int a2)
{
  if ( !FIELD_U32(result, 8) )
    FIELD_U32(result, 32) = a2;
  return result;
}
