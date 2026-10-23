/* sub_60734938
 * address: 0x60734938   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60734938(int a1)
{
  int result; // r0
  int v2; // t1
  int v3; // r2
  int v4; // s0
  unsigned int v5; // r3
  int *v6; // r2
  int v7; // r2
  int v8; // r1

  v2 = FIELD_U32(a1, 6776);
  result = a1 + 6776;
  v3 = *(_DWORD *)(result - 676);
  v4 = v2;
  v5 = FIELD_U32(v3, 16);
  v6 = *(int **)(v3 + 20);
  if ( v5 > 1 )
    ++v6;
  v7 = *v6;
  FIELD_F32(v7, 20) = (float)v4;
  FIELD_U32(v7, 28) |= 2u;
  v8 = **(_DWORD **)(*(_DWORD *)(result - 676) + 20);
  FIELD_F32(v8, 20) = (float)*(int *)result;
  FIELD_U32(v8, 28) |= 2u;
  *(_DWORD *)(result - 6616) = 0x80000000;
  *(_BYTE *)(result - 15) = 1;
  FIELD_U8(result, 4) = 0;
  return result;
}
