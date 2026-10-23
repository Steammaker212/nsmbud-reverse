/* sub_608676E0
 * address: 0x608676E0   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608676E0(
        _DWORD *result,
        int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int16 a10,
        int a11,
        int a12)
{
  int v12; // r12
  unsigned int v13; // lr
  unsigned int v14; // r3
  int v15; // r2
  _DWORD *v16; // r1
  unsigned int v17; // r3
  int v18; // r1
  int v19; // r2
  unsigned int v20; // r3
  int v21; // r5
  int v22; // r3
  _BYTE *v23; // r5
  int v24; // r5
  int v25; // r2
  _BYTE *v26; // r5
  unsigned int v27; // r1
  unsigned int v28; // r3
  int v29; // r1
  int v30; // r2
  int v31; // r2
  unsigned int v32; // r3
  int v33; // r1
  int v34; // r2
  _BYTE *v35; // r2
  int v36; // r4
  int v37; // r3
  _DWORD *v38; // r4
  int v39; // r3
  unsigned int v40; // r4
  int v41; // r2
  _DWORD *v42; // r2
  unsigned int v43; // r1

  v12 = a5;
  v13 = a2 & 3
      | (4 * (a3 & 3))
      | (16 * a4) & 0x30
      | (a5 << 6) & 0x1C0
      | (a6 << 9) & 0x200
      | (a7 << 10) & 0xC00
      | (a8 << 12) & 0x1000
      | (a9 << 13) & 0x6000
      | (unsigned __int16)(a10 << 15)
      | (a11 << 16) & 0x10000
      | (a12 << 17) & 0x20000
      | result[3] & 0xFFFC0000;
  result[3] = v13;
  v14 = result[4] & 0xFFFFFFF3 | (4 * (a3 & 3));
  v15 = a3 & 3;
  result[4] = v14;
  if ( v15 )
  {
    v16 = (_DWORD *)(result[5] + ((8 * a2) & 0x18));
    *v16 = 0;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = 1065353216;
    v16[4] = 1065353216;
    if ( v15 != 1 )
    {
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v16[8] = 1065353216;
      v16[9] = 1065353216;
      if ( v15 != 2 )
      {
        v16[10] = 0;
        v16[11] = 0;
        v16[12] = 0;
        v16[13] = 1065353216;
        v16[14] = 1065353216;
      }
    }
    v13 = result[3];
    v14 = result[4];
  }
  v17 = v14 & 0xFFFFFDFF | (((v13 >> 9) & 1) << 9);
  result[4] = v17;
  if ( (v13 & 0x200) != 0 )
  {
    v18 = ((8 * v13) & 0x18) + (v13 & 0x30) + 20 * ((v13 >> 2) & 3);
    v19 = result[5];
    *(_DWORD *)(v19 + v18) = 7;
    *(_DWORD *)(v19 + v18 + 4) = 0;
    v13 = result[3];
    v17 = result[4];
  }
  v20 = v17 & 0xFFFFF3FF | (((v13 >> 10) & 3) << 10);
  result[4] = v20;
  if ( (v13 & 0xC00) != 0 )
  {
    v21 = result[5];
    v22 = ((8 * v13) & 0x18) + (v13 & 0x30) + ((v13 >> 6) & 8) + 20 * ((v13 >> 2) & 3);
    *(_BYTE *)(v21 + v22) = 0;
    v23 = (_BYTE *)(v21 + v22);
    v23[3] = 0;
    v23[2] = 5;
    v23[1] = 4;
    v20 = result[4];
    if ( (v20 & 0xC00) == 0x800 )
    {
      v24 = result[5];
      v25 = (result[3] & 0x30 | 4) + ((8 * result[3]) & 0x18) + ((result[3] >> 6) & 8) + 20 * ((result[3] >> 2) & 3);
      *(_BYTE *)(v24 + v25) = 0;
      v26 = (_BYTE *)(v24 + v25);
      v26[3] = 0;
      v26[2] = 5;
      v26[1] = 4;
      v20 = result[4];
    }
  }
  v27 = result[3];
  v28 = v20 & 0xFFFFEFFF | (((v27 >> 12) & 1) << 12);
  result[4] = v28;
  if ( (v27 & 0x1000) != 0 )
  {
    v29 = ((8 * v27) & 0x18) + (v27 & 0x30) + ((v27 >> 6) & 8) + 4 * ((v27 >> 10) & 3) + 20 * ((v27 >> 2) & 3);
    v30 = result[5];
    *(_DWORD *)(v30 + v29) = 0;
    v31 = v30 + v29;
    FIELD_U32(v31, 4) = 1065353216;
    FIELD_U32(v31, 8) = 1065353216;
    v27 = result[3];
    v28 = result[4];
  }
  v32 = v28 & 0xFFFF7FFF | (((v27 >> 15) & 1) << 15);
  result[4] = v32;
  if ( (v27 & 0x8000) != 0 )
  {
    v33 = ((8 * v27) & 0x18)
        + (v27 & 0x30)
        + ((v27 >> 6) & 8)
        + 4 * ((v27 >> 10) & 3)
        + 4 * ((v27 >> 6) & 7)
        + (-((v27 >> 12) & 1) & 0xC)
        + 20 * (((v27 >> 13) & 3) + ((v27 >> 2) & 3));
    v34 = result[5];
    *(_BYTE *)(v34 + v33) = 0;
    v35 = (_BYTE *)(v34 + v33);
    v35[1] = 0;
    v35[2] = 0;
    v35[3] = -1;
    v35 += 3;
    v35[3] = -1;
    v35[2] = -1;
    v35[1] = -1;
    v35[4] = 0;
    v27 = result[3];
    v32 = result[4];
  }
  result[4] = v32 & 0xFFFEFFFF | ((HIWORD(v27) & 1) << 16);
  if ( (v27 & 0x10000) != 0 )
  {
    v36 = result[5];
    v37 = ((8 * v27) & 0x18)
        + (v27 & 0x30)
        + ((v27 >> 6) & 8)
        + 4 * ((v27 >> 10) & 3)
        + 4 * ((v27 >> 6) & 7)
        + ((v27 >> 12) & 8)
        + (-((v27 >> 12) & 1) & 0xC)
        + 20 * (((v27 >> 13) & 3) + ((v27 >> 2) & 3));
    *(_DWORD *)(v36 + v37) = 0;
    v38 = (_DWORD *)(v36 + v37);
    v38[1] = 0;
    v38[2] = 0;
    v38[3] = 0;
    v38[4] = 0;
    v38[5] = 0;
    v38[6] = 0;
    if ( a5 >= 1 )
    {
      v39 = 0;
      do
      {
        v40 = result[3];
        --v12;
        v41 = result[5]
            + ((8 * v40) & 0x18)
            + (v40 & 0x30)
            + ((v40 >> 6) & 8)
            + 4 * ((v40 >> 10) & 3)
            + 4 * ((v40 >> 6) & 7)
            + ((v40 >> 12) & 8)
            + (-((v40 >> 12) & 1) & 0xC)
            + (-(HIWORD(v40) & 1) & 0x1C)
            + 20 * (((v40 >> 13) & 3) + ((v40 >> 2) & 3));
        *(_DWORD *)(v41 + v39) = 0;
        v42 = (_DWORD *)(v41 + v39);
        v39 += 16;
        v42[1] = 0;
        v42[2] = 0;
        v42[3] = 0;
      }
      while ( v12 );
    }
  }
  v43 = result[3];
  result[4] = result[4] & 0xFFFDFFFF | (((v43 >> 17) & 1) << 17);
  if ( (v43 & 0x20000) != 0 )
    return (_DWORD *)memset(
                       (void *)(result[5]
                              + ((v43 >> 12) & 0x10) * ((v43 >> 6) & 7)
                              + ((8 * v43) & 0x18)
                              + (v43 & 0x30)
                              + ((v43 >> 6) & 8)
                              + 4 * ((v43 >> 10) & 3)
                              + 4 * ((v43 >> 6) & 7)
                              + ((v43 >> 12) & 8)
                              + (-((v43 >> 12) & 1) & 0xC)
                              + (-(HIWORD(v43) & 1) & 0x1C)
                              + 20 * (((v43 >> 13) & 3) + ((v43 >> 2) & 3))),
                       0,
                       116);
  return result;
}
