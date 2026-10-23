/* sub_608C6070
 * address: 0x608C6070   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C6070(int a1, int a2)
{
  int v2; // r11
  int v3; // r9
  _DWORD *v4; // r1
  _DWORD *v5; // r0
  _DWORD *v6; // r2
  char v7; // r4
  int v8; // lr
  int v9; // r2
  void (__fastcall *v10)(_DWORD *, int, int); // r10
  int v11; // r12
  _DWORD *v12; // r3
  _DWORD *v13; // r8
  _DWORD *v14; // r6
  int v15; // r12
  _DWORD *v16; // r3
  void (__fastcall *v17)(_DWORD *, int, int); // r1
  int v18; // r6
  int v19; // r7
  int v20; // r5
  _BOOL4 v21; // r1
  bool v22; // zf
  _DWORD *v25; // [sp+4h] [bp-2Ch]
  int v26; // [sp+8h] [bp-28h]

  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD **)(a1 + 8);
  v5 = (_DWORD *)(a1 + 4);
  v25 = v4;
  if ( v4 != v5 )
  {
    v6 = v4;
    v3 = 0;
    do
    {
      v6 = (_DWORD *)v6[1];
      ++v3;
    }
    while ( v6 != v5 );
  }
  v7 = 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v26 = 0;
  while ( 1 )
  {
    v11 = 0;
    if ( v5 == v25 )
      break;
    v5 = (_DWORD *)*v5;
    v12 = v5 + 3;
    v13 = v5 + 2;
    if ( !v26 )
    {
      v14 = (_DWORD *)*v12;
      v26 = 0;
      if ( (_DWORD *)*v12 != v13 )
      {
        v15 = -1;
        do
        {
          v14 = (_DWORD *)v14[1];
          ++v15;
        }
        while ( v14 != v13 );
        if ( v15 >= 0 )
        {
          v10 = *(void (__fastcall **)(_DWORD *, int, int))(*v13 + 16);
          v9 = *(_DWORD *)(*v13 + 20);
          v8 = *(_DWORD *)(*v13 + 24);
          v2 = *(_DWORD *)(*v13 + 28);
          v26 = *(_DWORD *)(*v13 + 8) + *(_DWORD *)(*v13 + 12);
        }
        v11 = 0;
      }
    }
    --v3;
    do
    {
      v16 = (_DWORD *)*v12;
      if ( v16 == v13 )
        break;
      v17 = (void (__fastcall *)(_DWORD *, int, int))v16[4];
      v18 = v16[5];
      v19 = v16[6];
      v20 = v16[7];
      v12 = v16 + 1;
      v21 = v10 == v17 && v9 == v18 && v8 == v19 && v2 == v20;
      v7 &= v21;
    }
    while ( v21 );
    if ( v3 == a2 )
      goto LABEL_19;
  }
  v5 = 0;
LABEL_19:
  if ( (v7 & 1) != 0 )
  {
    v22 = v26 == 0;
    if ( v26 )
    {
      v11 = 1;
      v22 = v10 == 0;
    }
    if ( !v22 )
    {
      v10(v5, v26 - (_DWORD)v5, v9);
      return 1;
    }
  }
  return v11;
}
