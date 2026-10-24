/* sub_601C1228
 * address: 0x601C1228   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C1228(__n64 *a1)
{
  int v2; // r0
  int result; // r0
  float *v4; // r0
  float *v5; // r5
  float *v6; // r5
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  unsigned __int32 v11; // r0
  bool v12; // zf
  float *v13; // r0
  int v14; // s2
  int v15; // s2
  float v16; // s0
  float v17; // s6
  float v18; // s4
  float v19; // s0
  __n64 v20; // d0
  unsigned __int32 v21; // s2
  double v22; // [sp+8h] [bp-48h] BYREF
  int v23; // [sp+10h] [bp-40h]
  unsigned __int64 v24; // [sp+14h] [bp-3Ch] BYREF
  int v25; // [sp+1Ch] [bp-34h]

  v2 = a1[130].n64_i32[1];
  if ( v2 < 1 )
  {
    v4 = (float *)sub_601CF9C0(dword_60C8AEF0);
    v5 = v4;
    switch ( a1[134].n64_u32[1] )
    {
      case 0u:
        a1[134].n64_u32[1] = 1;
        sub_601BA0F8((int)a1, 3, 0.0, 0.0);
        sub_601BC2F0((int)a1, 3);
        v6 = &a1[118].n64_f32[1];
        v7 = sub_608332B0(&a1[10], &a1[118].n64_u8[4]);
        FIELD_U32(a1 + (24) * 8, 0x0)[0] = v7;
        a1[22].n64_u32[1] = v7;
        FIELD_U32(a1 + (83) * 8, 0x0)[0] = 1;
        goto LABEL_6;
      case 1u:
        v6 = &a1[118].n64_f32[1];
LABEL_6:
        ((void (__fastcall *)(__n64 *))loc_60168DF8)(a1);
        if ( sub_601C4284((float *)a1, &a1[121].n64_f32[1], v6) == 1 )
        {
          v8 = FIELD_U32(a1 + (33) * 8, 0x0)[0] | 1;
          v9 = v8 == 7;
          if ( v8 == 7 )
            v9 = FIELD_U32(a1 + (183) * 8, 0x0)[0] == 0;
          if ( v9 )
          {
            FIELD_F32(a1 + (10) * 8, 0x0)[0] = *v6;
            FIELD_U32(a1 + (10) * 8, 0x0)[1] = FIELD_U32(a1 + (119) * 8, 0x0)[0];
            FIELD_U32(a1 + (11) * 8, 0x0)[0] = FIELD_U32(a1 + (119) * 8, 0x0)[1];
            FIELD_U32(a1 + (25) * 8, 0x0)[0] = 0;
            a1[134].n64_u32[1] = 4;
            a1[130].n64_u32[1] = 10;
          }
          else
          {
            a1[134].n64_u32[1] = 2;
          }
        }
        goto LABEL_36;
      case 2u:
        a1[121].n64_u32[1] = FIELD_U32(a1 + (10) * 8, 0x0)[0];
        a1[122].n64_u32[0] = FIELD_U32(a1 + (10) * 8, 0x0)[1];
        a1[122].n64_u32[1] = FIELD_U32(a1 + (11) * 8, 0x0)[0];
        a1[118].n64_f32[1] = v4[245];
        FIELD_F32(a1 + (119) * 8, 0x0)[0] = v4[246];
        FIELD_F32(a1 + (119) * 8, 0x0)[1] = v4[247];
        v10 = sub_608332B0(&a1[10], &a1[118].n64_u8[4]);
        FIELD_U32(a1 + (24) * 8, 0x0)[0] = v10;
        a1[22].n64_u32[1] = v10;
        a1[134].n64_u32[1] = 3;
        goto LABEL_12;
      case 3u:
LABEL_12:
        if ( FIELD_U32(a1 + (183) * 8, 0x0)[0] != 4 )
          sub_601C5354(a1);
        ((void (__fastcall *)(__n64 *))loc_60168DF8)(a1);
        v11 = FIELD_U32(a1 + (183) * 8, 0x0)[0];
        v12 = v11 == 5;
        if ( v11 != 5 )
          v12 = v11 == 0;
        if ( !v12 )
        {
          v17 = v5[20] - v5[23];
          v18 = v5[22] - v5[25];
          v19 = (float)((float)((float)(v5[21] - v5[24]) * (float)(v5[21] - v5[24])) + (float)(v17 * v17))
              + (float)(v18 * v18);
          if ( v19 <= 0.00000011921 && v19 >= -0.00000011921 )
          {
            v20.n64_u64[0] = sub_601BBEB4((int)a1).n64_u64[0];
            a1[134].n64_u32[1] = 9;
            FIELD_U64(a1 + (120) * 8, 0x0)[0] = v20.n64_u64[0];
            a1[121].n64_u32[0] = v21;
          }
          goto LABEL_36;
        }
        if ( sub_601C4284((float *)a1, &a1[121].n64_f32[1], &a1[118].n64_f32[1]) != 1 )
          goto LABEL_36;
        FIELD_U32(a1 + (10) * 8, 0x0)[0] = a1[118].n64_u32[1];
        FIELD_U32(a1 + (10) * 8, 0x0)[1] = FIELD_U32(a1 + (119) * 8, 0x0)[0];
        FIELD_U32(a1 + (11) * 8, 0x0)[0] = FIELD_U32(a1 + (119) * 8, 0x0)[1];
LABEL_33:
        FIELD_U32(a1 + (25) * 8, 0x0)[0] = 0;
        goto LABEL_34;
      case 4u:
        if ( a1[130].n64_u32[1] )
        {
          if ( a1[22].n64_u32[1] == FIELD_U32(a1 + (128) * 8, 0x0)[0] )
          {
LABEL_34:
            sub_601B69E0((int)a1);
LABEL_35:
            (*(void (__fastcall **)(__n64 *))(FIELD_U32(a1, 0x0)[0] + 72))(a1);
          }
        }
        else
        {
          a1[138].n64_u32[1] |= 0x100u;
          FIELD_U32(a1 + (128) * 8, 0x0)[0] = 0;
          a1[130].n64_u32[1] = -1;
        }
LABEL_36:
        result = (*(int (__fastcall **)(__n64 *))(FIELD_U32(a1, 0x0)[0] + 68))(a1);
        if ( result == 1 )
        {
          result = 0;
          FIELD_U32(a1 + (83) * 8, 0x0)[0] = 0;
          FIELD_U32(a1 + (35) * 8, 0x0)[0] = 0;
        }
        break;
      case 5u:
        sub_601C53E0(a1);
        a1[134].n64_u32[1] = 6;
        sub_601BA0F8((int)a1, 3, 0.0, 0.0);
        sub_601BC2F0((int)a1, 3);
        FIELD_U32(a1 + (83) * 8, 0x0)[0] = 1;
        goto LABEL_24;
      case 6u:
LABEL_24:
        if ( FIELD_F32(a1 + (11) * 8, 0x0)[0] > (float)((float)(a1[122].n64_f32[1] + FIELD_F32(a1 + (119) * 8, 0x0)[1]) * 0.5) )
          sub_601C543C(a1);
        ((void (__fastcall *)(__n64 *))loc_60168DF8)(a1);
        if ( sub_601C4284((float *)a1, &a1[121].n64_f32[1], &a1[118].n64_f32[1]) != 1 )
          goto LABEL_36;
        FIELD_U32(a1 + (10) * 8, 0x0)[0] = a1[118].n64_u32[1];
        FIELD_U32(a1 + (10) * 8, 0x0)[1] = FIELD_U32(a1 + (119) * 8, 0x0)[0];
        FIELD_U32(a1 + (11) * 8, 0x0)[0] = FIELD_U32(a1 + (119) * 8, 0x0)[1];
        FIELD_U32(a1 + (25) * 8, 0x0)[0] = 0;
        sub_601B69E0((int)a1);
        sub_601C503C(a1);
        goto LABEL_35;
      case 7u:
        FIELD_U32(a1 + (137) * 8, 0x0)[0] = 2;
        v13 = (float *)sub_601E0040(&a1[135].n64_u8[4]);
        v24 = sub_601BA56C((int)a1, v13, 0).n64_u64[0];
        v25 = v14;
        v22 = sub_6019B6EC(FIELD_U32(a1 + (137) * 8, 0x0)[0]);
        v23 = v15;
        ((void (__fastcall *)(__n64 *, unsigned __int64 *, _DWORD, int, float, float, float, int, double *))loc_60185F9C)(
          a1,
          &v24,
          0,
          15,
          8.0,
          1.0 * 2.3,
          2.3 * 1.0,
          15,
          &v22);
        a1[134].n64_u32[1] = 8;
        goto LABEL_36;
      case 8u:
        if ( (*(int (__fastcall **)(__n64 *))(FIELD_U32(a1, 0x0)[0] + 120))(a1) != 1 )
          goto LABEL_36;
        sub_601C6044(a1, &a1[135].n64_u8[4]);
        goto LABEL_35;
      case 9u:
        v16 = sub_608332CC(&a1[10], &a1[120], 0.1, 10.0, 1.0);
        if ( v16 <= 0.00000011921 && v16 >= -0.00000011921 )
          goto LABEL_33;
        goto LABEL_36;
      default:
        goto LABEL_36;
    }
  }
  else
  {
    result = v2 - 1;
    a1[130].n64_u32[1] = result;
  }
  return result;
}
