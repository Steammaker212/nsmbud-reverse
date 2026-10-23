/* sub_6085E070
 * address: 0x6085E070   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085E070(int result, int a2, int a3, int a4)
{
  bool v5; // zf
  int v6; // r4
  int v7; // r9
  int v8; // r6
  int v9; // r0
  int v10; // r5
  int v11; // r7
  int v12; // r1
  int v13; // r10
  void *v14; // r11
  int v15; // r0
  __int16 v16; // lr
  int v17; // r12
  _BYTE *v18; // r3
  int v19; // r6
  _BYTE *v20; // r4
  _BYTE *v21; // r3
  bool v22; // zf
  int v23; // r0
  __int16 v24; // r0
  bool v25; // zf
  int v26[3]; // [sp+0h] [bp-48h] BYREF
  bool v27; // [sp+Ch] [bp-3Ch]
  bool v28; // [sp+Dh] [bp-3Bh]
  char v29; // [sp+Eh] [bp-3Ah]
  bool v30; // [sp+Fh] [bp-39h]
  _DWORD v31[14]; // [sp+10h] [bp-38h] BYREF

  v5 = a3 == 0;
  v6 = a2;
  v7 = result;
  if ( a3 )
    v5 = a4 == 0;
  if ( !v5 )
  {
    v8 = a3 + 1;
    if ( a3 + 1 > (unsigned int)FIELD_U16(result, 212)
      || (v9 = FIELD_U32(result, 260)) == 0
      || (result = FIELD_U32(v9, 112), a4 > result) )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v7 + 120))(v7, a2);
      v10 = 0;
      v31[3] = 0;
      v31[1] = 0;
      v31[0] = 0;
      v31[2] = a4;
      v11 = sub_6084A158((int)v31);
      v12 = 2;
      if ( FIELD_U8(v7, 219) )
        v12 = 4;
      v13 = sub_60855BC8(v12 * v8);
      v14 = (void *)sub_60855BC8(v11 + 140);
      if ( FIELD_U32(v7, 264) )
      {
        v15 = sub_60855BC8(52 * a4);
        if ( v15 )
        {
          v16 = v8;
          v17 = v6;
          v18 = (_BYTE *)(v15 + 44);
          v19 = a4;
          do
          {
            *((_DWORD *)v18 - 11) = 1065353216;
            *((_DWORD *)v18 - 10) = 1065353216;
            *((_DWORD *)v18 - 9) = 1065353216;
            *((_DWORD *)v18 - 6) = 0;
            *((_DWORD *)v18 - 3) = 0;
            *((_DWORD *)v18 - 8) = 1065353216;
            *((_DWORD *)v18 - 5) = 0;
            *((_DWORD *)v18 - 2) = 0;
            *((_DWORD *)v18 - 7) = 1065353216;
            *((_DWORD *)v18 - 4) = 0;
            *((_DWORD *)v18 - 1) = 0;
            v18[5] = -1;
            v18[3] = -1;
            v18[2] = -1;
            v18[1] = -1;
            *v18 = -1;
            v20 = v18 + 52;
            v18[4] = -1;
            v21 = v18 + 4;
            --v19;
            v21[3] = -1;
            v21[2] = -1;
            v18 = v20;
          }
          while ( v19 );
          v10 = v15;
          v6 = v17;
          LOWORD(v8) = v16;
        }
        *(_DWORD *)(FIELD_U32(v7, 264) + 8) = v10;
      }
      v22 = v13 == 0;
      if ( v13 )
        v22 = v14 == 0;
      if ( v22 || (v23 = FIELD_U32(v7, 264)) != 0 && !FIELD_U32(v23, 8) )
      {
        if ( v13 )
          sub_60855BF0(v13);
        if ( v14 )
          sub_60855BF0((int)v14);
        result = FIELD_U32(v7, 264);
        v25 = result == 0;
        if ( result )
        {
          result = FIELD_U32(result, 8);
          v25 = result == 0;
        }
        if ( !v25 )
        {
          sub_60855BF0(result);
          result = FIELD_U32(v7, 264);
          FIELD_U32(result, 8) = 0;
        }
      }
      else
      {
        FIELD_U32(v7, 172) = v13;
        FIELD_U16(v7, 212) = v8;
        sub_6084A0AC(v14);
        FIELD_U32(v7, 260) = v14;
        v26[1] = 0;
        v26[2] = a4;
        v26[0] = (int)v14 + 140;
        v24 = FIELD_U16(v7, 216);
        v27 = (v24 & 8) != 0;
        v28 = (v24 & 0x20) != 0;
        v29 = (unsigned __int8)v24 >> 7;
        v30 = (v24 & 0x400) != 0;
        return sub_6084A0C8((int)v14, v6, v26);
      }
    }
  }
  return result;
}
