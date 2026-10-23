/* sub_60860C30
 * address: 0x60860C30   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60860C30(int result, _WORD *a2)
{
  __int16 v2; // r12
  __int16 v3; // lr
  __int16 v4; // r2
  __int16 v5; // r3
  int v6; // r2
  unsigned int v7; // r1
  float v8; // s0

  v2 = a2[42];
  FIELD_U16(result, 170) = v2;
  v3 = a2[43];
  FIELD_U16(result, 172) = v3;
  v4 = a2[44];
  FIELD_U16(result, 174) = v4;
  v5 = a2[45];
  FIELD_U16(result, 176) = v5;
  if ( (unsigned __int16)(v2 | v3) | (unsigned __int16)(v4 | v5) )
    FIELD_U8(result, 214) |= 8u;
  v6 = FIELD_U8(result, 212);
  if ( v6 == 2 )
  {
    v8 = FIELD_F32(result, 56);
    FIELD_U16(result, 178) = (unsigned int)v8 - a2[47];
    FIELD_U16(result, 180) = a2[47];
    FIELD_U16(result, 182) = a2[48];
    FIELD_U16(result, 184) = a2[49];
    v7 = (unsigned __int16)a2[48];
    FIELD_F32(result, 56) = v8;
    goto LABEL_7;
  }
  if ( v6 == 1 )
  {
    FIELD_U16(result, 178) = a2[46];
    FIELD_U16(result, 180) = a2[47];
    FIELD_U16(result, 182) = a2[48];
    FIELD_U16(result, 184) = a2[49];
    v7 = (unsigned __int16)a2[48];
    FIELD_U32(result, 56) = FIELD_U32(result, 56);
LABEL_7:
    FIELD_F32(result, 60) = (float)v7;
    FIELD_U8(result, 64) |= 0x10u;
    return result;
  }
  FIELD_U16(result, 178) = a2[46];
  FIELD_U16(result, 180) = a2[47];
  FIELD_U16(result, 182) = a2[48];
  FIELD_U16(result, 184) = a2[49];
  return result;
}
