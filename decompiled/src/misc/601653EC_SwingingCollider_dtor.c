/* SwingingCollider_dtor
 * address: 0x601653EC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SwingingCollider_dtor(ColliderBase *a1)
{
  FIELD_U32(a1, 0x0) = (int)SwingingCollider_vtable;
  (*(void (__fastcall **)(int *))(a1[1]._.vtable + 16))(&a1[1]._.vtable);
  return ColliderBase_dtor(a1);
}
