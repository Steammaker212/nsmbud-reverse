/* sub_6000C1D4
 * address: 0x6000C1D4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000C1D4(int a1, int a2)
{
  unsigned int v3; // r2
  float v4; // r3
  int v5; // r6
  int v6; // r5
  unsigned int v7; // r0
  int v8; // r4
  char v9; // r12
  _DWORD v11[8]; // [sp+8h] [bp-20h] BYREF

  v3 = FIELD_U32(a1, 32);
  if ( v3 != 2 )
  {
    v4 = FIELD_F32(a2, 112);
    v5 = FIELD_U32(a2, 116);
    v11[0] = FIELD_U32(a2, 108);
    v11[2] = v5;
    *(float *)&v11[1] = v4 + 40.0;
    v6 = FIELD_S8(a2, 84);
    if ( v3 < 2 )
      ((void (__fastcall *)(int, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD))sub_60407E74)(
        dword_60C9A1E8,
        v11,
        dword_60AF1E88[v3],
        FIELD_S8(a2, 84),
        0,
        0);
    if ( (unsigned __int8)v6 != 255 )
    {
      v7 = FIELD_U32(a1, 32);
      if ( v7 <= 1 )
        sub_603FBA2C(dword_60C99DD4, dword_60AF1E90[v7], v6);
      if ( (unsigned __int8)v6 >= 6u )
        v6 = 0;
      ++*(_DWORD *)(dword_60C99DD4 + 72 * v6 + 348);
    }
  }
  v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( v8 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610662624 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) == 1 )
      FIELD_U8(v8, 19) = 1;
  }
  return 1;
}
