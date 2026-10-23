/* sub_60587C54
 * address: 0x60587C54   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60587C54(int a1, int a2, int a3)
{
  char v3; // r12
  Actor *v5; // r5
  Actor *v6; // r6
  int result; // r0
  ActiveColliderMgr *v8; // r5

  v5 = *(Actor **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1616411760 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    v6 = (Actor *)(*(int (__fastcall **)(Actor *, int *))FIELD_U32(v5, 0x0))(v5, &StageActor_RTTI);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  if ( Actor__getProfileId(v6) == 768
    || Actor__getProfileId(v6) == 771
    || Actor__getProfileId(v6) == 769
    || (result = Actor__getProfileId(v6), result == 770) )
  {
    v8 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v8, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromList3(v8, a1 + 188);
    FIELD_U8(a1, 6340) = 1;
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAF284);
  }
  return result;
}
