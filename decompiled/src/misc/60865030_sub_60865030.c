/* sub_60865030
 * address: 0x60865030   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int8 *__fastcall sub_60865030(unsigned __int8 *result, int a2)
{
  int v2; // r2
  int v3; // r12
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r3
  int v9; // r4
  int v10; // r4
  int v11; // r4
  int v12; // r4

  v2 = *((_DWORD *)result + 1);
  if ( v2 && *result >= a2 )
  {
    v3 = result[1];
    if ( v3 < a2 )
    {
      *(_DWORD *)(v2 + 32 * v3) = 0;
      *(_DWORD *)(v2 + 32 * v3 + 4) = 0;
      v4 = *((_DWORD *)result + 1) + 32 * v3;
      FIELD_U32(v4, 8) = 1065353216;
      FIELD_U32(v4, 12) = 0;
      v5 = *((_DWORD *)result + 1) + 32 * v3;
      FIELD_U32(v5, 16) = 0;
      FIELD_U32(v5, 20) = 1065353216;
      v6 = *((_DWORD *)result + 1) + 32 * v3;
      FIELD_U32(v6, 24) = 1065353216;
      FIELD_U32(v6, 28) = 1065353216;
      if ( v3 + 1 != a2 )
      {
        v7 = 32 * v3 + 32;
        v8 = a2 - 1 - v3;
        do
        {
          v9 = *((_DWORD *)result + 1);
          --v8;
          *(_DWORD *)(v9 + v7) = 0;
          *(_DWORD *)(v9 + v7 + 4) = 0;
          v10 = *((_DWORD *)result + 1) + v7;
          FIELD_U32(v10, 8) = 1065353216;
          FIELD_U32(v10, 12) = 0;
          v11 = *((_DWORD *)result + 1) + v7;
          FIELD_U32(v11, 16) = 0;
          FIELD_U32(v11, 20) = 1065353216;
          v12 = *((_DWORD *)result + 1) + v7;
          v7 += 32;
          FIELD_U32(v12, 24) = 1065353216;
          FIELD_U32(v12, 28) = 1065353216;
        }
        while ( v8 );
      }
    }
    result[1] = a2;
  }
  return result;
}
