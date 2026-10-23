/* sub_607753D8
 * address: 0x607753D8   size: 496   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607753D8(int a1)
{
  int v2; // r5
  char v3; // r12
  int v4; // r6
  int v6; // r1
  int v7; // r2

  if ( (FIELD_U8(a1, 1219) & 1) == 0 )
    goto LABEL_10;
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 9952));
  if ( ((unsigned int)&dword_60C7B364 & ~(1618433056 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) )
  {
    if ( sub_6078663C(a1 + 688) == 1 )
    {
      v4 = 1;
      if ( (FIELD_U8(a1, 1204) & 0x10) == 0 )
      {
        sub_6040A1D8(dword_60C9A1F0);
        FIELD_U8(a1, 1296) = 0;
        FIELD_U8(a1, 1314) = 0;
        FIELD_U32(a1, 9940) = 0;
        FIELD_U32(a1, 9944) = 0;
        FIELD_U32(a1, 9948) = 0;
        FIELD_U32(a1, 1228) &= 0xFFFFD3FF;
        FIELD_U32(a1, 1208) &= ~8u;
        FIELD_U32(a1, 1204) &= ~0x400u;
        FIELD_U32(a1, 9932) = 0;
        FIELD_U32(a1, 9936) = 0;
        StateMgr__changeState((StateMgr *)(a1 + 9916), &stru_60CBF840);
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
        return 1;
      }
    }
    else
    {
      FIELD_U32(a1, 1236) |= 0x20u;
      FIELD_U32(a1, 108) = FIELD_U32(v2, 108);
      FIELD_U32(a1, 112) = FIELD_U32(v2, 112);
      FIELD_U32(a1, 116) = FIELD_U32(v2, 116);
      v4 = 0;
      FIELD_F32(a1, 112) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1040))(a1) + FIELD_F32(a1, 112);
      FIELD_U32(a1, 124) = 0;
      if ( (FIELD_U8(a1, 1212) & 0x40) == 0 )
      {
        v6 = FIELD_U32(v2, 160);
        v7 = FIELD_U32(v2, 164);
        FIELD_U32(a1, 156) = FIELD_U32(v2, 156);
        FIELD_U32(a1, 160) = v6;
        FIELD_U32(a1, 164) = v7;
        FIELD_U32(a1, 80) = FIELD_U32(v2, 80);
      }
    }
    return v4;
  }
  else
  {
LABEL_10:
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1108))(a1);
    return 1;
  }
}
