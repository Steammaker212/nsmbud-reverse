/* sub_6091F0FC
 * address: 0x6091F0FC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F0FC(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r8
  int v7; // r6
  int v8; // r11
  int v9; // r9
  int v10; // r0
  int v11; // r0
  void *v12; // r0
  void *v14; // [sp+4h] [bp-2Ch]

  if ( a1[6] )
  {
    sub_6091F490(a1 + 16);
    v2 = (void *)a1[21];
    if ( v2 )
    {
      operator_delete_8DE3FC(v2);
      a1[20] = 0;
      a1[21] = 0;
    }
    v3 = (void *)a1[23];
    if ( v3 )
    {
      operator_delete_8DE3FC(v3);
      a1[22] = 0;
      a1[23] = 0;
    }
    v4 = a1[19];
    if ( v4 )
    {
      v14 = (void *)(v4 - 8);
      v5 = *(_DWORD *)(v4 - 4);
      if ( v5 )
      {
        v6 = 0;
        v7 = v4 + 52 * v5;
        v8 = 52 * v5;
        do
        {
          v9 = v7 + v6;
          *(_DWORD *)(v9 - 52) = off_60C5D6C8;
          *(_DWORD *)(v9 - 36) = &off_60C5D6D8;
          v10 = *(_DWORD *)(v7 + v6 - 12);
          if ( v10 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
            *(_DWORD *)(v9 - 12) = 0;
          }
          v11 = *(_DWORD *)(v9 - 16);
          if ( v11 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
            *(_DWORD *)(v9 - 16) = 0;
          }
          v12 = *(void **)(v9 - 4);
          if ( v12 )
          {
            operator_delete_8DE3FC(v12);
            *(_DWORD *)(v9 - 8) = 0;
            *(_DWORD *)(v9 - 4) = 0;
          }
          sead__IDisposer__dtor((_DWORD *)(v7 - 52 + v6));
          v6 -= 52;
        }
        while ( v8 + v6 );
      }
      operator_delete_8DE3FC(v14);
      a1[18] = 0;
      a1[19] = 0;
    }
  }
  a1[6] = 0;
  return 0;
}
