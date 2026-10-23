/* sub_605C0140
 * address: 0x605C0140   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605C0140(int a1)
{
  int *v2; // r2
  int v3; // r0

  v2 = (int *)(a1 + 6780);
  v3 = FIELD_U32(a1, 6780) + FIELD_U32(a1, 6784);
  *v2 = v3;
  FIELD_U32(a1, 164) = v3;
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  JUMPOUT(0x60000CD0);
}
