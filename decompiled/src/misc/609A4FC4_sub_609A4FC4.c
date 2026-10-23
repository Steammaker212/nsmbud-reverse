/* sub_609A4FC4
 * address: 0x609A4FC4   size: 620   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A4FC4(_DWORD *a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v9; // r0
  int v10; // r0
  int v11; // r7
  int v12; // r5
  int result; // r0
  int v14; // r0
  int v15; // r7
  unsigned int v16; // r7
  int v17; // r11
  int v18; // r5
  int v19; // r5

  while ( 2 )
  {
    v15 = sub_60905340(a2);
    if ( v15 )
      sub_60905500(a2, (int)(a1 + 5), v15);
    if ( a1[7] <= v15 )
      (*(void (__fastcall **)(_DWORD *))(a1[5] + 12))(a1 + 5);
    else
      *(_BYTE *)(a1[6] + v15) = 0;
    v16 = sub_60905340(a2);
    if ( v16 )
    {
      sub_609A5D84(a1, v16, a3);
      v17 = 0;
      do
      {
        v18 = sub_60905340(a2);
        sub_60905500(a2, (int)a4, v18);
        if ( a4[2] <= v18 )
          (*(void (__fastcall **)(_DWORD *))(*a4 + 12))(a4);
        else
          *(_BYTE *)(a4[1] + v18) = 0;
        v19 = sub_60905340(a2);
        sub_60905500(a2, (int)a5, v19);
        if ( a5[2] <= v19 )
          (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
        else
          *(_BYTE *)(a5[1] + v19) = 0;
        sub_609A6388(a1, a4, a5, a3);
        ++v17;
      }
      while ( (unsigned __int8)v17 < v16 );
    }
    v9 = sub_6090535C(a2);
    v10 = ((int (__fastcall *)(int))off_60C5CB04[0])(v9);
    v11 = v10;
    if ( v10 )
    {
      v12 = operator_new_8DE2C8(v10 + 1, a3, 4);
      sub_6090552C(a2, v12, v11);
      *(_BYTE *)(v12 + v11) = 0;
      sub_609A5C1C(a1, v12, v11, 1);
    }
    result = sub_60905340(a2);
    switch ( result )
    {
      case 0:
      case 4:
        goto LABEL_6;
      case 1:
        a1 = (_DWORD *)sub_609A66A8(a1, a3);
        continue;
      case 2:
        v14 = sub_609A66A8(a1, a3);
        sub_609A4FC4(v14, a2, a3, a4, a5);
LABEL_6:
        result = sub_609A6668(a1, a3);
        a1 = (_DWORD *)result;
        if ( !result )
          return result;
        continue;
      default:
        return result;
    }
  }
}
