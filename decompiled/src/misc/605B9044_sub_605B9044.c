/* sub_605B9044
 * address: 0x605B9044   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B9044(int a1, float *a2)
{
  int v2; // r5
  int *v3; // r12
  _WORD *v4; // r2
  int v5; // r3
  int v6; // r0
  int v7; // r3
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v12; // lr
  unsigned __int16 v13; // r0

  v3 = (int *)(a1 + 61652);
  v2 = FIELD_U32(a1, 61652);
  if ( v2 < 1 )
  {
LABEL_6:
    v6 = a1 + 16;
    if ( (unsigned int)v2 >= 0x65 )
      v2 = 0;
    *(float *)(v6 + 16 * v2) = *a2;
    v7 = v6 + 16 * v2;
    FIELD_F32(v7, 4) = a2[1];
    v8 = 0;
    FIELD_F32(v7, 8) = a2[2];
    v9 = *v3;
    if ( (unsigned int)*v3 < 0x65 )
      v8 = *v3;
    v10 = v6 + 16 * v8;
    FIELD_U16(v10, 14) = 280;
    FIELD_U16(v10, 12) = 0;
    *v3 = v9 + 1;
    return 0;
  }
  else
  {
    v4 = (_WORD *)(a1 + 30);
    v5 = 0;
    while ( *(float *)(v4 - 7) != *a2 || *(float *)(v4 - 5) != a2[1] )
    {
      ++v5;
      v4 += 8;
      if ( v5 >= v2 )
        goto LABEL_6;
    }
    v12 = 2;
    v13 = *(v4 - 1) + 1;
    *(v4 - 1) = v13;
    if ( v13 > 9u )
      v12 = 3;
    if ( *v4 )
      return 1;
    return v12;
  }
}
