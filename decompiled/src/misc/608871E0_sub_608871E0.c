/* sub_608871E0
 * address: 0x608871E0   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608871E0(int a1, int a2, int a3)
{
  unsigned __int8 *v3; // r6
  int v7; // r4
  unsigned __int8 *v8; // r0
  bool v9; // zf
  int v10; // r1
  bool v11; // zf
  void *v12; // r0
  int v13; // r4
  void *v14; // r0
  int result; // r0
  bool v16; // zf
  int v17; // r4

  v7 = 0;
  v8 = *(unsigned __int8 **)(a2 + 8);
  v9 = v8 + 1 == 0;
  if ( v8 != (unsigned __int8 *)-1 )
  {
    v8 += a2;
    v9 = v8 == 0;
  }
  if ( !v9 )
  {
    v7 = 0;
    do
    {
      v3 = (unsigned __int8 *)v8[3];
      v10 = *((_DWORD *)v8 + 3);
      if ( (*v8 | (v8[1] << 8) | (v8[2] << 16) | ((_DWORD)v3 << 24)) == 0x54455345 )
        ++v7;
      v11 = v10 == -1;
      if ( v10 != -1 )
      {
        v8 += v10;
        v11 = v8 == 0;
      }
    }
    while ( !v11 );
  }
  FIELD_U32(a1, 40) = v7;
  v12 = (void *)(*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 948) + 8))(
                  FIELD_U32(a1, 948),
                  32 * v7,
                  128);
  FIELD_U32(a1, 952) += 32 * v7;
  ++FIELD_U32(a1, 956);
  FIELD_U32(a1, 48) = v12;
  memset(v12, 0, 32 * FIELD_U32(a1, 40));
  v13 = FIELD_U32(a1, 40);
  v14 = (void *)(*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 948) + 8))(
                  FIELD_U32(a1, 948),
                  4 * v13,
                  128);
  FIELD_U32(a1, 952) += 4 * v13;
  ++FIELD_U32(a1, 956);
  FIELD_U32(a1, 52) = v14;
  memset(v14, 0, 4 * FIELD_U32(a1, 40));
  result = FIELD_U32(a2, 8);
  v16 = result == -1;
  if ( result != -1 )
  {
    v3 = (unsigned __int8 *)(a2 + result);
    v16 = a2 + result == 0;
  }
  if ( !v16 )
  {
    while ( 1 )
    {
      result = *v3 | (v3[1] << 8) | (v3[2] << 16) | (v3[3] << 24);
      if ( result == 1413829445 )
        break;
      result = *((_DWORD *)v3 + 3);
      v3 += result;
      if ( result == -1 )
        v3 = 0;
      if ( !v3 )
        return result;
    }
    if ( v3 )
    {
      v17 = 0;
      do
      {
        *(_DWORD *)(FIELD_U32(a1, 48) + v17 + 8) = v3;
        sub_60887A00(a1, FIELD_U32(a1, 48) + v17, a3);
        result = *((_DWORD *)v3 + 3);
        v17 += 32;
        v3 += result;
        if ( result == -1 )
          v3 = 0;
      }
      while ( v3 );
    }
  }
  return result;
}
