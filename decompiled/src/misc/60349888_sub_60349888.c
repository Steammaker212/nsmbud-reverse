/* sub_60349888
 * address: 0x60349888   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60349888(CollisionActor *a1)
{
  int y; // r5

  y = FIELD_U32(a1, 0x0).rotation.y;
  Enemy__executeState_DieFall(a1);
  FIELD_U32(a1, 0x0).rotation.y = y;
}
