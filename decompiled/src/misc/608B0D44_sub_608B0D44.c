/* sub_608B0D44
 * address: 0x608B0D44   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0D44(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v6; // r6
  _DWORD *v7; // r0
  int v8; // r7
  _DWORD *v9; // r1
  int v10; // r12
  int v11; // r3
  int v12; // r7
  int v13; // r7
  _DWORD *v14; // r6
  int result; // r0
  int v16; // r0

  v6 = a2;
  if ( FIELD_S32(a4, 4) >= 5 )
  {
    *a1 = a2;
    v7 = a2 + 2;
    *a2 = 0;
    a2[1] = 0;
    v8 = FIELD_U32(a4, 4);
    v9 = (_DWORD *)*a1;
    v10 = v8 - 4;
    *v9 = v6 + 2;
    v9[1] = v8 - 4;
    if ( v8 >= 5 )
    {
      *v7 = 0;
      if ( (int)v9[1] >= 2 )
      {
        v11 = 1;
        v12 = 4;
        do
        {
          ++v11;
          *(_DWORD *)(*v9 + v12) = 0;
          v12 += 4;
        }
        while ( v11 < v9[1] );
      }
    }
    v6 = &v7[v10];
  }
  if ( *(_BYTE *)a4 )
  {
    a1[1] = v6;
    *((_BYTE *)v6 + 192) = 0;
    v6[49] = 0;
    v13 = sub_608D3BA0(FIELD_U32(a4, 4));
    v14 = v6 + 51;
    sub_608D3BAC(a1[1], v14, v13, FIELD_U32(a4, 4));
    v6 = (_DWORD *)((char *)v14 + v13);
  }
  result = FIELD_U8(a4, 1);
  if ( FIELD_U8(a4, 1) )
  {
    a1[2] = v6;
    *v6 = 0;
    v6[1] = 0;
    *((_BYTE *)v6 + 8) = 0;
    v6[3] = 1065353216;
    v16 = sub_608B467C(FIELD_U32(a4, 4));
    return sub_608B4688(a1[2], v6 + 4, v16, FIELD_U32(a4, 4));
  }
  return result;
}
