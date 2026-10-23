/* sub_600FD328
 * address: 0x600FD328   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600FD328(int a1)
{
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r6
  int v4; // r4
  char v5; // r12

  v2 = (ActiveCollider *)(a1 + 7964);
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7964));
  ActiveColldierMgr_removeFromCreateList(v3, v2);
  ActiveColldierMgr_removeFromList3(v3, (int)v2);
  FIELD_U32(a1, 160) = 0;
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 624))(a1);
  if ( ((unsigned int)dword_60C81768 & ~(1611649940 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C81768) )
  {
    dword_60C81764 = (int)&off_60BC2CB4;
    _cxa_guard_release(dword_60C81768);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81764) == 1 )
    {
      PlayerLookTargetList_add(PlayerLookTargetList_instance, v4 + 6644);
      FIELD_U8(v4, 7608) = 1;
    }
  }
}
