/* sub_6088A820
 * address: 0x6088A820   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6088A820(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  _DWORD *v8; // r4
  _QWORD *v10; // r6
  __int64 v11; // d17
  int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r7
  __int64 v15; // d17
  __int64 v16; // d17
  __int64 v17; // d16
  __int64 v18; // d17
  void *v19; // r0
  int v20; // r11
  int v21; // r1
  int v22; // r6
  __int64 v23; // d17
  int v24; // r6
  __int64 v25; // r2
  __int64 v26; // d17
  __int64 v27; // d17
  __int64 v28; // d16
  __int64 v29; // d17
  void *v30; // r0
  int v31; // r1
  int v32; // r6
  __int64 *v33; // [sp+14h] [bp-A4h]
  _QWORD v35[12]; // [sp+20h] [bp-98h] BYREF
  int v36; // [sp+80h] [bp-38h] BYREF
  int v37; // [sp+84h] [bp-34h]
  int v38; // [sp+88h] [bp-30h]
  int v39; // [sp+8Ch] [bp-2Ch]

  v8 = a7;
  v10 = (_QWORD *)(a8 + 32);
  v11 = FIELD_U64(a8, 40);
  v35[0] = FIELD_U64(a8, 32);
  v35[1] = v11;
  v12 = a7[1];
  v13 = a7[2];
  v14 = a7[3];
  LODWORD(v35[2]) = *a7;
  HIDWORD(v35[2]) = v12;
  v35[3] = __PAIR64__(v14, v13);
  v15 = FIELD_U64(a8, 8);
  v35[4] = *(_QWORD *)a8;
  v35[5] = v15;
  v16 = FIELD_U64(a8, 24);
  v35[6] = FIELD_U64(a8, 16);
  v35[7] = v16;
  LODWORD(v35[8]) = FIELD_U32(a8, 108);
  *((float *)&v35[8] + 1) = (float)FIELD_S32(a8, 96) + (float)(FIELD_F32(a6, 16) * (float)(FIELD_U32(a8, 96) - 1));
  LODWORD(v35[9]) = 0;
  HIDWORD(v35[9]) = FIELD_U32(a8, 112);
  v33 = (__int64 *)(a8 + 64);
  v17 = FIELD_U64(a8, 64);
  v18 = FIELD_U64(a8, 72);
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35[10] = v17;
  v35[11] = (unsigned int)v18;
  v19 = (void *)sub_60895D14(a3, &v36, 96);
  v20 = a5;
  if ( v19 )
  {
    qmemcpy(v19, v35, 0x60u);
    v21 = FIELD_U32(a5, 316);
    v22 = FIELD_U32(a5, 320);
    if ( v21 != -1 )
      sub_60836348(a1, v21, 0, &v36, 96);
    if ( v22 != -1 )
      sub_60836348(a1, v22, 4, &v36, 96);
    nullsub_98(a3);
    v8 = a7;
    sub_6083558C(a1, 4, FIELD_U32(a8, 104), a7[6] * FIELD_U32(a8, 100));
    v20 = a5;
    v10 = (_QWORD *)(a8 + 32);
  }
  else
  {
    nullsub_95();
  }
  if ( FIELD_U32(a6, 8) == 1 )
  {
    v23 = v10[1];
    v35[0] = *v10;
    v35[1] = v23;
    v24 = v8[1];
    v25 = *((_QWORD *)v8 + 1);
    LODWORD(v35[2]) = *v8;
    v35[3] = v25;
    HIDWORD(v35[2]) = v24;
    v26 = FIELD_U64(a8, 8);
    v35[4] = *(_QWORD *)a8;
    v35[5] = v26;
    v27 = FIELD_U64(a8, 24);
    v35[6] = FIELD_U64(a8, 16);
    v35[7] = v27;
    LODWORD(v35[8]) = FIELD_U32(a8, 108);
    *((float *)&v35[8] + 1) = (float)FIELD_S32(a8, 96)
                            + (float)(FIELD_F32(a6, 16) * (float)(FIELD_U32(a8, 96) - 1));
    LODWORD(v35[9]) = 1065353216;
    HIDWORD(v35[9]) = FIELD_U32(a8, 112);
    v28 = *v33;
    v29 = FIELD_U64(a8, 72);
    LODWORD(v35[10]) = *(_DWORD *)v33;
    HIDWORD(v35[10]) = HIDWORD(v28);
    v35[11] = (unsigned int)v29;
    v39 = 0;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v30 = (void *)sub_60895D14(a3, &v36, 96);
    if ( v30 )
    {
      qmemcpy(v30, v35, 0x60u);
      v31 = FIELD_U32(v20, 316);
      v32 = FIELD_U32(v20, 320);
      if ( v31 != -1 )
        sub_60836348(a1, v31, 0, &v36, 96);
      if ( v32 != -1 )
        sub_60836348(a1, v32, 4, &v36, 96);
      nullsub_98(a3);
      sub_6083558C(a1, 4, FIELD_U32(a8, 104), v8[6] * FIELD_U32(a8, 100));
    }
    else
    {
      nullsub_95();
    }
  }
}
