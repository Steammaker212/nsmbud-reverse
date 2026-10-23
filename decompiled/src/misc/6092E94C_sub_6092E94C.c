/* sub_6092E94C
 * address: 0x6092E94C   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall sub_6092E94C(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v7; // r9
  int *v8; // r5
  unsigned int v9; // r1
  int v10; // r6
  int v11; // r11
  int v12; // r2
  int v13; // r1
  bool v14; // zf
  float v15; // s0
  int v16; // r1
  unsigned int v17; // r4
  int v18; // r10
  unsigned int v19; // r2
  float v20; // s0
  int v21; // r4
  int *v22; // r0
  unsigned int *result; // r0
  bool v24; // zf
  float v25; // s0
  int v26; // r1
  int *v27; // r0
  unsigned int v28; // [sp+0h] [bp-48h]
  int (**v29)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v30; // [sp+20h] [bp-28h]

  v7 = FIELD_U32(a1, 828);
  v8 = *(int **)(a1 + 836);
  if ( FIELD_U32(a1, 824) > a3 )
    v7 += 2144 * a3;
  v9 = FIELD_U32(a1, 20) & a3;
  if ( FIELD_U32(a1, 832) > v9 )
    v8 += v9;
  v10 = *v8;
  v11 = dword_60CD09F8;
  v12 = 0;
  if ( *(_BYTE *)(*v8 + 140) )
  {
    v13 = FIELD_U32(v10, 736);
    v14 = v13 == 0;
    if ( v13 )
      v14 = FIELD_U8(v10, 28) == 0;
    if ( !v14 )
    {
      v12 = 1;
      if ( (int)FIELD_F32(v10, 284) != (FIELD_F32(v10, 284) < 0.0
                                       && (float)(int)FIELD_F32(v10, 284) != FIELD_F32(v10, 284)) )
      {
        v12 = FIELD_U8(v10, 204);
        if ( FIELD_U8(v10, 204) )
          v12 = 1;
      }
    }
  }
  v15 = FIELD_F32(v10, 284);
  v16 = (int)v15;
  if ( (float)(int)v15 != v15 )
    ++v16;
  if ( v15 < 0.0 )
    v16 = (int)v15;
  if ( v12 == 1 )
  {
    ++v16;
    v17 = a5;
    v18 = a6;
    v19 = a6;
  }
  else
  {
    v20 = FIELD_F32(v10, 724);
    v18 = a6;
    if ( v16 <= 1 )
      v16 = 1;
    v19 = (unsigned int)(float)(v20 * (float)((float)a6 * FIELD_F32(v10, 732)));
    v17 = (unsigned int)(float)((float)((float)a5 * FIELD_F32(v10, 728)) * v20);
  }
  v28 = v17;
  v21 = a4;
  if ( FIELD_U8(a1, 204) )
    v21 = 34;
  if ( a4 != 26 )
    v21 = a4;
  v29 = &sead__SafeStringBase__vtable;
  v30 = "dof_blur_mipmap";
  v22 = (int *)sub_6093E338(dword_60CD09F8, a2, &v29, v21, v28, v19, v16, 0, 0, 1, 0);
  FIELD_U32(v7, 1096) = v22;
  sub_60920EC8(v7 + 1104, v22);
  result = (unsigned int *)FIELD_U8(v10, 12);
  v24 = result == 0;
  if ( FIELD_U8(v10, 12) )
  {
    result = (unsigned int *)FIELD_U8(v10, 44);
    v24 = result == 0;
  }
  if ( !v24 && FIELD_F32(v10, 284) > 0.0 )
  {
    v29 = &sead__SafeStringBase__vtable;
    v30 = "dof_depth_mipmap";
    v25 = FIELD_F32(v10, 300);
    v26 = (int)v25;
    if ( (float)(int)v25 != v25 )
      ++v26;
    if ( v25 < 0.0 )
      v26 = (int)v25;
    v27 = (int *)sub_6093E338(v11, a2, &v29, 1, a5 / 2, v18 / 2, v26 + 1, 0, 0, 1, 0);
    FIELD_U32(v7, 1448) = v27;
    return sub_60920EC8(v7 + 1456, v27);
  }
  return result;
}
