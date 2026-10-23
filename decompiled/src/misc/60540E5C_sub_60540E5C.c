/* sub_60540E5C
 * address: 0x60540E5C   size: 1076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60540E5C(int a1, char a2)
{
  _BYTE *v3; // r7
  _DWORD *v4; // r5
  const char *v5; // r0
  char v6; // r12
  char v7; // r12
  int v9; // [sp+8h] [bp-20h] BYREF
  const char *v10; // [sp+Ch] [bp-1Ch]

  FIELD_U8(a1, 34730) = a2;
  v3 = (_BYTE *)(a1 + 34730);
  v4 = (_DWORD *)(a1 + 28128);
  sub_604734E4((_DWORD *)(a1 + 28128), 0);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "Title";
  sub_60475C8C((int)v4);
  if ( *v3 )
  {
    v9 = (int)&sead__SafeStringBase__vtable;
    v5 = "SaveDataSelectWinDL.bflyt";
  }
  else
  {
    v9 = (int)&sead__SafeStringBase__vtable;
    v5 = "SaveDataSelectWin.bflyt";
  }
  v10 = v5;
  message_ref(v4, &v9, a1 + 31840, 0, 0);
  if ( ((unsigned int)dword_60CABCA0 & ~(1616121640 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60CABCA0) )
  {
    dword_60CABCF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCF4 = (int)"Pa_DeleteData_00";
    dword_60CABCF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCFC = (int)"Pa_NewData_00";
    dword_60CABD00 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD04 = (int)"Pa_WichiWriteDataL_00";
    dword_60CABD08 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD0C = (int)"Pa_WichiWriteDataR_00";
    dword_60CABD10 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD14 = (int)"Pa_OverWriteDataL_00";
    dword_60CABD18 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD1C = (int)"Pa_OverWriteDataR_00";
    dword_60CABD20 = (int)&sead__SafeStringBase__vtable;
    dword_60CABD24 = (int)"Pa_CompleteData_00";
    sub_60000288();
    _cxa_guard_release(dword_60CABCA0);
  }
  sub_60531B9C(a1 + 4);
  sub_60531B9C(a1 + 4016);
  sub_60531B9C(a1 + 8028);
  sub_60531B9C(a1 + 12040);
  sub_60531B9C(a1 + 16052);
  sub_60531B9C(a1 + 20064);
  sub_60531B9C(a1 + 24076);
  if ( ((unsigned int)&dword_60CABCA0[1] & ~(1616121992 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CABCA0[1]) )
  {
    dword_60CABCC4 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCC8 = dword_60CABA78;
    dword_60CABCCC = (int)&sead__SafeStringBase__vtable;
    dword_60CABCD0 = dword_60CABA80;
    dword_60CABCD4 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCD8 = dword_60CABA88;
    dword_60CABCDC = (int)&sead__SafeStringBase__vtable;
    dword_60CABCE0 = dword_60CABA90;
    dword_60CABCE4 = (int)&sead__SafeStringBase__vtable;
    dword_60CABCE8 = dword_60CABA98;
    sub_60000288();
    _cxa_guard_release(&dword_60CABCA0[1]);
  }
  v9 = 5;
  sub_60476030((int)v4, &dword_60CABCC4, &v9);
  FIELD_U8(a1, 32854) = 1;
  sub_60502210(a1 + 31800, &dword_60B03AAC, 18);
  v9 = (int)&sead__SafeStringBase__vtable;
  v10 = "SaveDataSelectWin";
  sead__SafeStringBase__operator_assign(a1 + 32812, (int)&v9);
  sub_6050292C(a1 + 31800, 15);
  sub_60502960(a1 + 31800, 15);
  sub_60502994(a1 + 31800, 15);
  sub_605029C8(a1 + 31800, 15);
  sub_605028F0(a1 + 31800, dword_60B03AB0, 1);
  sub_605028F0(a1 + 31800, &dword_60B03AB0[1], 1);
  sub_605028F0(a1 + 31800, &dword_60B03AB0[2], 1);
  sub_605028F0(a1 + 31800, &dword_60B03AB0[3], 1);
  sub_605028F0(a1 + 31800, &dword_60B03AB0[4], 1);
  sub_605029FC(a1 + 31800, &dword_60B03AAC, (int)"SE_SYS_BACK");
  sub_60502A24(a1 + 31800, dword_60B03AC4, 5, 1);
  sub_6045BF58(a1 + 33880, 0);
  return sub_6045BF58(a1 + 34284, 4);
}
