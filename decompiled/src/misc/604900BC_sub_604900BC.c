/* sub_604900BC
 * address: 0x604900BC   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604900BC(int a1)
{
  char v1; // r12
  _DWORD *v3; // r11
  unsigned int v4; // r8
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r7
  int v8; // r0
  _BYTE *v9; // r10
  int v10; // t1
  int v11; // r0
  float v12; // s0
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r0
  unsigned int v16; // r6
  int v17; // r0
  unsigned int v18; // r6
  int v19; // r0
  int (**v21)(); // [sp+8h] [bp-40h] BYREF
  int v22; // [sp+Ch] [bp-3Ch]
  int (**v23)(); // [sp+10h] [bp-38h] BYREF
  int v24; // [sp+14h] [bp-34h]

  if ( ((unsigned int)&dword_60C9FD78[2] & ~(1615397092 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD78[2]) )
  {
    dword_60C9FDAC = 7;
    dword_60C9FDB0 = 6;
    _cxa_guard_release(&dword_60C9FD78[2]);
  }
  v23 = &sead__SafeStringBase__vtable;
  v24 = sub_604923E4(4);
  v3 = (_DWORD *)(a1 + 36);
  v21 = &sead__SafeStringBase__vtable;
  v22 = sub_60492798(dword_60C9FDAC);
  v4 = sub_604746E4(a1 + 36, &v23, &v21);
  v5 = sub_604923E4(4);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v5;
  v6 = sub_60492798(dword_60C9FDB0);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v6;
  v7 = sub_604746E4(a1 + 36, &v23, &v21);
  v10 = FIELD_U8(a1, 47817);
  v9 = (_BYTE *)(a1 + 47817);
  v8 = v10;
  if ( !*(v9 - 1) )
  {
    if ( !v8 )
    {
      v16 = dword_60C9FDAC;
      v17 = sub_604923E4(4);
      v23 = &sead__SafeStringBase__vtable;
      v24 = v17;
      sub_604742D0(v3, v16, &v23, v4, 1.0, 1);
      v18 = dword_60C9FDB0;
      v19 = sub_604923E4(4);
      v23 = &sead__SafeStringBase__vtable;
      v24 = v19;
      sub_604742D0(v3, v18, &v23, v7, 1.0, 1);
      goto LABEL_11;
    }
    v15 = sub_604923E4(4);
    v23 = &sead__SafeStringBase__vtable;
    v24 = v15;
    sub_604742D0(v3, 7u, &v23, v4, 1.0, 1);
    v12 = sub_6047457C((int)v3, 6u);
    v13 = (int)v3;
    v14 = 7;
    goto LABEL_9;
  }
  if ( !v8 )
  {
    v11 = sub_604923E4(4);
    v23 = &sead__SafeStringBase__vtable;
    v24 = v11;
    sub_604742D0(v3, 6u, &v23, v7, 1.0, 1);
    v12 = sub_6047457C((int)v3, 7u);
    v13 = (int)v3;
    v14 = 6;
LABEL_9:
    sub_6047455C(v13, v14, v12);
  }
LABEL_11:
  *(v9 - 1) = 1;
  *v9 = 1;
  return 1;
}
