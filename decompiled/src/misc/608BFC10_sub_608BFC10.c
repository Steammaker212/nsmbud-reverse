/* sub_608BFC10
 * address: 0x608BFC10   size: 1252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BFC10(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r1
  int v5; // r6
  _DWORD *v6; // r5
  int v7; // r1
  int v8; // r5
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r1
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r1
  int v15; // r3
  _DWORD *v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r1
  int v21; // r5
  int v22; // r1
  _DWORD *v23; // r3
  int v24; // r0
  int *v25; // r2
  int v26; // r5
  int v27; // r0
  int v28; // r3
  unsigned __int64 v29; // r0
  int v30; // r0
  int v31; // r2
  _DWORD *v32; // r1
  int v33; // r0
  int v34; // r2
  _DWORD *v35; // r1
  int v36; // r0
  int v37; // r0
  _DWORD *v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r2
  _DWORD *v42; // r1
  int v43; // r1
  int v44; // r6
  _DWORD *v45; // r5
  int v46; // r2
  int v47; // r1
  int v48; // r0
  _DWORD v49[25]; // [sp+Ch] [bp-64h] BYREF

  result = FIELD_U8(a1, 37);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U8(a1, 54272);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    if ( !FIELD_U8(a1, 179) || (result = FIELD_U8(a1, 177), FIELD_U8(a1, 177)) )
    {
      if ( byte_60CC8CD1 )
      {
        FIELD_U8(a1, 181) = 1;
        if ( FIELD_U8(a1, 180) != 1 )
        {
          v4 = FIELD_U32(a1, 996);
          if ( v4 >= 1 )
          {
            v5 = 0;
            v6 = (_DWORD *)(a1 + 1028);
            do
            {
              if ( *v6 )
              {
                sub_608C9520(*v6, 1);
                v4 = FIELD_U32(a1, 996);
              }
              ++v5;
              v6 += 832;
            }
            while ( v5 < v4 );
          }
          FIELD_U8(a1, 180) = 1;
        }
      }
      while ( 1 )
      {
        v13 = FIELD_U32(a1, 996);
        v14 = FIELD_U32(a1, 220);
        if ( v13 >= 1 )
          break;
LABEL_28:
        FIELD_U32(a1, 192) += *(_DWORD *)(a1 + 12 * v14 + 55180);
        if ( v13 >= 1 )
        {
          v21 = 0;
          v22 = (FIELD_U32(a1, 292) + 2304) * FIELD_U32(a1, 216);
          if ( (v13 & 1) != 0 )
          {
            v21 = 1;
            v49[0] = FIELD_U32(a1, 1024) + v22;
          }
          if ( v13 != 1 )
          {
            v23 = &v49[v21 + 1];
            v24 = v13 - v21;
            v25 = (int *)(3328 * (__int16)v21 + a1 + 4352);
            do
            {
              v24 -= 2;
              *(v23 - 1) = *(v25 - 832) + v22;
              v26 = *v25;
              v25 += 1664;
              *v23 = v26 + v22;
              v23 += 2;
            }
            while ( v24 );
          }
        }
        v27 = FIELD_U32(a1, 228);
        if ( v27 )
        {
          v28 = 0;
          if ( v27 == 1 )
          {
            v29 = FIELD_S32(a1, 256) * (__int64)FIELD_S32(a1, 232) / 0x3E8uLL;
            v28 = v29;
            if ( __CFSUB__(HIDWORD(v29), 0, (_DWORD)v29 == -1) )
              v28 = -1;
          }
        }
        else
        {
          v28 = FIELD_U32(a1, 232);
        }
        v7 = FIELD_U32(a1, 984);
        FIELD_U32(a1, 232) = 0;
        FIELD_U32(a1, 984) = 0;
        v8 = 1;
        if ( FIELD_U8(a1, 37) )
          v8 = 2;
        sub_608D741C(FIELD_U32(a1, 204), v49, FIELD_U32(a1, 216), v28, v7, v8);
        v9 = FIELD_U32(a1, 212);
        v10 = FIELD_U32(a1, 216) + 1;
        if ( v10 >= v9 )
          v10 = 0;
        FIELD_U32(a1, 216) = v10;
        v11 = FIELD_U32(a1, 220);
        FIELD_U32(a1, 224) = v11;
        v12 = v11 + 1;
        if ( v12 >= v9 )
          v12 = 0;
        FIELD_U32(a1, 220) = v12;
      }
      v15 = 0;
      v16 = (_DWORD *)(a1 + 1060 + 36 * v14);
      while ( *v16 == 3 )
      {
        ++v15;
        v16 += 832;
        if ( v15 >= v13 )
        {
          v17 = a1 + 1064;
          v18 = 0;
          do
          {
            v19 = 9 * v14;
            ++v18;
            v20 = v17 + 36 * v14;
            *(_DWORD *)(v20 - 4) = 0;
            *(_DWORD *)(v17 + 4 * v19) = 0;
            *(_BYTE *)(v20 - 8) = 0;
            *(_DWORD *)(v20 - 12) = 0;
            *(_DWORD *)(v20 - 16) = 0;
            *(_DWORD *)(v20 - 20) = 0;
            *(_DWORD *)(v20 - 24) = 0;
            *(_DWORD *)(v20 - 28) = 0;
            *(_DWORD *)(v20 - 32) = 0;
            v17 += 3328;
            v13 = FIELD_U32(a1, 996);
            v14 = FIELD_U32(a1, 220);
          }
          while ( v18 < v13 );
          goto LABEL_28;
        }
      }
      if ( FIELD_U8(a1, 181) || !FIELD_U8(a1, 177) )
      {
LABEL_41:
        if ( FIELD_U8(a1, 177) )
        {
          if ( sub_608D7588(FIELD_U32(a1, 204)) == 1 )
          {
            v30 = FIELD_U32(a1, 212);
            if ( v30 < 1 )
              goto LABEL_54;
            v31 = 0;
            v32 = (_DWORD *)(a1 + 1060);
            while ( (unsigned int)(*v32 - 1) > 1 )
            {
              ++v31;
              v32 += 9;
              if ( v31 >= v30 )
                goto LABEL_54;
            }
          }
          if ( FIELD_U8(a1, 184) )
            goto LABEL_54;
        }
        v33 = FIELD_U32(a1, 212);
        if ( v33 >= 1 )
        {
          v34 = 0;
          v35 = (_DWORD *)(a1 + 1060);
          while ( (unsigned int)(*v35 - 1) >= 2 )
          {
            ++v34;
            v35 += 9;
            if ( v34 >= v33 )
              goto LABEL_53;
          }
          goto LABEL_64;
        }
LABEL_53:
        if ( !FIELD_U8(a1, 182) )
        {
LABEL_64:
          if ( FIELD_U32(a1, 1028) )
            v39 = sub_608CAD8C();
          else
            v39 = 0;
          v38 = (_DWORD *)(a1 + 12 * FIELD_U32(a1, 220) + 55172);
LABEL_76:
          result = *v38 + v39;
          FIELD_U32(a1, 56396) = result;
          if ( FIELD_U8(a1, 260) )
          {
            v46 = FIELD_U32(a1, 276);
            if ( result > v46 )
            {
              v47 = FIELD_U32(a1, 272);
              if ( (unsigned int)(v46 - v47) >> 7 > 8 )
                v48 = result - v46;
              else
                v48 = (result - v47) % (v46 - v47);
              result = v48 + v47;
            }
          }
          FIELD_U32(a1, 56400) = result;
          return result;
        }
LABEL_54:
        v36 = FIELD_U32(a1, 220);
        if ( v36 <= 0 )
          v36 = FIELD_U32(a1, 212);
        v37 = a1 + 12 * v36;
        v38 = (_DWORD *)(v37 + 55164);
        v39 = FIELD_U32(v37, 55160);
        goto LABEL_76;
      }
      if ( sub_608D7588(FIELD_U32(a1, 204)) == 1 )
      {
        v40 = FIELD_U32(a1, 212);
        if ( v40 < 1 )
        {
LABEL_67:
          FIELD_U8(a1, 183) = 1;
          FIELD_U8(a1, 184) = 1;
          FIELD_U8(a1, 181) = 1;
          if ( FIELD_U8(a1, 180) != 1 )
          {
            v43 = FIELD_U32(a1, 996);
            if ( v43 >= 1 )
            {
              v44 = 0;
              v45 = (_DWORD *)(a1 + 1028);
              do
              {
                if ( *v45 )
                {
                  sub_608C9520(*v45, 1);
                  v43 = FIELD_U32(a1, 996);
                }
                ++v44;
                v45 += 832;
              }
              while ( v44 < v43 );
            }
            FIELD_U8(a1, 180) = 1;
          }
          goto LABEL_41;
        }
        v41 = 0;
        v42 = (_DWORD *)(a1 + 1060);
        while ( (unsigned int)(*v42 - 1) > 1 )
        {
          ++v41;
          v42 += 9;
          if ( v41 >= v40 )
            goto LABEL_67;
        }
      }
      if ( !FIELD_U8(a1, 184) )
        goto LABEL_41;
      goto LABEL_67;
    }
  }
  return result;
}
