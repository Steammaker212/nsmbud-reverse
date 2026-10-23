/* sub_6087D014
 * address: 0x6087D014   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087D014(int a1, int *a2, int a3, unsigned int a4)
{
  int v4; // r12
  int v5; // r12
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r1

  v4 = 0;
  if ( a2[3] && a2[2] <= a4 )
  {
    v5 = *a2;
    *(_DWORD *)a1 = *a2;
    FIELD_U16(a1, 4) = FIELD_U32(v5, 72);
    FIELD_U8(a1, 6) = a2[1];
    FIELD_U32(a1, 8) = FIELD_U32(v5, 24);
    if ( a3 )
    {
      v6 = a2[8];
      if ( v6 )
        v6 = a3 + a2[11];
      FIELD_U32(a1, 12) = v6;
      FIELD_U32(a1, 48) = v6;
      v7 = a2[4];
      if ( v7 )
        v7 = a3 + a2[7];
      FIELD_U32(a1, 16) = v7;
      FIELD_U32(a1, 52) = v7;
      v8 = a2[12];
      if ( v8 )
        v8 = a3 + a2[15];
      FIELD_U32(a1, 20) = v8;
      if ( a2[16] )
        v9 = a3 + a2[19];
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
      FIELD_U32(a1, 12) = 0;
      FIELD_U32(a1, 48) = 0;
      FIELD_U32(a1, 16) = 0;
      FIELD_U32(a1, 52) = 0;
      FIELD_U32(a1, 20) = 0;
    }
    FIELD_U32(a1, 32) = v9;
    FIELD_U16(a1, 40) = FIELD_U16(v5, 76);
    FIELD_U16(a1, 42) = -1;
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 56) = 0;
    FIELD_U32(a1, 60) = a3;
    FIELD_U32(a1, 36) = 0;
    FIELD_U32(a1, 24) = 0;
    FIELD_U32(a1, 28) = 0;
    sub_6087D120(a1);
    return 1;
  }
  return v4;
}
