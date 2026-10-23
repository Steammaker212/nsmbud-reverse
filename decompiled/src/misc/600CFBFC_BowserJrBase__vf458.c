/* BowserJrBase__vf458
 * address: 0x600CFBFC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BowserJrBase__vf458(int a1)
{
  int result; // r0

  *(_DWORD *)(FIELD_U32(a1, 7104) + 24) = 0;
  result = FIELD_U32(a1, 7104);
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 28) |= 2u;
  return result;
}
