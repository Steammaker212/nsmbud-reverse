/* Actor_goruringu_build
 * address: 0x60615E9C   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_goruringu_build(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r5

  v2 = (MultiStateActor *)operator_new(0x1810u);
  MultiStateActor__ctor(v2, a1);
  FIELD_U32(v2, 0x0) = (int)off_60C100C0;
  memset(&v2[1]._._._.id, 0, 48);
  return v2;
}
