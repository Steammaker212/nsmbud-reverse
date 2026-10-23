/* sub_601A3024
 * address: 0x601A3024   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A3024(int a1)
{
  int v1; // r10
  int v2; // r7
  int (**v3)(); // r5
  int v4; // r1
  int result; // r0
  int v6; // r4
  _DWORD *v7; // r0
  __int64 v8; // r0
  _DWORD *v9; // r4
  int v10; // r11
  int (**v11)(); // r10
  _DWORD *v12; // r6
  _DWORD *v13; // r5
  _DWORD *v14; // r0
  int i; // r5
  int v16; // r1
  int v17; // r6
  _DWORD *v18; // r0
  __int64 v19; // r0
  _DWORD *v20; // r8
  int v21; // r10
  _DWORD *v22; // r7
  _DWORD *v23; // r6
  int v24; // r5
  signed int v25; // r6
  _DWORD *v26; // r0
  int v27; // r0
  unsigned int v28; // r7
  unsigned int v29; // r1
  int v30; // [sp+8h] [bp-48h]
  int *v31; // [sp+Ch] [bp-44h]
  int v32; // [sp+10h] [bp-40h]
  int v33; // [sp+10h] [bp-40h]
  int v34; // [sp+14h] [bp-3Ch]
  int *v35; // [sp+14h] [bp-3Ch]
  int *v36; // [sp+18h] [bp-38h]
  int v37; // [sp+18h] [bp-38h]
  int v39; // [sp+20h] [bp-30h]
  int v40; // [sp+20h] [bp-30h]
  int v41; // [sp+24h] [bp-2Ch]

  v1 = a1;
  if ( FIELD_U8(a1, 2840) )
  {
    v2 = 0;
    v3 = &off_60BD4F28;
    do
    {
      v4 = v1 + 4 * v2;
      result = FIELD_U32(v4, 172);
      v36 = (int *)(v4 + 172);
      if ( result >= 1 )
      {
        v6 = 0;
        v34 = v2;
        v32 = 2 * v2;
        do
        {
          v7 = (_DWORD *)operator_new(0x6062Cu);
          LODWORD(v8) = sub_6017B8A4(v7);
          HIDWORD(v8) = v6 + v32;
          if ( (unsigned int)(v6 + v32) >= 0x12 )
            HIDWORD(v8) = 0;
          v39 = v1 + 4 * HIDWORD(v8);
          FIELD_U32(v39, 28) = v8;
          HIDWORD(v8) = v2;
          v41 = v6;
          sub_6017BE7C(v8, v6);
          v9 = (_DWORD *)operator_new(0x6814u);
          v10 = 5;
          *v9 = &off_60BD4F18;
          do
          {
            v11 = v3;
            v9[v10] = v3;
            v12 = &v9[v10];
            v12[2] = &v9[v10 + 4];
            v12[1] = &BufferedSafeStringBase_char_vtable_probably;
            v13 = &v9[v10 + 1];
            v9[v10 + 3] = 5;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v13);
            v10 += 26;
            *(_BYTE *)v12[2] = 0;
            v14 = v13 + 25;
            *v13 = &off_60BD4F38;
            v3 = v11;
          }
          while ( v14 != v9 + 6661 );
          FIELD_U32(v39, 100) = v9;
          v1 = a1;
          v2 = v34;
          result = *v36;
          v6 = v41 + 1;
        }
        while ( v41 + 1 < *v36 );
      }
      ++v2;
    }
    while ( v2 != 9 );
  }
  else
  {
    for ( i = 0; i != 9; ++i )
    {
      v16 = v1 + 4 * i;
      result = FIELD_U32(v16, 172);
      v31 = (int *)(v16 + 172);
      if ( result >= 1 )
      {
        v17 = 0;
        v40 = i;
        v30 = 2 * i;
        do
        {
          v18 = (_DWORD *)operator_new(0x6062Cu);
          LODWORD(v19) = sub_6017B8A4(v18);
          HIDWORD(v19) = v17 + v30;
          if ( (unsigned int)(v17 + v30) >= 0x12 )
            HIDWORD(v19) = 0;
          v33 = v1 + 4 * HIDWORD(v19);
          FIELD_U32(v33, 28) = v19;
          v37 = v17;
          v35 = (int *)(v33 + 28);
          HIDWORD(v19) = i;
          sub_6017BE7C(v19, v17);
          v20 = (_DWORD *)operator_new(0x6814u);
          v21 = 5;
          *v20 = &off_60BD4F18;
          do
          {
            v20[v21] = &off_60BD4F28;
            v22 = &v20[v21];
            v22[2] = &v20[v21 + 4];
            v22[1] = &BufferedSafeStringBase_char_vtable_probably;
            v23 = &v20[v21 + 1];
            v20[v21 + 3] = 5;
            sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v23);
            v21 += 26;
            *(_BYTE *)v22[2] = 0;
            *v23 = &off_60BD4F38;
          }
          while ( v23 + 25 != v20 + 6661 );
          FIELD_U32(v33, 100) = v20;
          v1 = a1;
          v24 = *v35;
          if ( *(int *)(*v35 + 28) >= 1 )
          {
            v25 = 0;
            do
            {
              v26 = (_DWORD *)sub_60182E38(v24, v25);
              if ( sub_6019A214(v26) == 3 )
              {
                v27 = sub_60182E38(v24, v25);
                v28 = sub_6040D864(v27);
                if ( sub_60182F10(v24, 0, v25) >= 1 && !FIELD_U8(a1, 2840) )
                {
                  v29 = 0;
                  if ( v28 < 0x3A )
                    v29 = v28;
                  *(_DWORD *)(a1 + 232 * v40 + 4 * v29 + 208) |= 0x10u;
                }
                if ( sub_60182F10(v24, 1, v25) >= 1 && !FIELD_U8(a1, 2840) )
                {
                  if ( v28 >= 0x3A )
                    v28 = 0;
                  *(_DWORD *)(a1 + 232 * v40 + 4 * v28 + 208) |= 0x20u;
                }
              }
              ++v25;
            }
            while ( v25 < FIELD_U32(v24, 28) );
          }
          i = v40;
          result = *v31;
          v17 = v37 + 1;
        }
        while ( v37 + 1 < *v31 );
      }
    }
  }
  return result;
}
