/* sub_6031A54C
 * address: 0x6031A54C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031A54C(int a1)
{
  float v2; // s0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 156) += 0x8000000;
  FIELD_U32(a1, 160) += 0x4000000;
  v2 = FIELD_F32(a1, 124);
  if ( v2 < 0.0 )
    FIELD_U32(a1, 132) = 0;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  return sub_60319E30(a1);
}
