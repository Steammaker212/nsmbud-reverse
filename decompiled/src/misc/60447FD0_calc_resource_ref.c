/* calc_resource_ref
 * address: 0x60447FD0   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall calc_resource_ref(int a1, _DWORD *a2, void *a3)
{
  int v3; // r4
  _DWORD *v4; // r7
  int v5; // r8
  unsigned __int8 v6; // r0
  int v7; // r9
  unsigned __int8 *v8; // r5
  _DWORD *v9; // r4
  int v10; // r7
  _DWORD **v11; // r11
  _DWORD **v12; // r6
  int v13; // r10
  bool v14; // zf
  int v15; // r0
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r5
  unsigned int v22; // r0
  int result; // r0
  int i; // r1
  _DWORD *v26; // [sp+14h] [bp-1C4h]
  int v28; // [sp+1Ch] [bp-1BCh]
  _BYTE v29[428]; // [sp+20h] [bp-1B8h] BYREF
  int v30; // [sp+1CCh] [bp-Ch] BYREF
  _DWORD v31[147]; // [sp+1D8h] [bp+0h] BYREF

  v3 = a1;
  v4 = v31;
  v5 = 0;
  v28 = a1 + 16;
  v26 = 0;
  do
  {
    v7 = v3 + 28 * v5;
    FIELD_U8(v7, 10) = v5;
    v8 = (unsigned __int8 *)(v7 + 10);
    if ( v5 )
    {
      v6 = v5;
      if ( (FIELD_U8(v3, 2480) & 1) == 0 )
      {
        v9 = v4;
        v10 = v28;
        v11 = (_DWORD **)(v7 + 20);
        v12 = (_DWORD **)(v7 + 16);
        v13 = 0;
        while ( 1 )
        {
          v14 = *v12 == 0;
          if ( *v12 )
          {
            a2 = *(_DWORD **)v10;
            v14 = *(_DWORD *)v10 == 0;
          }
          if ( !v14 && sub_60420910(*v12, a2) )
          {
            a2 = *v11;
            if ( *v11 == *(_DWORD **)(v10 + 4) )
              break;
          }
          ++v13;
          v10 += 28;
          if ( v5 == v13 )
          {
            v6 = *v8;
            goto LABEL_14;
          }
        }
        v6 = *(_BYTE *)(v10 - 6);
        *v8 = v6;
        a2 = (_DWORD *)(v7 + 32);
        if ( !FIELD_U32(v7, 32) )
          *a2 = FIELD_U32(v10, 16);
LABEL_14:
        v4 = v9;
        v3 = a1;
      }
    }
    else
    {
      v6 = 0;
    }
    if ( v6 == v5 )
    {
      if ( !FIELD_U32(v7, 32) )
      {
        v15 = operator_new_8DE25C(0x248u, a3, 4);
        v16 = untitled_ref(v15);
        FIELD_U32(v7, 32) = v16;
        a2 = (_DWORD *)(*(_DWORD *)(FIELD_U32(v3, 4) + 16) + 2);
        FIELD_U32(v16, 580) = a2;
      }
      if ( (FIELD_U8(v3, 2480) & 1) == 0 && FIELD_U32(v7, 16) )
      {
        v17 = dword_60C9CCB8;
        untitled_ref(v4);
        v31[145] = "calc resource";
        sub_60440C2C(&v30, v17);
        v18 = sub_60440CA4();
        sub_60918E08(v4, &v30, v18);
        v19 = sub_60913508(v29);
        sub_60913564(v19, v4);
        if ( sub_60918EB8(v4) == 1 )
        {
          v20 = v3 + 28 * (v5 % 4 + 4 * (v5 / 4));
          if ( FIELD_U32(v20, 16) )
          {
            sub_609592FC(FIELD_U32(v20, 20), v29);
            sub_60959318(FIELD_U32(v20, 20), v29);
          }
          sub_60918FC4(v4);
        }
        sub_60440C9C(v17);
        v21 = v31[6];
        sub_60913598(v29);
        sub_60918DB8(v4);
        a2 = (_DWORD *)((char *)v26 + ((v21 + 3) & 0xFFFFFFFC));
        v26 = a2;
      }
    }
    ++v5;
  }
  while ( v5 != 88 );
  v22 = FIELD_U32(v3, 2496);
  if ( v22 )
  {
    if ( (unsigned int)v26 - 1 >= v22 )
    {
      result = v3 + 32;
      for ( i = 0; i != 88; ++i )
      {
        if ( i == *(unsigned __int8 *)(result - 22) )
          *(_BYTE *)(*(_DWORD *)result + 20) &= 0xFCu;
        result += 28;
      }
    }
    else
    {
      return sub_60448298(v3);
    }
  }
  else
  {
    FIELD_U32(v3, 2496) = v26;
    return (int)v26;
  }
  return result;
}
