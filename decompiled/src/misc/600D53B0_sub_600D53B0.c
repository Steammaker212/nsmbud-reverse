/* sub_600D53B0
 * address: 0x600D53B0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D53B0(int a1)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  char v3; // r12
  int v4; // r0
  ActiveColliderMgr *v5; // r6

  sub_600D552C();
  FIELD_U32(a1, 116) = 1166843904;
  v2 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C80040 & ~(1611486172 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C80040) )
  {
    dword_60C8003C = (int)&off_60BC2CB4;
    _cxa_guard_release(&dword_60C80040);
  }
  if ( v2 )
  {
    v4 = (**v2)(v2, &dword_60C8003C);
    if ( v4 )
      v4 = (int)v2;
  }
  else
  {
    v4 = 0;
  }
  FIELD_U32(a1, 6112) = v4;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BCBB00, 0);
  FIELD_U32(a1, 320) = 1;
  v5 = ActiveColliderMgr_instance;
  if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
    && !ActiveColliderMgr_isInCreateList(v5, (ActiveCollider *)(a1 + 188)) )
  {
    ActiveColliderMgr_addToCreateList(v5, (ActiveCollider *)(a1 + 188));
  }
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1086324736;
  FIELD_U32(a1, 504) = 1086324736;
  FIELD_U32(a1, 516) = 1090519040;
  FIELD_U32(a1, 520) = 1090519040;
  FIELD_U32(a1, 524) = 1090519040;
  FIELD_U32(a1, 528) = 1090519040;
  sub_600D5664(a1);
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C84358);
  return 1;
}
