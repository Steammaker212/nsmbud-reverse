/* sub_60920648
 * address: 0x60920648   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60920648(int a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r2
  int v8; // r10
  int result; // r0
  int v10; // r1
  unsigned int v11; // r7
  unsigned int v12; // r7
  int v13; // r7
  unsigned int v14; // r11
  unsigned int v15; // r8
  int v16; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  float v20; // s0
  float v21; // s2
  int v22; // r0
  int v23; // r0
  int v24; // r3
  int v25; // r2
  int v26; // r1
  int v27; // [sp+8h] [bp-60h]
  int v29; // [sp+Ch] [bp-5Ch]
  _BYTE *v30; // [sp+10h] [bp-58h] BYREF
  int v31; // [sp+14h] [bp-54h] BYREF
  _BYTE v32[80]; // [sp+18h] [bp-50h] BYREF

  v6 = 1;
  v7 = 1;
  v8 = 0;
  result = *(_DWORD *)a3;
  v10 = FIELD_U32(a3, 8);
  v11 = *(unsigned __int16 *)(*(_DWORD *)a3 + 26);
  if ( *(_WORD *)(*(_DWORD *)a3 + 34) == 3 )
    v6 = *(unsigned __int16 *)(*(_DWORD *)a3 + 26);
  if ( v6 <= (int)(v11 >> v10) )
    v6 = v11 >> v10;
  v12 = FIELD_U16(result, 24);
  if ( (int)(v12 >> v10) > 1 )
    v7 = v12 >> v10;
  v13 = 0;
  switch ( FIELD_U16(result, 60) )
  {
    case '/':
    case '0':
      v8 = 40;
      v13 = 0;
      goto LABEL_14;
    case '1':
    case '2':
    case '9':
    case ':':
      return result;
    case '3':
    case '4':
      v8 = 44;
      v13 = 1;
      goto LABEL_14;
    case '5':
      v8 = 40;
      v13 = 2;
      goto LABEL_14;
    case '6':
      v8 = 40;
      v13 = 3;
      goto LABEL_14;
    case '7':
      v8 = 44;
      v13 = 4;
      goto LABEL_14;
    case '8':
      v8 = 44;
      v13 = 5;
      goto LABEL_14;
    default:
LABEL_14:
      v31 = result + 64;
      v14 = ((-v6 & 3u) + v6) << v10 >> 2;
      v30 = v32;
      v15 = ((-v7 & 3u) + v7) << v10 >> 2;
      dword_60CC7528(v32);
      dword_60CC7540(v32, *(unsigned __int16 *)(*(_DWORD *)a3 + 34));
      v16 = sub_6097136C(v8);
      dword_60CC7534(v32, v16);
      dword_60CC752C(v32, FIELD_U32(a3, 8), 1);
      dword_60CC7530(v32, FIELD_U32(a3, 4), 1);
      ((void (__fastcall *)(_DWORD, int, int *, _BYTE **, _DWORD, _DWORD, int, int))dword_60CC7954)(
        FIELD_U32(a2, 192),
        1,
        &v31,
        &v30,
        0,
        0,
        v13,
        a4);
      v17 = FIELD_U32(a3, 8);
      v18 = FIELD_U32(a3, 296);
      v19 = v14 >> v17;
      v20 = (float)(v15 >> v17);
      v21 = (float)(v14 >> v17);
      FIELD_F32(v18, 4) = v20;
      FIELD_F32(v18, 8) = v21;
      v22 = FIELD_U32(a3, 296);
      FIELD_U32(v22, 12) = 0;
      FIELD_U32(v22, 16) = 0;
      FIELD_F32(v22, 20) = v20;
      FIELD_F32(v22, 24) = v21;
      v23 = ((int (__fastcall *)(_BYTE *, _DWORD, unsigned int))loc_6090E438)(v32, FIELD_U32(a3, 296), v19);
      sub_6090E560(v23, a2, *(float **)(a3 + 296));
      v24 = FIELD_U32(a3, 12);
      v25 = FIELD_U32(a3, 16);
      v26 = a3 + 648;
      if ( v29 == 1 )
        sub_60940254(a2, v26, v25, v24, v27);
      else
        sub_6093FF24(a2, v26, v25, v24, v27);
      return sub_60913708(a2, 7);
  }
}
