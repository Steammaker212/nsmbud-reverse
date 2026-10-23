/* Enemy__vfE8
 * address: 0x602A2674   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
bool __fastcall Enemy__vfE8(Enemy *this, ActiveCollider *acSelf, ActiveCollider *acOther)
{
  return FIELD_U32(acOther, 0x8C) == 9
      && (*(int (__fastcall **)(Enemy *, ActiveCollider *))(FIELD_U32(this, 0x0) + 0x138))(this, acSelf) != 0;
}
