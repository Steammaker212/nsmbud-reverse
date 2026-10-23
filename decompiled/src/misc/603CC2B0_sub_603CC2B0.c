/* sub_603CC2B0
 * address: 0x603CC2B0   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CC2B0(_DWORD *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r0
  _DWORD *v5; // r1
  float v6; // s0
  int v7; // r2
  int v8; // r0

  v3 = a1 + 2971;
  result = a1[2971];
  if ( result )
  {
    if ( result == 2 )
    {
      result = 3;
      if ( a1[2966] )
        goto LABEL_20;
      result = 0;
      if ( a1[1575] == 1 )
        goto LABEL_20;
      v6 = *(float *)(**(_DWORD **)(a1[1577] + 20) + 20);
      if ( v6 < 64.0 || v6 >= 73.0 && v6 >= 66.0 )
        goto LABEL_20;
      return result;
    }
    if ( result != 1 )
      return result;
    v5 = a1 + 2970;
    v4 = a1[2970];
  }
  else
  {
    if ( dword_60C9CF0C )
      v4 = ((96 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 32;
    else
      v4 = 0;
    a1[2970] = v4;
    v5 = a1 + 2970;
    *v3 = 1;
  }
  v7 = **(_DWORD **)(a1[1577] + 20);
  if ( v4 )
  {
    v8 = v4 - 1;
    *v5 = v8;
    if ( v8 )
    {
      FIELD_U32(v7, 24) = 0;
      return (int)sub_6041838C((ModelAnimation *)(v7 + 4));
    }
  }
  FIELD_U32(v7, 24) = 1065353216;
  result = FIELD_U8(v7, 28);
  if ( (result & 0x24) != 0 )
  {
    result = 1;
LABEL_20:
    *v3 = result;
  }
  return result;
}
