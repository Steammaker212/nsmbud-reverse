/* Actor_kurosuke_build
 * address: 0x6028B7D8   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_kurosuke_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1918u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDE378;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U8(v2, 6348) = 0;
  memset((void *)(v2 + 6308), 0, 34);
  sub_602A8564(v2 + 6352, FIELD_U32(v2, 8));
  sub_602A40A0(v2 + 6388, FIELD_U32(v2, 8));
  return v2;
}
