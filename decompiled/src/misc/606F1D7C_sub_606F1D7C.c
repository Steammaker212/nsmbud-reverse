/* sub_606F1D7C
 * address: 0x606F1D7C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606F1D7C(StageActor *a1)
{
  int v2; // r0

  StageActor__cullCheck(a1, 0);
  v2 = a1[9].aCollider.field_54 + 1;
  a1[9].aCollider.field_54 = v2;
  if ( (v2 & 0x7F) == 0 )
    sub_6071689C(TileMgr_instance, 10, (unsigned __int8)(a1[9].aCollider.field_50 + 1), FIELD_U32(a1, 0x0).id);
  return 1;
}
