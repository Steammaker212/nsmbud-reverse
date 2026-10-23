/* BobOmb_vf80
 * address: 0x6025F29C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf80(int a1, int a2, int a3)
{
  _WORD *v6; // r0
  __int16 v7; // r1
  __int16 v8; // t1
  int v9; // r4

  FIELD_U32(a1, 6456) = -1;
  v8 = FIELD_U16(a1, 6364);
  v6 = (_WORD *)(a1 + 6364);
  v7 = v8;
  if ( (v8 & 4) != 0 )
  {
    *v6 = v7 & 0xFFFB;
    v9 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
    sub_6041838C((ModelAnimation *)(v9 + 4));
    AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), 0);
    FIELD_U32(v9, 20) = 0;
    FIELD_U32(v9, 28) |= 2u;
    FIELD_U32(v9, 24) = 0;
  }
  return CarryableEnemy__collisionIceball(a1, a2, a3);
}
