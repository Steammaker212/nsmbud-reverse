/* sub_607AE678
 * address: 0x607AE678   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AE678(int a1)
{
  int result; // r0
  int v3; // r2
  StateBase *v4; // r1
  int v5; // r0
  int v6; // r5
  char v7; // r12
  float *v8; // r0
  float v9; // s0
  float v10; // s2
  int v11; // r1
  float v12; // s4
  int v13; // r0
  float v14; // s0

  if ( (FIELD_U8(a1, 6900) & 1) != 0 )
  {
    ((void (__fastcall *)(int))loc_60773ABC)(a1);
    PlayerBase_dispatchVirtual3(a1 + 11356, 7, 0.0);
    v3 = 0;
    v4 = (StateBase *)&dword_60CC4C28;
    v5 = a1;
    return Player_changeState(v5, v4, v3);
  }
  result = sub_6075FB84(a1, 1, 1);
  if ( result )
    return result;
  if ( sub_607869D0(a1 + 688) == 1 )
  {
    Player_changeState(a1, (StateBase *)&unk_60CC4C04, 1);
    return SE_PLY_SPIN_ONCE_ref_2(a1);
  }
  if ( sub_60786744(a1 + 688) == 1 )
  {
    v4 = (StateBase *)&unk_60CC4C04;
LABEL_18:
    v5 = a1;
    v3 = 1;
    return Player_changeState(v5, v4, v3);
  }
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 12996));
  if ( ((unsigned int)&dword_60C7B374 & ~(1618667360 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !v6
    || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) != 1
    || !(*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1444))(a1, v6) )
  {
    v4 = (StateBase *)&unk_60CC4C04;
    goto LABEL_18;
  }
  (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088))(a1, FIELD_F32(v6, 116));
  if ( FIELD_U32(a1, 1320) == 9 )
  {
    v8 = (float *)&unk_60B0B078;
  }
  else if ( sub_6075EDE0(a1) )
  {
    v8 = (float *)((char *)&unk_60B0CDE8
                 + 4 * (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320)));
  }
  else
  {
    if ( !sub_6075EDF8(a1) )
    {
      v9 = 0.0;
      goto LABEL_24;
    }
    v8 = (float *)&unk_60B0B024;
  }
  v9 = *v8;
LABEL_24:
  v10 = FIELD_F32(v6, 112);
  v11 = FIELD_U32(v6, 108);
  v12 = FIELD_F32(a1, 6872);
  v13 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 108) = v11;
  v14 = v9 + (float)(v10 - v12);
  FIELD_F32(a1, 112) = v14;
  FIELD_U32(a1, 584) = v11;
  FIELD_F32(a1, 588) = v14;
  FIELD_U32(a1, 592) = v13;
  FIELD_U32(a1, 608) = v11;
  FIELD_F32(a1, 612) = v14;
  FIELD_U32(a1, 616) = v13;
  result = FIELD_U32(v6, 160);
  FIELD_U32(a1, 160) = result;
  return result;
}
