/* sub_6013D308
 * address: 0x6013D308   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013D308(int a1)
{
  int result; // r0

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  FIELD_U32(a1, 156) += dword_60C87C90;
  FIELD_U32(a1, 160) += dword_60C87C94;
  result = FIELD_U8(a1, 6422);
  if ( FIELD_U8(a1, 6422) )
  {
    result = FIELD_U32(a1, 6424);
    FIELD_U32(a1, 124) = result;
  }
  return result;
}
