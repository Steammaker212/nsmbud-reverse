/* FireballBase_onDelete
 * address: 0x60136184   size: 44   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FireballBase_onDelete(FireballBase *a1)
{
  if ( !FIELD_U8(a1, 0x1860) )
    (*(void (__fastcall **)(FireballBase *))(FIELD_U32(a1, 0x0)._._._.vtable + 296))(a1);
  return 1;
}
