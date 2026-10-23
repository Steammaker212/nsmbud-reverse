/* sub_6041EAB4
 * address: 0x6041EAB4   size: 752   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041EAB4(int a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r11
  int v7; // r0
  int v8; // r8
  _DWORD *v9; // r9
  int v10; // r5
  int v11; // r0
  int (***v12)(); // r5
  int i; // r1
  int v14; // r3
  bool v15; // nf
  _DWORD *v16; // r0
  int v17; // r8
  int v18; // r11
  int (***v19)(); // r10
  int v20; // r5
  bool v21; // zf
  int v22; // r0
  _DWORD *v23; // r6
  int v24; // r1
  int v25; // r0
  _DWORD *v26; // r5
  int v27; // r7
  int v28; // r0
  int v29; // r1
  int v30; // r3
  bool v31; // nf
  _DWORD *v32; // r0
  int v33; // r6
  int result; // r0
  int v35; // [sp+4h] [bp-3Ch]
  int (**v37)(); // [sp+Ch] [bp-34h] BYREF
  int v38; // [sp+10h] [bp-30h]
  int (**v39)(); // [sp+14h] [bp-2Ch] BYREF
  int v40; // [sp+18h] [bp-28h]

  v6 = a2[12] + 112 * a3;
  v7 = *(_DWORD *)(a2[16] + 184 * FIELD_U16(v6, 94) + 16) + 2;
  v39 = &sead__SafeStringBase__vtable;
  v40 = v7;
  v8 = dword_60C9BAF4;
  v9 = *(_DWORD **)(dword_60C9BAF4 + 832);
  if ( v9 )
  {
    sead__SafeStringBase__assureTerminationImpl_const();
    ((void (__fastcall *)(int (***)()))v39[3])(&v39);
    v10 = v40;
    (*(void (__fastcall **)(_DWORD *))(v9[4] + 12))(v9 + 4);
    v11 = v9[5];
    if ( v10 != v11 )
    {
      v12 = &v39;
LABEL_4:
      for ( i = 0; i < 0x80000; ++i )
      {
        v14 = *(unsigned __int8 *)(v40 + i);
        v15 = v14 - *(unsigned __int8 *)(v11 + i) < 0;
        if ( v14 != *(unsigned __int8 *)(v11 + i) )
        {
          v16 = v9 + 2;
          if ( v15 )
            v16 = v9 + 1;
          v9 = (_DWORD *)*v16;
          if ( !*v16 )
            goto LABEL_30;
          ((void (__fastcall *)(int (***)()))v39[3])(v12);
          ((void (__fastcall *)(int (***)()))v39[3])(v12);
          v35 = v8;
          v17 = v6;
          v18 = a1;
          v19 = v12;
          v20 = v40;
          (*(void (__fastcall **)(_DWORD *))(v9[4] + 12))(v9 + 4);
          v11 = v9[5];
          v21 = v20 == v11;
          v12 = v19;
          a1 = v18;
          v6 = v17;
          v8 = v35;
          if ( v21 )
            goto LABEL_16;
          goto LABEL_4;
        }
        if ( !*(_BYTE *)(v40 + i) )
          break;
      }
      if ( !v9 )
        goto LABEL_30;
    }
LABEL_16:
    v22 = a2[8];
    v23 = 0;
    v24 = FIELD_U32(v22, 16);
    v25 = 0;
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 16 * FIELD_U16(v6, 96) + 32) + 2;
    v37 = &sead__SafeStringBase__vtable;
    v38 = v25;
    v26 = *(_DWORD **)(v8 + 1464);
    if ( v26 )
    {
      sead__SafeStringBase__assureTerminationImpl_const();
      ((void (__fastcall *)(int (***)()))v37[3])(&v37);
      v27 = v38;
      (*(void (__fastcall **)(_DWORD *))(v26[4] + 12))(v26 + 4);
      v28 = v26[5];
      if ( v27 != v28 )
      {
        while ( 2 )
        {
          v29 = 0;
          while ( 1 )
          {
            v30 = *(unsigned __int8 *)(v38 + v29);
            v31 = v30 - *(unsigned __int8 *)(v28 + v29) < 0;
            if ( v30 != *(unsigned __int8 *)(v28 + v29) )
              break;
            if ( *(_BYTE *)(v38 + v29) )
            {
              if ( ++v29 < 0x80000 )
                continue;
            }
            if ( v26 )
              goto LABEL_32;
            goto LABEL_33;
          }
          v32 = v26 + 2;
          if ( v31 )
            v32 = v26 + 1;
          v26 = (_DWORD *)*v32;
          if ( !*v32 )
          {
LABEL_33:
            v23 = 0;
            goto LABEL_34;
          }
          ((void (__fastcall *)(int (***)()))v37[3])(&v37);
          ((void (__fastcall *)(int (***)()))v37[3])(&v37);
          v33 = v38;
          (*(void (__fastcall **)(_DWORD *))(v26[4] + 12))(v26 + 4);
          v28 = v26[5];
          if ( v33 != v28 )
            continue;
          break;
        }
      }
LABEL_32:
      v23 = v26 + 6;
    }
LABEL_34:
    *(_BYTE *)a1 = 1;
    FIELD_U32(a1, 4) = sub_6083DC18(a4, v9[6], *v23, v23[1], 0);
    result = sub_6083DBE0(a4, *v23, v23[1]);
    FIELD_U32(a1, 8) = result;
  }
  else
  {
LABEL_30:
    *(_BYTE *)a1 = 0;
    FIELD_U32(a1, 4) = 0;
    return 0;
  }
  return result;
}
