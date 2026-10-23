/* sub_60801818
 * address: 0x60801818   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60801818(int a1, int a2, int a3)
{
  float *v3; // r6
  int v4; // r7
  int v7; // r2
  unsigned __int8 *v9; // r5
  float v10; // s26
  float v11; // s20
  float v12; // s24
  float v13; // s22
  int v14; // r10
  int v15; // r11
  int v16; // r8
  _BYTE *v17; // r7
  int v18; // r11
  int v19; // r8
  int v20; // r10
  int v21; // r9
  int v22; // r0
  float v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r6
  int v27; // r0
  float v28; // s18
  float v29; // s16
  float v30; // s0
  unsigned int v31; // r0
  char v32; // r2
  bool v33; // r2
  int v34; // r5
  bool v35; // zf
  float v36; // s0
  float v37; // s24
  float v38; // s18
  float v39; // s16
  int v40; // r0
  float v41; // s0
  int v42; // [sp+4h] [bp-84h]
  int v43; // [sp+14h] [bp-74h]
  int v44; // [sp+18h] [bp-70h]
  float v45; // [sp+1Ch] [bp-6Ch] BYREF
  float v46; // [sp+20h] [bp-68h] BYREF
  float v47; // [sp+24h] [bp-64h]
  int v48; // [sp+28h] [bp-60h]
  int v49; // [sp+2Ch] [bp-5Ch]

  v3 = *(float **)a2;
  v4 = FIELD_U32(a2, 4);
  v7 = FIELD_U32(v4, 52);
  if ( FIELD_U32(v7, 16) )
    return sub_60800B08((float *)a1, *(float **)a2, v7);
  v9 = *(unsigned __int8 **)(a2 + 16);
  v10 = FIELD_F32(a1, 20);
  v11 = FIELD_F32(a1, 24);
  v12 = FIELD_F32(a1, 28);
  v13 = FIELD_F32(a1, 32);
  v14 = FIELD_U32(a2, 8);
  v15 = FIELD_U32(a2, 12);
  if ( v9[1] )
  {
    v16 = *v9;
    if ( *v9 )
      v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  v44 = sub_60802808(FIELD_U32(a2, 8), FIELD_U32(a2, 12));
  if ( AreaTask_intance && FIELD_U32(AreaTask_intance, 1828) == 1 )
  {
    sub_608009EC(a1, v3);
  }
  else
  {
    v43 = v4;
    v17 = (_BYTE *)v15;
    v18 = v16;
    v19 = v14;
    v20 = a3;
    v21 = FIELD_U32(a1, 40);
    v42 = sub_607FA4E0(v17);
    v22 = v21;
    a3 = v20;
    v14 = v19;
    v16 = v18;
    v15 = (int)v17;
    v4 = v43;
    ((void (__fastcall *)(int, int, int, unsigned __int8 *, int, int))loc_608044F0)(v22, v43, v14, v9, v44, v42);
    sub_608009D4(a1, v43);
  }
  v23 = v3[1];
  v24 = *((_DWORD *)v3 + 2);
  v25 = *((_DWORD *)v3 + 3);
  v46 = *v3;
  v47 = v23;
  v48 = v24;
  v49 = v25;
  nullsub_60(v4, &v46, FIELD_F32(a1, 16));
  sub_608009AC((float *)a1);
  v26 = *(_DWORD *)sub_60804418(v4);
  v27 = FIELD_U32(a1, 36);
  v28 = FIELD_F32(v27, 16);
  v29 = FIELD_F32(v27, 24);
  ((void (__fastcall *)(int))loc_607FF648)(v27);
  if ( !FIELD_U8(v15, 30) )
  {
    v34 = 1;
LABEL_16:
    v35 = v26 == 4;
    if ( v26 != 4 )
      v35 = v26 == 1;
    if ( v35 )
    {
      v36 = sub_60802488(v30);
      v37 = FIELD_F32(a1, 52);
      v38 = (float)(v36 + (float)((float)(v37 - v36) * sub_608039B8(v4, v36))) + (float)(FIELD_F32(a1, 20) * -0.5);
    }
    else
    {
      v45 = 0.0;
      v38 = ((float (__fastcall *)(_DWORD, float *, float *, bool, float, float, float, float, float, float, float, int, int))loc_607FEDDC)(
              FIELD_U32(a1, 44),
              &v45,
              &v46,
              FIELD_U32(v4, 48) == 24,
              (float)(v12 + (float)(v12 + v10)) * 0.5,
              *(float *)(FIELD_U32(a1, 40) + 24),
              *(float *)(FIELD_U32(a1, 40) + 28),
              *(float *)(FIELD_U32(a1, 40) + 32),
              *(float *)(FIELD_U32(a1, 40) + 40),
              v28,
              *(float *)(FIELD_U32(a1, 36) + 16),
              v14,
              v16);
      sub_607FEAE0((float *)(FIELD_U32(a1, 36) + 16), v45);
    }
    FIELD_F32(a1, 28) = v38;
    if ( !v34 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v31 = FIELD_U8(v15, 20);
  v32 = FIELD_U8(v15, 20);
  v33 = v32 != 0;
  if ( v31 >= 2 )
  {
    v34 = v31 != 2 && v33;
    goto LABEL_16;
  }
  if ( FIELD_U8(v15, 20) )
  {
LABEL_24:
    v45 = 0.0;
    v39 = ((float (__fastcall *)(_DWORD, float *, float *, int, float, float, float, float, float, float, float, float, int, int, bool, int))loc_60802B50)(
            FIELD_U32(a1, 48),
            &v45,
            &v46,
            v4,
            (float)((float)(v13 - v11) + (float)(v11 + (float)(v13 - v11))) * 0.5,
            *(float *)(FIELD_U32(a1, 40) + 24),
            *(float *)(FIELD_U32(a1, 40) + 28),
            *(float *)(FIELD_U32(a1, 40) + 32),
            *(float *)(FIELD_U32(a1, 40) + 40),
            v29,
            *(float *)(FIELD_U32(a1, 36) + 24),
            v47,
            v14,
            v44,
            v26 == 6,
            v16);
    sub_607FEAE0((float *)(FIELD_U32(a1, 36) + 24), v45);
    FIELD_F32(a1, 32) = v39;
  }
LABEL_25:
  if ( FIELD_U8(v15, 30) && !a3 )
  {
    v40 = FIELD_U32(a1, 40);
    if ( v40 )
      v41 = FIELD_F32(v40, 28) / FIELD_F32(v40, 36);
    else
      v41 = 1.0;
    sub_60800A94((float *)a1, v15, v41);
  }
  sub_60800A24(a1, &v46);
  return sub_60800A5C(a1, (int)&v46);
}
