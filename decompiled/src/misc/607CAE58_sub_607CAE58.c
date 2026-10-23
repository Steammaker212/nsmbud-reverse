/* sub_607CAE58
 * address: 0x607CAE58   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CAE58(int a1, float a2)
{
  int result; // r0
  int v3; // r4
  int v4; // r5
  int v5; // r6
  float v6[10]; // [sp+0h] [bp-28h] BYREF

  v6[0] = 1.0 - a2;
  v6[1] = 1.0 - a2;
  v6[2] = 1.0 - a2;
  v6[3] = 1.0 - a2;
  result = FIELD_U32(a1, 24);
  v3 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 120))(*(_DWORD *)result);
    v4 = result;
    if ( result >= 1 )
    {
      v5 = 0;
      do
      {
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 132))(v3, v5);
        if ( result )
          result = (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)result + 12))(result, 0, v6);
        ++v5;
      }
      while ( v4 != v5 );
    }
  }
  return result;
}
