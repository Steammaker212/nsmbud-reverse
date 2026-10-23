/* sub_60925434
 * address: 0x60925434   size: 900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60925434(_DWORD *a1, int a2, char a3, unsigned int a4)
{
  unsigned int v6; // r7
  int v7; // r5
  int v8; // r6
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r0
  unsigned __int16 *v13; // r2
  unsigned int v14; // r1
  unsigned int v15; // r0
  unsigned int v16; // r2
  unsigned int v17; // r6
  unsigned int v18; // r3
  int v19; // r5
  int v20; // r8
  int v21; // r11
  _DWORD *v22; // r9
  int v23; // r7
  int v24; // r0
  int v25; // r1
  int i; // r2
  unsigned int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r0
  int *v30; // r6
  unsigned int v31; // r7
  int v32; // r0
  int v33; // r4
  _DWORD *v35; // [sp+8h] [bp-68h]
  int v37; // [sp+10h] [bp-60h]
  int v38; // [sp+18h] [bp-58h]
  int v39; // [sp+1Ch] [bp-54h]
  unsigned int v40; // [sp+20h] [bp-50h]
  int v41; // [sp+24h] [bp-4Ch]
  int v42; // [sp+28h] [bp-48h]
  unsigned int v44; // [sp+30h] [bp-40h]
  int v45; // [sp+34h] [bp-3Ch]
  _DWORD *v46; // [sp+38h] [bp-38h]
  _DWORD v47[2]; // [sp+3Ch] [bp-34h] BYREF
  _DWORD v48[11]; // [sp+44h] [bp-2Ch] BYREF

  v6 = 0;
  v7 = FIELD_U32(dword_60CD0B50, 60);
  v35 = sub_609A4754(0, v7, 0, 0x4000);
  v8 = v35[1];
  v46 = a1;
  v9 = a1 + 22;
  sub_60946C34(v9, v8, v7);
  v48[0] = &sead__SafeStringBase__vtable;
  v47[0] = &sead__SafeStringBase__vtable;
  v48[1] = "data";
  v47[1] = &byte_60ABC94D;
  v10 = sub_609A66E8(v8, v48, v47, v7);
  v39 = v7;
  v37 = param_list_ref(v9, v10, v7);
  if ( dword_60CCFCA4 >= 1 )
  {
    v41 = a3 & 2;
    v45 = a3 & 1;
    do
    {
      v11 = v46[4];
      v40 = v6;
      if ( v46[3] > v6 )
        v11 += 4 * v6;
      if ( FIELD_U16(v11, 2) )
      {
        v12 = v46[194];
        if ( v46[193] > v6 )
          v12 += 48 * v6;
        v38 = param_list_ref(v12, v37, v39);
        v13 = (unsigned __int16 *)v46[4];
        v14 = v46[5];
        if ( v46[3] > v6 )
          v13 += 2 * v6;
        v15 = *v13;
        v16 = v13[1] + v15;
        v17 = v15;
        v18 = v16;
        if ( v14 < v16 )
          v18 = v46[5];
        if ( v14 < v15 )
          v17 = v46[5];
        v44 = v18;
        if ( v17 != v18 )
        {
          v19 = v46[6];
          if ( a4 == -1 )
          {
            v27 = ~v14;
            v28 = ~v16;
            v29 = ~v15;
            v30 = (int *)(v19 + 4 * v17);
            if ( v27 > v28 )
              v28 = v27;
            if ( v27 > v29 )
              v29 = v27;
            v31 = v29 - v28;
            do
            {
              v32 = *v30;
              if ( (!v45 || (FIELD_U8(v32, 110) & 1) != 0) && (!v41 || FIELD_U8(v32, 48)) )
                param_array_ref(v32, v38, v39);
              ++v30;
              --v31;
            }
            while ( v31 );
          }
          else
          {
            v42 = v46[6];
            do
            {
              v20 = *(_DWORD *)(v19 + 4 * v17);
              v21 = v46[12];
              if ( v46[11] > a4 )
                v21 += 324 * a4;
              v22 = (_DWORD *)(*(int (__fastcall **)(int))(FIELD_U32(v20, 28) + 16))(v20 + 28);
              (*(void (__fastcall **)(int))(FIELD_U32(v21, 12) + 12))(v21 + 12);
              (*(void (__fastcall **)(int))(FIELD_U32(v21, 12) + 12))(v21 + 12);
              v23 = FIELD_U32(v21, 16);
              (*(void (__fastcall **)(_DWORD *))(*v22 + 12))(v22);
              v24 = v22[1];
              if ( v23 == v24 )
              {
LABEL_27:
                if ( (!v45 || (FIELD_U8(v20, 110) & 1) != 0) && (!v41 || FIELD_U8(v20, 48)) )
                  param_array_ref(v20, v38, v39);
              }
              else
              {
                v25 = FIELD_U32(v21, 16);
                for ( i = 1; *(unsigned __int8 *)(v25 + i - 1) == *(unsigned __int8 *)(v24 + i - 1); i += 2 )
                {
                  if ( !*(_BYTE *)(v25 + i - 1) )
                    goto LABEL_27;
                  if ( i > 0x80000 || *(unsigned __int8 *)(v25 + i) != *(unsigned __int8 *)(v24 + i) )
                    break;
                  if ( !*(_BYTE *)(v25 + i) )
                    goto LABEL_27;
                }
              }
              v19 = v42;
              ++v17;
            }
            while ( v17 != v44 );
          }
        }
      }
      v6 = v40 + 1;
    }
    while ( (int)(v40 + 1) < dword_60CCFCA4 );
  }
  v33 = sub_60946EA0(v9, a2, v35);
  if ( v35 )
    (*(void (__fastcall **)(_DWORD *))(*v35 + 4))(v35);
  return v33;
}
