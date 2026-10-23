/* Actor_koinhebiparent_build
 * address: 0x606D7D24   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_koinhebiparent_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x31E0u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1E340;
  MovementHandler__ctor((MovementHandler *)(v2 + 6104));
  FIELD_U32(v2, 12756) = 0;
  return v2;
}
