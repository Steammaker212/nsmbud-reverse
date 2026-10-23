/* sub_6051D004
 * address: 0x6051D004   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051D004(int a1)
{
  int result; // r0
  int v3; // r5
  int i; // r6
  int v5; // r2
  int v6; // r1
  int v7; // r5
  int j; // r6
  int v9; // r2
  int v10; // r1
  int k; // r6
  int v12; // r2
  int v13; // r1
  int v14; // r5
  int m; // r6
  int v16; // r2
  int v17; // r1

  result = FIELD_U8(a1, 4014);
  v3 = FIELD_U32(a1, 3960);
  if ( result )
  {
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = FIELD_U32(a1, 3956);
        v6 = FIELD_U32(a1, 3952);
        if ( i + v5 >= v6 )
          v5 -= v6;
        result = sub_6050BDDC(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 3948) + 4 * (i + v5)) + 12));
      }
    }
    v7 = FIELD_U32(a1, 3992);
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = FIELD_U32(a1, 3988);
        v10 = FIELD_U32(a1, 3984);
        if ( j + v9 >= v10 )
          v9 -= v10;
        result = sub_6050BDDC(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 3980) + 4 * (j + v9)) + 12));
      }
    }
  }
  else
  {
    if ( v3 )
    {
      for ( k = 0; k != v3; ++k )
      {
        v12 = FIELD_U32(a1, 3956);
        v13 = FIELD_U32(a1, 3952);
        if ( k + v12 >= v13 )
          v12 -= v13;
        result = sub_60507028(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 3948) + 4 * (k + v12)) + 8));
      }
    }
    v14 = FIELD_U32(a1, 3992);
    if ( v14 )
    {
      for ( m = 0; m != v14; ++m )
      {
        v16 = FIELD_U32(a1, 3988);
        v17 = FIELD_U32(a1, 3984);
        if ( m + v16 >= v17 )
          v16 -= v17;
        result = sub_60507028(*(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 3980) + 4 * (m + v16)) + 8));
      }
    }
  }
  return result;
}
