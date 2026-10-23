/* sub_60725CF8
 * address: 0x60725CF8   size: 1168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60725CF8(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  int v8; // r1
  _DWORD *v9; // r3
  int v10; // r6
  _DWORD *v11; // r1
  _DWORD *v12; // r4
  _DWORD *v13; // r1
  int i; // r5
  int v15; // r3
  int v16; // r1
  int v17; // r0
  int v18; // r3
  _DWORD *v19; // r1
  _BYTE *v20; // r7
  int v21; // r6
  int result; // r0
  int v23; // r7
  int v24; // r4
  int v25; // r4
  int v26; // r7
  int v27; // r7
  int v28; // r4
  int v29; // r4
  int v30; // r7
  int v31; // r4
  int v32; // r7
  int v33; // r7
  int v34; // r4
  int v35; // r7
  int v36; // r4
  int v37; // r4
  int v38; // r7
  _DWORD v39[18]; // [sp+8h] [bp-48h] BYREF

  memset(v39, 0, 36);
  v6 = FIELD_U32(a2, 3072);
  v7 = 0;
  v8 = 0;
LABEL_7:
  v10 = 0;
  v11 = &v39[3 * v8];
  v12 = v11 + 2;
  v13 = v11 + 1;
LABEL_9:
  for ( i = 0; ; ++i )
  {
    v15 = *(unsigned __int8 *)(v6 + v7);
    if ( v15 == 254 )
    {
      ++v10;
      *v13 = i;
      ++v7;
      *v12 = v10;
      goto LABEL_9;
    }
    if ( v15 == 255 )
      break;
    if ( (v15 & 0x80u) != 0 )
    {
      v8 = 0;
      ++v7;
      if ( (char)v15 == -123 )
        v8 = 2;
      if ( (char)v15 == -124 )
        v8 = 1;
      v9 = &v39[3 * v8];
      v9[1] = 0;
      v9[2] = 0;
      goto LABEL_7;
    }
    v7 += 3;
  }
  v16 = 0;
  if ( v39[2] > 0 )
    v39[0] = a2;
  if ( v39[5] >= 1 )
    v39[3] = a2 + 1024;
  if ( v39[8] >= 1 )
    v39[6] = a2 + 2048;
  v17 = 0;
LABEL_27:
  v18 = 0;
  v19 = &v39[3 * v16];
LABEL_28:
  v20 = *(_BYTE **)(a2 + 3072);
  while ( 1 )
  {
    v21 = (unsigned __int8)v20[v17];
    if ( v21 == 255 )
      break;
    if ( v21 == 254 )
    {
      ++v18;
      ++v17;
      if ( v18 >= v19[2] )
        goto LABEL_28;
      *(_DWORD *)(*v19 + 4 * v18) = v17;
      v20 = *(_BYTE **)(a2 + 3072);
    }
    else
    {
      if ( (v21 & 0x80u) != 0 )
      {
        v16 = 0;
        ++v17;
        if ( (char)v21 == -123 )
          v16 = 2;
        if ( (char)v21 == -124 )
          v16 = 1;
        *(_DWORD *)v39[3 * v16] = v17;
        goto LABEL_27;
      }
      v17 += 3;
    }
  }
  result = (unsigned __int8)*v20 - 128;
  switch ( *v20 )
  {
    case 0x80:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v23 = result - 1;
        v24 = 0;
        do
        {
          sub_60723DD8(a1, (unsigned __int16 *)a2, v24, v23, v39, a3);
          result = v39[1];
          v23 -= v39[2];
          v24 += v39[1];
        }
        while ( v23 >= 0 );
      }
      break;
    case 0x81:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v25 = result - 1;
        v26 = FIELD_U16(a2, 3098) - v39[1];
        do
        {
          sub_6072415C(a1, (unsigned __int16 *)a2, v26, v25, v39, a3);
          result = v39[1];
          v25 -= v39[2];
          v26 -= v39[1];
        }
        while ( v25 >= 0 );
      }
      break;
    case 0x82:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v27 = 0;
        v28 = 0;
        do
        {
          sub_60724514(a1, (unsigned __int16 *)a2, v28, v27, v39, a3);
          v28 += v39[1];
          result = FIELD_U16(a2, 3100);
          v27 += v39[2];
        }
        while ( v27 < result );
      }
      break;
    case 0x83:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v29 = 0;
        v30 = FIELD_U16(a2, 3098) - v39[1];
        do
        {
          sub_60724888(a1, (unsigned __int16 *)a2, v30, v29, v39, a3);
          v30 -= v39[1];
          result = FIELD_U16(a2, 3100);
          v29 += v39[2];
        }
        while ( v29 < result );
      }
      break;
    case 0x90:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v31 = result - 1;
        v32 = 0;
        do
        {
          sub_60724C40(a1, (_WORD *)a2, v32, v31, v39, a3);
          result = v39[1];
          v31 -= v39[2];
          v32 += v39[1];
        }
        while ( v31 >= 0 );
      }
      break;
    case 0x91:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v33 = 0;
        v34 = 0;
        do
        {
          sub_60724F6C(a1, (_WORD *)a2, v34, v33, v39, a3);
          v34 += v39[1];
          result = FIELD_U16(a2, 3100);
          v33 += v39[2];
        }
        while ( v33 < result );
      }
      break;
    case 0x92:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v35 = 0;
        v36 = 0;
        do
        {
          sub_60725214(a1, (_WORD *)a2, v36, v35, v39, a3);
          v36 += v39[1];
          result = FIELD_U16(a2, 3100);
          v35 += v39[2];
        }
        while ( v35 < result );
      }
      break;
    case 0x93:
      result = FIELD_U16(a2, 3100);
      if ( FIELD_U16(a2, 3100) )
      {
        v37 = result - 1;
        v38 = 0;
        do
        {
          sub_607255B8(a1, (_WORD *)a2, v38, v37, v39, a3);
          result = v39[1];
          v37 -= v39[2];
          v38 += v39[1];
        }
        while ( v37 >= 0 );
      }
      break;
    default:
      return result;
  }
  return result;
}
