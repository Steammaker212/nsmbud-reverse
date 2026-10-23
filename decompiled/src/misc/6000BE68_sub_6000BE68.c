/* sub_6000BE68
 * address: 0x6000BE68   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6000BE68(int a1, int a2)
{
  int v4; // r4
  char v5; // r12
  float v6; // s20
  float v7; // s18
  float v8; // s16
  float v9; // s0

  v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 4));
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C7B364 & ~(1610661552 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1 )
    {
      v6 = FIELD_F32(a1, 20);
      v7 = FIELD_F32(a1, 24);
      v8 = FIELD_F32(a1, 28);
      v9 = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 8))(a1, a2);
      if ( v9 < 1.0 )
      {
        v8 = v8 * v9;
        v7 = v7 * v9;
        v6 = v6 * v9;
      }
      FIELD_F32(v4, 144) = v6;
      FIELD_F32(v4, 148) = v7;
      FIELD_F32(v4, 152) = v8;
    }
  }
}
