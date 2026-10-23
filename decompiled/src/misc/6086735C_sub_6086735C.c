/* sub_6086735C
 * address: 0x6086735C   size: 700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086735C(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  int *v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r5
  int v11; // r1
  char v12; // r0
  char v13; // r3
  char v14; // r1
  char v15; // r1
  char v16; // r3
  char v17; // r0
  int *v18; // r0
  int *v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r5
  int v23; // r7
  int v24; // r3
  int v25; // r5
  int v26; // r7
  unsigned int v27; // r0
  void *v28; // r0
  unsigned int v29; // r5
  int v30; // r12
  unsigned int v31; // lr
  unsigned int v32; // r1
  unsigned int v33; // r3
  unsigned int v34; // r10
  int v35; // r7

  *(_DWORD *)a1 = &off_60C5A674;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = FIELD_U32(a2, 24);
  FIELD_U32(a1, 44) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U8(a1, 48) = FIELD_U8(a2, 48);
  FIELD_U8(a1, 49) = FIELD_U8(a2, 49);
  FIELD_U8(a1, 50) = FIELD_U8(a2, 50);
  FIELD_U8(a1, 51) = FIELD_U8(a2, 51);
  FIELD_U32(a1, 28) = FIELD_U32(a2, 28);
  if ( FIELD_U32(a2, 40) )
  {
    v6 = (_DWORD *)sub_60855BC8(16);
    FIELD_U32(a1, 40) = v6;
    v7 = *(int **)(a2 + 40);
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    *v6 = v8;
    v6[1] = v9;
    v6[2] = v10;
    v6[3] = v11;
    *(_DWORD *)(FIELD_U32(a1, 40) + 12) = 0;
  }
  else
  {
    FIELD_U32(a1, 40) = 0;
  }
  if ( (FIELD_U8(a2, 50) & 0x20) != 0 )
  {
    v18 = (int *)sub_60855BC8(32);
    FIELD_U32(a1, 4) = v18;
    v19 = *(int **)(a2 + 4);
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v19 += 4;
    *v18 = v20;
    v18[1] = v21;
    v18[2] = v22;
    v18[3] = v23;
    v18 += 4;
    v24 = v19[1];
    v25 = v19[2];
    v26 = v19[3];
    *v18 = *v19;
    v18[1] = v24;
    v18[2] = v25;
    v18[3] = v26;
  }
  else
  {
    v12 = FIELD_U8(a2, 5);
    v13 = FIELD_U8(a2, 6);
    v14 = FIELD_U8(a2, 7);
    FIELD_U8(a1, 4) = FIELD_U8(a2, 4);
    FIELD_U8(a1, 7) = v14;
    FIELD_U8(a1, 6) = v13;
    FIELD_U8(a1, 5) = v12;
    v15 = FIELD_U8(a2, 8);
    v16 = FIELD_U8(a2, 10);
    v17 = FIELD_U8(a2, 11);
    FIELD_U8(a1, 9) = FIELD_U8(a2, 9);
    FIELD_U8(a1, 8) = v15;
    FIELD_U8(a1, 11) = v17;
    FIELD_U8(a1, 10) = v16;
  }
  FIELD_U32(a1, 12) &= 0xFFFC0000;
  FIELD_U32(a1, 16) &= 0xFFFC0000;
  v27 = FIELD_U32(a2, 12);
  sub_608665C4(
    (_DWORD *)a1,
    v27 & 3,
    (v27 >> 2) & 3,
    (v27 >> 4) & 3,
    (v27 >> 6) & 7,
    (v27 >> 9) & 1,
    (v27 >> 10) & 3,
    (v27 >> 12) & 1,
    (v27 >> 13) & 3,
    (v27 >> 15) & 1,
    HIWORD(v27) & 1,
    (v27 >> 17) & 1);
  v28 = *(void **)(a1 + 20);
  if ( v28 )
  {
    v29 = FIELD_U32(a1, 16);
    v30 = FIELD_U32(a2, 16);
    FIELD_U32(a1, 16) = v29 & 0xFFFFFFFC | v30 & 3;
    v31 = FIELD_U32(a2, 16);
    FIELD_U32(a1, 16) = v29 & 0xFFFFFFF0 | v30 & 3 | (4 * ((v31 >> 2) & 3));
    v32 = FIELD_U32(a2, 16);
    FIELD_U32(a1, 16) = v29 & 0xFFFFFFC0 | v30 & 3 | (4 * ((v31 >> 2) & 3)) & 0xFFFFFFCF | (16 * ((v32 >> 4) & 3));
    v33 = FIELD_U32(a2, 16);
    FIELD_U32(a1, 16) = v29 & 0xFFFFFE00
                         | v30 & 3
                         | (4 * ((v31 >> 2) & 3)) & 0xFFFFFE0F
                         | (16 * ((v32 >> 4) & 3)) & 0xFFFFFE3F
                         | (((v33 >> 6) & 7) << 6);
    v34 = FIELD_U32(a2, 16);
    FIELD_U32(a1, 16) = v29 & 0xFFFF9E00
                         | v30 & 3
                         | (4 * ((v31 >> 2) & 3)) & 0xFFFF9E0F
                         | (16 * ((v32 >> 4) & 3)) & 0xFFFF9E3F
                         | (((v33 >> 6) & 7) << 6) & 0xFFFF9FFF
                         | (((v34 >> 13) & 3) << 13);
    v35 = FIELD_U32(a2, 16) >> 15;
    FIELD_U32(a1, 16) = v29 & 0xFFFF1E00
                         | v30 & 3
                         | (4 * ((v31 >> 2) & 3)) & 0xFFFF1E0F
                         | (16 * ((v32 >> 4) & 3)) & 0xFFFF1E3F
                         | (((v33 >> 6) & 7) << 6) & 0xFFFF1FFF
                         | (((v34 >> 13) & 3) << 13) & 0xFFFF7FFF
                         | (((FIELD_U32(a2, 16) & 0x8000) != 0) << 15);
    qmemcpy(
      v28,
      *(const void **)(a2 + 20),
      (v32 & 0x30 | -((v29 >> 12) & 1) & 0xC)
    + (-((v29 >> 17) & 1) & 0x74)
    + 4 * (((v33 >> 6) & 7) + ((v29 >> 10) & 3))
    + ((16 * ((v33 >> 6) & 7) + 28) & -(HIWORD(v29) & 1))
    + 20 * (((v34 >> 13) & 3) + ((v31 >> 2) & 3))
    + 8 * (((v29 >> 9) & 1) + (v30 & 3) + (v35 & 1)));
  }
  sub_60867078(a1, a3);
  return a1;
}
