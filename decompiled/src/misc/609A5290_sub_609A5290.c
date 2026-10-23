/* sub_609A5290
 * address: 0x609A5290   size: 1224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_609A5290(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r5
  unsigned int v7; // r0
  unsigned int v8; // r7
  unsigned int v9; // r7
  _BYTE *v10; // r6
  void *v11; // r0
  const char *v12; // r9
  int v13; // r4
  bool v14; // cc
  int v15; // r12
  int v16; // r3
  int v17; // r5
  int v18; // r10
  int v19; // r3
  int v20; // lr
  int v21; // r0
  int v22; // r1
  char v23; // r5
  int v24; // r2
  int v25; // r2
  int v26; // r8
  int v27; // r12
  _BYTE *v28; // r11
  int v29; // r0
  int v30; // r1
  int v31; // r6
  int v32; // r10
  int v33; // r5
  int v34; // [sp+Ch] [bp-44h]
  const char *v35; // [sp+10h] [bp-40h]
  int v36; // [sp+14h] [bp-3Ch]
  int (**v37)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v38; // [sp+28h] [bp-28h]

  v6 = a1;
  if ( !FIELD_U32(a2, 96) )
    return;
  if ( a3 != 2 )
  {
    if ( a3 == 1 )
    {
      v37 = &sead__SafeStringBase__vtable;
      v38 = "<![CDATA[";
      sub_6090567C(a1, (int)&v37, 9);
      sub_609056A8(v6, FIELD_U32(a2, 96), FIELD_U32(a2, 100));
      v37 = &sead__SafeStringBase__vtable;
      v38 = "]]>";
      sub_6090567C(v6, (int)&v37, 3);
      return;
    }
    sub_609A6538(&v37, a2);
    ((void (__fastcall *)(int (***)()))v37[3])(&v37);
    v12 = v38;
    sub_609A6538(&v37, a2);
    ((void (__fastcall *)(int (***)()))v37[3])(&v37);
    v13 = 0;
    while ( 1 )
    {
      if ( !v38[v13] )
        goto LABEL_19;
      if ( !v38[v13 + 1] )
        break;
      if ( !v38[v13 + 2] )
      {
        v13 += 2;
LABEL_19:
        if ( v13 >= 1 )
        {
LABEL_20:
          if ( dword_60C60DD4 )
          {
            v15 = 0;
            v16 = 0;
            v34 = v6;
            do
            {
              v17 = 0;
              while ( *(unsigned __int8 *)off_60C60DD0[v17] != (unsigned __int8)v12[v16] )
              {
                if ( ++v17 >= (unsigned int)dword_60C60DD4 )
                  goto LABEL_27;
              }
              ++v15;
LABEL_27:
              ++v16;
            }
            while ( v16 != v13 );
            v6 = v34;
            if ( v15 )
            {
              v18 = operator_new_8DE2C8(5 * v15 + v13, a5, -4);
              v19 = 0;
              v20 = 0;
              v35 = v12;
              v36 = v18;
              while ( 1 )
              {
                v21 = (unsigned __int8)v12[v19];
                if ( v21 != 38 || (v22 = v19 + 1, v23 = 38, v12[v19 + 1] != 38) )
                {
                  if ( dword_60C60DD4 )
                  {
                    v24 = 0;
                    while ( *(unsigned __int8 *)off_60C60DD0[v24] != v21 )
                    {
                      if ( ++v24 >= (unsigned int)dword_60C60DD4 )
                        goto LABEL_36;
                    }
                    v27 = 0;
                    *(_BYTE *)(v18 + v20) = 38;
                    v28 = *(_BYTE **)&off_60C60DB8[4 * v24];
                    while ( v28[v27] )
                    {
                      if ( !v28[v27 + 1] )
                      {
                        ++v27;
                        break;
                      }
                      if ( !v28[v27 + 2] )
                      {
                        v27 += 2;
                        break;
                      }
                      v14 = v27 + 2 <= 0x7FFFF;
                      v27 += 3;
                      if ( !v14 )
                      {
                        v26 = v20 + 1;
                        goto LABEL_54;
                      }
                    }
                    v26 = v20 + 1;
                    if ( v27 >= 1 )
                    {
                      *(_BYTE *)(v18 + v26) = *v28;
                      if ( v27 != 1 )
                      {
                        v29 = 1;
                        v30 = v20 + 1;
                        if ( (v27 & 1) == 0 )
                        {
                          v30 = v20 + 2;
                          *(_BYTE *)(v36 + v20 + 2) = *(_BYTE *)(*(_DWORD *)&off_60C60DB8[4 * v24] + 1);
                          v29 = 2;
                        }
                        if ( v27 != 2 )
                        {
                          v31 = 0;
                          do
                          {
                            v32 = v36 + v30 - v31;
                            FIELD_U8(v32, 1) = *(_BYTE *)(*(_DWORD *)&off_60C60DB8[4 * v24] + v29 - v31);
                            v33 = *(_DWORD *)&off_60C60DB8[4 * v24] + v29 - v31;
                            v31 -= 2;
                            FIELD_U8(v32, 2) = FIELD_U8(v33, 1);
                          }
                          while ( v29 - v27 != v31 );
                        }
                      }
                      v26 += v27;
                      v20 += v27;
                      v12 = v35;
                      v18 = v36;
                    }
LABEL_54:
                    v25 = v20 + 2;
                    v23 = 59;
                    goto LABEL_55;
                  }
LABEL_36:
                  v23 = v12[v19];
                  v22 = v19;
                }
                v25 = v20 + 1;
                v26 = v20;
                v19 = v22;
LABEL_55:
                ++v19;
                v20 = v25;
                *(_BYTE *)(v18 + v26) = v23;
                if ( v19 >= v13 )
                {
                  *(_BYTE *)(v18 + v25) = 0;
                  sub_609056A8(v34, v18, v25);
                  v11 = (void *)v18;
LABEL_57:
                  operator_delete_8DE3FC(v11);
                  return;
                }
              }
            }
          }
        }
LABEL_59:
        sub_609056A8(v6, FIELD_U32(a2, 96), FIELD_U32(a2, 100));
        return;
      }
      v14 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v14 )
        goto LABEL_59;
    }
    if ( ++v13 >= 1 )
      goto LABEL_20;
    goto LABEL_59;
  }
  v7 = FIELD_U32(a2, 100);
  v8 = v7 / 3;
  if ( v7 % 3 )
    v8 = v7 / 3 + 1;
  v9 = 4 * v8;
  if ( v9 <= a4 )
  {
    v10 = (_BYTE *)operator_new_8DE2C8(v9, a5, -4);
    sead__Base64__encode(v10, *(unsigned __int8 **)(a2 + 96), FIELD_U32(a2, 100), 0);
    v37 = &sead__SafeStringBase__vtable;
    v38 = "<![CDATA[<!BASE64[";
    sub_6090567C(v6, (int)&v37, 18);
    sub_609056A8(v6, (int)v10, v9);
    v37 = &sead__SafeStringBase__vtable;
    v38 = "]>]]>";
    sub_6090567C(v6, (int)&v37, 5);
    if ( v10 )
    {
      v11 = v10;
      goto LABEL_57;
    }
  }
}
