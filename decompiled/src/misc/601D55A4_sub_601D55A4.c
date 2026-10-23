/* sub_601D55A4
 * address: 0x601D55A4   size: 1572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D55A4(int a1, int a2, int a3, _DWORD *a4)
{
  int v8; // r0
  int v9; // r7
  bool v10; // zf
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int v17; // r0
  int v18; // r1
  int result; // r0
  _DWORD *v20; // r11
  _DWORD *v21; // r0
  int v22; // r5
  unsigned int v23; // r0
  _DWORD *v24; // r6
  int v25; // r8
  int v26; // r8
  int v27; // r1
  int i; // r3
  unsigned int v29; // r5
  float v30; // s16
  unsigned int v31; // r3
  unsigned int v32; // r1
  int v33; // r0
  int v34; // r2
  int v35; // r1
  bool v36; // zf
  int v37; // r3
  int v38; // r6
  int v39; // r1
  int v40; // r0
  int v41; // r5
  int v42; // r1
  int v43; // r0
  int *v44; // r2
  int v45; // r3
  int v46; // [sp+0h] [bp-40h]
  int v47; // [sp+4h] [bp-3Ch] BYREF
  int v48; // [sp+8h] [bp-38h]
  int v49; // [sp+Ch] [bp-34h]

  v9 = a1 + 1032;
  v8 = FIELD_U32(a1, 1032);
  v10 = v8 == 5;
  if ( v8 != 5 )
    v10 = v8 == 3;
  if ( v10 )
  {
    if ( sub_601DADDC(v9) == 1 && sub_601DADA4(a1 + 1044) == 1 )
    {
      sub_601DAE88(a1 + 1044);
      v11 = (_DWORD *)sub_601E0040(v9);
      FIELD_U32(a1, 944) = *v11;
      FIELD_U32(a1, 948) = v11[1];
      FIELD_U32(a1, 952) = v11[2];
      v12 = (_DWORD *)sub_601E0040(a1 + 1044);
      FIELD_U32(a1, 956) = *v12;
      FIELD_U32(a1, 960) = v12[1];
      v13 = 3;
      FIELD_U32(a1, 964) = v12[2];
      FIELD_U32(a1, 1112) = 7;
      if ( FIELD_U32(a1, 1032) == 3 )
        v13 = 5;
      FIELD_U32(a1, 1092) = v13;
      sub_6019EC34((_DWORD *)(a1 + 1056), (_DWORD *)(a1 + 1044));
      sub_601D7EF4(a1, a1 + 80, 0, 0);
      v14 = FIELD_U32(a1, 1120) | 0x10000;
    }
    else
    {
      if ( sub_601DAE14(v9) != 1 || sub_601DADDC(a1 + 1044) != 1 )
        goto LABEL_16;
      v15 = (_DWORD *)sub_601E0040(v9);
      FIELD_U32(a1, 944) = *v15;
      FIELD_U32(a1, 948) = v15[1];
      FIELD_U32(a1, 952) = v15[2];
      v16 = (_DWORD *)sub_601E0040(a1 + 1044);
      FIELD_U32(a1, 956) = *v16;
      FIELD_U32(a1, 960) = v16[1];
      FIELD_U32(a1, 964) = v16[2];
      v17 = sub_608332B0(a1 + 944, a1 + 956);
      FIELD_U32(a1, 180) = v17;
      FIELD_U32(a1, 1000) = v17;
      v18 = 2;
      FIELD_U32(a1, 1112) = 7;
      if ( FIELD_U32(a1, 1032) == 3 )
        v18 = 4;
      FIELD_U32(a1, 1092) = v18;
      sub_6019EC34((_DWORD *)(a1 + 1056), (_DWORD *)(a1 + 1044));
      sub_601D7EF4(a1, a1 + 80, 0, 0);
      v14 = FIELD_U32(a1, 1120);
    }
    result = v14 | 0x1000000;
    FIELD_U32(a1, 1120) = result;
    return result;
  }
LABEL_16:
  FIELD_U32(a1, 1120) &= 0xFEFFFFBF;
  FIELD_U32(a1, 1100) = FIELD_U32(a1, 1092);
  v20 = (_DWORD *)sub_601DFFE4(v9);
  FIELD_U32(a1, 944) = v20[18];
  FIELD_U32(a1, 948) = v20[19];
  FIELD_U32(a1, 952) = v20[20];
  v21 = a4;
  if ( !a4 )
    v21 = (_DWORD *)(sub_601DFFE4(a1 + 1044) + 72);
  FIELD_U32(a1, 956) = *v21;
  FIELD_U32(a1, 960) = v21[1];
  FIELD_U32(a1, 964) = v21[2];
  sub_601B4788(a1, FIELD_U32(a1, 1092));
  sub_601D8094(a1);
  v46 = a3;
  if ( sub_601D9D84(a1 + 1080) == 1 )
  {
    if ( FIELD_U32(a1, 1080) != FIELD_U32(a1, 1068)
      || FIELD_U32(a1, 1084) != FIELD_U32(a1, 1072)
      || FIELD_U32(a1, 1088) != FIELD_U32(a1, 1076) )
    {
      v22 = a2;
      v23 = FIELD_U32(a1, 1120) & 0xFFFEFFFF;
      goto LABEL_27;
    }
    v22 = a2;
LABEL_25:
    v23 = FIELD_U32(a1, 1120) | 0x10000;
LABEL_27:
    FIELD_U32(a1, 1120) = v23;
    goto LABEL_28;
  }
  v22 = a2;
  v47 = 0;
  sub_601E14F8(v9, FIELD_U32(a1, 1092), &v47);
  if ( v47 && sub_601D9D54() == 1 )
    goto LABEL_25;
LABEL_28:
  v24 = (_DWORD *)sub_601E0010(a1 + 1056);
  v47 = (int)&sead__SafeStringBase__vtable;
  v48 = (int)"W6C1";
  (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
  (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
  v25 = v24[1];
  (*(void (__fastcall **)(int *))(v47 + 12))(&v47);
  v10 = v25 == v48;
  v26 = v22;
  if ( v10 )
  {
LABEL_36:
    FIELD_U32(a1, 1120) |= 0x4000u;
  }
  else
  {
    v27 = v24[1];
    for ( i = 1; *(unsigned __int8 *)(v27 + i - 1) == *(unsigned __int8 *)(v48 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v27 + i - 1) )
        goto LABEL_36;
      if ( i > 0x80000 || *(unsigned __int8 *)(v27 + i) != *(unsigned __int8 *)(v48 + i) )
        break;
      if ( !*(_BYTE *)(v27 + i) )
        goto LABEL_36;
    }
  }
  if ( !v22 && sub_601D86E4(a1, v9, 0) == 1 )
  {
    v48 = -1;
    v49 = -1;
    v47 = 1;
    if ( sub_602200B4(dword_60C8D4EC, &v47, a1 + 1056) == 1 )
    {
      FIELD_U8(dword_60C8D4EC, 56) = 1;
      sub_602207C8();
    }
  }
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 120) = 0;
  v29 = FIELD_U32(a1, 1092);
  v30 = *((float *)sub_601C6BF0(a1) + 2);
  if ( v29 <= 1 )
    v30 = v30 * sub_601C6030();
  FIELD_F32(a1, 200) = v30;
  sub_601691B0(a1);
  if ( v46 == -1 )
  {
    v32 = FIELD_U32(a1, 1092);
    v33 = FIELD_U32(a1, 1112);
    v34 = 3;
    if ( v32 >= 6 )
      v32 = 0;
    v35 = v20[v32 + 12];
    if ( (unsigned int)(v35 - 3) <= 0x1E )
    {
      v34 = v35;
      if ( ((1 << (v35 - 3)) & 0x7FBE009F) == 0 )
      {
        if ( v35 == 11 )
        {
          v34 = 3;
          if ( FIELD_F32(a1, 948) > FIELD_F32(a1, 960) )
            v34 = 11;
        }
        else
        {
          v34 = 3;
          if ( v35 == 12 )
          {
            v34 = 22;
            if ( FIELD_F32(a1, 948) > FIELD_F32(a1, 960) )
              v34 = 12;
          }
        }
      }
    }
    FIELD_U32(a1, 1112) = v34;
    v36 = v33 == 7;
    v37 = FIELD_U32(a1, 1120);
    if ( v33 != 7 )
      v36 = v35 == 7;
    if ( v36 || v34 != v33 )
      v31 = v37 | 1;
    else
      v31 = v37 & 0xFFFFFFFE;
  }
  else
  {
    FIELD_U32(a1, 1112) = v46;
    v31 = FIELD_U32(a1, 1120) | 1;
  }
  FIELD_U32(a1, 1120) = v31;
  v38 = sub_601D9E28(v9);
  v39 = sub_601DA074(v9);
  v40 = 1;
  if ( !v39 )
    v40 = sub_601DA074(a1 + 1044);
  v41 = 0;
  if ( v26 == 1 )
    v41 = v38 | (FIELD_U32(a1, 1112) != 7);
  if ( a4 )
  {
    result = v40 | v38 & (v41 ^ 1);
    if ( result != 1 )
      return result;
    v42 = a1 + 80;
    v43 = a1;
    v44 = a4;
    v45 = 0;
  }
  else
  {
    if ( sub_601D9E28(a1 + 1044) || sub_601DA074(a1 + 1044) == 1 )
    {
      sub_601C4960(a1, (float *)&v47, a1 + 1044, FIELD_U32(a1, 1092));
      v42 = a1 + 80;
      v43 = a1;
      v44 = &v47;
    }
    else
    {
      v42 = a1 + 80;
      v43 = a1;
      v44 = 0;
    }
    v45 = v41;
  }
  return sub_601D7EF4(v43, v42, v44, v45);
}
