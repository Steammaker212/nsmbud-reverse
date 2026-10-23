/* Actor_kira_build
 * address: 0x6030B8E0   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kira_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1DC0u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE97B4;
  RectCollider_ctor((RectCollider *)(v2 + 6304));
  FIELD_U32(v2, 6304) = off_60BC30D8;
  memset((void *)(v2 + 6992), 0, 617);
  return v2;
}
