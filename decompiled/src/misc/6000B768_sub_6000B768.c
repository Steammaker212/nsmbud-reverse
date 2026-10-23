/* sub_6000B768
 * address: 0x6000B768   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6000B768(int a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int v4; // r5
  char v5; // r12
  char v6; // r12
  float v7; // s2
  float v8; // s4
  int v9; // r1
  float v10; // [sp+0h] [bp-20h] BYREF
  _DWORD v11[7]; // [sp+4h] [bp-1Ch] BYREF

  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610659760 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B410 & ~(1610659868 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B410) )
      {
        dword_60C7B40C = (int)&off_60BC00D4;
        _cxa_guard_release(&dword_60C7B410);
      }
      if ( a2 )
      {
        if ( (**a2)(a2, &dword_60C7B40C) == 1 )
        {
          v10 = 1.0;
          sub_605E3D3C(a2, v11, &v10, FIELD_U32(a1, 4));
          v7 = FIELD_F32(a1, 16) * v10;
          v8 = FIELD_F32(a1, 20) * v10;
          FIELD_F32(v4, 144) = FIELD_F32(a1, 12) * v10;
          FIELD_F32(v4, 148) = v7;
          FIELD_F32(v4, 152) = v8;
          v9 = v11[1];
          FIELD_U32(v4, 108) = v11[0];
          FIELD_U32(v4, 112) = v9;
        }
      }
    }
  }
}
