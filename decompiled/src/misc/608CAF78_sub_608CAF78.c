/* sub_608CAF78
 * address: 0x608CAF78   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CAF78(int result, _DWORD *a2, unsigned int a3, int a4)
{
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r10
  int v10; // r8
  _BYTE *v11; // r11
  int v12; // r0
  int v13; // r5
  _DWORD *v14; // r4
  int v15; // r1
  _DWORD *v16; // r6
  int v17; // t1
  _BYTE *v18; // [sp+0h] [bp-28h]

  if ( !*(_BYTE *)result )
  {
    v18 = (_BYTE *)result;
    v7 = sub_608B0CEC(a4);
    v8 = v7 + 580;
    if ( !v7 )
      v8 = 568;
    v9 = a3 / v8;
    if ( (int)(a3 / v8) >= 1 )
    {
      v10 = 0;
      v11 = v18 + 12;
      do
      {
        v12 = sub_608B0CEC(a4);
        v13 = v12;
        if ( v12 )
        {
          a2[142] = 0;
          a2[143] = 0;
          a2[144] = 0;
          sub_608B0D44(a2 + 142, a2 + 145, v12, a4);
          v14 = (_DWORD *)((char *)a2 + v13 + 580);
          v15 = (int)(a2 + 142);
        }
        else
        {
          v15 = 0;
          v14 = a2 + 142;
        }
        sub_608C9134((int)a2, v15);
        v17 = a2[140];
        v16 = a2 + 140;
        ++v10;
        *v16 = *(_DWORD *)v11;
        FIELD_U32(v17, 4) = v11;
        *(_DWORD *)(*(_DWORD *)v11 + 4) = v16;
        a2 = v14;
        *(_DWORD *)v11 = v17;
      }
      while ( v10 < v9 );
    }
    *v18 = 1;
    return 1;
  }
  return result;
}
