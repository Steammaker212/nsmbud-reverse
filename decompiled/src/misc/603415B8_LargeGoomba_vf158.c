/* LargeGoomba_vf158
 * address: 0x603415B8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf158(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v4; // r5

  FIELD_U32(a1, 80) = sub_6000AED0(a1, a2);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60C945D8 + 8))() )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C945B4);
  FIELD_U32(a1, 160) = Enemy_CommonRotations[FIELD_U32(a1, 80)];
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 636))(a1);
  return sub_60340170(a1);
}
