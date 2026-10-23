/* sub_604FE050
 * address: 0x604FE050   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604FE050(int a1, int a2)
{
  unsigned int result; // r0
  int v4; // r4
  int *v5; // r5
  int v6; // r0
  int v7; // r12
  int v8; // r4
  int v9; // r8
  int *v10; // r6
  int v11; // r7
  int v12; // r1
  unsigned int v13; // r2
  int v14; // r2
  int v15; // r3
  int v16; // r9
  unsigned int v17; // r10
  unsigned int *v18; // r11
  int v19; // r5
  unsigned int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  void (*v24)(void); // r1
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  _BYTE *v30; // r0
  int v31; // r0
  int v32; // [sp+4h] [bp-3Ch]
  int v33; // [sp+8h] [bp-38h]
  int v34; // [sp+10h] [bp-30h]

  result = dword_60C99E1C;
  if ( dword_60C99E1C )
  {
    v34 = dword_60C99E1C;
    v4 = 0;
    v5 = (int *)(a1 + 35572);
    do
    {
      v6 = sub_608DE61C(a1 + 35560, dword_60B036B0[v4++]);
      *(_DWORD *)(v6 - *v5 + 192) = 0;
    }
    while ( v4 != 18 );
    v7 = v34;
    v8 = 9 * a2;
    v9 = 0;
    v10 = (int *)(a1 + 35564);
    v33 = a1 + 35508;
    v32 = v8;
    v11 = a1 + 35560 - *v5;
    while ( 1 )
    {
      result = v9 + v8;
      v12 = 0;
      if ( (unsigned int)(v9 + v8) <= 0x35 )
      {
        v13 = *(_DWORD *)(v7 + 4 * result + 16);
        v12 = 0;
        if ( v13 <= 0x35 )
          v12 = *(_DWORD *)(v7 + 4424 * v13 + 236);
      }
      v14 = *v5;
      v15 = *v10;
      v16 = *v10 - *v5;
      if ( v16 == v11 )
        goto LABEL_43;
      v18 = &dword_60B036B0[v9];
      v17 = *v18;
      v19 = *v18 + 1;
      while ( --v19 > 0 )
      {
        v15 = FIELD_U32(v15, 4);
        v16 = v15 - v14;
        if ( v15 - v14 == v11 )
          goto LABEL_43;
      }
      if ( v12 != 1 )
      {
        v25 = FIELD_U32(v16, 144);
        if ( v25 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 108))(v25);
        v26 = FIELD_U32(v16, 148);
        if ( v26 )
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v26 + 16))(v26, 0);
        v27 = a1;
        if ( v17 < 0x100 )
          v27 = a1 + v17;
        FIELD_U8(v27, 36008) = 1;
        goto LABEL_38;
      }
      if ( result > 0x35 )
        break;
      v20 = *(_DWORD *)(v7 + 4 * result + 16);
      if ( v20 >= 0x36 )
        break;
      v21 = *(unsigned __int8 *)(v7 + 4424 * v20 + 244);
      v22 = FIELD_U32(v16, 144);
      if ( !v21 )
        goto LABEL_29;
      if ( v22 )
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v22 + 16))(v22, 0);
      v23 = FIELD_U32(v16, 148);
      if ( !v23 )
        goto LABEL_34;
      v24 = *(void (**)(void))(*(_DWORD *)v23 + 108);
LABEL_33:
      v24();
LABEL_34:
      v29 = a1;
      if ( v17 < 0x100 )
        v29 = a1 + v17;
      v30 = (_BYTE *)(v29 + 36008);
      if ( v9 < 9 )
      {
        *v30 = 0;
        sub_60502C84(v33, v18, 1);
        goto LABEL_40;
      }
      *v30 = 1;
LABEL_38:
      sub_60502B04(v33, v18, 1);
LABEL_40:
      v31 = FIELD_U32(v16, 128);
      if ( v31 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 104))(v31);
      result = 0;
      FIELD_U8(v16, 160) = 0;
      v7 = v34;
      v10 = (int *)(a1 + 35564);
      v8 = v32;
LABEL_43:
      v5 = (int *)(a1 + 35572);
      if ( ++v9 == 18 )
        return result;
    }
    v22 = FIELD_U32(v16, 144);
LABEL_29:
    if ( v22 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v22 + 16))(v22, 0);
    v28 = FIELD_U32(v16, 148);
    if ( !v28 )
      goto LABEL_34;
    v24 = *(void (**)(void))(*(_DWORD *)v28 + 104);
    goto LABEL_33;
  }
  return result;
}
