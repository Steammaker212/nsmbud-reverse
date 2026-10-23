/* sub_6075CAD4
 * address: 0x6075CAD4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075CAD4(int a1, float a2)
{
  int result; // r0
  int v5; // r4
  int v6; // r10
  int v7; // r6
  int v8; // r7
  float v9; // [sp+0h] [bp-38h] BYREF
  float v10; // [sp+4h] [bp-34h]
  float v11; // [sp+8h] [bp-30h]
  int v12; // [sp+Ch] [bp-2Ch]

  sub_6078D04C(a2);
  result = FIELD_U32(a1, 1176);
  v5 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 120))(*(_DWORD *)result);
    v6 = result;
    if ( result >= 1 )
    {
      v7 = 0;
      do
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 132))(v5, v7);
        v8 = result;
        if ( result )
        {
          v9 = 0.0;
          v10 = 0.0;
          v11 = 0.0;
          v12 = 1065353216;
          (*(void (__fastcall **)(int, int, float *))(*(_DWORD *)result + 24))(result, 3, &v9);
          v11 = a2;
          v10 = a2;
          v9 = a2;
          result = (*(int (__fastcall **)(int, int, float *))(*(_DWORD *)v8 + 20))(v8, 3, &v9);
        }
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  return result;
}
