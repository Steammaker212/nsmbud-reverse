/* sub_6012CFD4
 * address: 0x6012CFD4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6012CFD4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  float v5; // s0
  float v6; // s16
  float v7; // s0

  if ( (ActiveCollider *)(a1 + 188) != a2 )
    return 1;
  ActiveCollider_getBottom(a2);
  v6 = v5;
  ActiveCollider_getCenterY(a3);
  return v6 <= v7;
}
