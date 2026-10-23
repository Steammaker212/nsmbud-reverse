/* sub_60661B90
 * address: 0x60661B90   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60661B90(int result)
{
  int *v1; // r1
  int v2; // r2
  float v3; // s2
  float v4; // s0
  float *v5; // r3
  float v6; // s0
  float v7; // s2
  int v8; // r2

  v1 = (int *)(result + 7168);
  v2 = FIELD_U32(result, 7168);
  v3 = FIELD_F32(result, 7160);
  v4 = FIELD_F32(result, 7164);
  v5 = (float *)(result + 7160);
  if ( (v2 & 1) == 0 )
  {
    v6 = v4 + -3.0;
    v7 = v3 + -1.0;
    *v5 = v7;
    if ( v7 <= v6 )
    {
      v7 = v6;
      *v5 = v6;
      *v1 = v2 + 1;
    }
    goto LABEL_5;
  }
  v7 = v3 + 1.0;
  *v5 = v7;
  if ( v7 < v4 )
  {
LABEL_5:
    result = **(_DWORD **)(FIELD_U32(result, 6104) + 12);
    FIELD_F32(result, 20) = v7;
    FIELD_U32(result, 28) |= 2u;
    return result;
  }
  *v5 = v4;
  *v1 = v2 + 1;
  v8 = **(_DWORD **)(FIELD_U32(result, 6104) + 12);
  FIELD_F32(v8, 20) = v4;
  FIELD_U32(v8, 28) |= 2u;
  if ( *v1 > 3 )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60CB6A34);
  return result;
}
