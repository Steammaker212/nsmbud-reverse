/* ActiveCollider_init2
 * address: 0x60158EBC   size: 32   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActiveCollider_init2(
        ActiveCollider *this,
        StateActor *owner,
        ActiveColliderInfo *info,
        unsigned __int8 *r3_0,
        int unk)
{
  int result; // r0

  ActiveCollider__init(this, &FIELD_U32(owner, 0x0), info, unk);
  result = *r3_0;
  FIELD_U8(this, 0x6C) = result;
  return result;
}
