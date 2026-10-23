/* sub_607CAEF0
 * address: 0x607CAEF0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CAEF0(int a1, float a2)
{
  int result; // r0
  int v4; // r4
  int v5; // r10
  int v6; // r6
  int v7; // r7
  float v8; // [sp+0h] [bp-38h] BYREF
  float v9; // [sp+4h] [bp-34h]
  float v10; // [sp+8h] [bp-30h]
  int v11; // [sp+Ch] [bp-2Ch]

  result = FIELD_U32(a1, 24);
  v4 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 120))(*(_DWORD *)result);
    v5 = result;
    if ( result >= 1 )
    {
      v6 = 0;
      do
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 132))(v4, v6);
        v7 = result;
        if ( result )
        {
          v8 = 0.0;
          v9 = 0.0;
          v10 = 0.0;
          v11 = 1065353216;
          (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)result + 24))(result, 3, &v8);
          v10 = a2;
          v9 = a2;
          v8 = a2;
          result = (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v7 + 20))(v7, 3, &v8);
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
  }
  return result;
}
