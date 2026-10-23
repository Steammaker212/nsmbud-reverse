/* sub_608B08B8
 * address: 0x608B08B8   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B08B8(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r1
  _DWORD *v7; // r7
  _DWORD *v8; // r1
  int v9; // r0
  _DWORD *v10; // r2
  _DWORD *v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r3
  int v16; // r2
  int v18; // r3

  v4 = 0;
  v5 = FIELD_U8(a2, 196) + FIELD_U32(a2, 72);
  v6 = 0;
  if ( v5 > 0 )
    v4 = v5;
  if ( v5 > 127 )
    v4 = 127;
  if ( a1[3] )
  {
    v7 = a1 + 1;
    while ( 1 )
    {
      v8 = (_DWORD *)a1[2];
      v9 = 0;
      if ( v8 != v7 )
      {
        v9 = 0;
        v10 = (_DWORD *)a1[2];
        do
        {
          v10 = (_DWORD *)v10[1];
          ++v9;
        }
        while ( v10 != v7 );
      }
      if ( v9 < a1[3] )
        break;
      if ( v8 == v7 )
        return 0;
      v11 = 0;
      v12 = 128;
      do
      {
        v13 = *((unsigned __int8 *)v8 - 224) + *(v8 - 87);
        v14 = 0;
        if ( v13 > 0 )
          v14 = *((unsigned __int8 *)v8 - 224) + *(v8 - 87);
        if ( v13 > 127 )
          v14 = 127;
        if ( v12 > v14 )
          v11 = v8 - 105;
        v8 = (_DWORD *)v8[1];
        if ( v12 > v14 )
          v12 = v14;
      }
      while ( v8 != v7 );
      if ( !v11 )
        return 0;
      v15 = 0;
      v16 = *((unsigned __int8 *)v11 + 196) + v11[18];
      v6 = 0;
      if ( v16 > 0 )
        v15 = *((unsigned __int8 *)v11 + 196) + v11[18];
      if ( v16 > 127 )
        v15 = 127;
      if ( v4 < v15 )
        return v6;
      (*(void (__fastcall **)(_DWORD *))(*v11 + 16))(v11);
    }
    v18 = FIELD_U32(a2, 420);
    FIELD_U32(a2, 420) = a1[1];
    FIELD_U32(v18, 4) = a1 + 1;
    *(_DWORD *)(a1[1] + 4) = a2 + 420;
    a1[1] = v18;
    sub_608B0304(a2, (int)a1);
    return 1;
  }
  return v6;
}
