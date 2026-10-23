/* sub_60337450
 * address: 0x60337450   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60337450(int a1)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 6284);
  FIELD_U32(a1, 156) -= 6553600;
  FIELD_U32(a1, 160) += 163840000 * byte_60AFE3F4[v2];
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  CollisionActor__handleGravity((CollisionActor *)a1);
  return CollisionActor__handleSpeed((CollisionActor *)a1);
}
