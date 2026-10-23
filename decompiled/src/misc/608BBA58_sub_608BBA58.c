/* sub_608BBA58
 * address: 0x608BBA58   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BBA58(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r1
  unsigned int v5; // r6
  int v6; // r5
  unsigned int v7; // r7

  FIELD_U8(a1, 195) = a2;
  result = FIELD_U32(a1, 380);
  if ( result )
  {
    v4 = -(a2 ^ 1);
    do
    {
      v5 = FIELD_U16(result, 318);
      v6 = FIELD_U8(result, 317);
      v7 = FIELD_U16(result, 320);
      if ( v7 < v5 )
        v6 = (int)((v6 - FIELD_U8(result, 316)) * v7) / (int)v5 + FIELD_U8(result, 316);
      FIELD_U8(result, 316) = v6;
      FIELD_U8(result, 317) = v4;
      FIELD_U32(result, 318) = (unsigned __int16)((a3 + 4) / 5u);
      result = FIELD_U32(result, 368);
    }
    while ( result );
  }
  return result;
}
