/* wait_ball_ref_2
 * address: 0x600DEE50   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall wait_ball_ref_2(int a1)
{
  int v2; // r4
  char v3; // r12
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  KoopalingBase__vf648(a1);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
  if ( ((unsigned int)&dword_60C84B4C & ~(1611525780 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v2 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B48) == 1 )
    {
      StateMgr__changeState((StateMgr *)(v2 + 6084), (StateBase *)&dword_60C84D2C);
      v4[0] = &sead__SafeStringBase__vtable;
      v4[1] = "wait_ball";
      sub_600E36A4(v2, v4, 1, 5.0);
    }
  }
}
