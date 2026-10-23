/* sub_602DFA98
 * address: 0x602DFA98   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602DFA98(int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // t1

  FIELD_U32(a1, 6104) = FIELD_U32(a2, 8);
  v4 = FIELD_U32(a1, 6152);
  v3 = (_DWORD *)(a1 + 6152);
  if ( v4 == 1 )
  {
    *v3 = 2;
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6100) + 12) + 4), 0);
  }
  return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C91F18);
}
