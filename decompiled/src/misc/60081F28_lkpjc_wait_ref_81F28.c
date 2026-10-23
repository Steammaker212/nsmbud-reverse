/* lkpjc_wait_ref_81F28
 * address: 0x60081F28   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall lkpjc_wait_ref_81F28(int a1)
{
  int v2; // r0
  char v3; // r12
  int v4; // r5
  int v5; // r5
  char v6; // r12
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  v2 = FIELD_U32(a1, 7100);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "lkpjc_wait";
  sub_60421AE4(v2, v8, 1);
  v4 = FIELD_U32(a1, 7244);
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611145100 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81100) == 1 )
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)v4 + 192))(v4, &unk_60C82000);
  }
  v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C81738 & ~(1611145272 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81734) == 1 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 192))(v5, &dword_60C812CC);
  FIELD_U16(a1, 6276) = 71;
  return PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6644);
}
