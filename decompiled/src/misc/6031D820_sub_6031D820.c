/* sub_6031D820
 * address: 0x6031D820   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6031D820(int a1)
{
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7124));
  CollisionActor__handleGravity((CollisionActor *)a1);
  return CollisionActor__handleSpeed((CollisionActor *)a1);
}
