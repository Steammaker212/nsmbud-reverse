/* BooCircle_ctor
 * address: 0x603B2268   size: 100   group: misc
 * sym: # BooCircle_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall BooCircle_ctor(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x19A8u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = BooCircle_vtable;
  MovementHandler__ctor((MovementHandler *)(v2 + 6104));
  memset((void *)(v2 + 6352), 0, 144);
  memset((void *)(v2 + 6500), 0, 68);
  return (MultiStateActor *)v2;
}
