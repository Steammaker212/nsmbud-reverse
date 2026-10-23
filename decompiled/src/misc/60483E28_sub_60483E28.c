/* sub_60483E28
 * address: 0x60483E28   size: 996   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60483E28(int a1, int a2, int a3, int a4)
{
  char v4; // r12
  int v9; // r0
  unsigned int v10; // r1
  int *v11; // r0
  int v12; // r1
  unsigned int v13; // r7
  int v14; // r11
  int v15; // r10
  int v16; // r0
  int v17; // r9
  __guard *v18; // r6
  _DWORD *v19; // r6
  __guard v20; // t1
  int v21; // r7
  int v22; // r8
  unsigned int v23; // r0
  unsigned int v24; // r6
  unsigned int v25; // r7
  unsigned int v26; // r0

  if ( ((unsigned int)dword_60C9F100 & ~(1615347280 << v4) & 1) == 0 && _cxa_guard_acquire(dword_60C9F100) )
  {
    dword_60C9F130[0] = (int)&sead__SafeStringBase__vtable;
    dword_60C9F134 = (int)"ChallengeCompleteWindow_AllComplete_00";
    dword_60C9F138 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F13C = (int)"ChallengeCompleteWindow_GoldComplete_00";
    dword_60C9F140 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F144 = (int)"ChallengeCompleteWindow_SilverComplete_00";
    dword_60C9F148 = (int)&sead__SafeStringBase__vtable;
    dword_60C9F14C = (int)"ChallengeCompleteWindow_BronzeComplete_00";
    sub_60000288();
    _cxa_guard_release(dword_60C9F100);
  }
  FIELD_U16(a1, 3636) = 257;
  *(_BYTE *)(FIELD_U32(a1, 3588) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3592) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3596) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 3600) + 64) &= ~1u;
  if ( a4 == 1 )
  {
    FIELD_U32(a1, 3648) = 0;
    sub_6047E0EC(dword_60C9F130, FIELD_U32(a1, 3604), 0);
    v9 = FIELD_U32(a1, 3648);
    v10 = v9 + 4;
    v11 = &dword_60C9F130[2 * v9];
    if ( v10 >= 8 )
      v10 = 0;
    sub_6047E0EC(v11, *(_DWORD *)(a1 + 3604 + 4 * v10), 0);
  }
  else
  {
    v12 = 1;
    if ( (unsigned int)(a2 - 3) < 3 )
      v12 = 6 - a2;
    FIELD_U32(a1, 3648) = v12;
    if ( ((unsigned int)&dword_60C9F100[1] & ~(1615347620 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9F100[1]) )
    {
      dword_60C9F150 = (int)&sead__SafeStringBase__vtable;
      dword_60C9F154 = (int)"ChallengeCompleteWindow_category_01";
      dword_60C9F158 = (int)&sead__SafeStringBase__vtable;
      dword_60C9F15C = (int)"ChallengeCompleteWindow_category_02";
      dword_60C9F160 = (int)&sead__SafeStringBase__vtable;
      dword_60C9F164 = (int)"ChallengeCompleteWindow_category_03";
      dword_60C9F168 = (int)&sead__SafeStringBase__vtable;
      dword_60C9F16C = (int)"ChallengeCompleteWindow_category_04";
      sub_60000288();
      _cxa_guard_release(&dword_60C9F100[1]);
    }
    v13 = FIELD_U32(a1, 3648);
    v14 = 0;
    v15 = a1 + 3604;
    v16 = 0;
    if ( v13 < 8 )
      v16 = FIELD_U32(a1, 3648);
    v17 = *(_DWORD *)(v15 + 4 * v16);
    v18 = &dword_60C9F100[2 * a3];
    v20 = v18[20];
    v19 = v18 + 20;
    (*(void (__fastcall **)(_DWORD *))(v20 + 12))(v19);
    sub_6047E0EC(&dword_60C9F130[2 * v13], v17, 1, v19[1]);
    v21 = FIELD_U32(a1, 3648);
    if ( (unsigned int)(v21 + 4) < 8 )
      v14 = v21 + 4;
    v22 = *(_DWORD *)(v15 + 4 * v14);
    (*(void (__fastcall **)(_DWORD *))(*v19 + 12))(v19);
    sub_6047E0EC(&dword_60C9F130[2 * v21], v22, 1, v19[1]);
  }
  v23 = FIELD_U32(a1, 3648);
  v24 = 0;
  if ( v23 >= 4 )
    v23 = 0;
  *(_BYTE *)(*(_DWORD *)(a1 + 4 * v23 + 3588) + 64) |= 1u;
  v25 = FIELD_U32(a1, 3648);
  FIELD_U32(a1, 3648) = 0;
  sub_60484570(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  ++FIELD_U32(a1, 3648);
  sub_60484570(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  ++FIELD_U32(a1, 3648);
  sub_60484570(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  ++FIELD_U32(a1, 3648);
  sub_60484570(a1);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3552) + 104))(**(_DWORD **)(a1 + 3552));
  sub_60473B58((_DWORD *)(a1 + 40), 0xEu, 0);
  v26 = 2;
  FIELD_U32(a1, 3648) = v25;
  if ( v25 <= 2 )
    v26 = dword_60B02B24[v25];
  if ( v26 < 4 )
    v24 = v26;
  sub_6050A660(*(_DWORD *)(a1 + 4 * v24 + 3652));
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60C9F038);
}
