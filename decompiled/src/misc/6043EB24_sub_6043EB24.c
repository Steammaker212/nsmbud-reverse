/* sub_6043EB24
 * address: 0x6043EB24   size: 1040   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043EB24(_DWORD *a1, void *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r8
  int v6; // r9
  int v7; // r5
  sead_IDisposer *v8; // r7
  int v9; // r11
  _DWORD *v10; // r10
  _DWORD *v11; // r5
  char *v12; // r9
  int v13; // r6
  int v14; // r4
  int v15; // r0
  int v16; // r1
  bool v17; // zf
  int v18; // r1
  bool v19; // zf
  int v20; // r1
  bool v21; // zf
  int v22; // r2
  int v23; // r1
  bool v24; // zf
  int v25; // r2
  bool v26; // zf
  int v27; // r2
  bool v28; // zf
  int v29; // r2
  bool v30; // zf
  int v31; // r2
  int v32; // r0
  bool v33; // zf
  int v34; // r2
  bool v35; // zf
  int v36; // r2
  bool v37; // zf
  int v38; // r2
  bool v39; // zf
  int v40; // r1
  int v41; // r2
  bool v42; // zf
  int v43; // r1
  bool v44; // zf
  int v45; // r1
  bool v46; // zf
  int v47; // r1
  bool v48; // zf
  void *v49; // r0
  int v50; // r0
  int v52; // [sp+8h] [bp-50h]
  int v53; // [sp+Ch] [bp-4Ch]
  int v54; // [sp+10h] [bp-48h]
  _DWORD *v56; // [sp+18h] [bp-40h]
  int v57; // [sp+1Ch] [bp-3Ch]
  int v58; // [sp+20h] [bp-38h]
  char *s2; // [sp+24h] [bp-34h]
  int v60; // [sp+28h] [bp-30h]
  _DWORD v61[11]; // [sp+2Ch] [bp-2Ch] BYREF

  sub_60871AE0(a1[6], FIELD_U32(dword_60CCFC8C, 24), 0, 0);
  v56 = a1;
  v3 = a1[6];
  if ( FIELD_U16(v3, 64) )
  {
    v4 = 0;
    v5 = FIELD_U32(dword_60CD0B50, 20);
    v52 = v5;
    do
    {
      v6 = FIELD_U32(v3, 16) + 232 * v4;
      v7 = FIELD_U16(v6, 216);
      v8 = (sead_IDisposer *)operator_new_8DE25C(0x2Cu, a2, 4);
      memset(v8, 0, 44);
      sead__CriticalSection__ctor(v8);
      FIELD_U32(v8 + (2) * 16, 0x8) = 0;
      FIELD_U32(v8 + (2) * 16, 0x4) = operator_new_8DE2C8(4 * v7, (int)a2, 4);
      FIELD_U32(v6, 184) = v8;
      v57 = operator_new_8DE25C(0x64u, a2, 4);
      sub_60420330(v57);
      s2 = (char *)(*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 24))(v5, 24 * v7, 4);
      v58 = v7;
      v53 = v4;
      if ( v7 )
      {
        v9 = 0;
        v60 = v6;
        v10 = (_DWORD *)(v6 + 120);
        v54 = 1;
        do
        {
          *(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v9) = 0;
          v11 = (_DWORD *)(*v10 + 56 * v9);
          sub_60420468(&s2[24 * v9], (int)v11);
          if ( v9 >= 1 )
          {
            v12 = s2;
            v13 = 0;
            v14 = 0;
            while ( memcmp(&s2[24 * v9], v12, 0x18u)
                 || sub_60420704(*(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v14), v60, (_DWORD *)(*v10 + v13), v11) != 1 )
            {
              ++v14;
              v13 += 56;
              v12 += 24;
              if ( v14 >= v9 )
                goto LABEL_12;
            }
            *(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v9) = *(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v14);
          }
LABEL_12:
          if ( !*(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v9) )
          {
            sub_60420378(v57, v60, (int)v11);
            v56[11] += FIELD_U16(v57, 4) & 0x3FFF;
            *(_DWORD *)(FIELD_U32(v8 + (2) * 16, 0x4) + 4 * v9) = v57;
            v15 = 0;
            v16 = FIELD_U8(v57, 76);
            v17 = v16 == 255;
            if ( v16 != 255 )
              v17 = v16 == 0;
            if ( v17 )
            {
              v18 = FIELD_U8(v57, 77);
              v19 = v18 == 0;
              if ( FIELD_U8(v57, 77) )
                v19 = v18 == 255;
              if ( v19 )
              {
                v20 = FIELD_U8(v57, 78);
                v21 = v20 == 255;
                if ( v20 != 255 )
                  v21 = v20 == 0;
                if ( v21 )
                {
                  if ( FIELD_U8(v57, 79) == 255 )
                  {
                    v15 = v54;
                  }
                  else if ( !FIELD_U8(v57, 79) )
                  {
                    v15 = v54;
                  }
                }
              }
            }
            v22 = FIELD_U8(v57, 80);
            v23 = 0;
            v24 = v22 == 1;
            if ( v22 != 1 )
              v24 = v22 == 255;
            if ( v24 )
            {
              v25 = FIELD_U8(v57, 81);
              v26 = v25 == 255;
              if ( v25 != 255 )
                v26 = v25 == 1;
              if ( v26 )
              {
                v27 = FIELD_U8(v57, 82);
                v28 = v27 == 255;
                if ( v27 != 255 )
                  v28 = v27 == 1;
                if ( v28 )
                {
                  v29 = FIELD_U8(v57, 83);
                  v30 = v29 == 255;
                  if ( v29 != 255 )
                    v30 = v29 == 1;
                  if ( v30 )
                    v23 = v15;
                }
              }
            }
            v31 = FIELD_U8(v57, 84);
            v32 = 0;
            v33 = v31 == 255;
            if ( v31 != 255 )
              v33 = v31 == 2;
            if ( v33 )
            {
              v34 = FIELD_U8(v57, 85);
              v35 = v34 == 255;
              if ( v34 != 255 )
                v35 = v34 == 2;
              if ( v35 )
              {
                v36 = FIELD_U8(v57, 86);
                v37 = v36 == 255;
                if ( v36 != 255 )
                  v37 = v36 == 2;
                if ( v37 )
                {
                  v38 = FIELD_U8(v57, 87);
                  v39 = v38 == 255;
                  if ( v38 != 255 )
                    v39 = v38 == 2;
                  if ( v39 )
                    v32 = v23;
                }
              }
            }
            v40 = FIELD_U8(v57, 88);
            v41 = 0;
            v42 = v40 == 255;
            if ( v40 != 255 )
              v42 = v40 == 3;
            if ( v42 )
            {
              v43 = FIELD_U8(v57, 89);
              v44 = v43 == 255;
              if ( v43 != 255 )
                v44 = v43 == 3;
              if ( v44 )
              {
                v45 = FIELD_U8(v57, 90);
                v46 = v45 == 255;
                if ( v45 != 255 )
                  v46 = v45 == 3;
                if ( v46 )
                {
                  v47 = FIELD_U8(v57, 91);
                  v48 = v47 == 255;
                  if ( v47 != 255 )
                    v48 = v47 == 3;
                  if ( v48 )
                    v41 = v32;
                }
              }
            }
            v54 = v41;
            v57 = operator_new_8DE25C(0x64u, a2, 4);
            sub_60420330(v57);
            ++v56[10];
          }
          ++v9;
        }
        while ( v9 != v58 );
      }
      else
      {
        LOBYTE(v54) = 1;
      }
      v5 = v52;
      (*(void (__fastcall **)(int, char *))(*(_DWORD *)v52 + 28))(v52, s2);
      if ( v57 )
      {
        nullsub_16();
        operator_delete(v49);
      }
      if ( (v54 & 1) != 0 )
        FIELD_U32(v8 + (2) * 16, 0x8) |= 1u;
      v4 = v53 + 1;
      v3 = v56[6];
    }
    while ( v53 + 1 < FIELD_U16(v3, 64) );
  }
  v50 = *(_DWORD *)v3 + 2;
  v61[0] = &sead__SafeStringBase__vtable;
  v61[1] = v50;
  return sead__SafeStringBase__operator_assign((int)(v56 + 8), (int)v61);
}
