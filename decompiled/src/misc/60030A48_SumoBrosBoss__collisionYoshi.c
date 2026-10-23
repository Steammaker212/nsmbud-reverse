/* SumoBrosBoss__collisionYoshi
 * address: 0x60030A48   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600250CC
// 
// Overridden by: None
int __fastcall SumoBrosBoss__collisionYoshi(int a1, int a2, int a3)
{
  int result; // r0

  result = FIELD_U32(a3, 64);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 1164))(result);
  return result;
}
