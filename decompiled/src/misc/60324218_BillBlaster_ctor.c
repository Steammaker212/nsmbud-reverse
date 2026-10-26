/* BillBlaster_ctor
 * address: 0x60324218   size: 100   group: misc
 * sym: # BillBlaster_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall BillBlaster_ctor(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1E08u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = BillBlaster_vtable;
  RectCollider_ctor((RectCollider *)(v2 + 6176));
  FIELD_U32(v2, 6176) = off_60BC30D8;
  memset((void *)(v2 + 6832), 0, 856);
  return (StateActor *)v2;
}
