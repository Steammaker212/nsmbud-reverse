/* Actor__removeChild
 * address: 0x60002E2C   size: 48   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Actor__removeChild(Actor *this, Actor *child)
{
  sead__ListNode__erase((char *)child + FIELD_U32(this, 0x2C));
  --FIELD_U32(this, 0x28);
  FIELD_U32(child, 0x38) = 0;
}
