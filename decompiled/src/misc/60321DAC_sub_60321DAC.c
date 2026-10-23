/* sub_60321DAC
 * address: 0x60321DAC   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321DAC(int result)
{
  unsigned int v1; // r1
  float v2; // s2
  float v3; // s0
  int *v4; // r2
  int v5; // r3

  v1 = FIELD_U16(result, 6322);
  if ( !FIELD_U32(result, 6312) )
  {
    if ( v1 > 0x31 )
      goto LABEL_9;
    v2 = FIELD_F32(result, 152) + 0.0078125;
    FIELD_F32(result, 152) = v2;
    v3 = FIELD_F32(result, 148);
    if ( v2 >= v3 )
      FIELD_F32(result, 152) = v3;
  }
  if ( v1 == 1 )
  {
    v4 = dword_60321E30;
    if ( (FIELD_U32(result, 24) & 0xF0) != 0 )
      v4 = &dword_60321E30[1];
    FIELD_U32(result, 116) = *v4;
  }
LABEL_9:
  v5 = -33554432;
  if ( !FIELD_U32(result, 80) )
    v5 = 0x2000000;
  FIELD_U32(result, 164) += v5;
  return result;
}
