/* FireSnake__onDelete
 * address: 0x602AD518   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003444
// 
// Overridden by: None
int __fastcall FireSnake__onDelete(int a1)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return 1;
}
