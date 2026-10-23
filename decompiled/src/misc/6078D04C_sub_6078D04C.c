/* sub_6078D04C
 * address: 0x6078D04C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078D04C(int a1, float a2)
{
  int v2; // r5
  int *v5; // r0
  bool v6; // zf
  int v7; // r11
  int v8; // r7
  int v9; // r0
  int v10; // r4
  int result; // r0
  int v12; // r4
  int v13; // r10
  int v14; // r6
  int v15; // r7
  float v16; // [sp+0h] [bp-40h] BYREF
  float v17; // [sp+4h] [bp-3Ch]
  float v18; // [sp+8h] [bp-38h]
  int v19; // [sp+Ch] [bp-34h]

  v5 = *(int **)(a1 + 292);
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
          v16 = 0.0;
          v17 = 0.0;
          v18 = 0.0;
          v19 = 1065353216;
          (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v9 + 24))(v9, 3, &v16);
          v18 = a2;
          v17 = a2;
          v16 = a2;
          (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)v10 + 20))(v10, 3, &v16);
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
  }
  result = FIELD_U32(a1, 24);
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
        v15 = result;
        if ( result )
        {
          v16 = 0.0;
          v17 = 0.0;
          v18 = 0.0;
          v19 = 1065353216;
          (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)result + 24))(result, 3, &v16);
          v18 = a2;
          v17 = a2;
          v16 = a2;
          result = (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v15 + 20))(v15, 3, &v16);
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
  }
  return result;
}
