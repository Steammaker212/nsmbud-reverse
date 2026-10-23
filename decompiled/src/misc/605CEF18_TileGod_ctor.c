/* TileGod_ctor
 * address: 0x605CEF18   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall TileGod_ctor(ActorBuildInfo *a1)
{
  MultiStateActor *v2; // r5

  v2 = (MultiStateActor *)operator_new(0x1800u);
  MultiStateActor__ctor(v2, a1);
  FIELD_U32(v2, 0x0)._._.vtable = (int)TileGod_vtable;
  memset(&v2[1], 0, 33);
  return v2;
}
