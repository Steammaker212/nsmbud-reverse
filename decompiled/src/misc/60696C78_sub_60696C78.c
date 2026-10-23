/* sub_60696C78
 * address: 0x60696C78   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60696C78(int a1)
{
  int result; // r0
  float v3; // s0

  if ( FIELD_U32(a1, 6124) )
    sub_60696CD0(a1);
  result = FIELD_U32(a1, 6080);
  if ( result )
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
