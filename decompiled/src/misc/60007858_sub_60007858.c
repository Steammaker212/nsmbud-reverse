/* sub_60007858
 * address: 0x60007858   size: 772   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60007858(int a1, int a2)
{
  _BYTE *v3; // r4
  int v4; // r0
  int v5; // r9
  int v6; // r5
  int *v7; // r7
  int v8; // t1
  int v9; // r4
  _DWORD *v10; // r10
  int result; // r0
  _DWORD *v12; // r5
  int v13; // r11
  _DWORD *v14; // r7
  int v15; // r9
  _DWORD *v16; // r8
  unsigned int v17; // r0
  unsigned int v18; // r6
  int *v19; // r6
  int v20; // r0
  unsigned int v21; // r6
  unsigned int v22; // r0
  int *v23; // r6
  int v24; // r0
  _DWORD *v25; // [sp+4h] [bp-34h]
  int *v26; // [sp+8h] [bp-30h]
  int *v27; // [sp+Ch] [bp-2Ch]
  int v28; // [sp+10h] [bp-28h]

  v3 = (_BYTE *)(a1 + 27200);
  if ( FIELD_U8(a1, 27200) || (v28 = 1, a2 == 1) )
  {
    v4 = FIELD_U32(a1, 22984);
    if ( v4 < 1 )
    {
      v28 = 0;
    }
    else
    {
      v5 = a2;
      v6 = 4 * v4;
      v7 = *(int **)(a1 + 22992);
      do
      {
        v8 = *v7++;
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 16))(v8);
        v6 -= 4;
      }
      while ( v6 );
      v28 = 0;
      FIELD_U32(a1, 22984) = 0;
      a2 = v5;
    }
  }
  *v3 = 0;
  v10 = (_DWORD *)(a1 + 22948);
  v9 = FIELD_U32(a1, 22948);
  result = FIELD_U32(a1, 22940);
  if ( result != a1 + 22936 )
  {
    v12 = (_DWORD *)(result - v9);
    v13 = FIELD_U32(result, 4);
    v14 = (_DWORD *)(a1 + 22936 - v9);
    v25 = (_DWORD *)(a1 + 22992);
    v26 = (int *)(a1 + 22988);
    v27 = (int *)(a1 + 22984);
    v15 = a1 + 27168;
    v16 = (_DWORD *)(a1 + 22944);
    if ( a2 )
    {
      do
      {
        if ( *((_BYTE *)v12 + 18) )
        {
          (*(void (__fastcall **)(_DWORD *))(*v12 + 56))(v12);
          v17 = (*(int (__fastcall **)(_DWORD *))(*v12 + 60))(v12);
          v18 = 0;
          if ( v17 < 3 )
            v18 = 3 - v17;
          (*(void (__fastcall **)(_DWORD *, unsigned int))(*v12 + 64))(v12, v18);
        }
        sead__ListNode__erase((char *)v12 + *v10);
        --*v16;
        sub_60008D94(v15, v12);
        v19 = (int *)v12[1];
        (*(void (__fastcall **)(_DWORD *))(*v12 + 8))(v12);
        v20 = *v19;
        if ( v28 )
        {
          (*(void (__fastcall **)(int *))(v20 + 44))(v19);
          result = *v27;
          if ( *v27 < *v26 )
          {
            *(_DWORD *)(*v25 + 4 * result) = v19;
            result = *v27 + 1;
            *v27 = result;
          }
        }
        else
        {
          result = (*(int (__fastcall **)(int *))(v20 + 16))(v19);
        }
        v12 = (_DWORD *)(v13 - v9);
        v13 = FIELD_U32(v13, 4);
      }
      while ( v12 != v14 );
    }
    else
    {
      do
      {
        v21 = 0;
        if ( (*(int (__fastcall **)(_DWORD *))(*v12 + 56))(v12) == 1 )
        {
          v22 = (*(int (__fastcall **)(_DWORD *))(*v12 + 60))(v12);
          v21 = 0;
          if ( v22 < 3 )
            v21 = 3 - v22;
        }
        (*(void (__fastcall **)(_DWORD *, unsigned int))(*v12 + 64))(v12, v21);
        result = v21 - 1;
        if ( v21 - 1 <= 1 )
        {
          sead__ListNode__erase((char *)v12 + *v10);
          --*v16;
          sub_60008D94(v15, v12);
          v23 = (int *)v12[1];
          (*(void (__fastcall **)(_DWORD *))(*v12 + 8))(v12);
          v24 = *v23;
          if ( v28 == 1 )
          {
            (*(void (__fastcall **)(int *))(v24 + 44))(v23);
            result = *v27;
            if ( *v27 < *v26 )
            {
              *(_DWORD *)(*v25 + 4 * result) = v23;
              result = *v27 + 1;
              *v27 = result;
            }
          }
          else
          {
            result = (*(int (__fastcall **)(int *))(v24 + 16))(v23);
          }
        }
        v12 = (_DWORD *)(v13 - v9);
        v13 = FIELD_U32(v13, 4);
      }
      while ( v12 != v14 );
    }
  }
  return result;
}
