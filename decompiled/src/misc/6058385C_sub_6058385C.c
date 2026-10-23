/* sub_6058385C
 * address: 0x6058385C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6058385C(int a1, int a2, int a3)
{
  float v5; // s16
  float v6; // s18
  int v7; // r7
  int *result; // r0
  float v9; // s20
  int v10; // r5
  float *v11; // r0
  float v12; // s2
  int v13; // r0
  int v14; // r5
  float *v15; // r0
  float v16; // s2
  int v17; // r0
  Vec3 v18[6]; // [sp+Ch] [bp-4Ch] BYREF

  v5 = *(float *)a2;
  v6 = FIELD_F32(a2, 4);
  v7 = FIELD_U32(a2, 12);
  AreaTask_getWrappedXPos(AreaTask_intance, *(float *)a2);
  result = dword_605839D0;
  if ( !FIELD_U8(a2, 17) )
    result = &dword_605839D0[1];
  if ( FIELD_U8(a2, 16) )
  {
    v9 = *(float *)result;
    if ( a3 )
    {
      v10 = 0;
      do
      {
        v18[0].z = v9;
        v11 = (float *)((char *)&unk_60AF29D4 + (v10 & 0xC));
        v12 = *v11 + v6;
        v18[0].x = flt_60AF29C4[v10 & 3] + v5;
        v18[0].y = v12 + 7.0;
        sub_60583754((int)v11, &v18[0].x);
        sub_60582BA8(v13, (unsigned __int8 *)a2, v18, v10, v7, 1);
        result = (int *)FIELD_U8(a2, 16);
        ++v10;
        v7 = v7 == 0;
      }
      while ( v10 < (int)result );
    }
    else
    {
      v14 = 0;
      do
      {
        v18[0].z = v9;
        v15 = (float *)((char *)&unk_60AF29D4 + (v14 & 0xC));
        v16 = *v15 + v6;
        v18[0].x = flt_60AF29C4[v14 & 3] + v5;
        v18[0].y = v16 + 7.0;
        sub_60583754((int)v15, &v18[0].x);
        sub_60582BA8(v17, (unsigned __int8 *)a2, v18, v14, v7, 1);
        result = (int *)FIELD_U8(a2, 16);
        ++v14;
      }
      while ( v14 < (int)result );
    }
  }
  return result;
}
