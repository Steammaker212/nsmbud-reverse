/* sub_60147188
 * address: 0x60147188   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60147188(int a1)
{
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 144) = 1067030938;
  FIELD_U32(a1, 148) = 1067030938;
  FIELD_U32(a1, 152) = 1067030938;
  return 1067030938;
}
