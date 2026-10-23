/* LargeGoomba_vf61
 * address: 0x603413DC   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall LargeGoomba_vf61(_DWORD *a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int v6; // r0
  int v7; // r6
  int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r1
  _DWORD *v11; // r8
  int v12; // r7
  int v13; // r0
  int v14; // r3
  _BOOL4 v15; // r3
  _DWORD *v16; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1614025720 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v5 )
  {
    v6 = (**v5)(v5, &dword_60C7B404);
    if ( v6 )
      v6 = (int)v5;
  }
  else
  {
    v6 = 0;
  }
  a1[1608] = v6;
  v7 = FIELD_S8(v6, 84);
  a1[20] = FIELD_U32(v6, 80);
  v8 = dword_60C7F52C;
  v9 = sub_602A3358((int)a1, (int)v5);
  sub_60022760(0.0, 24.0, v8, (int)a1, v9, v7);
  (*(void (__fastcall **)(_DWORD *, int))(*a1 + 660))(a1, v7);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 672))(a1);
  v10 = a1[1600];
  v11 = a1 + 1602;
  v12 = a1[1601];
  v13 = v12;
  v14 = v12 & 1 | v10;
  v15 = v14 != 0;
  if ( v12 )
    v13 = 1;
  if ( v10 || (v13 & v15) == 1 )
  {
    *v11 = 2;
    v16 = (_DWORD *)((char *)a1 + (v12 >> 1));
    if ( (v12 & 1) != 0 )
      v10 = *(_DWORD *)(*v16 + v10);
    ((void (__fastcall *)(_DWORD *))v10)(v16);
  }
  a1[1600] = sub_603411E4;
  a1[1601] = 0;
  *v11 = 0;
  sub_603411E4((int)a1);
  return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C94668);
}
