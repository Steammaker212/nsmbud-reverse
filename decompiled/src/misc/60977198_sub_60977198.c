/* sub_60977198
 * address: 0x60977198   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60977198(int result, int a2)
{
  unsigned int v2; // r3
  unsigned int v3; // lr
  unsigned int v4; // r3
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r3
  unsigned int v8; // r3
  unsigned int v9; // r3

  v2 = FIELD_U32(result, 76);
  v3 = FIELD_U32(result, 164);
  if ( v3 < v2 )
    FIELD_U32(result, 164) = v2;
  FIELD_U32(result, 76) = 0;
  if ( v3 < v2 )
    v3 = v2;
  v4 = FIELD_U32(result, 88);
  v5 = FIELD_U32(result, 168);
  if ( v5 < v4 )
    FIELD_U32(result, 168) = v4;
  FIELD_U32(result, 88) = 0;
  if ( v5 < v4 )
    v5 = v4;
  v6 = FIELD_U32(result, 104);
  if ( v3 < v6 )
    FIELD_U32(result, 164) = v6;
  FIELD_U32(result, 104) = 0;
  if ( v3 < v6 )
    v3 = v6;
  v7 = FIELD_U32(result, 116);
  if ( v5 < v7 )
    FIELD_U32(result, 168) = v7;
  FIELD_U32(result, 116) = 0;
  if ( v5 < v7 )
    v5 = v7;
  v8 = FIELD_U32(result, 132);
  if ( v3 < v8 )
    FIELD_U32(result, 164) = v8;
  FIELD_U32(result, 132) = 0;
  v9 = FIELD_U32(result, 144);
  if ( v5 < v9 )
    FIELD_U32(result, 168) = v9;
  FIELD_U32(result, 144) = 0;
  FIELD_U32(result, 64) = 0;
  if ( a2 )
    FIELD_U8(result, 161) = ((unsigned int)FIELD_U8(result, 161) + 1)
                             % FIELD_U8(result, 160);
  return result;
}
