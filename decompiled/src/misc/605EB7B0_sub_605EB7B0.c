/* sub_605EB7B0
 * address: 0x605EB7B0   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB7B0(int a1, float a2)
{
  float v2; // s16
  float v4; // s2
  int v5; // r4
  int result; // r0
  int v7; // r5
  float v8; // s2
  int v9; // r6
  float v10[12]; // [sp+0h] [bp-30h] BYREF

  v2 = 0.0;
  v4 = 0.0;
  if ( a2 >= 0.0 )
  {
    v4 = a2;
    if ( a2 > 1.0 )
      v4 = 1.0;
  }
  FIELD_F32(a1, 172) = v4;
  v5 = **(_DWORD **)(a1 + 12);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 120))(v5);
  v7 = result;
  v8 = 1.0 - FIELD_F32(a1, 172);
  if ( v8 >= 0.0 )
  {
    v2 = 1.0 - FIELD_F32(a1, 172);
    if ( v8 > 1.0 )
      v2 = 1.0;
  }
  v10[0] = v2;
  v10[1] = v2;
  v10[2] = v2;
  v10[3] = v2;
  if ( result >= 1 )
  {
    v9 = 0;
    do
    {
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 132))(v5, v9);
      if ( result )
        result = (*(int (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)result + 12))(result, 0, v10);
      ++v9;
    }
    while ( v7 != v9 );
  }
  return result;
}
