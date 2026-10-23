/* sub_60026050
 * address: 0x60026050   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_60026050()
{
  int result; // r0

  result = FIELD_U32(EnemyCounterMaybe_instance, 24);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 240))(result);
  return result;
}
