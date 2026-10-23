/* sub_6047241C
 * address: 0x6047241C   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047241C(int a1, int a2, void *a3)
{
  int v5; // r8
  int result; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r5
  _DWORD *v9; // r0
  _BYTE *v10; // r7
  _BYTE *v11; // r0
  int v12; // r1
  int v13; // r3
  bool v14; // nf
  int v15; // r0
  int v16; // r11
  _BYTE *v17; // r4
  const void *v18; // r5
  signed int v19; // r7
  bool v20; // cc
  signed int v21; // r0
  int v22; // r1
  _DWORD *v23; // [sp+8h] [bp-90h]
  int v25; // [sp+10h] [bp-88h]
  int v26; // [sp+14h] [bp-84h] BYREF
  int v27; // [sp+18h] [bp-80h] BYREF
  _BYTE *v28; // [sp+1Ch] [bp-7Ch]
  int v29; // [sp+64h] [bp-34h]
  int v30; // [sp+68h] [bp-30h]
  __int16 v31; // [sp+6Ch] [bp-2Ch]
  int v32; // [sp+70h] [bp-28h] BYREF

  sub_60476920(a2, a1 + 3224);
  v5 = 0;
  v25 = a2;
  v32 = 0;
  sub_609054A8(a2, &v32);
  result = v32;
  if ( v32 >= 1 )
  {
    v7 = (_DWORD *)(a1 + 4);
    v23 = (_DWORD *)(a1 + 4);
    do
    {
      sub_60476898(&v27);
      sub_604769E0(v25, &v27);
      v8 = (_DWORD *)*v7;
      if ( *v7 )
      {
        while ( 1 )
        {
          (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
          (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
          v10 = v28;
          (*(void (__fastcall **)(_DWORD *))(v8[4] + 12))(v8 + 4);
          v11 = (_BYTE *)v8[5];
          if ( v10 == v11 )
            break;
          v12 = 0;
          while ( 1 )
          {
            v13 = (unsigned __int8)v28[v12];
            v14 = v13 - (unsigned __int8)v11[v12] < 0;
            if ( v13 != (unsigned __int8)v11[v12] )
              break;
            if ( v28[v12] )
            {
              if ( ++v12 < 0x80000 )
                continue;
            }
            if ( v8 )
              goto LABEL_27;
            goto LABEL_14;
          }
          v9 = v8 + 2;
          if ( v14 )
            v9 = v8 + 1;
          v8 = (_DWORD *)*v9;
          if ( !*v9 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_14:
        v15 = operator_new_8DE25C(0x58u, a3, 4);
        v26 = sub_60476898(v15);
        sub_60472DBC(v7, &v27, &v26);
        v16 = v26;
        v17 = *(_BYTE **)(v26 + 4);
        (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
        v18 = v28;
        if ( v17 != v28 )
        {
          (*(void (__fastcall **)(int *))(v27 + 12))(&v27);
          v19 = 0;
          while ( v28[v19] )
          {
            if ( !v28[v19 + 1] )
            {
              ++v19;
              break;
            }
            if ( !v28[v19 + 2] )
            {
              v19 += 2;
              break;
            }
            v20 = v19 + 2 < 0x80000;
            v19 += 3;
            if ( !v20 )
            {
              v19 = 0;
              break;
            }
          }
          v21 = FIELD_U32(v16, 8);
          if ( v19 >= v21 )
            v19 = v21 - 1;
          qmemcpy(v17, v18, v19);
          v17[v19] = 0;
        }
        FIELD_U16(v16, 84) = v31;
        v22 = v30;
        FIELD_U32(v16, 76) = v29;
        FIELD_U32(v16, 80) = v22;
        v7 = v23;
      }
LABEL_27:
      result = v32;
      ++v5;
    }
    while ( v5 < v32 );
  }
  return result;
}
