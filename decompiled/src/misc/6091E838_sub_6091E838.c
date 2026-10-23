/* sub_6091E838
 * address: 0x6091E838   size: 836   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091E838(int a1, int a2, int a3, char a4, void *a5)
{
  _DWORD *v5; // r6
  int v6; // r7
  __int16 v7; // r0
  __int16 v8; // r2
  int v9; // r0
  __int64 v10; // r4
  unsigned int v11; // r0
  _QWORD *v12; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r5
  unsigned int v18; // r1
  int v19; // r7
  __int64 v20; // kr08_8
  _DWORD *v21; // r0
  int v22; // r1
  int v23; // r7
  int v24; // r8
  unsigned int v25; // r9
  _WORD *v26; // r10
  int v27; // r0
  int v28; // r0
  _DWORD *v29; // r11
  int i; // r1
  int v31; // r0
  unsigned int v32; // r0
  int result; // r0
  int v35; // r5
  int v36; // r4
  int v37; // r1
  _DWORD *v39; // [sp+8h] [bp-40h]
  int v40; // [sp+Ch] [bp-3Ch]
  unsigned int v41; // [sp+10h] [bp-38h]
  int v42; // [sp+1Ch] [bp-2Ch]
  int v43; // [sp+20h] [bp-28h]

  v5 = (_DWORD *)a1;
  FIELD_U32(a1, 20) = a2;
  v6 = a1 + 20;
  v7 = FIELD_U16(a1, 62);
  v43 = v6;
  v8 = v7 & 0xFFFE;
  if ( (a4 & 4) != 0 )
    v8 = v7 | 1;
  FIELD_U16(v6, 42) = v8;
  if ( a2 )
  {
    sub_60913FE4((_DWORD *)v6, 1);
    v9 = v5[5] + *(_DWORD *)(v5[5] + 20);
    HIDWORD(v10) = *(_DWORD *)(v9 + 336 + FIELD_U32(v9, 336) + 4);
    if ( SHIDWORD(v10) >= 1 )
    {
      LODWORD(v10) = 936;
      v11 = 936 * HIDWORD(v10) + 8;
      if ( v11 < 936 * HIDWORD(v10) )
        v11 = -1;
      if ( !is_mul_ok(0x3A8u, HIDWORD(v10)) )
        v11 = -1;
      v12 = (_QWORD *)sub_608DE334(v11, (int)a5, 4);
      if ( v12 )
      {
        v13 = 936 * HIDWORD(v10);
        *v12 = v10;
        LODWORD(v10) = v12 + 1;
        v14 = (int)(v12 + 1);
        do
        {
          v13 -= 936;
          v14 = sub_6091BCD8(v14) + 936;
        }
        while ( v13 );
        v5[7] = HIDWORD(v10);
        v5[8] = v10;
      }
    }
    v15 = *(_DWORD *)v43 + *(_DWORD *)(*(_DWORD *)v43 + 20);
    v16 = v15 + 336 + FIELD_U32(v15, 336);
    v40 = FIELD_U32(v16, 4);
    if ( v40 )
    {
      v17 = (_DWORD *)(v16 + 8);
      v18 = 0;
      v39 = v5;
      while ( 1 )
      {
        v19 = v5[8];
        v41 = v18;
        if ( v5[7] > v18 )
          v19 += 936 * v18;
        sub_6091C948(v19, (int)v17, a5);
        v20 = dword_60CC746C(v5[5] + 288);
        v42 = v19;
        v21 = *(_DWORD **)(v19 + 4);
        v22 = v21[4];
        if ( v22 >= 0 )
          break;
LABEL_40:
        v5 = v39;
        v17 = (_DWORD *)((char *)v17 + *v17);
        v18 = v41 + 1;
        if ( v41 + 1 == v40 )
          goto LABEL_41;
      }
      v23 = 0;
LABEL_19:
      if ( v23 <= 0 )
      {
        v24 = v21[3];
      }
      else
      {
        v24 = v21[5];
        if ( v22 > (unsigned int)(v23 - 1) )
          v24 += 936 * (v23 - 1);
      }
      v25 = 0;
      FIELD_U64(v24, 920) = v20;
      while ( 1 )
      {
        v26 = (_WORD *)sub_6091E0BC(v24, v25);
        v27 = v17[2];
        if ( v25 == 3 )
          break;
        if ( (v27 & (1 << v25)) != 0 )
        {
          v28 = v25 + (((v17[2] & 4) != 0) | 2) * v23 + v17[3];
          if ( v28 != -1 )
            goto LABEL_31;
        }
LABEL_38:
        if ( ++v25 == 4 )
        {
LABEL_39:
          v21 = *(_DWORD **)(v42 + 4);
          v22 = v21[4];
          if ( v23++ >= v22 )
            goto LABEL_40;
          goto LABEL_19;
        }
      }
      if ( (v27 & 8) == 0 )
        goto LABEL_39;
      v28 = v17[3] + v23;
      if ( v28 == -1 )
        goto LABEL_38;
LABEL_31:
      v29 = (_DWORD *)(*(_DWORD *)v43 + *(_DWORD *)(*(_DWORD *)v43 + 20) + 344);
      if ( v28 )
      {
        for ( i = 0; (v28 & 3) != i; v29 = (_DWORD *)((char *)v29 + *v29) )
          ++i;
        if ( (unsigned int)(v28 - 1) >= 3 )
        {
          v31 = v28 - i;
          do
          {
            v31 -= 4;
            v29 = (_DWORD *)((char *)v29
                           + *v29
                           + *(_DWORD *)((char *)v29 + *v29)
                           + *(_DWORD *)((char *)v29 + *v29 + *(_DWORD *)((char *)v29 + *v29))
                           + *(_DWORD *)((char *)v29
                                       + *v29
                                       + *(_DWORD *)((char *)v29 + *v29)
                                       + *(_DWORD *)((char *)v29 + *v29 + *(_DWORD *)((char *)v29 + *v29))));
          }
          while ( v31 );
        }
      }
      sub_60973AF4(v26, v29 + 4);
      v32 = v29[2];
      v26[8] = 0;
      v26[7] = (unsigned __int8)(v32 >> 12);
      v26[6] = v32 >> 20;
      v26[9] = ((v32 << 10) & 0x3F0000 | ((v32 & 0x3F) << 24)) >> 16;
      goto LABEL_38;
    }
  }
LABEL_41:
  result = Icon_NOTE_ref(v5, a3, a5);
  v35 = v5[7];
  if ( v35 )
  {
    v36 = v5[8];
    do
    {
      sub_6091E038(v36);
      v37 = FIELD_U32(v36, 4);
      --v35;
      v36 += 936;
      result = FIELD_U32(v37, 16) + v5[11] + 1;
      v5[11] = result;
    }
    while ( v35 );
  }
  return result;
}
