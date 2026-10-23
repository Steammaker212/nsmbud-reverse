/* sub_60444DD8
 * address: 0x60444DD8   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60444DD8(int result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r12
  _DWORD *v4; // r5
  int v5; // r1
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r12
  _DWORD *v9; // r5
  int v10; // r2
  int v11; // r1
  _DWORD *v12; // r2

  v1 = 0;
  FIELD_U32(result, 28) = 0;
  v2 = FIELD_U32(result, 40);
  if ( v2 )
  {
    v3 = FIELD_U32(result, 44);
    if ( (v2 & 3) != 0 )
    {
      v4 = *(_DWORD **)(result + 44);
      v1 = 0;
      do
      {
        ++v1;
        *v4 = 0;
        v4 += 3;
      }
      while ( (v2 & 3) != v1 );
    }
    if ( (unsigned int)(v2 - 1) >= 3 )
    {
      v5 = v2 - v1;
      v6 = (_DWORD *)(v3 + 12 * v1 + 24);
      do
      {
        *(v6 - 6) = 0;
        *(v6 - 3) = 0;
        *v6 = 0;
        v6[3] = 0;
        v6 += 12;
        v5 -= 4;
      }
      while ( v5 );
    }
  }
  v7 = FIELD_U32(result, 48);
  if ( v7 )
  {
    v8 = FIELD_U32(result, 52);
    if ( (v7 & 3) != 0 )
    {
      v9 = *(_DWORD **)(result + 52);
      v10 = 0;
      do
      {
        ++v10;
        *v9 = 0;
        v9 += 3;
      }
      while ( (v7 & 3) != v10 );
    }
    else
    {
      v10 = 0;
    }
    if ( (unsigned int)(v7 - 1) >= 3 )
    {
      v11 = v7 - v10;
      v12 = (_DWORD *)(v8 + 12 * v10 + 24);
      do
      {
        *(v12 - 6) = 0;
        *(v12 - 3) = 0;
        *v12 = 0;
        v12[3] = 0;
        v12 += 12;
        v11 -= 4;
      }
      while ( v11 );
    }
  }
  FIELD_U32(result, 56) = 0;
  FIELD_U8(result, 24) = 0;
  return result;
}
