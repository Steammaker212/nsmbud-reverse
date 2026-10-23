/* sub_6040ACD4
 * address: 0x6040ACD4   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040ACD4(int a1, unsigned int a2)
{
  int result; // r0
  _BYTE *v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r7
  int v8; // r1
  int v9; // r0
  int v10; // r5
  unsigned int v11; // r0
  _DWORD *v12; // r2
  char v13; // r3
  _DWORD *v14; // r2
  unsigned int v15; // r2
  unsigned int v16; // r1
  _DWORD *v17; // r3
  char v18; // r7
  int v19; // r1
  unsigned int v20; // r8
  int v21; // r9
  int v22; // r9
  int v23; // r9
  int v24; // r9
  unsigned int v25; // r2
  _DWORD *v26; // r7
  char v27; // r5
  _DWORD *v28; // r2
  _DWORD *v29; // r2
  unsigned int v30; // r2
  _DWORD *v31; // r1
  int *v32; // r7

  v4 = (_BYTE *)(a1 + 6559);
  result = FIELD_U8(a1, 6559);
  if ( (unsigned __int8)(result - 1) <= 2u )
  {
    FIELD_U8(a1, 6523) = 1;
    if ( result == 1 )
    {
      switch ( FIELD_U8(a1, 6476) )
      {
        case 0:
          v6 = FIELD_U8(a1, 6478);
          if ( v6 == 7 )
          {
            if ( !FIELD_U8(a1, 6540) )
              goto LABEL_56;
          }
          else
          {
            if ( v6 == 5 )
            {
              v7 = FIELD_U8(a1, 6479);
              v9 = dword_60C7B3F8;
              v8 = 495;
            }
            else
            {
              if ( v6 != 1 )
                goto LABEL_57;
              v7 = FIELD_U8(a1, 6479);
              v8 = FIELD_U32(a1, 6488);
              v9 = dword_60C7B3F8;
            }
            if ( v7 < sub_60006500(v9, v8) )
              goto LABEL_56;
          }
LABEL_57:
          v30 = (int)(float)(sub_603FC760(dword_60C99DE4) * 100.0);
          if ( (int)v30 <= 0 )
            v30 = 0;
          FIELD_U32(a1, 6504) = v30;
          result = a1 + 6504;
          v31 = *(_DWORD **)(a1 + 6472);
          if ( v31 )
          {
            v13 = 2;
            if ( 100 * v31[23] >= v30
              || (v13 = 1, 100 * v31[22] >= v30)
              || (v32 = v31 + 21, v13 = 0, 100 * v31[21] >= v30) )
            {
              *v4 = 2;
              goto LABEL_67;
            }
            *v4 = 2;
            FIELD_U8(a1, 6560) = 0;
            if ( FIELD_U8(a1, 6476) )
              v32 = v31 + 14;
            v19 = *v32;
          }
          else
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = 0;
            v19 = 500;
          }
          goto LABEL_69;
        case 1:
          if ( FIELD_U8(a1, 6478) == 1 )
          {
            v10 = FIELD_U8(a1, 6479);
            if ( v10 < sub_60006500(dword_60C7B3F8, 504) )
              goto LABEL_56;
            v11 = FIELD_U32(dword_60C99DD4, 724);
LABEL_19:
            FIELD_U32(a1, 6504) = v11;
            v14 = *(_DWORD **)(a1 + 6472);
            if ( !v14 )
              goto LABEL_56;
            v13 = 2;
            if ( v14[23] > v11 )
            {
              v13 = 1;
              if ( v14[22] > v11 )
              {
                v15 = v14[21];
LABEL_23:
                v13 = 0;
                if ( v15 > v11 )
                  goto LABEL_56;
              }
            }
LABEL_44:
            *v4 = 2;
          }
          else
          {
            FIELD_U32(a1, 6504) = a2;
            v29 = *(_DWORD **)(a1 + 6472);
            if ( !v29 || (v13 = 2, v29[23] > a2) && (v13 = 1, v29[22] > a2) && (v13 = 0, v29[21] > a2) )
            {
LABEL_56:
              *v4 = 3;
              return 3;
            }
LABEL_50:
            *v4 = 2;
          }
LABEL_67:
          FIELD_U8(a1, 6560) = v13;
          result = 6560;
          break;
        case 2:
          FIELD_U32(a1, 6504) = a2;
          v12 = *(_DWORD **)(a1 + 6472);
          if ( !v12 )
            goto LABEL_56;
          v13 = 2;
          if ( v12[23] < a2 )
          {
            v13 = 1;
            if ( v12[22] < a2 )
            {
              v13 = 0;
              if ( v12[21] < a2 )
                goto LABEL_56;
            }
          }
          goto LABEL_50;
        case 3:
          v5 = 6481;
          goto LABEL_18;
        case 4:
          v16 = FIELD_U8(a1, 6478);
          FIELD_U32(a1, 6504) = v16;
          v17 = *(_DWORD **)(a1 + 6472);
          if ( v17 && ((v18 = 2, v17[23] >= v16) || (v18 = 1, v17[22] >= v16) || (v18 = 0, v17[21] >= v16)) )
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = v18;
            return 6560;
          }
          else
          {
            result = a1 + 6504;
            *v4 = 2;
            FIELD_U8(a1, 6560) = 2;
            v19 = 0;
LABEL_69:
            *(_DWORD *)result = v19;
          }
          return result;
        case 5:
          if ( FIELD_U8(a1, 6478) != 15 )
            goto LABEL_31;
          goto LABEL_56;
        case 6:
          v20 = FIELD_U8(a1, 6480);
          v21 = sub_60006500(dword_60C7B3F8, dword_60C9A20C);
          v22 = sub_60006500(dword_60C7B3F8, dword_60C9A210) + v21;
          v23 = v22 + sub_60006500(dword_60C7B3F8, dword_60C9A214);
          v24 = v23 + sub_60006500(dword_60C7B3F8, dword_60C9A218);
          if ( v20 < v24 + sub_60006500(dword_60C7B3F8, dword_60C9A21C) )
            goto LABEL_56;
          v25 = FIELD_U8(a1, 6479);
          FIELD_U32(a1, 6504) = v25;
          v26 = *(_DWORD **)(a1 + 6472);
          if ( v26 && ((v27 = 2, v26[23] >= v25) || (v27 = 1, v26[22] >= v25) || (v27 = 0, v26[21] >= v25)) )
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = v27;
            return 6560;
          }
          else
          {
            *v4 = 2;
            FIELD_U8(a1, 6560) = 0;
            result = FIELD_U8(a1, 6478);
            FIELD_U32(a1, 6504) = result;
          }
          return result;
        case 7:
        case 8:
        case 9:
          v5 = 6478;
LABEL_18:
          v11 = *(unsigned __int8 *)(a1 + v5);
          goto LABEL_19;
        case 0xA:
          v11 = (int)(float)(sub_603FC760(dword_60C99DE4) * 100.0);
          if ( (int)v11 <= 0 )
            v11 = 0;
          FIELD_U32(a1, 6504) = v11;
          v28 = *(_DWORD **)(a1 + 6472);
          if ( !v28 )
            goto LABEL_56;
          v13 = 2;
          if ( 100 * v28[23] <= v11 )
            goto LABEL_44;
          v13 = 1;
          if ( 100 * v28[22] <= v11 )
            goto LABEL_44;
          v15 = 100 * v28[21];
          goto LABEL_23;
        default:
LABEL_31:
          *v4 = 2;
          FIELD_U8(a1, 6560) = 2;
          FIELD_U32(a1, 6504) = 0;
          return 6504;
      }
    }
  }
  return result;
}
