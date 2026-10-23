/* sub_60132CD0
 * address: 0x60132CD0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60132CD0(int a1)
{
  float v2; // s0

  FIELD_U32(a1, 136) = -1061158912;
  FIELD_U32(a1, 100) = -1107296256;
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)a1 + 196))(a1, v2);
}
