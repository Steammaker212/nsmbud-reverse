/* sub_6036AC80
 * address: 0x6036AC80   size: 1036   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036AC80(int a1)
{
  int *v2; // r9
  char v3; // r12
  int *v4; // r7
  int v5; // r4
  Actor *v6; // r5
  char v7; // r6
  int v8; // r5
  char v9; // r3
  int result; // r0
  StateBase *CurrentState; // r0
  int *v12; // r7
  char v13; // r12
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r1

  v2 = (int *)(a1 + 6300);
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v4 = (int *)*(v2 - 1566);
  if ( v4 == v2 - 1567 )
  {
LABEL_5:
    v6 = 0;
  }
  else
  {
    v5 = *(v2 - 1564);
    v6 = (Actor *)((char *)v4 - v5);
    while ( Actor__getProfileId(v6) != 362 )
    {
      v4 = (int *)v4[1];
      v6 = (Actor *)((char *)v4 - v5);
      if ( (char *)v4 - v5 == (char *)v2 - v5 - 6268 )
        goto LABEL_5;
    }
  }
  if ( ((unsigned int)dword_60C95E18 & ~(1614195976 << v3) & 1) == 0 && _cxa_guard_acquire(dword_60C95E18) )
  {
    dword_60C95E14 = (int)&off_60BC00D4;
    _cxa_guard_release(dword_60C95E18);
  }
  if ( !v6
    || (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C95E14) != 1
    || (FIELD_U32(a1, 108) = *(_DWORD *)&FIELD_U8(v6 + (1) * 80, 0x1C),
        FIELD_U32(a1, 112) = FIELD_U32(v6 + (1) * 80, 0x20),
        v6[91].linkId) )
  {
    v7 = FIELD_U8(a1, 84);
    v8 = FIELD_U32(a1, 6284);
    v9 = sub_602856C4((_DWORD *)(a1 + 6292));
    return sub_602A6024(a1, v8, v7, v9);
  }
  result = (unsigned __int8)v6[91].initStateFlag;
  if ( v6[91].initStateFlag )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
    v12 = (int *)(a1 + 6100);
    CurrentState = *(StateBase **)(a1 + 6100);
    if ( !CurrentState )
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    (*((void (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    (*(void (**)(void))(dword_60C95D38 + 8))();
    v14 = (unsigned int)dword_60C95E20 & ~(1614196276 << v13) & 1;
    if ( ((unsigned int)dword_60C95E20 & ~(1614196276 << v13)) != 0 )
    {
      if ( !v14 && _cxa_guard_acquire(dword_60C95E20) )
      {
        dword_60C95E3C = (int)&sead__SafeStringBase__vtable;
        dword_60C95E40 = (int)"attack_fast";
        dword_60C95E44 = (int)&sead__SafeStringBase__vtable;
        dword_60C95E48 = (int)"attack_slow";
        dword_60C95E4C = (int)&sead__SafeStringBase__vtable;
        dword_60C95E50 = (int)"damage";
        dword_60C95E54 = (int)&sead__SafeStringBase__vtable;
        dword_60C95E58 = (int)"dead";
        dword_60C95E5C = (int)&sead__SafeStringBase__vtable;
        dword_60C95E60 = (int)"fly";
        dword_60C95E64 = (int)&sead__SafeStringBase__vtable;
        dword_60C95E68 = (int)"freeze";
        dword_60C95E6C = (int)&sead__SafeStringBase__vtable;
        dword_60C95E70 = (int)"turn";
        sub_60000288();
        _cxa_guard_release(dword_60C95E20);
      }
      if ( FIELD_U32(a1, 6304) == 1 )
        goto LABEL_28;
      FIELD_U32(a1, 6304) = 1;
      v15 = *v2;
    }
    else
    {
      if ( !v14 )
      {
        if ( _cxa_guard_acquire(dword_60C95E20) )
        {
          dword_60C95E3C = (int)&sead__SafeStringBase__vtable;
          dword_60C95E40 = (int)"attack_fast";
          dword_60C95E44 = (int)&sead__SafeStringBase__vtable;
          dword_60C95E48 = (int)"attack_slow";
          dword_60C95E4C = (int)&sead__SafeStringBase__vtable;
          dword_60C95E50 = (int)"damage";
          dword_60C95E54 = (int)&sead__SafeStringBase__vtable;
          dword_60C95E58 = (int)"dead";
          dword_60C95E5C = (int)&sead__SafeStringBase__vtable;
          dword_60C95E60 = (int)"fly";
          dword_60C95E64 = (int)&sead__SafeStringBase__vtable;
          dword_60C95E68 = (int)"freeze";
          dword_60C95E6C = (int)&sead__SafeStringBase__vtable;
          dword_60C95E70 = (int)"turn";
          sub_60000288();
          _cxa_guard_release(dword_60C95E20);
        }
      }
      if ( !FIELD_U32(a1, 6304) )
        goto LABEL_28;
      FIELD_U32(a1, 6304) = 0;
      v15 = *v2;
    }
    sub_60421AD4(v15);
LABEL_28:
    FIELD_U32(a1, 6096) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6092) + 8))(FIELD_U32(a1, 6092));
    (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 12))(FIELD_U32(a1, 6084), a1 + 6092);
    v16 = *v12;
    *v12 = 0;
    result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 6084) + 16))(FIELD_U32(a1, 6084), v16);
    FIELD_U32(a1, 6092) = result;
  }
  return result;
}
