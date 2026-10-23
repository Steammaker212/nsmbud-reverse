/* sub_604D3C50
 * address: 0x604D3C50   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D3C50(int a1)
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

  if ( ((unsigned int)&dword_60CA4D00[8] & ~(1615674488 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CA4D00[8]) )
  {
    *(_QWORD *)&dword_60CA4D98 = 0x700000008LL;
    _cxa_guard_release(&dword_60CA4D00[8]);
  }
  v23 = &sead__SafeStringBase__vtable;
  v24 = sub_604DABE0(12);
  v3 = (_DWORD *)(a1 + 40);
  v21 = &sead__SafeStringBase__vtable;
  v22 = sub_604DAF94(dword_60CA4D98);
  v4 = sub_604746E4(a1 + 40, &v23, &v21);
  v5 = sub_604DABE0(12);
  v23 = &sead__SafeStringBase__vtable;
  v24 = v5;
  v6 = sub_604DAF94(dword_60CA4D9C);
  v21 = &sead__SafeStringBase__vtable;
  v22 = v6;
  v7 = sub_604746E4(a1 + 40, &v23, &v21);
  v10 = FIELD_U8(a1, 615723);
  v9 = (_BYTE *)(a1 + 615723);
  v8 = v10;
  if ( !*(v9 - 1) )
  {
    if ( !v8 )
    {
      v16 = dword_60CA4D98;
      v17 = sub_604DABE0(12);
      v23 = &sead__SafeStringBase__vtable;
      v24 = v17;
      sub_604742D0(v3, v16, &v23, v4, 1.0, 1);
      v18 = dword_60CA4D9C;
      v19 = sub_604DABE0(12);
      v23 = &sead__SafeStringBase__vtable;
      v24 = v19;
      sub_604742D0(v3, v18, &v23, v7, 1.0, 1);
      goto LABEL_11;
    }
    v15 = sub_604DABE0(12);
    v23 = &sead__SafeStringBase__vtable;
    v24 = v15;
    sub_604742D0(v3, 8u, &v23, v4, 1.0, 1);
    v12 = sub_6047457C((int)v3, 7u);
    v13 = (int)v3;
    v14 = 8;
    goto LABEL_9;
  }
  if ( !v8 )
  {
    v11 = sub_604DABE0(12);
    v23 = &sead__SafeStringBase__vtable;
    v24 = v11;
    sub_604742D0(v3, 7u, &v23, v7, 1.0, 1);
    v12 = sub_6047457C((int)v3, 8u);
    v13 = (int)v3;
    v14 = 7;
LABEL_9:
    sub_6047455C(v13, v14, v12);
  }
LABEL_11:
  *(v9 - 1) = 1;
  *v9 = 1;
  return 1;
}
