/* sub_6097BA14
 * address: 0x6097BA14   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BA14(_DWORD *a1)
{
  int v1; // r6
  int v2; // r8
  void *v3; // r5
  int v4; // r10
  int v5; // r7
  int *v6; // r10
  const void *v7; // r11
  const void *v8; // t1
  int v9; // r0
  signed int v10; // r7
  bool v11; // cc
  signed int v12; // r0
  void *v13; // r10
  int v14; // r5
  int v15; // r7
  int *v16; // r5
  const void *v17; // r11
  const void *v18; // t1
  int v19; // r0
  signed int v20; // r7
  signed int v21; // r0
  int v23; // [sp+0h] [bp-30h]
  int v24; // [sp+4h] [bp-2Ch]

  v24 = a1[403];
  if ( v24 )
  {
    v1 = 0;
    v23 = a1[404];
    do
    {
      v2 = v23 + 216 * v1;
      if ( FIELD_S8(v2, 120) != -1 )
      {
        v3 = *(void **)(v2 + 80);
        v4 = 208 * FIELD_S8(v2, 120) + a1[51];
        v5 = v4 + 2348;
        (*(void (__fastcall **)(int))(FIELD_U32(v4, 2348) + 12))(v4 + 2348);
        v8 = *(const void **)(v4 + 2352);
        v6 = (int *)(v4 + 2352);
        v7 = v8;
        if ( v3 != v8 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
          v9 = *v6;
          v10 = 0;
          while ( *(_BYTE *)(v9 + v10) )
          {
            if ( !*(_BYTE *)(v9 + v10 + 1) )
            {
              ++v10;
              break;
            }
            if ( !*(_BYTE *)(v9 + v10 + 2) )
            {
              v10 += 2;
              break;
            }
            v11 = v10 + 2 <= 0x7FFFF;
            v10 += 3;
            if ( !v11 )
            {
              v10 = 0;
              break;
            }
          }
          v12 = FIELD_U32(v2, 84);
          if ( v10 >= v12 )
            v10 = v12 - 1;
          qmemcpy(v3, v7, v10);
          *((_BYTE *)v3 + v10) = 0;
        }
      }
      if ( FIELD_S8(v2, 180) != -1 )
      {
        v13 = *(void **)(v2 + 140);
        v14 = 208 * FIELD_S8(v2, 180) + a1[51];
        v15 = v14 + 2348;
        (*(void (__fastcall **)(int))(FIELD_U32(v14, 2348) + 12))(v14 + 2348);
        v18 = *(const void **)(v14 + 2352);
        v16 = (int *)(v14 + 2352);
        v17 = v18;
        if ( v13 != v18 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
          v19 = *v16;
          v20 = 0;
          while ( *(_BYTE *)(v19 + v20) )
          {
            if ( !*(_BYTE *)(v19 + v20 + 1) )
            {
              ++v20;
              break;
            }
            if ( !*(_BYTE *)(v19 + v20 + 2) )
            {
              v20 += 2;
              break;
            }
            v11 = v20 + 2 <= 0x7FFFF;
            v20 += 3;
            if ( !v11 )
            {
              v20 = 0;
              break;
            }
          }
          v21 = FIELD_U32(v2, 144);
          if ( v20 >= v21 )
            v20 = v21 - 1;
          qmemcpy(v13, v17, v20);
          *((_BYTE *)v13 + v20) = 0;
        }
      }
      ++v1;
    }
    while ( v1 != v24 );
  }
  return 1;
}
