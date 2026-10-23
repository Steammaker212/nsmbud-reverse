/* sub_6049C294
 * address: 0x6049C294   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049C294(int a1, int *a2)
{
  char v2; // r12
  int v5; // r7
  int v6; // r5
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r3

  if ( ((unsigned int)dword_60CA09EC & ~(1615446708 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA09EC) )
  {
    dword_60CA0AE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0AEC = dword_60CA0794;
    dword_60CA0AF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0AF4 = dword_60CA0794;
    dword_60CA0AF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0AFC = dword_60CA07A4;
    dword_60CA0B00 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B04 = dword_60CA07AC;
    dword_60CA0B08 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B0C = dword_60CA079C;
    dword_60CA0B10 = (int)&sead__SafeStringBase__vtable;
    dword_60CA0B14 = dword_60CA07AC;
    sub_60000288();
    _cxa_guard_release(dword_60CA09EC);
  }
  v5 = 0;
  sub_604741D8((_DWORD *)(a1 + 44), 1u, &dword_60CA0AC0[2 * *a2 + 10], 0);
  sub_6047455C(a1 + 44, 1u, 0.0);
  sub_6049C484(a1, *a2);
  v6 = *a2;
  v7 = (_DWORD *)dword_60C99DEC;
  v8 = sub_603FCFF8(dword_60C99DEC + 16, v6);
  if ( v8 >= 0 )
  {
    if ( (unsigned int)v8 < 6 )
      v5 = v8;
    goto LABEL_12;
  }
  if ( v7[12] == v6 || (v5 = 1, v7[30] == v6) || (v5 = 2, v7[48] == v6) || (v9 = 5, v5 = 3, v7[66] == v6) )
LABEL_12:
    v9 = v7[18 * v5 + 10];
  return sub_6047E0EC(&dword_60CA07E0, FIELD_U32(a1, 3692), 1, v9);
}
