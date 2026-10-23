/* WorldNameTable_init
 * address: 0x6047BEC0   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WorldNameTable_init(_WORD *a1, unsigned int a2)
{
  int v4; // r5
  char v5; // r12
  char *v6; // r6
  int v7; // t1
  unsigned int v8; // r7
  _WORD *v9; // r6
  int result; // r0
  int v11; // r2
  int v12; // r1
  int v13; // r3
  _WORD *v14; // r2
  __int16 *v15; // r3
  __int16 v16; // r7

  v4 = StaffCreditTable_init(6);
  if ( ((unsigned int)&unk_60C9EAD0 & ~(1615314664 << v5) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C9EAD0) )
  {
    dword_60C9EAD4 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EAD8 = (int)"WorldName_1";
    dword_60C9EADC = (int)&sead__SafeStringBase__vtable;
    dword_60C9EAE0 = (int)"WorldName_2";
    dword_60C9EAE4 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EAE8 = (int)"WorldName_3";
    dword_60C9EAEC = (int)&sead__SafeStringBase__vtable;
    dword_60C9EAF0 = (int)"WorldName_4";
    dword_60C9EAF4 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EAF8 = (int)"WorldName_5";
    dword_60C9EAFC = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB00 = (int)"WorldName_6";
    dword_60C9EB04 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB08 = (int)"WorldName_7";
    dword_60C9EB0C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB10 = (int)"WorldName_8";
    dword_60C9EB14 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB18 = (int)"WorldName_9";
    dword_60C9EB1C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB20 = (int)"WorldName_SECRET";
    dword_60C9EB24 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB28 = (int)"WorldName_Coin_Battle";
    dword_60C9EB2C = (int)&sead__SafeStringBase__vtable;
    dword_60C9EB30 = (int)"WorldName_ShadowIsl";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60C9EAD0);
  }
  switch ( a2 )
  {
    case 0x96u:
      a2 = 11;
      break;
    case 0x64u:
      a2 = 9;
      break;
    case 0xAu:
      a2 = 10;
      break;
    default:
      if ( a2 >= 9 )
        a2 = 0;
      break;
  }
  v6 = (char *)&unk_60C9EAD0 + 8 * a2;
  v7 = *((_DWORD *)v6 + 1);
  v6 += 4;
  (*(void (__fastcall **)(char *))(v7 + 12))(v6);
  v8 = sub_60911638(FIELD_U32(v4, 4), *((_DWORD *)v6 + 1));
  v9 = 0;
  if ( FIELD_U32(v4, 8) > v8 )
    v9 = (_WORD *)sub_6091171C(FIELD_U32(v4, 4), v8);
  result = sub_609119F8(v4, v8) >> 1;
  if ( result >= 1 )
  {
    v11 = 0;
    if ( (result & 1) != 0 )
    {
      v11 = 1;
      *a1 = *v9;
    }
    if ( result != 1 )
    {
      v12 = result - v11;
      v13 = 2 * v11 + 2;
      v14 = (_WORD *)((char *)a1 + v13);
      v15 = (_WORD *)((char *)v9 + v13);
      do
      {
        v12 -= 2;
        *(v14 - 1) = *(v15 - 1);
        v16 = *v15;
        v15 += 2;
        *v14 = v16;
        v14 += 2;
      }
      while ( v12 );
    }
  }
  return result;
}
