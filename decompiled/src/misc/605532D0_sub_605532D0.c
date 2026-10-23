/* sub_605532D0
 * address: 0x605532D0   size: 1780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605532D0(int a1)
{
  _DWORD *v2; // r10
  char v3; // r12
  int v4; // r0
  unsigned int v5; // r7
  unsigned int v6; // r3
  int v8; // r2
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r7
  unsigned int v12; // r4
  _DWORD *v13; // r9
  int v14; // r6
  int (__fastcall *v15)(int, int, int); // r5
  char v16; // r11
  int (__fastcall *v17)(int, int, int); // r5
  int (__fastcall *v18)(int, int, int); // r5
  float v19; // s0
  _DWORD *v20; // r7
  int v21; // r0
  float v22; // s0
  char v23; // r12
  char v24; // r5
  int v25; // r6
  int v26; // r10
  int v27; // r7
  int v28; // r5
  int *v29; // r0
  _DWORD *v30; // r1
  char v31; // r2
  char v32; // r3
  char v33; // r2
  char v34; // r3
  char v35; // r2
  char v36; // r3
  int v37; // r0

  FIELD_U8(a1, 40) = 1;
  FIELD_U32(a1, 70244) = 0;
  v2 = (_DWORD *)(a1 + 70244);
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 27560, 0) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 32300, 1) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 37040, 2) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 41780, 3) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 46520, 4) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 51260, 5) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 56000, 6) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 60740, 7) >= 0 )
    ++*v2;
  if ( StarCoinListWin_TotalSCoin_00_ref(a1 + 65480, 8) >= 0 )
    ++*v2;
  v4 = FIELD_U32(dword_60CC6D78, 412);
  if ( v4 >= 0 )
  {
    v5 = FIELD_U32(dword_60CC6D78, 412);
    while ( 1 )
    {
      v6 = v5;
      if ( v5 >= 9 )
        v6 = 0;
      if ( *(_BYTE *)(a1 + 4740 * v6 + 32296) )
        break;
      if ( (int)v5-- <= 0 )
        goto LABEL_28;
    }
    v4 = v5;
  }
LABEL_28:
  v8 = 0;
  v9 = 0;
  if ( (unsigned int)v4 < 9 )
    v8 = v4;
  if ( *(_BYTE *)(a1 + 4740 * v8 + 32296) )
  {
    if ( v4 >= 1 )
    {
      if ( (v4 & 1) != 0 )
      {
        v10 = 1;
        v9 = FIELD_U8(a1, 32296);
        if ( v4 == 1 )
          goto LABEL_43;
      }
      else
      {
        v10 = 0;
        v9 = 0;
        if ( v4 == 1 )
          goto LABEL_43;
      }
      v3 = 0;
      do
      {
        v11 = v10 + 1;
        v12 = 0;
        if ( v10 + 1 >= 9 )
          v11 = 0;
        if ( v10 < 9 )
          v12 = v10;
        v10 += 2;
        v9 += *(unsigned __int8 *)(a1 + 27560 + 4740 * v11 + 4736)
            + *(unsigned __int8 *)(a1 + 27560 + 4740 * v12 + 4736);
      }
      while ( v10 != v4 );
    }
  }
  else
  {
    v9 = -1;
  }
LABEL_43:
  FIELD_U32(a1, 70232) = v9;
  v13 = (_DWORD *)(a1 + 70232);
  if ( ((unsigned int)&dword_60CAD1B0[3] & ~(1616196940 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1B0[3]) )
  {
    dword_60CAD240 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD244 = dword_60CAD02C;
    dword_60CAD248 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD24C = dword_60CAD034;
    dword_60CAD250 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD254 = dword_60CAD03C;
    sub_60000288();
    _cxa_guard_release(&dword_60CAD1B0[3]);
  }
  v14 = sub_60473B4C(a1 + 44);
  v15 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v14 + 48);
  (*(void (__fastcall **)(int *))(dword_60CAD240 + 12))(&dword_60CAD240);
  v16 = 1;
  FIELD_U32(a1, 17812) = v15(v14, dword_60CAD244, 1);
  v17 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v14 + 48);
  (*(void (__fastcall **)(int *))(dword_60CAD248 + 12))(&dword_60CAD248);
  FIELD_U32(a1, 17816) = v17(v14, dword_60CAD24C, 1);
  v18 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v14 + 48);
  (*(void (__fastcall **)(int *))(dword_60CAD250 + 12))(&dword_60CAD250);
  FIELD_U32(a1, 17820) = v18(v14, dword_60CAD254, 1);
  FIELD_U32(a1, 70248) = 1;
  if ( *v13 )
  {
    sub_6047F01C((_DWORD *)(a1 + 17880), 0);
  }
  else
  {
    v16 = 0;
    sub_6047EEC4(a1 + 17880, 0, v19);
  }
  v20 = 0;
  FIELD_U8(a1, 18340) = v16;
  v21 = sub_608DE61C(a1 + 17892, 0);
  if ( v21 )
    v20 = (_DWORD *)(v21 - FIELD_U32(a1, 17904));
  sub_60478650(v20);
  if ( *v13 == *v2 - 1 )
  {
    sub_6047EEC4(a1 + 17880, 1, v22);
    v24 = 0;
  }
  else
  {
    v24 = 1;
    sub_6047F01C((_DWORD *)(a1 + 17880), 1);
  }
  FIELD_U8(a1, 18341) = v24;
  *(_BYTE *)(FIELD_U32(a1, 17828) + 64) = *(_BYTE *)(FIELD_U32(a1, 17828) + 64) & 0xFE | v16;
  *(_BYTE *)(FIELD_U32(a1, 17832) + 64) = *(_BYTE *)(FIELD_U32(a1, 17832) + 64) & 0xFE | v24;
  v25 = FIELD_U8(dword_60CC6D8C, 17);
  if ( ((unsigned int)&dword_60CAD1B0[4] & ~(1616197524 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1B0[4]) )
  {
    dword_60CAD1D0 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1D4 = (int)"StarCoinList_Index_00";
    _cxa_guard_release(&dword_60CAD1B0[4]);
  }
  if ( ((unsigned int)&dword_60CAD1B0[5] & ~(1616197616 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CAD1B0[5]) )
  {
    dword_60CAD1D8 = (int)&sead__SafeStringBase__vtable;
    dword_60CAD1DC = (int)"StarCoinListDL_Index_00";
    _cxa_guard_release(&dword_60CAD1B0[5]);
  }
  v26 = a1 + 17820;
  v27 = a1 + 17816;
  v28 = a1 + 17812;
  if ( v25 )
    v29 = &dword_60CAD070;
  else
    v29 = &dword_60CAD068;
  sub_6047E0EC(v29, FIELD_U32(a1, 17824), 0);
  sub_60473DE4((_DWORD *)(a1 + 44), 1u, &dword_60CAD010, 0);
  v30 = *(_DWORD **)(a1 + 3556);
  if ( FIELD_U32(a1, 3552) > 1u )
    v30 += 5;
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*v30 + 104))(*v30);
  sub_60553A34(a1, *v13);
  v31 = *(_BYTE *)(*(_DWORD *)v28 + 64);
  v32 = v31 | 1;
  if ( !FIELD_U32(a1, 70220) )
    v32 = v31 & 0xFE;
  *(_BYTE *)(*(_DWORD *)v28 + 64) = v32;
  v33 = *(_BYTE *)(*(_DWORD *)v27 + 64);
  v34 = v33 | 1;
  if ( !FIELD_U32(a1, 70224) )
    v34 = v33 & 0xFE;
  *(_BYTE *)(*(_DWORD *)v27 + 64) = v34;
  v35 = *(_BYTE *)(*(_DWORD *)v26 + 64);
  v36 = v35 | 1;
  if ( !FIELD_U32(a1, 70228) )
    v36 = v35 & 0xFE;
  *(_BYTE *)(*(_DWORD *)v26 + 64) = v36;
  v37 = sub_60473B4C(a1 + 44);
  sub_6098F1D4(v37);
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &dword_60CAD000, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3556) + 104))(**(_DWORD **)(a1 + 3556));
  sub_60473DE4((_DWORD *)(a1 + 3652), 0, &dword_60CAD000, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 7164) + 104))(**(_DWORD **)(a1 + 7164));
  sub_60473B58((_DWORD *)(a1 + 44), 0xEu, 0);
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&unk_60CAD098);
}
