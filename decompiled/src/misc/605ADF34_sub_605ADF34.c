/* sub_605ADF34
 * address: 0x605ADF34   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605ADF34(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C08ADC;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U32(a1, 6100) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6120));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6424));
  FIELD_U32(a1, 6744) = 0;
  FIELD_U32(a1, 6740) = 0;
  FIELD_U32(a1, 6736) = 0;
  FIELD_U32(a1, 6732) = 0;
  FIELD_U32(a1, 6728) = 0;
  FIELD_U32(a1, 6748) = off_60C08C08;
  sub_605D5CA0((_DWORD *)(a1 + 6752), FIELD_U32(a1, 8));
  return a1;
}
