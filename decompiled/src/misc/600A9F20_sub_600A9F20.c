/* sub_600A9F20
 * address: 0x600A9F20   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A9F20(int a1, float *a2, _DWORD *a3, int a4)
{
  float v8; // r0
  int v9; // r6
  _DWORD *v10; // r5
  char v11; // r12
  char v12; // r12
  ActorBuildInfo v14; // [sp+4h] [bp-44h] BYREF

  memset(&v14.settings2, 0, 40);
  v14.settings1 = a4 << 12;
  v14.parentId = FIELD_U32(a1, 8);
  v14.profile = Profile__get(0x170u);
  v14.position.x = *a2;
  v14.position.y = a2[1];
  v8 = a2[2];
  v9 = 0;
  v14.position.z = v8;
  v10 = ActorMgr__create((void *)ActorMgr__instance, &v14, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1611308980 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v10 && (*(int (__fastcall **)(_DWORD *, int *))*v10)(v10, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C82EAC & ~(1611309096 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
    {
      dword_60C82EA8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C82EAC);
    }
    if ( (*(int (__fastcall **)(_DWORD *, int *))*v10)(v10, &dword_60C82EA8) == 1 )
    {
      v10[1768] = *a3;
      v10[1769] = a3[1];
      ((void (__fastcall *)(_DWORD *))loc_600AF474)(v10);
      v10[1770] = a3[2];
      (*(void (__fastcall **)(_DWORD *, int *))(*v10 + 192))(v10, &dword_60C83034);
    }
    return v10[2];
  }
  return v9;
}
