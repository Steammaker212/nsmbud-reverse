/* sub_6057FEC4
 * address: 0x6057FEC4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057FEC4(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 160) += 0x10000000;
  result = a1 + 6108;
  v3 = FIELD_U32(a1, 6108);
  if ( v3 )
  {
    *(_DWORD *)result = v3 - 1;
  }
  else
  {
    sub_60584408(dword_60CAF15C, FIELD_S8(a1, 6112), 1);
    result = 6116;
    v4 = FIELD_U32(a1, 6116);
    if ( v4 )
      result = sub_6058568C(dword_60CAF15C, v4, 1);
    FIELD_U8(a1, 19) = 1;
  }
  return result;
}
