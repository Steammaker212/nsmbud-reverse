/* sub_60300AA0
 * address: 0x60300AA0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60300AA0(int a1)
{
  int result; // r0
  float v3; // s0

  result = FIELD_U32(a1, 8484);
  if ( !result )
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
    v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
    CollisionMgr_process((_BYTE *)(a1 + 648), v3);
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      FIELD_U32(a1, 124) = 0;
      return 0;
    }
  }
  return result;
}
