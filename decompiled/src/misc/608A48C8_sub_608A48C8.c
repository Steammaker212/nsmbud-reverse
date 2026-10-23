/* sub_608A48C8
 * address: 0x608A48C8   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A48C8(int *a1, int a2, int a3)
{
  char v6; // r4
  _BYTE *v7; // r0
  char v8; // r3
  int v9; // r2
  char v10; // r0
  char v11; // r1
  char v12; // r6
  int v13; // r0
  __int16 v14; // r1
  __int16 v15; // r0
  unsigned int v16; // r0
  _DWORD v18[16]; // [sp+0h] [bp-80h] BYREF
  int v19; // [sp+40h] [bp-40h] BYREF
  int v20; // [sp+44h] [bp-3Ch]
  int v21; // [sp+48h] [bp-38h]
  int v22; // [sp+4Ch] [bp-34h]
  int v23; // [sp+50h] [bp-30h]
  int v24; // [sp+54h] [bp-2Ch]
  int v25; // [sp+58h] [bp-28h]
  int v26; // [sp+5Ch] [bp-24h]

  *a1 = a3;
  memset(v18, 0, 48);
  sub_6083D6A0((int)v18);
  v6 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6083D668(&v19);
  v7 = (_BYTE *)*a1;
  v8 = v19 & 0xFE;
  if ( *(_BYTE *)*a1 )
    v8 = v19 | 1;
  LOBYTE(v19) = v8;
  v9 = (unsigned __int8)v7[6];
  v10 = 1;
  v11 = 6;
  switch ( v9 )
  {
    case 0:
      v10 = 7;
      goto LABEL_5;
    case 1:
      goto LABEL_9;
    case 2:
LABEL_5:
      v6 = v9;
      goto LABEL_9;
    case 3:
      v10 = 2;
      v11 = 0;
      v6 = 0;
      goto LABEL_9;
    case 4:
      v11 = 5;
      goto LABEL_9;
    case 5:
      v10 = 7;
      v11 = 1;
LABEL_9:
      BYTE1(v19) = v11;
      BYTE2(v19) = v10;
      HIBYTE(v19) = v6;
      LOBYTE(v20) = v11;
      BYTE1(v20) = v10;
      BYTE2(v20) = v6;
      break;
    default:
      break;
  }
  v12 = 1;
  HIWORD(v18[0]) &= ~4u;
  LOBYTE(v18[0]) = 1;
  v18[6] = &v19;
  v13 = sub_6083C504((unsigned __int8 *)v18);
  sub_6083C52C(a1 + 2, (int)(a1 + 32), v13);
  sub_6083C540(a1 + 2, a2, (unsigned __int8 *)v18);
  memset(v18, 0, sizeof(v18));
  sub_6083D6FC((int)v18);
  v14 = v18[1] & 0xFFFE;
  if ( FIELD_U8(a3, 1) )
    v14 = LOWORD(v18[1]) | 1;
  v15 = v14 & 0xFFFD;
  if ( FIELD_U8(a3, 3) )
    v15 = v14 | 2;
  LOWORD(v18[1]) = v15;
  switch ( *(_BYTE *)(*a1 + 2) )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      v12 = *(_BYTE *)(*a1 + 2);
      goto LABEL_16;
    case 1:
LABEL_16:
      LOBYTE(v18[0]) = v12;
      break;
    default:
      break;
  }
  sub_6083C7C0((int)(a1 + 12), a2, (unsigned __int8 *)v18);
  memset(v18, 0, sizeof(v18));
  sub_6083D614((int)v18);
  BYTE2(v18[0]) = 0;
  v16 = *(unsigned __int8 *)(*a1 + 7);
  if ( v16 <= 2 )
    BYTE2(v18[0]) = 0x10200u >> (8 * v16);
  LOWORD(v18[1]) = v18[1] & 0xFFF3 | 8;
  return sub_6083C318((int)(a1 + 19), a2, (unsigned __int8 *)v18);
}
