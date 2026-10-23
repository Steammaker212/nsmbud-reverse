/* sub_603841C8
 * address: 0x603841C8   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603841C8(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int *))
{
  int v4; // r5
  int v5; // r7
  char v6; // r12
  int v7; // r8
  int v8; // r5
  float v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r2
  unsigned int v13; // r1
  int *v14; // r0
  int v15; // r3
  signed int v16; // r2
  int v17; // r7
  int v18; // r6
  int v19; // r3
  int *v20; // r7
  int v21; // r6
  int v22; // r4
  signed int v23; // r3
  int v24; // r7
  signed int v25; // r0
  _DWORD v27[12]; // [sp+8h] [bp-30h] BYREF

  v4 = 0;
  v5 = a1[1581];
  if ( v5 < 1 )
    return v4;
  if ( sub_602A588C((int)a1) )
    return v4;
  v7 = a1[1590];
  if ( v7 < 0 )
    return v4;
  if ( ((unsigned int)&dword_60C7B408 & ~(1614299676 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  v8 = 0;
  if ( a2 )
  {
    v8 = (**a2)(a2, &dword_60C7B404);
    if ( v8 )
      v8 = (int)a2;
  }
  v9 = FIELD_F32(v8, 112);
  v10 = FIELD_U32(v8, 116);
  v27[0] = FIELD_U32(v8, 108);
  v27[2] = v10;
  v11 = 31;
  *(float *)&v27[1] = v9 + 40.0;
  if ( (unsigned int)(v5 - 1) < 4 )
    v11 = v5 + 26;
  sub_60407E74(dword_60C9A1E8, v27, v11, -1, 0, FIELD_U32(v8, 8));
  do
  {
    sub_607D15C8(v8);
    --v5;
  }
  while ( v5 );
  v12 = v7;
  a1[1598] = FIELD_U32(v8, 8);
  v13 = a1[1575];
  v14 = (int *)a1[1576];
  if ( v13 < v7 )
    v12 = a1[1575];
  if ( v12 )
  {
    v15 = v7;
    if ( v7 > v13 )
      v15 = a1[1575];
    if ( (v12 & 1) == 0 )
    {
      v16 = 0;
      v17 = 0;
      if ( v15 == 1 )
        goto LABEL_28;
LABEL_24:
      v18 = ~v7;
      if ( ~v13 > ~v7 )
        v18 = ~v13;
      v19 = ~v17 - v18;
      v20 = &v14[v17 + 1];
      do
      {
        v21 = *(v20 - 1);
        v22 = *v20;
        v20 += 2;
        v19 -= 2;
        v16 += FIELD_U8(v22, 128) + FIELD_U8(v21, 128);
      }
      while ( v19 );
      goto LABEL_28;
    }
    v17 = 1;
    v16 = *(unsigned __int8 *)(*v14 + 128);
    if ( v15 != 1 )
      goto LABEL_24;
  }
  else
  {
    v16 = 0;
  }
LABEL_28:
  v23 = v16;
  if ( v13 )
  {
    v23 = v16;
    do
    {
      v24 = *v14++;
      if ( FIELD_U8(v24, 128) )
        FIELD_U32(v24, 124) = v23--;
      --v13;
    }
    while ( v13 );
  }
  v25 = abs32(v23 + 1);
  if ( v16 > v25 )
    v25 = v16;
  a1[1599] = v25;
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C96A7C);
  sub_607D15AC(v8, 3 * a1[1599] + 7);
  return 1;
}
