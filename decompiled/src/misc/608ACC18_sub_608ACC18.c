/* sub_608ACC18
 * address: 0x608ACC18   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ACC18(int a1, int a2)
{
  int v4; // r6
  int v5; // r1
  int result; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r0
  _DWORD *v14; // r1
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r3
  int v20; // r6
  int v21; // r3

  v4 = 0;
  v5 = FIELD_U8(a2, 196) + FIELD_U32(a2, 72);
  result = 0;
  if ( v5 > 0 )
    v4 = v5;
  if ( v5 > 127 )
    v4 = 127;
  if ( FIELD_U32(a1, 32) )
  {
    while ( 1 )
    {
      v7 = FIELD_U32(a1, 4);
      v8 = 0;
      if ( v7 != a1 )
      {
        v8 = 0;
        do
        {
          v7 = FIELD_U32(v7, 4);
          ++v8;
        }
        while ( v7 != a1 );
      }
      if ( v8 < FIELD_U32(a1, 32) )
        break;
      v9 = FIELD_U32(a1, 12);
      v10 = *(unsigned __int8 *)(v9 - 216) + *(_DWORD *)(v9 - 340);
      v11 = 0;
      if ( v10 > 0 )
        v11 = *(unsigned __int8 *)(v9 - 216) + *(_DWORD *)(v9 - 340);
      if ( v10 > 127 )
        v11 = 127;
      if ( FIELD_U8(a1, 88) )
      {
        if ( v4 <= v11 )
          return 0;
      }
      else if ( v4 < v11 )
      {
        return 0;
      }
      (*(void (__fastcall **)(int))(*(_DWORD *)(v9 - 412) + 16))(v9 - 412);
    }
    v12 = FIELD_U32(a2, 404);
    FIELD_U32(a2, 404) = *(_DWORD *)a1;
    FIELD_U32(v12, 4) = a1;
    *(_DWORD *)(*(_DWORD *)a1 + 4) = a2 + 404;
    *(_DWORD *)a1 = v12;
    v13 = (_DWORD *)(a1 + 8);
    v14 = *(_DWORD **)(a1 + 12);
    if ( v14 != (_DWORD *)(a1 + 8) )
    {
      v15 = FIELD_U8(a2, 196) + FIELD_U32(a2, 72);
      v16 = 0;
      if ( v15 > 0 )
        v16 = FIELD_U8(a2, 196) + FIELD_U32(a2, 72);
      if ( v15 > 127 )
        v16 = 127;
      if ( FIELD_U8(a1, 88) )
      {
        while ( 1 )
        {
          v17 = *((unsigned __int8 *)v14 - 216) + *(v14 - 85);
          v18 = 0;
          if ( v17 > 0 )
            v18 = *((unsigned __int8 *)v14 - 216) + *(v14 - 85);
          if ( v17 > 127 )
            v18 = 127;
          if ( v16 <= v18 )
            break;
          v14 = (_DWORD *)v14[1];
          if ( v14 == v13 )
            goto LABEL_42;
        }
      }
      else
      {
        while ( 1 )
        {
          v19 = *((unsigned __int8 *)v14 - 216) + *(v14 - 85);
          v20 = 0;
          if ( v19 > 0 )
            v20 = *((unsigned __int8 *)v14 - 216) + *(v14 - 85);
          if ( v19 > 127 )
            v20 = 127;
          if ( v16 < v20 )
            break;
          v14 = (_DWORD *)v14[1];
          if ( v14 == v13 )
            goto LABEL_42;
        }
      }
      v13 = v14;
    }
LABEL_42:
    v21 = FIELD_U32(a2, 412);
    FIELD_U32(a2, 412) = *v14;
    FIELD_U32(v21, 4) = v13;
    *(_DWORD *)(*v13 + 4) = a2 + 412;
    *v13 = v21;
    sub_608B02DC(a2, a1);
    return 1;
  }
  return result;
}
