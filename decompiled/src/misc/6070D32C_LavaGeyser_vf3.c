/* LavaGeyser_vf3
 * address: 0x6070D32C   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall LavaGeyser_vf3(int a1)
{
  Actor *v1; // r0

  v1 = LavaGeyser_vf2(a1);
  operator_delete(v1);
}
