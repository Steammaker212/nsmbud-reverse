/* Enemy__executeState_DieFumi
 * address: 0x602A7F8C   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602D6C20 : SledgeBro
//   - 0x60266260 : BrosBase
//   - 0x600260D8 : BossBase
//   - 0x60310180 : Kanibo
float __fastcall Enemy__executeState_DieFumi(CollisionActor *a1)
{
  int v2; // r0

  if ( FIELD_U8(a1, 0x17A6) )
    v2 = (int)(float)(0.5 * 50332000.0);
  else
    v2 = 50331648;
  FIELD_U32(a1, 0x0).rotation.x += v2;
  CollisionActor__handleGravity(a1);
  return CollisionActor__handleSpeed(a1);
}
