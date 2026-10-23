/* sub_60266ED4
 * address: 0x60266ED4   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60266ED4(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r5
  _BYTE *v9; // r5
  int v10; // r0
  int v11; // r4
  _DWORD *v12; // t1
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r1
  unsigned int v16; // r0
  int (**v18)(); // [sp+0h] [bp-18h] BYREF
  const char *v19; // [sp+4h] [bp-14h]

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C87680 & ~(1613131504 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C87680) )
  {
    dword_60C8767C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C87680);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8767C) == 1 )
  {
    if ( FIELD_U32(v3, 6100) || (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 812))(v3) != 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 == (*((int (**)(void))BroBase_StateID_Down._._.vtable + 2))() )
      {
        sub_602A3EFC(v3 + 12432, 8);
        FIELD_U8(v3, 12465) = 0;
        v9 = (_BYTE *)(v3 + 12464);
        if ( !FIELD_U8(v3, 12464) )
        {
          FIELD_U32(v3, 12112) = dword_60BE2EB0;
          v18 = &sead__SafeStringBase__vtable;
          v19 = "bros";
          v10 = LoadResource(ResourceMgrRelated_instance, &v18);
          v12 = *(_DWORD **)(v3 + 6300);
          v11 = v3 + 6300;
          v18 = &sead__SafeStringBase__vtable;
          v19 = "bound";
          sub_60421938(v12, v10, (int)&v18);
          v13 = *(_DWORD *)(*(_DWORD *)v11 + 12);
          v14 = *(_DWORD *)(*(_DWORD *)v11 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v14 )
            v13 += 4 * v14;
          AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
          v15 = *(_DWORD *)(*(_DWORD *)v11 + 12);
          v16 = *(_DWORD *)(*(_DWORD *)v11 + 68);
          if ( *(_DWORD *)(*(_DWORD *)v11 + 8) > v16 )
            v15 += 4 * v16;
          *(_DWORD *)(*(_DWORD *)v15 + 24) = 1065353216;
          *v9 = 1;
        }
      }
    }
    else
    {
      FIELD_U32(v3, 120) = 0;
      FIELD_U32(v3, 124) = 0;
      FIELD_U32(v3, 12112) = dword_60BE2EB0;
      FIELD_U32(v3, 6556) = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 808))(v3);
      v4 = FIELD_U32(v3, 3184);
      v5 = FIELD_U32(v3, 3192) & 0xBFFFF7FF;
      v6 = FIELD_U32(v3, 3176) & 0xBFFFF7FF;
      FIELD_U32(v3, 3200) &= 0xBFFFF7FF;
      FIELD_U32(v3, 3192) = v5;
      FIELD_U32(v3, 3176) = v6;
      FIELD_U32(v3, 3184) = v4 & 0xBFFFF7FF;
      FIELD_U32(v3, 3204) &= ~0x200u;
      FIELD_U32(v3, 3196) &= ~0x200u;
      FIELD_U32(v3, 3180) &= ~0x200u;
      FIELD_U32(v3, 3188) &= ~0x200u;
      (*(void (__fastcall **)(int, StateVirtual *))(*(_DWORD *)v3 + 192))(v3, &BroBase_StateID_Down);
      sub_602A3EFC(v3 + 12432, 8);
      FIELD_U8(v3, 12465) = 1;
    }
  }
  return 1;
}
