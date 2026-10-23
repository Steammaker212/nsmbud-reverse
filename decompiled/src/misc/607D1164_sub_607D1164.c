/* sub_607D1164
 * address: 0x607D1164   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D1164(int a1, int a2)
{
  _DWORD *v4; // r8
  int v5; // r4
  char v6; // r12
  int v7; // r4
  _BYTE *v8; // r5
  char v9; // r12
  ActorBuildInfo v11; // [sp+4h] [bp-44h] BYREF

  v4 = (_DWORD *)(a1 + 11356);
  v5 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11356));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618809260 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &StageActor_RTTI) == 1 )
    FIELD_U8(v5, 19) = 1;
  v7 = 0;
  *v4 = 0;
  memset(&v11.settings2, 0, 40);
  v11.settings1 = a2 | (16 * FIELD_S8(a1, 84));
  v11.profile = Profile__get(0x1DEu);
  v8 = ActorMgr__create((void *)ActorMgr__instance, &v11, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1618809464 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v8 && (**(int (__fastcall ***)(_BYTE *, int *))v8)(v8, &StageActor_RTTI) == 1 )
  {
    v7 = 1;
    *v4 = *((_DWORD *)v8 + 2);
  }
  return v7;
}
