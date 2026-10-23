/* sub_6075CA28
 * address: 0x6075CA28   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075CA28(int a1, float a2)
{
  int result; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r6
  float v8[12]; // [sp+0h] [bp-30h] BYREF

  sub_6078CEA8(a2);
  v8[0] = 1.0 - a2;
  v8[1] = 1.0 - a2;
  v8[2] = 1.0 - a2;
  v8[3] = 1.0 - a2;
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
        if ( result )
          result = (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)result + 12))(result, 0, v8);
        ++v7;
      }
      while ( v6 != v7 );
    }
  }
  return result;
}
