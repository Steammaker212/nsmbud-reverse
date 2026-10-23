/* sub_6015B918
 * address: 0x6015B918   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015B918(_DWORD *a1, int a2, float a3)
{
  _DWORD *v6; // r4
  char v7; // r10
  _DWORD *v8; // r6
  int v9; // r0
  int v10; // r7
  _DWORD *v11; // r0
  int v12; // r1

  sub_6015AF40(a1);
  v6 = (_DWORD *)a1[14];
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (_DWORD *)*v6;
      v6 = (_DWORD *)v6[1];
      v9 = v8[16];
      if ( !FIELD_U8(v9, 534) )
        goto LABEL_4;
      if ( FIELD_U8(v9, 19) )
        goto LABEL_4;
      v10 = v8[28];
      if ( !v10 )
        goto LABEL_4;
      if ( !((int (__fastcall *)(_DWORD *, int, float))loc_601592A4)(v8, a2, a3) )
        goto LABEL_4;
      if ( (*(int (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v10 + 4))(v10, v8, v8 + 19) != 1 )
        goto LABEL_4;
      (*(void (__fastcall **)(int, _DWORD *, _DWORD *))(*(_DWORD *)v10 + 8))(v10, v8, v8 + 19);
      v7 = 1;
      if ( v8[11] )
        goto LABEL_4;
      if ( v8[12] )
        goto LABEL_4;
      v11 = v8 + 10;
      if ( (_DWORD *)a1[11] == v8 + 10 )
        goto LABEL_4;
      v12 = a1[12];
      if ( v12 )
      {
        FIELD_U32(v12, 4) = v11;
        v8[12] = a1[12];
        a1[12] = v11;
LABEL_4:
        if ( !v6 )
          return v7 & 1;
      }
      else
      {
        a1[11] = v11;
        a1[12] = v11;
        if ( !v6 )
          return v7 & 1;
      }
    }
  }
  return v7 & 1;
}
