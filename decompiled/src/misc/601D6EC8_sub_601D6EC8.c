/* sub_601D6EC8
 * address: 0x601D6EC8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D6EC8(int a1)
{
  int v2; // r1
  float v3; // r0
  int v4; // r1
  float v5; // r2
  float v6; // s8

  FIELD_U8(a1, 664) = 1;
  FIELD_U8(a1, 280) = 1;
  if ( FIELD_U32(a1, 1032) == 7 )
    v2 = 35;
  else
    v2 = 34;
  sub_601863B8(a1, v2, 0);
  v3 = FIELD_F32(a1, 80);
  FIELD_F32(a1, 944) = v3;
  v4 = FIELD_U32(a1, 84);
  FIELD_U32(a1, 948) = v4;
  v5 = FIELD_F32(a1, 88);
  FIELD_F32(a1, 952) = v5;
  v6 = v5 + (float)(FIELD_F32(a1, 124) * 10000.0);
  FIELD_F32(a1, 956) = v3 + (float)(FIELD_F32(a1, 116) * 10000.0);
  FIELD_F32(a1, 964) = v6;
  FIELD_U32(a1, 960) = v4;
  return sub_601B488C(a1, 4);
}
