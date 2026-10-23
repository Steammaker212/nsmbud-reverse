/* FireSnake__collisionIceball
 * address: 0x602AD780   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
int __fastcall FireSnake__collisionIceball(int a1, int a2, int a3)
{
  unsigned int v4; // r3

  v4 = *(char *)(FIELD_U32(a3, 64) + 84);
  if ( v4 <= 3 )
    sub_60022540(dword_60C7F52C, a1 + 108, 1u, v4, 1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C90B30);
  return 1;
}
