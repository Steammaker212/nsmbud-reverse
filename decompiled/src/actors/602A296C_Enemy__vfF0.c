/* Enemy__vfF0
 * address: 0x602A296C   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall Enemy__vfF0(Enemy *a1, bool *unk, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  return FIELD_U32(acOther, 0x74).category == 27
      && (*(int (__fastcall **)(Enemy *, bool *, ActiveCollider *))(FIELD_U32(a1, 0x0)._._._.vtable + 0x158))(a1, unk, acSelf) != 0;
}
