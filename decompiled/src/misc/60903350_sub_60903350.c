/* sub_60903350
 * address: 0x60903350   size: 680   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60903350(_DWORD *a1, _DWORD *a2)
{
  int v4; // r4
  int v5; // r6
  unsigned int v6; // r7
  _BYTE *v7; // r1
  char v8; // r0
  unsigned __int8 *v9; // r1
  int v10; // t1
  int v11; // r11
  int v12; // r4
  int (**v13)(); // r5
  int v14; // r8
  unsigned int v15; // r0
  bool v16; // zf
  unsigned int v18; // r0
  int v19; // r4
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r4
  int v24; // r2
  int v25; // r1
  int v26; // [sp+8h] [bp-38h]
  _DWORD *v27; // [sp+10h] [bp-30h]
  int (**v28)(); // [sp+14h] [bp-2Ch] BYREF
  int v29; // [sp+18h] [bp-28h]

  v4 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[7] + 8));
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v27 = a2;
  v5 = 0;
  v6 = 0;
  v7 = (_BYTE *)a2[1];
  v8 = *v7;
  if ( *v7 )
  {
    v9 = v7 + 1;
    v6 = 0;
    do
    {
      v6 = v8 + v6 * v4;
      v10 = *v9++;
      v8 = v10;
    }
    while ( v10 );
  }
  v11 = a1[10];
  v12 = a1[9];
  v26 = v12;
  v13 = &off_60C5CAFC[(a1[12] ^ 1) + 4];
  while ( 1 )
  {
    v14 = (v5 + v12) / 2;
    v15 = ((int (__fastcall *)(_DWORD))*v13)(*(_DWORD *)(v11 + 16 * v14));
    if ( v15 == v6 )
      break;
    if ( v15 >= v6 )
    {
      v16 = v12 == v14;
      v12 = (v5 + v12) / 2;
      if ( v16 )
        return -1;
    }
    else
    {
      v16 = v5 == v14;
      v5 = (v5 + v12) / 2;
      if ( v16 )
        return -1;
    }
  }
  if ( (unsigned int)(v5 + v12 + 3) < 2 )
    return -1;
  v18 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[10] + 16 * v14 + 4));
  if ( v18 )
  {
    v14 = v14 + 1 - HIBYTE(v18);
    if ( v14 < v26 )
    {
      while ( 1 )
      {
        v19 = a1[10];
        if ( ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(v19 + 16 * v14)) != v6 )
          break;
        v20 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(v19 + 16 * v14 + 4));
        v21 = a1[8];
        v22 = v20 & 0xFFFFFF;
        if ( (unsigned int)(v21 + v22) > a1[11] )
          break;
        v28 = &sead__SafeStringBase__vtable;
        v29 = v21 + 4 * v22;
        (*(void (__fastcall **)(_DWORD *))(*v27 + 12))(v27);
        (*(void (__fastcall **)(_DWORD *))(*v27 + 12))(v27);
        v23 = v27[1];
        ((void (__fastcall *)(int (***)()))v28[3])(&v28);
        if ( v23 != v29 )
        {
          v24 = 1;
          v25 = v27[1];
          while ( *(unsigned __int8 *)(v25 + v24 - 1) == *(unsigned __int8 *)(v29 + v24 - 1) )
          {
            if ( !*(_BYTE *)(v25 + v24 - 1) )
              return v14;
            if ( v24 > 0x80000 || *(unsigned __int8 *)(v25 + v24) != *(unsigned __int8 *)(v29 + v24) )
              break;
            if ( !*(_BYTE *)(v25 + v24) )
              return v14;
            v24 += 2;
          }
          if ( ++v14 < v26 )
            continue;
        }
        return v14;
      }
      return -1;
    }
  }
  return v14;
}
