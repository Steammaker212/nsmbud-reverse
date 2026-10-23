/* sub_60661E28
 * address: 0x60661E28   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60661E28(int result)
{
  int *v1; // r1
  int v2; // r12
  float v3; // s0
  float *v4; // r3
  float v5; // s0
  int v6; // r3

  v1 = (int *)(result + 7168);
  v2 = FIELD_U32(result, 7168);
  v3 = FIELD_F32(result, 7160);
  v4 = (float *)(result + 7160);
  if ( (v2 & 1) == 0 )
  {
    v5 = v3 + 1.0;
    *v4 = v5;
    if ( v5 >= 3.0 )
    {
      v5 = 3.0;
      *v4 = 3.0;
      *v1 = v2 + 1;
    }
    goto LABEL_5;
  }
  v5 = v3 + -1.0;
  *v4 = v5;
  if ( v5 > 0.0 )
  {
LABEL_5:
    result = **(_DWORD **)(FIELD_U32(result, 6104) + 12);
    FIELD_F32(result, 20) = v5;
    FIELD_U32(result, 28) |= 2u;
    return result;
  }
  *v4 = 0.0;
  *v1 = v2 + 1;
  v6 = **(_DWORD **)(FIELD_U32(result, 6104) + 12);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  if ( *v1 > 3 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60CB6AB4);
  return result;
}
