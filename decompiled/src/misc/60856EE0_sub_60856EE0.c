/* sub_60856EE0
 * address: 0x60856EE0   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60856EE0(int a1, int a2, int a3)
{
  int v3; // r9
  int v4; // r11
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  _DWORD *v9; // r8
  int v10; // r3
  int v11; // r4
  int v12; // r7
  unsigned __int16 v13; // r9
  int v14; // r10
  int v15; // r6
  int v16; // r5
  int v17; // r4
  int v18; // r0
  unsigned int v19; // r4
  int v20; // r1
  int v21; // r8
  int v22; // r4
  int v23; // r7
  int v24; // r0
  int v25; // r5
  int v26; // r10
  int v27; // r9
  int v28; // r8
  int v29; // r0
  int v30; // r11
  int v31; // r6
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r2
  int v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r3
  int v42; // [sp+4h] [bp-7Ch]
  int v43; // [sp+8h] [bp-78h]
  int v44; // [sp+Ch] [bp-74h]
  int v45; // [sp+10h] [bp-70h]
  unsigned int v46; // [sp+14h] [bp-6Ch]
  int v48; // [sp+1Ch] [bp-64h]
  _BYTE v49[56]; // [sp+20h] [bp-60h] BYREF
  __int16 v50; // [sp+58h] [bp-28h]

  v3 = a1;
  v4 = a3;
  LOBYTE(v5) = 0;
  v6 = FIELD_U32(a1, 12);
  v7 = v6 == 0;
  if ( v6 )
    v7 = FIELD_U32(a3, 4) == 0;
  if ( !v7 )
  {
    v8 = dword_60CC7F88(36, 4, dword_60CC7F90);
    v9 = (_DWORD *)v8;
    if ( v8 )
    {
      sub_60850328(v8);
      v10 = v9[1];
      v9[1] = FIELD_U32(v3, 4);
      FIELD_U32(v10, 4) = v3 + 4;
      *(_DWORD *)(FIELD_U32(v3, 4) + 4) = v9 + 1;
      FIELD_U32(v3, 4) = v10;
      v11 = sub_60851D10(v4);
      v48 = v3;
      v46 = v11;
      if ( v11 )
      {
        v12 = sub_60851D24(v4);
        v13 = 0;
        v14 = 1;
        v15 = v11;
        v16 = v12;
        do
        {
          v17 = sub_60855AD8(FIELD_U32(v48, 16), v16);
          if ( v17 )
          {
            sub_60851D3C(v4);
            v13 += sub_60851D80(v4, v17);
          }
          else
          {
            v14 = 0;
          }
          v16 += 36;
          --v15;
        }
        while ( v15 );
        v18 = v13;
        v3 = v48;
        (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*v9 + 36))(
          v9,
          a2,
          FIELD_U32(v48, 36),
          FIELD_U32(v4, 4),
          v18);
        v19 = v46;
        do
        {
          v20 = sub_60855AD8(FIELD_U32(v48, 16), v12);
          if ( v20 )
            sub_6085F66C(v9, v20, 0);
          v12 += 36;
          --v19;
        }
        while ( v19 );
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *, int, _DWORD))(*v9 + 36))(v9, a2, FIELD_U32(v3, 36));
        v14 = 1;
        (*(void (__fastcall **)(_DWORD, _DWORD *, int, _DWORD))(**(_DWORD **)(v3 + 12) + 64))(
          FIELD_U32(v3, 12),
          v9,
          1,
          0);
      }
      v21 = sub_60851D54(v4);
      if ( v21 )
      {
        v22 = 0;
        v44 = sub_60851D68(v4);
        v45 = v4;
        v42 = v21;
        while ( 1 )
        {
          v23 = (*(int (__fastcall **)(_DWORD, int, int))(**(_DWORD **)(v3 + 12) + 48))(
                  FIELD_U32(v3, 12),
                  v44 + 52 * v22,
                  1);
          v5 = 0;
          if ( v23 )
          {
            sub_60851E70(v49, v23, v4);
            if ( v50 )
            {
              v24 = sub_60855AD8(FIELD_U32(v3, 16), v44 + 52 * v22 + 25);
              if ( v24 )
              {
                v43 = v14;
                v25 = v24 + 12;
                v26 = FIELD_U32(v24, 16);
                if ( v26 != v24 + 12 )
                {
                  if ( v46 )
                  {
                    do
                    {
                      if ( FIELD_U32(v26, 8) != v23 )
                      {
                        v27 = FIELD_U32(v48, 16);
                        v28 = sub_60851D24(v45);
                        v29 = sub_60851D3C(v45);
                        v30 = FIELD_U32(v26, 8);
                        v31 = 0;
                        if ( v29 )
                        {
                          while ( 1 )
                          {
                            v32 = sub_60855AD8(v27, v28 + 36 * v31);
                            v33 = v32 + 12;
                            v34 = FIELD_U32(v32, 16);
                            if ( v34 != v33 )
                              break;
LABEL_32:
                            if ( ++v31 >= v46 )
                              goto LABEL_40;
                          }
                          while ( 1 )
                          {
                            v35 = FIELD_U32(v34, 8);
                            v36 = v30;
                            if ( v35 == v30 )
                              break;
                            while ( 1 )
                            {
                              v36 = FIELD_U32(v36, 12);
                              if ( !v36 )
                                break;
                              if ( v35 == v36 )
                                goto LABEL_39;
                            }
                            v34 = FIELD_U32(v34, 4);
                            if ( v34 == v33 )
                              goto LABEL_32;
                          }
                        }
                        else
                        {
                          while ( 1 )
                          {
                            v37 = sub_60855AD8(v27, v28 + 36 * v31);
                            v38 = v37 + 12;
                            v39 = FIELD_U32(v37, 16);
                            if ( v39 != v38 )
                              break;
LABEL_37:
                            if ( ++v31 >= v46 )
                              goto LABEL_40;
                          }
                          while ( FIELD_U32(v39, 8) != v30 )
                          {
                            v39 = FIELD_U32(v39, 4);
                            if ( v39 == v38 )
                              goto LABEL_37;
                          }
                        }
LABEL_39:
                        sub_60852048((int)v49, a2, v48, FIELD_U32(v26, 8), FIELD_U32(v48, 36));
                      }
LABEL_40:
                      v26 = FIELD_U32(v26, 4);
                    }
                    while ( v26 != v25 );
                    v5 = v43;
                    v4 = v45;
                    v3 = v48;
                    v21 = v42;
                    goto LABEL_48;
                  }
                  do
                  {
                    v40 = FIELD_U32(v26, 8);
                    if ( v40 != v23 )
                      sub_60852048((int)v49, a2, v3, v40, FIELD_U32(v3, 36));
                    v26 = FIELD_U32(v26, 4);
                  }
                  while ( v26 != v25 );
                }
                v5 = v43;
              }
              else
              {
                v5 = 0;
              }
            }
            else
            {
              v5 = v14;
            }
          }
LABEL_48:
          ++v22;
          v14 = v5;
          if ( v22 == v21 )
            return v5 & 1;
        }
      }
      LOBYTE(v5) = v14;
    }
  }
  return v5 & 1;
}
