/* sub_60631984
 * address: 0x60631984   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60631984(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C12710;
  SolidOnTopCollider_ctor((SolidOnTopCollider *)(a1 + 6104));
  FIELD_U32(a1, 6472) = 0;
  FIELD_U32(a1, 6476) = 0;
  FIELD_U32(a1, 6480) = 32;
  FIELD_U32(a1, 6484) = 0x20000;
  FIELD_U32(a1, 6488) = 0x8000000;
  FIELD_U32(a1, 6492) = 0x80000;
  FIELD_U32(a1, 6496) = 0x800000;
  FIELD_U32(a1, 6500) = 0x400000;
  FIELD_U8(a1, 6504) = 0;
  memset((void *)(a1 + 6508), 0, 65);
  return a1;
}
