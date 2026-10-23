/* sub_608E906C
 * address: 0x608E906C   size: 824   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608E906C(int a1, int a2)
{
  int v4; // r9
  int v5; // r5
  int v6; // r11
  int v7; // r6
  bool v8; // cc
  void *v9; // r9
  signed int v10; // r5
  int v11; // r0
  char *v12; // r10
  int v13; // r0
  char *v14; // r1
  signed int v15; // r5
  signed int v16; // r6
  signed int v17; // r0
  int v18; // r0
  signed int v19; // r7
  signed int v20; // r0
  char *v21; // [sp+0h] [bp-30h]
  _DWORD v22[11]; // [sp+4h] [bp-2Ch] BYREF

  if ( FIELD_S32(a1, 8) <= 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
  else
    **(_BYTE **)(a1 + 4) = 0;
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = "://";
  v4 = sub_6018506C((_DWORD *)a2, v22);
  if ( v4 == -1 )
  {
    v9 = *(void **)(a1 + 4);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
    v10 = 0;
    v11 = FIELD_U32(a1, 4);
    while ( *(_BYTE *)(v11 + v10) )
    {
      if ( !*(_BYTE *)(v11 + v10 + 1) )
      {
        ++v10;
        break;
      }
      if ( !*(_BYTE *)(v11 + v10 + 2) )
      {
        v10 += 2;
        break;
      }
      v8 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v8 )
      {
        v10 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
    v18 = FIELD_U32(a2, 4);
    v19 = 0;
    while ( *(_BYTE *)(v18 + v19) )
    {
      if ( !*(_BYTE *)(v18 + v19 + 1) )
      {
        ++v19;
        break;
      }
      if ( !*(_BYTE *)(v18 + v19 + 2) )
      {
        v19 += 2;
        break;
      }
      v8 = v19 + 2 <= 0x7FFFF;
      v19 += 3;
      if ( !v8 )
      {
        v19 = 0;
        break;
      }
    }
    v20 = FIELD_U32(a1, 8);
    if ( v19 >= v20 )
      v19 = v20 - 1;
    if ( v19 >= 1 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
      qmemcpy(v9, *(const void **)(a2 + 4), v19);
      if ( v19 > v10 )
        *((_BYTE *)v9 + v19) = 0;
    }
  }
  else
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a2);
    v5 = FIELD_U32(a2, 4);
    v6 = v4 + 3;
    v7 = 0;
    while ( *(_BYTE *)(v5 + v7) )
    {
      if ( !*(_BYTE *)(v5 + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(v5 + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    v12 = off_60C5CB34;
    v21 = *(char **)(a1 + 4);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
    v13 = FIELD_U32(a1, 4);
    v14 = v12;
    if ( v7 >= v6 )
      v14 = (char *)(v5 + v6);
    v15 = 0;
    if ( v4 < -3 )
      v14 = v12;
    while ( *(_BYTE *)(v13 + v15) )
    {
      if ( !*(_BYTE *)(v13 + v15 + 1) )
      {
        ++v15;
        break;
      }
      if ( !*(_BYTE *)(v13 + v15 + 2) )
      {
        v15 += 2;
        break;
      }
      v8 = v15 + 2 <= 0x7FFFF;
      v15 += 3;
      if ( !v8 )
      {
        v15 = 0;
        break;
      }
    }
    v16 = 0;
    while ( v14[v16] )
    {
      if ( !v14[v16 + 1] )
      {
        ++v16;
        break;
      }
      if ( !v14[v16 + 2] )
      {
        v16 += 2;
        break;
      }
      v8 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v8 )
      {
        v16 = 0;
        break;
      }
    }
    v17 = FIELD_U32(a1, 8);
    if ( v16 >= v17 )
      v16 = v17 - 1;
    if ( v16 >= 1 )
    {
      qmemcpy(v21, v14, v16);
      if ( v16 > v15 )
        v21[v16] = 0;
    }
  }
}
