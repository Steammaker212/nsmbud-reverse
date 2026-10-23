/* sub_6097BDFC
 * address: 0x6097BDFC   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6097BDFC(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r4
  int *v7; // r5
  int v8; // r12
  unsigned int v9; // r3
  signed int *v10; // r4
  int v11; // r2
  int v12; // r7
  int v13; // r6
  unsigned int v14; // r9
  int v15; // r0
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r0
  int v19; // r5
  void *v20; // r7
  int v21; // r10
  int v22; // r4
  const void *v23; // r6
  int *v24; // r10
  const void *v25; // t1
  int v26; // r0
  signed int v27; // r4
  bool v28; // cc
  signed int v29; // r0
  int v30; // r1
  int v31; // r0
  int v32; // r0
  void *v33; // r9
  const void *v34; // r8
  signed int v35; // r7
  int v36; // r0
  int v37; // [sp+4h] [bp-4Ch]
  int v38; // [sp+Ch] [bp-44h]
  int v39; // [sp+10h] [bp-40h]
  int (**v40)(); // [sp+18h] [bp-38h] BYREF
  const char *v41; // [sp+1Ch] [bp-34h]
  int v42; // [sp+24h] [bp-2Ch]
  int v43[10]; // [sp+28h] [bp-28h] BYREF

  v43[0] = a4;
  if ( a4 )
  {
    v6 = FIELD_U32(a3, 4);
    v40 = &sead__SafeStringBase__vtable;
    v41 = "lut_name_mip1";
    if ( v6 == sub_60941AB4((int *)&v40) )
    {
      v7 = a1 + 403;
      v8 = a1[403];
      if ( v8 )
      {
        v9 = 0;
        v10 = (signed int *)(a1[404] + 144);
        v11 = a1[50];
        while ( 1 )
        {
          v12 = a1[50];
          if ( a1[49] > v9 )
            v12 = v11;
          if ( v12 == a2 )
            break;
          ++v9;
          v11 += 164;
          v10 += 54;
          if ( v8 == v9 )
            goto LABEL_11;
        }
        v40 = &sead__SafeStringBase__vtable;
        v41 = "lut_name";
        v31 = sub_60941AB4((int *)&v40);
        v32 = sub_609515BC(v43, v31);
        if ( v32 != -1 )
        {
          if ( v43[0] + ((4 * *(_DWORD *)(v43[0] + 4)) & 0x3FFFC) + 8 * v32 )
          {
            v33 = (void *)*(v10 - 1);
            (*(void (__fastcall **)(signed int *))(*(v10 - 17) + 12))(v10 - 17);
            v34 = (const void *)*(v10 - 16);
            if ( v33 != v34 )
            {
              (*(void (__fastcall **)(signed int *))(*(v10 - 17) + 12))(v10 - 17);
              v35 = 0;
              v36 = *(v10 - 16);
              while ( *(_BYTE *)(v36 + v35) )
              {
                if ( !*(_BYTE *)(v36 + v35 + 1) )
                {
                  ++v35;
                  break;
                }
                if ( !*(_BYTE *)(v36 + v35 + 2) )
                {
                  v35 += 2;
                  break;
                }
                v28 = v35 + 2 <= 0x7FFFF;
                v35 += 3;
                if ( !v28 )
                {
                  v35 = 0;
                  break;
                }
              }
              if ( v35 >= *v10 )
                v35 = *v10 - 1;
              qmemcpy(v33, v34, v35);
              *((_BYTE *)v33 + v35) = 0;
            }
          }
        }
      }
    }
    else
    {
      v7 = a1 + 403;
    }
LABEL_11:
    v13 = *v7;
    if ( *v7 )
    {
      v14 = 0;
      v39 = a2;
      v38 = a1[404];
      v37 = *v7;
      do
      {
        v30 = a1[50];
        if ( a1[49] > v14 )
          v30 += 164 * v14;
        if ( v30 == a2 )
        {
          v40 = &sead__SafeStringBase__vtable;
          v41 = "lut_type";
          v15 = sub_60941AB4((int *)&v40);
          v16 = sub_609515BC(v43, v15);
          if ( v16 != -1 )
          {
            v17 = v43[0] + ((4 * *(_DWORD *)(v43[0] + 4)) & 0x3FFFC) + 8 * v16;
            if ( v17 )
            {
              v18 = default_ref_9419C8(&v40);
              v40 = &off_60C5E01C;
              sub_60942358((int)v18, v17);
              v19 = v38 + 216 * v14;
              v20 = *(void **)(v19 + 80);
              v21 = a1[51] + 208 * v42;
              v22 = v21 + 2348;
              (*(void (__fastcall **)(int))(FIELD_U32(v21, 2348) + 12))(v21 + 2348);
              v25 = *(const void **)(v21 + 2352);
              v24 = (int *)(v21 + 2352);
              v23 = v25;
              if ( v20 != v25 )
              {
                (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
                v26 = *v24;
                v27 = 0;
                while ( *(_BYTE *)(v26 + v27) )
                {
                  if ( !*(_BYTE *)(v26 + v27 + 1) )
                  {
                    ++v27;
                    break;
                  }
                  if ( !*(_BYTE *)(v26 + v27 + 2) )
                  {
                    v27 += 2;
                    break;
                  }
                  v28 = v27 + 2 <= 0x7FFFF;
                  v27 += 3;
                  if ( !v28 )
                  {
                    v27 = 0;
                    break;
                  }
                }
                v29 = FIELD_U32(v19, 84);
                if ( v27 >= v29 )
                  v27 = v29 - 1;
                qmemcpy(v20, v23, v27);
                *((_BYTE *)v20 + v27) = 0;
              }
              a2 = v39;
              v13 = v37;
            }
          }
        }
        ++v14;
      }
      while ( v14 != v13 );
    }
  }
}
