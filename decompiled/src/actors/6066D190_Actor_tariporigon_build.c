/* Actor_tariporigon_build
 * address: 0x6066D190   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tariporigon_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AD0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C155FC;
  sub_606BB7B8(v2 + 6100);
  FIELD_U32(v2, 6196) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6200));
  FIELD_U32(v2, 6200) = off_60BC30D8;
  FIELD_U32(v2, 6856) = 0;
  FIELD_U8(v2, 6860) = 0;
  return v2;
}
