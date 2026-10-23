/* sub_608E1518
 * address: 0x608E1518   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E1518(int a1)
{
  unsigned __int8 *v1; // r3
  int v2; // r2
  int v3; // r4
  int v4; // r0
  char v5; // r12
  int v6; // r5
  int v7; // r8
  int v8; // r7
  int v9; // r9
  int v10; // r6
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  unsigned int v14; // r0
  int v15; // r2
  bool v16; // zf
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r7
  int v21; // r4
  int v22; // r9
  _DWORD *v23; // r7
  int v24; // r3
  unsigned int v25; // r2
  int v26; // r1
  int v27; // r7
  int v28; // r0
  int v29; // r11
  float v30; // s0
  float v31; // s2
  int v32; // lr
  int v33; // r5
  float v34; // s4
  int v35; // r3
  float v36; // s4
  float v37; // s4
  float v38; // r10
  float v39; // r3
  float v40; // s1
  int v41; // r9
  float v42; // r4
  float v43; // s6
  float v44; // s14
  float v45; // s12
  float v46; // s10
  int v47; // s6
  int v48; // r4
  int v49; // r3
  int v50; // r4
  int v51; // r3
  int v52; // r9
  float v53; // r3
  char v56; // [sp+8h] [bp-48h]
  int v57; // [sp+Ch] [bp-44h]
  int v58; // [sp+10h] [bp-40h]
  int v59; // [sp+14h] [bp-3Ch]
  int v60; // [sp+18h] [bp-38h]
  int v61; // [sp+18h] [bp-38h]
  unsigned __int8 *v62; // [sp+1Ch] [bp-34h]
  int v63; // [sp+1Ch] [bp-34h]
  __guard *v64; // [sp+20h] [bp-30h]
  int v65; // [sp+24h] [bp-2Ch]
  int v66; // [sp+28h] [bp-28h]

  v1 = *(unsigned __int8 **)(a1 + 16);
  v2 = 0;
  v3 = v1[353];
  if ( v3 != FIELD_U8(a1, 1191) )
  {
    v2 = 1;
    FIELD_U8(a1, 1191) = v3;
  }
  v60 = v2;
  v62 = v1;
  v4 = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v1 + 20))(v1);
  if ( v3 != 5 && v4 == 1 )
  {
    v6 = dword_60CCF448;
    v7 = FIELD_U32(dword_60CCF448, 200);
    v8 = dword_60CCF448 + 196;
    if ( v7 != dword_60CCF448 + 196 )
    {
      v9 = FIELD_U32(dword_60CCF448, 208);
      v10 = v7 - v9;
      while ( 1 )
      {
        if ( ((unsigned int)&dword_60C9CFA8 & ~(1619924436 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CFA8) )
        {
          dword_60C9CFA4 = (int)&off_60BFB1D8;
          _cxa_guard_release(&dword_60C9CFA8);
        }
        v11 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C9CFA4);
        v12 = v10 == 0;
        if ( v10 )
          v12 = (v11 ^ 1) == 1;
        if ( !v12 )
          break;
        v7 = FIELD_U32(v7, 4);
        v10 = v7 - v9;
        if ( v7 - v9 == v8 - FIELD_U32(v6, 208) )
          return 0;
      }
      v13 = 0;
      v14 = *((_DWORD *)v62 + 87);
      if ( v14 >= 9 )
        v14 = 0;
      v15 = *(_DWORD *)(v10 + 3736 * v14 + 704);
      if ( v15 )
      {
        v16 = v15 == 2;
        if ( v15 == 2 )
          v13 = FIELD_U8(a1, 1188);
        v17 = 0;
        if ( v16 )
          v13 ^= 1u;
        v66 = 0;
        if ( v62[353] == 4 )
        {
          v18 = FIELD_U32(v10, 24);
          if ( v18 != 1 )
            v18 = 0;
          v66 = v18;
        }
        v19 = 3 * v13;
        v20 = v10 + 3736 * v14 + (v19 << 9);
        v21 = FIELD_U32(v20, 728);
        v22 = FIELD_U32(v20, 732);
        v23 = (_DWORD *)(a1 + 1176);
        if ( !v60 )
        {
          v24 = v21 - *v23;
          v17 = v24;
          if ( v24 >= 16 )
            v17 = 16;
          if ( v24 <= 0 )
            v17 = 0;
        }
        FIELD_U32(a1, 1184) = v17;
        *v23 = v21;
        FIELD_U32(a1, 1180) = v22;
        v25 = 0;
        v26 = v10 + 3736 * v14 + (v19 << 9);
        v27 = v26 + 752;
        v65 = v26 + 796;
        v57 = v26 + 764;
        v64 = (__guard *)(v26 + 760);
        v56 = 0;
        v63 = v26 + 748;
        v61 = v26 + 792;
        v59 = v26 + 800;
        v58 = v26 + 780;
        v28 = a1 + 44;
        do
        {
          v29 = v26 + v25;
          v30 = *(float *)(v26 + v25 + 740);
          v31 = *(float *)(v26 + v25 + 736);
          v32 = *(_DWORD *)(v26 + v25 + 744);
          if ( v66 == 1 )
          {
            v30 = -v30;
            *(float *)(v28 - 24) = v31;
            *(_DWORD *)(v28 - 20) = v32;
            *(float *)(v28 - 16) = v30;
            v33 = FIELD_U32(v29, 756);
            v34 = *(float *)(v27 + v25);
            *(_DWORD *)(v28 - 12) = *(_DWORD *)(v63 + v25);
            *(_DWORD *)(v28 - 8) = v33;
            *(float *)(v28 - 4) = -v34;
            v35 = FIELD_U32(v29, 768);
            v36 = *(float *)(v57 + v25);
            *(_DWORD *)v28 = v64[v25 / 4];
            FIELD_U32(v28, 4) = v35;
            FIELD_F32(v28, 8) = -v36;
            v37 = FIELD_F32(v29, 776);
            v38 = FIELD_F32(v29, 772);
            v39 = *(float *)(v58 + v25);
            FIELD_F32(v28, 12) = v38;
            FIELD_F32(v28, 16) = v39;
            FIELD_F32(v28, 20) = -v37;
            v40 = v39;
            v41 = FIELD_U32(v29, 804);
            v42 = *(float *)(v65 + v25);
            v43 = *(float *)(v59 + v25);
            FIELD_F32(v28, 24) = v42;
            FIELD_U32(v28, 28) = v41;
            v44 = v42;
            v45 = -v43;
            FIELD_F32(v28, 32) = -v43;
            FIELD_F32(v28, 36) = -FIELD_F32(v29, 784);
            v46 = -*(float *)(v61 + v25);
            FIELD_F32(v28, 40) = v46;
            v47 = FIELD_U32(v29, 788);
          }
          else
          {
            v31 = -v31;
            *(float *)(v28 - 24) = v31;
            *(_DWORD *)(v28 - 20) = v32;
            *(float *)(v28 - 16) = v30;
            v48 = FIELD_U32(v29, 756);
            v49 = *(_DWORD *)(v27 + v25);
            *(float *)(v28 - 12) = -*(float *)(v63 + v25);
            *(_DWORD *)(v28 - 8) = v48;
            *(_DWORD *)(v28 - 4) = v49;
            v50 = FIELD_U32(v29, 768);
            v51 = *(_DWORD *)(v57 + v25);
            *(float *)v28 = -*(float *)&v64[v25 / 4];
            FIELD_U32(v28, 4) = v50;
            FIELD_U32(v28, 8) = v51;
            v38 = FIELD_F32(v29, 772);
            FIELD_F32(v28, 12) = v38;
            v40 = -*(float *)(v58 + v25);
            FIELD_F32(v28, 16) = v40;
            FIELD_F32(v28, 20) = -FIELD_F32(v29, 776);
            v52 = FIELD_U32(v29, 804);
            v53 = *(float *)(v59 + v25);
            v44 = -*(float *)(v65 + v25);
            FIELD_F32(v28, 24) = v44;
            FIELD_U32(v28, 28) = v52;
            FIELD_F32(v28, 32) = v53;
            v45 = v53;
            v47 = FIELD_U32(v29, 788);
            v46 = *(float *)(v61 + v25);
            FIELD_F32(v28, 36) = -FIELD_F32(v29, 784);
            FIELD_F32(v28, 40) = v46;
          }
          FIELD_U32(v28, 44) = v47;
          if ( v31 == 0.0 && v30 == 0.0 || v38 == 1.0 && v40 == 0.0 && v44 == 0.0 && v45 == 0.0 && v46 == 0.0 )
            v56 = 1;
          v25 += 96;
          v28 += 72;
        }
        while ( v25 != 1536 );
        FIELD_U8(a1, 1189) = v56 & 1;
        if ( (v56 & 1) != 0 && FIELD_U8(a1, 1190) )
          FIELD_U32(a1, 1184) = 0;
      }
    }
  }
  return 0;
}
