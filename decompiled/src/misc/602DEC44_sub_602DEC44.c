/* sub_602DEC44
 * address: 0x602DEC44   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602DEC44(int a1)
{
  float v2; // s0
  _BYTE *v4; // r4

  StageActor__accelerateX((StageActor *)a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  (*(void (__fastcall **)(int, float))(FIELD_U32(a1, 648) + 16))(a1 + 648, v2);
  if ( (FIELD_U8(a1, 3195) & 0x40) == 0 || (FIELD_U32(a1, 2872) & 0x10400) != 0x400 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C91ED8);
  FIELD_U8(a1, 2872) = 0;
  v4 = (_BYTE *)(a1 + 2872);
  v4[4] = 0;
  v4 += 4;
  v4[3] = 0;
  v4[2] = 0;
  v4[1] = 0;
  *(v4 - 1) = 0;
  *(v4 - 2) = 0;
  *(v4 - 3) = 0;
  return 0;
}
