/* sub_600DF4C8
 * address: 0x600DF4C8   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DF4C8(int a1)
{
  int v2; // r5
  char v3; // r12
  _DWORD v5[6]; // [sp+0h] [bp-18h] BYREF

  KoopalingBase__vf5A0(a1);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 8120));
  if ( ((unsigned int)&dword_60C84B4C & ~(1611527436 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C84B4C) )
  {
    dword_60C84B48 = (int)&off_60BCCA60;
    _cxa_guard_release(&dword_60C84B4C);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C84B48) == 1 )
  {
    StateMgr__changeState((StateMgr *)(v2 + 6084), (StateBase *)&dword_60C84D2C);
    v5[0] = &sead__SafeStringBase__vtable;
    v5[1] = "throw_ball_st";
    sub_600E36A4(v2, v5, 0, 4.0);
  }
  FIELD_U32(a1, 7136) = sub_600DE710(a1);
  return sub_608134CC(a1 + 6332, "SE_VOC_LEM_BOMB_TORIDASU", FIELD_S16(a1, 6640), 0);
}
