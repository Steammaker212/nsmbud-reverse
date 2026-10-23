/* sub_601DFF20
 * address: 0x601DFF20   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DFF20(int result, int a2, int a3, int a4)
{
  float v4; // s0
  int v5; // r1

  FIELD_U8(result, 66) = 0;
  switch ( a2 )
  {
    case 2:
      FIELD_U32(result, 48) = a4;
      if ( a3 )
        goto LABEL_10;
LABEL_11:
      v5 = FIELD_U32(result, 16);
      v4 = (float)FIELD_S16(v5, 4);
      FIELD_F32(result, 36) = v4;
      a3 = FIELD_S16(v5, 4);
      goto LABEL_12;
    case 1:
      FIELD_U32(result, 48) = *(__int16 *)(FIELD_U32(result, 16) + 6);
      if ( a3 )
        goto LABEL_10;
      goto LABEL_11;
    case 0:
      FIELD_U8(result, 66) = 1;
      break;
  }
  if ( !a3 )
    goto LABEL_11;
LABEL_10:
  v4 = (float)a3;
  FIELD_F32(result, 36) = (float)a3;
  v5 = FIELD_U32(result, 16);
LABEL_12:
  FIELD_U32(result, 52) = a3;
  FIELD_U32(result, 56) = a3;
  FIELD_U16(result, 64) = 0xFFFF / a3;
  FIELD_F32(result, 40) = 360.0 / v4;
  FIELD_U32(result, 20) = 0;
  FIELD_U32(result, 44) = 0;
  FIELD_U32(result, 28) = 0;
  FIELD_U32(result, 60) = 0;
  FIELD_U32(result, 24) = *(_DWORD *)v5;
  return result;
}
