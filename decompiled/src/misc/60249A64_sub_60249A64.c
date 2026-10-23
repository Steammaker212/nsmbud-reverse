/* sub_60249A64
 * address: 0x60249A64   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60249A64(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int result; // r0

  result = Enemy__processCollision(a1, a2, a3, 0);
  if ( result != 2 )
    return (*(int (__fastcall **)(Enemy *, int *))(FIELD_U32(a1, 0x0)._._._.vtable + 192))(a1, &dword_60C8DCAC);
  return result;
}
