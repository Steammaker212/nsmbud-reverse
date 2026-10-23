/* sub_609902D8
 * address: 0x609902D8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_609902D8(int *a1, _BYTE *a2, int a3)
{
  bool v5; // zf
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r7
  _DWORD v12[12]; // [sp+0h] [bp-30h]

  v5 = a3 == 0;
  *(_BYTE *)*a1 = 0;
  v6 = 0;
  a1[1] = 0;
  if ( a3 )
  {
    v6 = FIELD_U32(a3, 76);
    v5 = v6 == 0;
  }
  if ( !v5 )
  {
    v12[1] = a3;
    v7 = FIELD_U32(v6, 76);
    if ( v7 )
    {
      v12[2] = v6;
      v8 = FIELD_U32(v7, 76);
      if ( v8 )
      {
        v12[3] = v7;
        v9 = FIELD_U32(v8, 76);
        if ( v9 )
        {
          v12[4] = v8;
          if ( FIELD_U32(v9, 76) )
          {
            v12[5] = v9;
            v10 = 5;
          }
          else
          {
            v10 = 4;
          }
        }
        else
        {
          v10 = 3;
        }
      }
      else
      {
        v10 = 2;
      }
    }
    else
    {
      v10 = 1;
    }
    do
    {
      sub_608FE058(a1, (_BYTE *)(*(_DWORD *)(v12[v10] + 12) + 136), -1);
      sub_608FE058(a1, "-", -1);
      --v10;
    }
    while ( v10 );
  }
  return sub_608FE058(a1, a2, -1);
}
