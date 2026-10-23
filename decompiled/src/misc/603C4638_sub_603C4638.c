/* sub_603C4638
 * address: 0x603C4638   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603C4638(int a1)
{
  signed int v2; // r0
  unsigned int v3; // r7
  int v4; // r4
  unsigned int v5; // r6
  bool v6; // cc
  float *v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  unsigned int result; // r0

  FIELD_U32(a1, 14976) = -sub_6000F7B8(
                               FIELD_F32(a1, 14996) - FIELD_F32(a1, 112),
                               FIELD_F32(a1, 14992) - FIELD_F32(a1, 108))
                          ^ 0x80000000;
  v2 = FIELD_U8(a1, 27030);
  if ( (unsigned int)v2 >= 2 )
  {
    v3 = 1;
    v4 = a1 + 14964;
    do
    {
      v5 = v3 + 1;
      v6 = (int)(v3 + 1) < v2;
      v7 = (float *)(a1 + 15860);
      if ( v6 )
      {
        v8 = 0;
        if ( v5 < 0x20 )
          v8 = v3 + 1;
        v7 = (float *)(a1 + 28 * v8 + 14964);
      }
      v9 = v3 - 1;
      if ( v3 - 1 >= 0x20 )
        v9 = 0;
      v10 = -sub_6000F7B8(v7[1] - *(float *)(v4 + 28 * v9 + 4), *v7 - *(float *)(v4 + 28 * v9));
      if ( v3 >= 0x20 )
        v3 = 0;
      v11 = 7 * v3;
      v3 = v5;
      *(_DWORD *)(v4 + 4 * v11 + 12) = v10 ^ 0x80000000;
      v2 = FIELD_U8(a1, 27030);
    }
    while ( (int)v5 < v2 );
  }
  v12 = v2 - 1;
  if ( v12 >= 0x20 )
    v12 = 0;
  result = -sub_6000F7B8(
              FIELD_F32(a1, 15864) - *(float *)(a1 + 28 * v12 + 14968),
              FIELD_F32(a1, 15860) - *(float *)(a1 + 28 * v12 + 14964))
         ^ 0x80000000;
  FIELD_U32(a1, 15872) = result;
  return result;
}
