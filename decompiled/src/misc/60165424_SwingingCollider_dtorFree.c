/* SwingingCollider_dtorFree
 * address: 0x60165424   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SwingingCollider_dtorFree(ColliderBase *a1)
{
  _DWORD *v2; // r0

  FIELD_U32(a1, 0x0).vtable = (int)SwingingCollider_vtable;
  (*(void (__fastcall **)(int *))(a1[1]._.vtable + 16))(&a1[1]._.vtable);
  v2 = ColliderBase_dtor(a1);
  operator_delete(v2);
}
