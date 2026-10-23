/* Actor_sachitopido_2_build
 * address: 0x603C0388   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_sachitopido_2_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x18D8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BF677C;
  FIELD_U32(v2, 6336) = 0;
  FIELD_U8(v2, 6340) = 0;
  memset((void *)(v2 + 6300), 0, 34);
  FIELD_U8(v2, 6356) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6348) = 0;
  return v2;
}
