/* sub_605EB6D4
 * address: 0x605EB6D4   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605EB6D4(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v5; // r6
  float v6; // s0
  int v7; // r7
  int v8; // r0
  unsigned int result; // r0
  float v10[10]; // [sp+0h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 176);
  if ( (v2 & 0x40) != 0 )
  {
    FIELD_U32(a1, 172) = 0;
    v3 = **(_DWORD **)(a1 + 12);
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 120))(v3);
    v5 = v4;
    v6 = 1.0 - FIELD_F32(a1, 172);
    if ( v6 >= 0.0 )
    {
      if ( v6 > 1.0 )
        v6 = 1.0;
    }
    else
    {
      v6 = 0.0;
    }
    v10[0] = v6;
    v10[1] = v6;
    v10[2] = v6;
    v10[3] = v6;
    if ( v4 >= 1 )
    {
      v7 = 0;
      do
      {
        v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 132))(v3, v7);
        if ( v8 )
          (*(void (__fastcall **)(int, _DWORD, float *))(*(_DWORD *)v8 + 12))(v8, 0, v10);
        ++v7;
      }
      while ( v5 != v7 );
    }
    v2 = FIELD_U32(a1, 176);
  }
  result = v2 & 0xFFFFFFBF;
  FIELD_U32(a1, 176) = result;
  return result;
}
