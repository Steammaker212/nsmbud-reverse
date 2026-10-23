/* sub_606F2590
 * address: 0x606F2590   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F2590(StageActor *a1)
{
  SE_AMB_DOKAN_AWA_ref();
  sub_606F26D0(a1);
  StageActor__cullCheck(a1, 0);
  ++a1[11].aCollider.field_110;
  return 1;
}
