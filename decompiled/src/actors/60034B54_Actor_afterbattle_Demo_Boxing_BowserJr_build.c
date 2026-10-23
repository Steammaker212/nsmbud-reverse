/* Actor_afterbattle_Demo_Boxing_BowserJr_build
 * address: 0x60034B54   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_afterbattle_Demo_Boxing_BowserJr_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1EF0u);
  BowserJrBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = &off_60BC27E8;
  FIELD_U32(v2, 7604) = &off_60BC2CA0;
  FIELD_U32(v2, 7608) = v2;
  memset((void *)(v2 + 7612), 0, 52);
  memset((void *)(v2 + 7712), 0, 77);
  memset(v2 + 7792, 0, 128);
  return v2;
}
