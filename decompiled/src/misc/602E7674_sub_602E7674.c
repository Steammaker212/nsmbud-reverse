/* sub_602E7674
 * address: 0x602E7674   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602E7674(int a1, double a2, float a3, float a4, float32x2_t a5)
{
  float v6; // s0
  StateMethodExecuter *result; // r0

  if ( FIELD_U8(a1, 7526) )
  {
    a5.n64_u32[0] = 2.0;
    *(float *)&a2 = FIELD_F32(a1, 124) + 0.3;
    FIELD_U32(a1, 124) = vmin_f32(*(float32x2_t *)&a2, a5).n64_u32[0];
  }
  else
  {
    CollisionActor__handleGravity((CollisionActor *)a1);
  }
  v6 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v6);
  result = (StateMethodExecuter *)sub_6000346C(a1);
  if ( result == (StateMethodExecuter *)1 )
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
  if ( FIELD_F32(a1, 124) <= 0.0 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C92444);
  return result;
}
