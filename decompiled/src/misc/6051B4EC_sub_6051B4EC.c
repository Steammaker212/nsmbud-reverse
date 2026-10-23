/* sub_6051B4EC
 * address: 0x6051B4EC   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051B4EC(int a1)
{
  char v1; // r12
  _DWORD *v3; // r5
  int i; // r8
  int v5; // r0
  int result; // r0
  char v7; // r12
  int v8; // r0
  int (__fastcall *v9)(int, int *, _DWORD *); // r3
  _DWORD v10[12]; // [sp+28h] [bp-30h] BYREF

  if ( ((unsigned int)dword_60CA8D50 & ~(1615967496 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60CA8D50) )
  {
    dword_60CA8CC0[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CC4 = (int)"PreGameStoryW1.bflyt";
    dword_60CA8CC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CCC = (int)"PreGameStoryW2.bflyt";
    dword_60CA8CD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CD4 = (int)"PreGameStoryW3.bflyt";
    dword_60CA8CD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CDC = (int)"PreGameStoryW4.bflyt";
    dword_60CA8CE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CE4 = (int)"PreGameStoryW5.bflyt";
    dword_60CA8CE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CEC = (int)"PreGameStoryW6.bflyt";
    dword_60CA8CF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CF4 = (int)"PreGameStoryW7.bflyt";
    dword_60CA8CF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8CFC = (int)"PreGameStoryW8.bflyt";
    dword_60CA8D00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D04 = (int)"PreGameStoryW9.bflyt";
    dword_60CA8D08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D0C = (int)"PreGameStoryH1.bflyt";
    dword_60CA8D10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D14 = (int)"PreGameStoryH2.bflyt";
    dword_60CA8D18 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D1C = (int)"PreGameStoryTS.bflyt";
    dword_60CA8D20 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D24 = (int)"PreGameStoryO.bflyt";
    dword_60CA8D28 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D2C = (int)"PreGameStoryW3.bflyt";
    dword_60CA8D30 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D34 = (int)"PreGameStoryW4.bflyt";
    dword_60CA8D38 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D3C = (int)"PreGameStoryW7.bflyt";
    dword_60CA8D40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA8D44 = (int)"PreGameStoryW7.bflyt";
    sub_60000288();
    _cxa_guard_release(dword_60CA8D50);
  }
  v3 = (_DWORD *)(a1 + 8);
  for ( i = 0; i != 34; i += 2 )
  {
    FIELD_U32(a1, 4) = v3;
    sub_604734E4(v3, 0);
    v5 = FIELD_U32(a1, 4);
    v10[1] = &sead__SafeStringBase__vtable;
    v10[2] = "Common";
    sub_60475C8C(v5);
    result = message_ref(*(_DWORD **)(a1 + 4), &dword_60CA8CC0[i], 0, 0, 0);
    if ( result == 1 )
    {
      if ( ((unsigned int)&dword_60CA8D50[1] & ~(1615968068 << v7) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60CA8D50[1]) )
        {
          dword_60CA8D78 = (int)&sead__SafeStringBase__vtable;
          dword_60CA8D7C = dword_60CA8BF4;
          dword_60CA8D80 = (int)&sead__SafeStringBase__vtable;
          dword_60CA8D84 = dword_60CA8BFC;
          dword_60CA8D88 = (int)&sead__SafeStringBase__vtable;
          dword_60CA8D8C = dword_60CA8C04;
          sub_60000288();
          _cxa_guard_release(&dword_60CA8D50[1]);
        }
      }
      v8 = FIELD_U32(a1, 4);
      v9 = *(int (__fastcall **)(int, int *, _DWORD *))(*(_DWORD *)v8 + 8);
      v10[0] = 3;
      result = v9(v8, &dword_60CA8D78, v10);
    }
    v3 += 912;
  }
  return result;
}
