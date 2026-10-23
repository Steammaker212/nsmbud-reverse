/* Actor_rotate_buroku_atari_build
 * address: 0x606584C4   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_buroku_atari_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1AC8u);
  sub_606CA0DC((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C14648;
  RectCollider_ctor((RectCollider *)(v2 + 6152));
  FIELD_U32(v2, 6152) = off_60BC30D8;
  FIELD_U32(v2, 6848) = 0;
  FIELD_U8(v2, 6852) = 0;
  return v2;
}
