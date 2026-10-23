/* sub_60499FB8
 * address: 0x60499FB8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60499FB8(_BYTE *a1)
{
  int v1; // r4
  char v2; // r11
  int *v3; // r7
  int v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r8
  const void *v7; // r5
  int v8; // r1
  _DWORD *v9; // r8
  int v10; // t1
  _DWORD *v11; // r0
  bool v12; // zf
  int v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r6
  int v16; // r0

  v1 = 4;
  v2 = 0;
  v3 = (int *)(a1 + 26224);
  v4 = (int)&dword_60C99DD4;
  do
  {
    v5 = (_DWORD *)sub_60834644(v4);
    v4 = sub_603FCB6C(v5, *v3);
    if ( v4 >= 0 )
    {
      if ( (unsigned int)v4 >= 6 )
        v4 = 0;
      v6 = &v5[18 * v4];
      v7 = v6 + 5;
      v4 = *((unsigned __int8 *)v6 + 20);
      if ( *((_BYTE *)v6 + 20) )
      {
        v10 = v6[8];
        v9 = v6 + 8;
        v8 = v10;
        v4 = v10 & 0xFFFFFFFE;
        if ( (v10 & 0xFFFFFFFE) == 2 )
        {
          v11 = (_DWORD *)(dword_60C99DD4 + 272);
          if ( !dword_60C99DD4 )
            v11 = (_DWORD *)(dword_60C99DEC + 16);
          v12 = v8 == 2;
          v13 = 2;
          if ( v12 )
            v13 = 3;
          v14 = (_DWORD *)sub_603FCBD8(v11, v13);
          v15 = v14;
          if ( v14 )
          {
            qmemcpy(v14, v7, 0x48u);
            v16 = 2;
            if ( *v9 == 2 )
              v16 = 3;
            v15[3] = v16;
            *(_BYTE *)v15 = 0;
          }
          v4 = *v9 == 3;
          v2 |= v4;
        }
      }
    }
    v3 += 5139;
    --v1;
  }
  while ( v1 );
  a1[26280] = v2 & 1;
  a1[46836] = v2 & 1;
  a1[67392] = v2 & 1;
  a1[87948] = v2 & 1;
  return v2 & 1;
}
