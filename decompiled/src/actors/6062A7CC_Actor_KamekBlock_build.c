/* Actor_KamekBlock_build
 * address: 0x6062A7CC   size: 104   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_KamekBlock_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x1C68u);
  sub_605EBFE8(v2, a1);
  *(_DWORD *)v2 = off_60C12170;
  RectCollider_ctor((RectCollider *)(v2 + 6608));
  FIELD_U32(v2, 6608) = off_60BC30D8;
  FIELD_U8(v2, 7264) = 0;
  FIELD_U32(v2, 7268) = 0;
  return v2;
}
