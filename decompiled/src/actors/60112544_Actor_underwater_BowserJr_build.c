/* Actor_underwater_BowserJr_build
 * address: 0x60112544   size: 144   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_underwater_BowserJr_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1E28u);
  BowserJrBase__ctor((BossBase *)v2, a1);
  *(_DWORD *)v2 = &off_60BD07D4;
  FIELD_U32(v2, 7648) = 0;
  FIELD_U16(v2, 7652) = 0;
  memset((void *)(v2 + 7604), 0, 42);
  FIELD_U8(v2, 7654) = 1;
  FIELD_U32(v2, 7656) = 0;
  FIELD_U32(v2, 7660) = 0;
  FIELD_U8(v2, 7664) = 0;
  memset((void *)(v2 + 7668), 0, 48);
  return v2;
}
