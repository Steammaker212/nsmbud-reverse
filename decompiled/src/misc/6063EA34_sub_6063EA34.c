/* sub_6063EA34
 * address: 0x6063EA34   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063EA34(int result)
{
  if ( FIELD_U8(EnemyCounterMaybe_instance, 928) == 15 )
  {
    FIELD_U8(result, 6160) = 1;
    FIELD_U32(result, 6656) = sub_606408A8;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60CB5770);
  }
  return result;
}
