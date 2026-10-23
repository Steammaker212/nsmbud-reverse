/* sub_601CD8F8
 * address: 0x601CD8F8   size: 2028   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CD8F8(int a1)
{
  int v2; // r8
  _DWORD *v3; // r11
  int v4; // r7
  _DWORD *v5; // r4
  char *v6; // r0
  int i; // r2
  int v8; // r0
  unsigned int v9; // r4
  unsigned int v10; // r5
  bool v11; // zf
  _DWORD *v12; // r6
  void *v13; // r5
  const void *v14; // r10
  signed int v15; // r4
  int v16; // r0
  bool v17; // cc
  _DWORD *v18; // r0
  int v19; // r1
  signed int v20; // r7
  int v21; // r10
  void *v22; // r5
  const void *v23; // r8
  int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r1
  float *v28; // r0
  float v29; // s6
  float v30; // s4
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  unsigned int v35; // r2
  unsigned int v36; // r1
  unsigned int v37; // r7
  unsigned int v38; // r0
  int v39; // r2
  int v40; // r0
  float v41; // r1
  float v42; // r2
  float v43; // r3
  _DWORD *v44; // r4
  float *v45; // r5
  float v46; // s0
  float v47; // s4
  float v48; // s2
  int v49; // r0
  int v50; // r2
  int v51; // r1
  float *v52; // r0
  float v53; // s4
  float v54; // s2
  int v55; // r0
  int v56; // r0
  int v58; // [sp+Ch] [bp-54h]
  int (**v59)(); // [sp+10h] [bp-50h] BYREF
  _BYTE *v60; // [sp+14h] [bp-4Ch]
  int v61; // [sp+18h] [bp-48h]
  _BYTE v62[68]; // [sp+1Ch] [bp-44h] BYREF

  v2 = sub_601916F4(dword_60C8996C);
  v3 = (_DWORD *)(a1 + 1032);
  v4 = sub_601A443C(dword_60C89E18, FIELD_U32(a1, 1032), FIELD_U32(a1, 1036));
  FIELD_U32(a1, 1120) &= ~0x800u;
  v5 = (_DWORD *)sub_60182E38(v4, FIELD_U32(a1, 1040));
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  v6 = (char *)v5[1];
  if ( v6 == "W6C1" )
  {
LABEL_9:
    v9 = 25;
    if ( FIELD_S32(v4, 28) >= 1 )
    {
      v10 = 0;
      while ( !sub_60183038(v4, v10, 0x40000000) )
      {
        if ( (signed int)++v10 >= FIELD_U32(v4, 28) )
          goto LABEL_22;
      }
      v9 = v10;
    }
LABEL_22:
    v12 = (_DWORD *)sub_60182E38(v4, v9);
    v60 = v62;
    v59 = &BufferedSafeStringBase_char_vtable_probably;
    v61 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v59);
    v59 = &off_60BD4C38;
    v13 = v60;
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v14 = (const void *)v12[1];
    v58 = v2;
    if ( v13 != v14 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
      v15 = 0;
      v16 = v12[1];
      while ( *(_BYTE *)(v16 + v15) )
      {
        if ( !*(_BYTE *)(v16 + v15 + 1) )
        {
          ++v15;
          break;
        }
        if ( !*(_BYTE *)(v16 + v15 + 2) )
        {
          v15 += 2;
          break;
        }
        v17 = v15 + 2 <= 0x7FFFF;
        v15 += 3;
        if ( !v17 )
        {
          v15 = 0;
          break;
        }
      }
      if ( v15 >= v61 )
        v15 = v61 - 1;
      qmemcpy(v13, v14, v15);
      *((_BYTE *)v13 + v15) = 0;
    }
    v59 = &off_60BD4C20;
    FIELD_U32(a1, 1040) = sub_60181AB4(v4, &v59);
    if ( v2 != 8 )
    {
      v20 = 0;
      sub_601A02B0(dword_60C89E00, (_DWORD *)(a1 + 140), FIELD_U32(a1, 1032), 0, (int)v12);
      v21 = sub_601A443C(dword_60C89E18, FIELD_U32(a1, 1032), 0);
      v60 = v62;
      v59 = &BufferedSafeStringBase_char_vtable_probably;
      v61 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v59);
      v59 = &off_60BD4C38;
      v22 = v60;
      (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
      v23 = (const void *)v12[1];
      if ( v22 != v23 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
        v24 = v12[1];
        while ( *(_BYTE *)(v24 + v20) )
        {
          if ( !*(_BYTE *)(v24 + v20 + 1) )
          {
            ++v20;
            break;
          }
          if ( !*(_BYTE *)(v24 + v20 + 2) )
          {
            v20 += 2;
            break;
          }
          v17 = v20 + 2 <= 0x7FFFF;
          v20 += 3;
          if ( !v17 )
          {
            v20 = 0;
            break;
          }
        }
        if ( v20 >= v61 )
          v20 = v61 - 1;
        qmemcpy(v22, v23, v20);
        *((_BYTE *)v22 + v20) = 0;
      }
      v59 = &off_60BD4C20;
      v25 = sub_60181AB4(v21, &v59);
      v26 = FIELD_U32(a1, 1032);
      if ( v26 >= 9 )
        v26 = 0;
      v27 = 9 * v26;
      if ( v25 >= 0x80 )
        v25 = 0;
      v28 = (float *)(dword_60CC6D78 + (v27 << 10) + 36 * v25);
      v29 = v28[3891];
      v30 = v28[3892];
      FIELD_F32(a1, 140) = v28[3890] + FIELD_F32(a1, 140);
      FIELD_F32(a1, 144) = v29 + FIELD_F32(a1, 144);
      FIELD_F32(a1, 148) = v30 + FIELD_F32(a1, 148);
      v31 = sub_601CF9C0(dword_60C8AEF0);
      FIELD_F32(a1, 144) = sub_601C7324(v31) + FIELD_F32(a1, 144);
      v32 = sub_601FEE28(dword_60C8C188);
      sub_6016BB6C(v32, 2, (_DWORD *)(a1 + 140), 0, 10.0, 0, 0);
      if ( (unsigned int)(v58 - 9) > 1 )
      {
        sub_601C5B4C(a1, 10);
        v33 = -1;
      }
      else
      {
        sub_601C518C((float *)a1, v58);
        v33 = 10;
      }
      FIELD_U32(a1, 1244) = v33;
      v18 = (_DWORD *)a1;
      v19 = v58;
      goto LABEL_63;
    }
    sub_601C518C((float *)a1, 8);
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 116))(a1, 8, a1 + 1032);
    sub_601E4C88(dword_60C8B13C, 81, a1 + 80, 1);
  }
  else
  {
    for ( i = 0; i < 524289; ++i )
    {
      if ( v6[i] != aW6c1[i] )
        break;
      if ( !v6[i] )
        goto LABEL_9;
    }
    if ( sub_601C43E0(a1, v2) == 1 )
    {
      if ( (unsigned int)(v2 - 9) > 1 )
      {
        sub_601C5B4C(a1, 10);
        v8 = -1;
      }
      else
      {
        sub_601C518C((float *)a1, v2);
        v8 = 10;
      }
      FIELD_U32(a1, 1244) = v8;
      v18 = (_DWORD *)a1;
      v19 = v2;
LABEL_63:
      sub_601C4288(v18, v19, (_DWORD *)(a1 + 1032));
      FIELD_U32(a1, 1120) |= 0x800u;
      goto LABEL_81;
    }
    v11 = v2 == 11;
    if ( v2 != 11 )
      v11 = v2 == 8;
    if ( v11 )
    {
      sub_601C518C((float *)a1, v2);
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 116))(a1, v2, a1 + 1032);
      if ( v2 == 11 )
      {
        sub_601C5B4C(a1, 17);
      }
      else if ( v2 == 8 )
      {
        sub_601E4C88(dword_60C8B13C, 81, a1 + 80, 1);
      }
    }
    else
    {
      (*(void (__fastcall **)(int, int, void *))(*(_DWORD *)a1 + 116))(a1, v2, &unk_60AFC2A4);
      if ( v2 == 7 )
      {
        if ( *v3 == 6 )
        {
          FIELD_U32(a1, 1120) &= ~0x200u;
          sub_601D1C5C(a1, 0);
        }
        else if ( *v3 == 4 )
        {
          sub_601D12C0(a1, 0);
        }
      }
    }
    sub_60173634((__n64 *)dword_60C88BC8, (unsigned int *)(a1 + 1032));
    v34 = sub_60182E50(v4, FIELD_U32(a1, 1040));
    v35 = FIELD_U32(a1, 1032);
    v36 = FIELD_U32(a1, 1036);
    if ( v34 )
    {
      v37 = 0;
      v38 = v34 - 1;
      if ( v35 >= 9 )
        v35 = 0;
      v39 = dword_60CC6D78 + 1488 * v35;
      if ( v36 >= 2 )
        v36 = 0;
      if ( v38 < 0x1F )
        v37 = v38;
      v40 = v39 + 744 * v36 + 24 * v37;
      v41 = FIELD_F32(v40, 2148);
      v42 = FIELD_F32(v40, 2152);
      v43 = FIELD_F32(v40, 2156);
      FIELD_F32(a1, 140) = v41;
      v44 = (_DWORD *)(a1 + 140);
      FIELD_F32(a1, 144) = v42;
      FIELD_F32(a1, 148) = v43;
      v45 = (float *)(a1 + 148);
      v46 = FIELD_F32(v40, 2168);
      v47 = v42 + FIELD_F32(v40, 2164);
      FIELD_F32(a1, 140) = v41 + FIELD_F32(v40, 2160);
      v48 = v43;
      FIELD_F32(a1, 144) = v47;
    }
    else
    {
      v49 = 0;
      if ( v35 >= 9 )
        v35 = 0;
      v50 = 9 * v35;
      if ( v36 >= 2 )
        v36 = 0;
      v51 = dword_60CC6D78 + (v50 << 10) + 4608 * v36;
      if ( FIELD_U32(a1, 1040) < 0x80u )
        v49 = FIELD_U32(a1, 1040);
      v52 = (float *)(v51 + 36 * v49);
      v53 = v52[3892] + FIELD_F32(a1, 988);
      v54 = v52[3891] + FIELD_F32(a1, 984);
      FIELD_F32(a1, 140) = v52[3890] + FIELD_F32(a1, 980);
      FIELD_F32(a1, 144) = v54;
      FIELD_F32(a1, 148) = v53;
      v55 = sub_601CF9C0(dword_60C8AEF0);
      v44 = (_DWORD *)(a1 + 140);
      v45 = (float *)(a1 + 144);
      v46 = sub_601C7324(v55);
      v48 = FIELD_F32(a1, 144);
    }
    *v45 = v48 + v46;
    v56 = sub_601FEE28(dword_60C8C188);
    sub_6016BB6C(v56, 2, v44, 0, 40.0, 0, 0);
  }
LABEL_81:
  FIELD_U32(a1, 1100) = 2;
  return 2;
}
