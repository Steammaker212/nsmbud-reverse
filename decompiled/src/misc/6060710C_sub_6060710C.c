/* sub_6060710C
 * address: 0x6060710C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6060710C(int a1)
{
  float32x2_t v1; // d8
  float32x2_t v3; // d0
  _BYTE *v4; // r0
  StateMethodExecuter *result; // r0

  CollisionActor__handleGravity((CollisionActor *)a1);
  v1.n64_u32[0] = 1080704369;
  if ( FIELD_F32(a1, 124) > 3.66 )
    FIELD_U32(a1, 124) = 1080704369;
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3.n64_u32[0] = FIELD_U32(a1, 124);
  v4 = (_BYTE *)(a1 + 7264);
  if ( v3.n64_f32[0] >= 0.1 )
  {
    *v4 = 1;
    v3.n64_f32[0] = v3.n64_f32[0] + 0.3;
    FIELD_U32(a1, 7260) = vmin_f32(v3, v1).n64_u32[0];
    goto LABEL_7;
  }
  if ( *v4 )
LABEL_7:
    sub_60609110(a1);
  result = (StateMethodExecuter *)(a1 + 6808);
  if ( FIELD_F32(a1, 112) >= FIELD_F32(a1, 6808) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB2BB4);
  return result;
}
