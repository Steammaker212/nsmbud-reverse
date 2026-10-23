/* sub_607C37C0
 * address: 0x607C37C0   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C37C0(int a1, int a2, double a3, double a4, float32x2_t a5)
{
  int result; // r0
  float v8; // s16
  float v9; // s0
  float v10; // s2
  int v11; // r0
  float v12; // s26
  int v13; // r7
  float v14; // s28
  float v15; // s22
  float v16; // s0
  float v17; // s0
  float v18; // s2
  int v19; // r0
  float v20; // s0
  int v21; // r0
  int v22; // r1
  int v23; // r1
  int v24; // r0
  int v25; // r0
  int v26; // r1
  TileCheck_Result v27; // [sp+0h] [bp-88h] BYREF
  float v28; // [sp+2Ch] [bp-5Ch] BYREF
  float v29; // [sp+30h] [bp-58h]
  int v30; // [sp+34h] [bp-54h]

  FIELD_U32(a1, 1220) |= 0x400u;
  result = FIELD_U8(a1, 1228);
  if ( (result & 0x40) == 0 )
  {
    v8 = (float)((float)FIELD_S32(a1, 6988) * 180.0) / 2147500000.0;
    if ( v8 != 0.0 )
    {
      v9 = FIELD_F32(a1, 112);
      v10 = FIELD_F32(a1, 108);
      v11 = FIELD_U32(a1, 116);
      v27.field_C = 0;
      v27.field_10 = 0;
      v29 = v9 + 8.0;
      v30 = v11;
      v28 = v10 + 4.0;
      v12 = 0.0;
      v13 = 0;
      v14 = 0.0;
      v15 = 0.0;
      if ( sub_601559B8(a1 + 1328, &v28, &v27, 16.0) == 1 )
      {
        v13 = 1;
        v14 = (float)((float)v27.field_C * 180.0) / 2147500000.0;
        v15 = v14 + 0.0;
      }
      v16 = FIELD_F32(a1, 108);
      v27.field_C = 0;
      v27.field_10 = 0;
      v28 = v16 + -4.0;
      if ( sub_601559B8(a1 + 1328, &v28, &v27, 16.0) )
      {
        ++v13;
        v12 = (float)((float)v27.field_C * 180.0) / 2147500000.0;
        v15 = v15 + v12;
      }
      if ( v14 != v12 )
      {
        v17 = FIELD_F32(a1, 112);
        v18 = FIELD_F32(a1, 108);
        v19 = FIELD_U32(a1, 116);
        v27.field_C = 0;
        v27.field_10 = 0;
        v29 = v17 + 8.0;
        v30 = v19;
        v28 = v18 + 1.0;
        if ( sub_601559B8(a1 + 1328, &v28, &v27, 16.0) == 1 )
        {
          ++v13;
          v15 = v15 + (float)((float)((float)v27.field_C * 180.0) / 2147500000.0);
        }
        v20 = FIELD_F32(a1, 108);
        v27.field_C = 0;
        v27.field_10 = 0;
        v28 = v20 + -1.0;
        if ( sub_601559B8(a1 + 1328, &v28, &v27, 16.0) )
        {
          ++v13;
          v15 = v15 + (float)((float)((float)v27.field_C * 180.0) / 2147500000.0);
        }
      }
      if ( v13 )
        v8 = v15 / (float)v13;
    }
    if ( v8 == 0.0 && !FIELD_U8(a1, 12052) )
    {
      v25 = a1 + 11356;
      v26 = dword_60AF22A8[FIELD_U32(a1, 80)];
      if ( a2 == 1 )
        return PlayerBase_dispatchVirtual3(v25, v26, 0.0);
      else
        return sub_60794954(v25, v26, 0.0, 0.0);
    }
    else
    {
      a5.n64_u32[0] = 0;
      v21 = FIELD_U32(a1, 11360);
      v22 = FIELD_U32(a1, 80);
      *(float *)&a3 = 70.0 - (float)(v8 * flt_60B0A898[v22]);
      LODWORD(a4) = 1124859904;
      v23 = dword_60AF22A0[v22];
      LODWORD(a4) = vmin_f32(vmax_f32(*(float32x2_t *)&a3, a5), *(float32x2_t *)&a4).n64_u32[0];
      if ( FIELD_U32(v21, 28) == v23 )
      {
        sub_60793D24(v21, *(float *)&a4);
      }
      else
      {
        v24 = a1 + 11356;
        if ( a2 == 1 )
          PlayerBase_dispatchVirtual3(v24, v23, *(float *)&a4);
        else
          sub_60794954(v24, v23, 0.0, *(float *)&a4);
      }
      *(_DWORD *)(FIELD_U32(a1, 11360) + 208) |= 0x200u;
      result = 12052;
      FIELD_U8(a1, 12052) = 1;
    }
  }
  return result;
}
