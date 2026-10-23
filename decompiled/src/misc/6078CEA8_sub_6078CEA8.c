/* sub_6078CEA8
 * address: 0x6078CEA8   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078CEA8(_DWORD *a1, float a2)
{
  int v2; // r5
  float v4; // s16
  int *v5; // r0
  bool v6; // zf
  int v7; // r10
  int v8; // r7
  int v9; // r0
  int v10; // r6
  int result; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r6
  _DWORD v15[3]; // [sp+0h] [bp-50h] BYREF
  float v16; // [sp+Ch] [bp-44h]
  float v17[16]; // [sp+10h] [bp-40h] BYREF

  v4 = 1.0 - a2;
  v17[0] = 1.0 - a2;
  v17[1] = 1.0 - a2;
  v17[2] = 1.0 - a2;
  v17[3] = 1.0 - a2;
  v5 = (int *)a1[73];
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = *v5;
    v6 = *v5 == 0;
  }
  if ( !v6 )
  {
    v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 120))(v2);
    if ( v7 >= 1 )
    {
      v8 = 0;
      do
      {
        v9 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 132))(v2, v8);
        v10 = v9;
        if ( v9 )
        {
          (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v9 + 12))(v9, 0, v17);
          memset(v15, 0, sizeof(v15));
          v16 = 1.0;
          (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v10 + 16))(v10, 1, v15);
          v16 = v4 * (*(float (__fastcall **)(_DWORD *, int))(*a1 + 244))(a1, v8);
          (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v10 + 12))(v10, 1, v15);
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
  }
  result = a1[6];
  v12 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 120))(*(_DWORD *)result);
    v13 = result;
    if ( result >= 1 )
    {
      v14 = 0;
      do
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v12 + 132))(v12, v14);
        if ( result )
          result = (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)result + 12))(result, 0, v17);
        ++v14;
      }
      while ( v13 != v14 );
    }
  }
  return result;
}
