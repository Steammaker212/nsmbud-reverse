/* sub_6074EF40
 * address: 0x6074EF40   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6074EF40(_DWORD *result)
{
  int v1; // lr
  int *v2; // r2
  int v3; // r12
  int v4; // r3
  int v5; // r1
  int v6; // lr
  float *v7; // r5
  float *v8; // r3
  float v9; // s12
  float v10; // s2
  float v11; // s6
  int v12; // r2
  bool v13; // zf

  v1 = result[3];
  result[4] = 0;
  result[5] = 1065353216;
  result[6] = 1065353216;
  result[7] = 1065353216;
  v2 = result + 1;
  v3 = result[1];
  result[2] = v3;
  v4 = 6 - v1 / 6;
  v5 = v4;
  if ( v4 >= 6 )
    v5 = 6;
  if ( v4 < 0 )
    v5 = 0;
  if ( v1 )
  {
    v6 = result[9];
    if ( v6 )
    {
      v7 = (float *)((char *)&unk_60B0A624 + 4 * v5);
      v8 = (float *)((char *)&unk_60B0A640 + 20 * v6);
      v9 = 1.0 - *v7;
      v10 = (float)(*v7 * v8[1]) + (float)(*v8 * v9);
      v11 = (float)(*v7 * v8[3]) + (float)(v9 * v8[2]);
      *((float *)result + 4) = v9 * v8[4];
      *((float *)result + 5) = v11;
      *((float *)result + 6) = v10;
      *((float *)result + 7) = v11;
    }
    if ( (v5 & 1) != 0 )
      v2 = result;
    v12 = *v2;
    v13 = v12 == 3;
    if ( v12 != 3 )
      v13 = v12 == 0;
    if ( !v13 )
      goto LABEL_20;
    if ( v3 == 3 )
    {
      if ( !*result )
      {
        v12 = 0;
LABEL_20:
        result[2] = v12;
        return result;
      }
    }
    else if ( !v3 )
    {
      result[2] = *result != 3;
      return result;
    }
    result[2] = 1;
  }
  return result;
}
