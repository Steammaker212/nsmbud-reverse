/* sub_60369828
 * address: 0x60369828   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369828(int a1)
{
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
    --FIELD_U32(EnemyCounterMaybe_instance, 244);
  return 1;
}
