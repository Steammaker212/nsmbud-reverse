/* sub_601B2404
 * address: 0x601B2404   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601B2404(int a1)
{
  int v2; // r8
  int v3; // r7
  int (__fastcall ***v4)(_DWORD, int *); // r4
  char v5; // r12
  int v6; // r6
  int v7; // r4
  int v8; // r0
  int v9; // r4
  char v10; // r12
  StateBase *v11; // r1
  int v12; // r0
  StateBase *CurrentState; // r0
  int v14; // r4
  _DWORD *i; // r4
  int v16; // r4
  int v17; // r0
  int v18; // r0

  v2 = a1 + 1180;
  v3 = sub_601774C8(dword_60C88E60, a1 + 1180);
  if ( !v3 )
    return sub_60177448((_DWORD *)dword_60C88E60, v2);
  v4 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
  if ( ((unsigned int)&dword_60C88AA8 & ~(1612391524 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
  {
    dword_60C88AA4 = (int)&off_60BD4BA4;
    _cxa_guard_release(&dword_60C88AA8);
  }
  if ( v4 )
  {
    v6 = (**v4)(v4, &dword_60C88AA4);
    if ( v6 )
      v6 = (int)v4;
  }
  else
  {
    v6 = 0;
  }
  v7 = FIELD_U32(a1, 1032);
  v8 = sub_6018691C(v6);
  v9 = sub_6021FF4C(v7, v8);
  if ( ((unsigned int)&dword_60C88E3C & ~(1612391680 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C88E3C) )
  {
    dword_60C88E38 = (int)&off_60BD4EC8;
    _cxa_guard_release(&dword_60C88E3C);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C88E38) == 1 && FIELD_U8(v6, 629) )
  {
    v11 = (StateBase *)&unk_60C88D18;
LABEL_24:
    StateMgr__changeState((StateMgr *)(v6 + 284), v11);
    sub_601D27A8(a1, v6);
    return sub_60177448((_DWORD *)dword_60C88E60, v2);
  }
  if ( ((unsigned int)dword_60C8AB30 & ~(1612391820 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C8AB30) )
  {
    dword_60C8AB2C = (int)&off_60BD4EC8;
    _cxa_guard_release(dword_60C8AB30);
  }
  if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8AB2C) == 1 && FIELD_U8(v6, 477) )
  {
    v11 = (StateBase *)&unk_60C8D0E4;
    goto LABEL_24;
  }
  if ( v9 == -1 )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6) != 1 )
      return sub_60177448((_DWORD *)dword_60C88E60, v2);
    v12 = FIELD_U32(a1, 1032);
    if ( v12 == 1 )
      goto LABEL_33;
    if ( v12 == 3 )
    {
      if ( !sub_601B1354() || sub_601C6AA0(a1) == 1 )
      {
LABEL_33:
        CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 904));
        v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v14 == (*(int (**)(void))(dword_60C8A8E4 + 8))() )
        {
          FIELD_U32(a1, 1000) = sub_601E1308(2);
          FIELD_U32(a1, 1120) |= 0x80000u;
          for ( i = *(_DWORD **)(a1 + 272); i; i = (_DWORD *)i[68] )
          {
            if ( (*(int (__fastcall **)(_DWORD *))(*i + 92))(i) == 1 )
              (*(void (__fastcall **)(_DWORD *, _DWORD, int, _DWORD))(*i + 96))(i, FIELD_U32(a1, 1000), 1, 0);
          }
          FIELD_U32(a1, 1092) = 2;
          FIELD_U32(a1, 1100) = 2;
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 108))(v6);
        }
LABEL_48:
        sub_601C5B4C(a1, 19);
        FIELD_U32(a1, 1172) = FIELD_U32(v6, 8);
        (*(void (__fastcall **)(int, int, int, float))(*(_DWORD *)a1 + 336))(a1, 36, -1, 0.0);
        FIELD_U32(a1, 1220) = 655360000;
        FIELD_U32(a1, 1120) |= 0x1000u;
        return sub_60177448((_DWORD *)dword_60C88E60, v2);
      }
      v12 = FIELD_U32(a1, 1032);
    }
    if ( !v12 )
      FIELD_U32(a1, 1120) |= 0x10000u;
    goto LABEL_48;
  }
  if ( sub_601C6AA0(a1) == 1 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 84))(v6);
  }
  else
  {
    if ( FIELD_U32(a1, 1032) == 6 )
    {
      sub_6018642C(a1, 6, v3, 0);
    }
    else
    {
      sub_6018642C(a1, 5, v3, 0);
      if ( FIELD_U32(a1, 1032) == 3 )
        sub_601B13BC(dword_60C8A8C0, v6);
    }
    v16 = FIELD_U32(a1, 1032);
    v17 = sub_6018691C(v6);
    v18 = sub_6021FF4C(v16, v17);
    sub_601D99F8(a1, FIELD_U32(a1, 1032), v18);
  }
  return sub_60177448((_DWORD *)dword_60C88E60, v2);
}
