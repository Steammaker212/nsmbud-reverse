/* Kanibo__vfDC
 * address: 0x6030FE98   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
int __fastcall Kanibo__vfDC(int a1)
{
  return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &Kanibo__StateID_Wait);
}
