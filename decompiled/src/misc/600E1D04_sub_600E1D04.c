/* sub_600E1D04
 * address: 0x600E1D04   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600E1D04(CollisionActor *a1)
{
  int result; // r0

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  result = dword_60CC6484;
  if ( (float)(FIELD_U32(a1, 0x0).position.y + 16.0) < (float)(FIELD_F32(dword_60CC6484, 124) - FIELD_F32(dword_60CC6484, 108)) )
  {
    FIELD_U32(a1, 0x0)._.isDeleted = 1;
    return 1;
  }
  return result;
}
