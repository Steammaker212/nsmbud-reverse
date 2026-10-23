/* sub_60583000
 * address: 0x60583000   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60583000(int a1, int a2, int a3)
{
  float v5; // r0
  float v6; // r1
  int v7; // r7
  float v8; // s16
  int *v9; // r1
  int result; // r0
  int v11; // r6
  float *v12; // r0
  float v13; // s0
  float v14; // r1
  float *v15; // r0
  float y; // r2
  int v17; // r6
  _BYTE *v18; // r0
  float x; // r1
  int v20; // r6
  _BYTE *v21; // r0
  float *v22; // r0
  float v23; // r2
  float z; // r3
  Vec3 v25[5]; // [sp+8h] [bp-40h] BYREF

  v5 = FIELD_F32(a2, 4);
  v6 = *(float *)a2;
  v7 = FIELD_U32(a2, 12);
  v25[0].y = v5;
  v25[0].x = v6;
  v8 = v6;
  AreaTask_getWrappedXPos(AreaTask_intance, v6);
  v9 = dword_60583200;
  if ( !FIELD_U8(a2, 17) )
    v9 = &dword_60583200[1];
  LODWORD(v25[0].z) = *v9;
  result = FIELD_U8(a2, 16);
  if ( FIELD_U8(a2, 16) )
  {
    if ( a3 == 3 )
    {
      v11 = 0;
      do
      {
        v12 = (float *)sub_60582BA8(result, (unsigned __int8 *)a2, v25, v11, v7, 0);
        if ( v12 )
        {
          if ( !FIELD_U8(a2, 18) )
          {
            v13 = v12[27];
            v25[0].y = v12[28];
            v14 = v12[29];
            v15 = v12 + 27;
            v25[0].z = v14;
            v25[0].x = v13 + -8.0;
            y = v25[0].y;
            *v15 = v13 + -8.0;
            v15[1] = y;
            v15[2] = v14;
          }
        }
        result = FIELD_U8(a2, 16);
        ++v11;
        v7 = v7 == 0;
      }
      while ( v11 < result );
    }
    else if ( (a3 & 1) != 0 )
    {
      v20 = 0;
      do
      {
        v21 = sub_60582BA8(result, (unsigned __int8 *)a2, v25, v20, v7, 0);
        if ( v21 && !FIELD_U8(a2, 18) )
        {
          v8 = v8 + -8.0;
          v22 = (float *)(v21 + 108);
          v25[0].x = v8;
          v23 = v25[0].y;
          z = v25[0].z;
          *v22 = v8;
          v22[1] = v23;
          v22[2] = z;
        }
        result = FIELD_U8(a2, 16);
        ++v20;
        v7 = v7 == 0;
      }
      while ( v20 < result );
    }
    else
    {
      v17 = 0;
      do
      {
        v18 = sub_60582BA8(result, (unsigned __int8 *)a2, v25, v17, v7, 0);
        if ( v18 && !FIELD_U8(a2, 18) && (a3 & 2) != 0 )
        {
          v25[0] = *(Vec3 *)(v18 + 9);
          *((_DWORD *)v18 + 29) = LODWORD(v25[0].z);
          x = v25[0].x;
          *((_DWORD *)v18 + 28) = LODWORD(v25[0].y);
          *((float *)v18 + 27) = x;
        }
        result = FIELD_U8(a2, 16);
        ++v17;
        v7 = v7 == 0;
      }
      while ( v17 < result );
    }
  }
  return result;
}
