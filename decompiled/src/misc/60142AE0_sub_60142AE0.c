/* sub_60142AE0
 * address: 0x60142AE0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60142AE0(CollisionActor *a1)
{
  float v2; // s0
  int result; // r0

  v2 = CollisionActor__handleSpeed(a1);
  result = (*(int (__fastcall **)(CollisionActor *, float))(FIELD_U32(a1, 0x0) + 252))(a1, v2);
  if ( result == 1 )
    return SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)a1);
  return result;
}
