/* sub_60230578
 * address: 0x60230578   size: 1440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60230578(int a1)
{
  int result; // r0
  int v2; // r0
  bool v3; // cc
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r0
  int (**v13)(); // r0
  int v14; // r9
  int v15; // r11
  int v16; // r7
  int v17; // r0
  int v18; // r1
  int v19; // r2
  unsigned int v20; // r0
  unsigned int v21; // r0
  int v22; // [sp+10h] [bp-B0h]
  int (**v24)(); // [sp+18h] [bp-A8h] BYREF
  int v25; // [sp+1Ch] [bp-A4h]
  _DWORD v26[8]; // [sp+20h] [bp-A0h]
  char v27[8]; // [sp+40h] [bp-80h] BYREF
  float v28; // [sp+48h] [bp-78h]
  int v29; // [sp+4Ch] [bp-74h]
  int v30; // [sp+5Ch] [bp-64h]
  float v31; // [sp+68h] [bp-58h]
  int v32; // [sp+6Ch] [bp-54h]
  _DWORD v33[20]; // [sp+70h] [bp-50h] BYREF

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 92))(a1);
  v22 = result;
  if ( result >= 1 )
  {
    memset(v33, 0, 44);
    (*(void (__fastcall **)(int *))(dword_60C8D868[0] + 12))(dword_60C8D868);
    v2 = 0;
    while ( *(_BYTE *)(dword_60C8D86C + v2) )
    {
      if ( !*(_BYTE *)(dword_60C8D86C + v2 + 1) )
      {
        ++v2;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D86C + v2 + 2) )
      {
        v2 += 2;
        break;
      }
      v3 = v2 + 2 <= 0x7FFFF;
      v2 += 3;
      if ( !v3 )
      {
        v2 = 0;
        break;
      }
    }
    v26[0] = v2;
    (*(void (__fastcall **)(int *))(dword_60C8D878 + 12))(&dword_60C8D878);
    v4 = 0;
    while ( *(_BYTE *)(dword_60C8D87C + v4) )
    {
      if ( !*(_BYTE *)(dword_60C8D87C + v4 + 1) )
      {
        ++v4;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D87C + v4 + 2) )
      {
        v4 += 2;
        break;
      }
      v3 = v4 + 2 <= 0x7FFFF;
      v4 += 3;
      if ( !v3 )
      {
        v4 = 0;
        break;
      }
    }
    v26[1] = v4;
    (*(void (__fastcall **)(int *))(dword_60C8D888 + 12))(&dword_60C8D888);
    v5 = 0;
    while ( *(_BYTE *)(dword_60C8D88C + v5) )
    {
      if ( !*(_BYTE *)(dword_60C8D88C + v5 + 1) )
      {
        ++v5;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D88C + v5 + 2) )
      {
        v5 += 2;
        break;
      }
      v3 = v5 + 2 <= 0x7FFFF;
      v5 += 3;
      if ( !v3 )
      {
        v5 = 0;
        break;
      }
    }
    v26[2] = v5;
    (*(void (__fastcall **)(int *))(dword_60C8D898 + 12))(&dword_60C8D898);
    v6 = 0;
    while ( *(_BYTE *)(dword_60C8D89C + v6) )
    {
      if ( !*(_BYTE *)(dword_60C8D89C + v6 + 1) )
      {
        ++v6;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D89C + v6 + 2) )
      {
        v6 += 2;
        break;
      }
      v3 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v3 )
      {
        v6 = 0;
        break;
      }
    }
    v26[3] = v6;
    (*(void (__fastcall **)(int *))(dword_60C8D8A8 + 12))(&dword_60C8D8A8);
    v7 = 0;
    while ( *(_BYTE *)(dword_60C8D8AC + v7) )
    {
      if ( !*(_BYTE *)(dword_60C8D8AC + v7 + 1) )
      {
        ++v7;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8AC + v7 + 2) )
      {
        v7 += 2;
        break;
      }
      v3 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v3 )
      {
        v7 = 0;
        break;
      }
    }
    v26[4] = v7;
    (*(void (__fastcall **)(int *))(dword_60C8D8B8 + 12))(&dword_60C8D8B8);
    v8 = 0;
    while ( *(_BYTE *)(dword_60C8D8BC + v8) )
    {
      if ( !*(_BYTE *)(dword_60C8D8BC + v8 + 1) )
      {
        ++v8;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8BC + v8 + 2) )
      {
        v8 += 2;
        break;
      }
      v3 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v3 )
      {
        v8 = 0;
        break;
      }
    }
    v26[5] = v8;
    (*(void (__fastcall **)(int *))(dword_60C8D8C8 + 12))(&dword_60C8D8C8);
    v9 = 0;
    while ( *(_BYTE *)(dword_60C8D8CC + v9) )
    {
      if ( !*(_BYTE *)(dword_60C8D8CC + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8CC + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v3 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v3 )
      {
        v9 = 0;
        break;
      }
    }
    v26[6] = v9;
    (*(void (__fastcall **)(int *))(dword_60C8D8D8 + 12))(&dword_60C8D8D8);
    v10 = 0;
    while ( *(_BYTE *)(dword_60C8D8DC + v10) )
    {
      if ( !*(_BYTE *)(dword_60C8D8DC + v10 + 1) )
      {
        ++v10;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D8DC + v10 + 2) )
      {
        v10 += 2;
        break;
      }
      v3 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v3 )
      {
        v10 = 0;
        break;
      }
    }
    v26[7] = v10;
    v11 = 0;
    do
    {
      v12 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 88))(a1, v11);
      v24 = &sead__SafeStringBase__vtable;
      v25 = v12;
      v13 = &sead__SafeStringBase__vtable;
      v14 = 0;
      while ( 1 )
      {
        v15 = v26[v14];
        v13[3]();
        ((void (__fastcall *)(int (***)()))v24[3])(&v24);
        v16 = v25;
        (*(void (__fastcall **)(int *))(dword_60C8D868[4 * v14] + 12))(&dword_60C8D868[4 * v14]);
        v17 = dword_60C8D868[4 * v14 + 1];
        if ( v16 == v17 )
          break;
        v18 = v15;
        if ( v15 >= 0x80000 )
          v18 = 0x80000;
        if ( v15 < 1 )
          break;
        v19 = 0;
        while ( *(unsigned __int8 *)(v25 + v19) == *(unsigned __int8 *)(v17 + v19) )
        {
          if ( *(_BYTE *)(v25 + v19) )
          {
            if ( ++v19 < v18 )
              continue;
          }
          goto LABEL_78;
        }
        if ( ++v14 > 7 )
          goto LABEL_82;
        v13 = v24;
      }
LABEL_78:
      (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)a1 + 108))(a1, v11, v27);
      v33[4] = v29;
      v33[5] = v30;
      v33[6] = v32;
      v33[7] = sub_6000F7B8(v28, v31);
      v20 = dword_60C8D868[4 * v14 + 2];
      if ( v20 != -1 )
      {
        v33[3] = Profile__get(v20);
        sub_600080BC((_DWORD *)ActorMgr__instance, v33);
      }
      v21 = dword_60C8D868[4 * v14 + 3];
      if ( v21 != -1 )
      {
        v33[3] = Profile__get(v21);
        sub_600080BC((_DWORD *)ActorMgr__instance, v33);
      }
LABEL_82:
      result = v22;
      ++v11;
    }
    while ( v11 != v22 );
  }
  return result;
}
