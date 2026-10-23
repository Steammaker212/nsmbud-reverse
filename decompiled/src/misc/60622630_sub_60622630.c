/* sub_60622630
 * address: 0x60622630   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60622630(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 156);
  if ( FIELD_U32(a1, 6656) )
  {
    FIELD_U32(a1, 156) = v2 - dword_60CB3A68;
  }
  else
  {
    FIELD_U32(a1, 156) = v2 + dword_60CB3A68;
    v3 = FIELD_U32(a1, 164);
    if ( FIELD_U32(a1, 6640) == 1 )
      v4 = v3 - dword_60CB3A6C;
    else
      v4 = v3 + dword_60CB3A6C;
    FIELD_U32(a1, 164) = v4;
  }
  return sub_604183EC(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 4);
}
