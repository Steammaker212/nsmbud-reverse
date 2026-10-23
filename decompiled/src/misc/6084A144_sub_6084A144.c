/* sub_6084A144
 * address: 0x6084A144   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084A144(int result)
{
  if ( FIELD_S32(result, 112) >= 1 )
    FIELD_U32(result, 112) = 0;
  return result;
}
