/* ShellEnemy__vf29C
 * address: 0x603A35FC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60272DE8
// 
// Overridden by: None
int __fastcall ShellEnemy__vf29C(int a1)
{
  CarryableEnemy__vf29C(a1);
  FIELD_U16(a1, 6384) = 0;
  return 6384;
}
