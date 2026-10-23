/* sub_6040F984
 * address: 0x6040F984   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F984(int a1, void *a2)
{
  int *v4; // r5
  int v5; // r8
  int v6; // r7
  _DWORD *v7; // r6
  int v8; // r1
  int v9; // r2
  int v10; // r1
  int v11; // r2
  int v12; // r8
  int v13; // r9
  _WORD *v14; // r10
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r7
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r6
  int v24; // r7
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r6
  int v29; // r7
  unsigned int *v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned int v33; // r1
  int result; // r0
  int v35; // [sp+18h] [bp-30h] BYREF
  int v36; // [sp+1Ch] [bp-2Ch]
  int v37; // [sp+20h] [bp-28h]

  v4 = (int *)(a1 + 344);
  sub_6091FDB0(a1 + 344, 1, FIELD_U32(a1, 1764), FIELD_U32(a1, 1756), FIELD_U32(a1, 1760), 1, 1, 0, 0, 1);
  v5 = FIELD_U32(a1, 380);
  v6 = FIELD_U32(a1, 384);
  v7 = (_DWORD *)operator_new_8DE25C(0x1Cu, a2, 4);
  sub_60913BB4();
  *v7 = off_60BF9C1C;
  sub_60913D88((int)v7, v6, (int)a2, v5, 12);
  sub_60913A6C(&v35, v7, 0);
  v8 = v36;
  v9 = v37;
  FIELD_U32(a1, 832) = v35;
  FIELD_U32(a1, 836) = v8;
  FIELD_U32(a1, 840) = v9;
  v10 = FIELD_U32(a1, 836);
  v11 = FIELD_U32(a1, 840);
  v35 = FIELD_U32(a1, 832);
  v36 = v10;
  v37 = v11;
  sub_609208DC(v4, &v35, 0);
  sub_60920168(v4);
  sub_60920CDC(v4, a1 + 616);
  v12 = FIELD_U8(a1, 278);
  v14 = (_WORD *)(a1 + 276);
  v13 = FIELD_U16(a1, 276);
  v15 = *v4;
  v16 = v4[1];
  v17 = v4[2];
  v18 = v4[3];
  v19 = v4[4];
  v4 += 5;
  *(_DWORD *)a1 = v15;
  FIELD_U32(a1, 4) = v16;
  FIELD_U32(a1, 8) = v17;
  FIELD_U32(a1, 12) = v18;
  FIELD_U32(a1, 16) = v19;
  v20 = *v4;
  v21 = v4[1];
  v22 = v4[2];
  v23 = v4[3];
  v24 = v4[4];
  v4 += 5;
  FIELD_U32(a1, 20) = v20;
  FIELD_U32(a1, 24) = v21;
  FIELD_U32(a1, 28) = v22;
  FIELD_U32(a1, 32) = v23;
  FIELD_U32(a1, 36) = v24;
  v25 = *v4;
  v26 = v4[1];
  v27 = v4[2];
  v28 = v4[3];
  v29 = v4[4];
  v4 += 5;
  FIELD_U32(a1, 40) = v25;
  FIELD_U32(a1, 44) = v26;
  FIELD_U32(a1, 48) = v27;
  FIELD_U32(a1, 52) = v28;
  FIELD_U32(a1, 56) = v29;
  LOWORD(v25) = *(_WORD *)v4;
  FIELD_U8(a1, 62) = *((_BYTE *)v4 + 2);
  FIELD_U16(a1, 60) = v25;
  sub_60917754(a1 + 64, a1 + 408);
  FIELD_U32(a1, 264) = FIELD_U32(a1, 608);
  v30 = (unsigned int *)(a1 + 272);
  do
    v31 = __ldrex(v30);
  while ( __strex(v31 | 4, v30) );
  if ( (unsigned __int16)*v14 != v13 )
  {
    do
      v32 = __ldrex(v30);
    while ( __strex(v32 | 2, v30) );
    *v14 = v13;
  }
  if ( FIELD_U8(a1, 278) != v12 )
  {
    do
      v33 = __ldrex(v30);
    while ( __strex(v33 | 1, v30) );
    FIELD_U8(a1, 278) = v12;
  }
  result = sub_6091AC94(a1);
  FIELD_U32(a1, 1720) = a1;
  return result;
}
