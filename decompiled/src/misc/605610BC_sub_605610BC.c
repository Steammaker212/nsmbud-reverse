/* sub_605610BC
 * address: 0x605610BC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605610BC(int a1, int a2)
{
  int v3; // r1
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r2
  float v8; // s16
  _BYTE v10[4]; // [sp+4h] [bp-24h] BYREF
  float v11; // [sp+8h] [bp-20h]

  switch ( a2 >> 16 )
  {
    case 1:
      v4 = 3;
      goto LABEL_21;
    case 2:
      goto LABEL_17;
    case 3:
      v4 = 2;
      goto LABEL_21;
    case 4:
      v5 = 1;
      FIELD_U32(a1, 32008) = 1;
      v6 = 63964;
      goto LABEL_16;
    case 5:
      if ( !dword_60CBFA90 )
        goto LABEL_12;
      if ( !dword_60CC6484 )
        goto LABEL_12;
      v7 = FIELD_U32(dword_60CBFA90, 440);
      if ( v7 < 0 )
        goto LABEL_12;
      v8 = FIELD_F32(dword_60CC6484, 128);
      sub_6075DE94(dword_60CBF354, v10, v7);
      v3 = 4;
      v4 = 7;
      if ( v8 < v11 )
        v3 = 7;
      break;
    case 6:
LABEL_12:
      v3 = 4;
      v4 = 7;
      break;
    case 7:
      v3 = 7;
      v4 = 7;
      break;
    case 8:
      v4 = 1;
      goto LABEL_21;
    case 9:
      v6 = 32008;
      v5 = 2;
LABEL_16:
      *(_DWORD *)(a1 + v6) = v5;
LABEL_17:
      v4 = 0;
      goto LABEL_21;
    case 10:
      FIELD_U32(a1, 32008) = 0;
      v4 = 8;
      goto LABEL_21;
    case 11:
      v4 = 5;
      goto LABEL_21;
    case 12:
      FIELD_U32(a1, 32008) = 2;
      FIELD_U32(a1, 63964) = 0;
      v4 = 4;
LABEL_21:
      v3 = 0;
      break;
    default:
      v3 = 3;
      v4 = 6;
      break;
  }
  FIELD_U32(a1, 68) = v4;
  FIELD_U32(a1, 72) = v3;
  FIELD_U32(a1, 32024) = v4;
  FIELD_U32(a1, 32028) = v3;
  FIELD_U32(a1, 40) = v4;
  FIELD_U32(a1, 44) = v3;
  FIELD_U8(a1, 52) = 1;
  FIELD_U32(a1, 56) = 1065353216;
  return 1065353216;
}
