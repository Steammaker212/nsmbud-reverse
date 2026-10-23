/* Actor_puroperaburoku_build
 * address: 0x606BE7AC   size: 152   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_puroperaburoku_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1C58u);
  *(_DWORD *)v2 = off_60C1B7DC;
  sub_605C92C8((StateActor *)v2, a1, v2 + 6160, (void *)1);
  *(_DWORD *)v2 = off_60C1B7DC;
  FIELD_U32(v2, 6152) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6160));
  FIELD_U32(v2, 6160) = off_60BC30D8;
  sub_60021018((_DWORD *)(v2 + 6816));
  FIELD_U32(v2, 7196) = 0;
  FIELD_U32(v2, 7200) = 1065353216;
  return (_DWORD *)v2;
}
