/* SE_EMY_KERONPA_FIRE_ref_2_helper
 * address: 0x6031EA54   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_KERONPA_FIRE_ref_2_helper(int a1)
{
  int v2; // r6
  float v3; // s2
  _BYTE *v4; // r5
  char v5; // r12
  char v6; // r12
  int v7; // r7
  ActorBuildInfo v9; // [sp+4h] [bp-44h] BYREF

  memset(&v9.settings2, 0, 40);
  v9.profile = Profile__get(0x22Fu);
  v2 = 0;
  *(__n64 *)&v9.position.x = SE_EMY_KERONPA_FIRE_ref_2_helper_helper_31D334(a1);
  v9.position.z = v3;
  v9.settings1 = 1;
  v4 = ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613884108 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v4 && (**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &StageActor_RTTI) == 1 )
  {
    if ( ((unsigned int)&dword_60C87A5C & ~(1613884224 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C87A5C) )
    {
      dword_60C87A58 = (int)&off_60BD28A8;
      _cxa_guard_release(&dword_60C87A5C);
    }
    v7 = (int)(v4 + 6136);
    if ( !(**(int (__fastcall ***)(_BYTE *, int *))v4)(v4, &dword_60C87A58) )
      v7 = 6136;
    v2 = 1;
    *(_DWORD *)v7 = FIELD_U32(a1, 12584);
  }
  return v2;
}
