/* Bowser__dtor_C782C
 * address: 0x600C782C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600263A8
// 
// Overridden by: None
void __fastcall Bowser__dtor_C782C(int a1)
{
  Actor *v1; // r0

  v1 = Bowser__dtor(a1);
  operator_delete(v1);
}
