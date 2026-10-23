/* sub_6040776C
 * address: 0x6040776C   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040776C(int a1)
{
  int v2; // r1
  int v3; // r8
  int v4; // lr
  int v5; // r12
  int result; // r0
  int v7; // r2
  int v8; // r5
  int v9; // r6
  int v10; // r7
  _BOOL4 v11; // r2
  _BOOL4 v12; // r5
  _BOOL4 v13; // r6
  _BOOL4 v14; // r7

  sub_60407900();
  v2 = FIELD_U32(a1, 548) / 50 + FIELD_U32(a1, 556) - 2 * FIELD_U32(a1, 560);
  FIELD_U32(a1, 564) = v2;
  v3 = FIELD_U32(a1, 584) / 50 + FIELD_U32(a1, 592) - 2 * FIELD_U32(a1, 596);
  FIELD_U32(a1, 600) = v3;
  v4 = FIELD_U32(a1, 620) / 50 + FIELD_U32(a1, 628) - 2 * FIELD_U32(a1, 632);
  FIELD_U32(a1, 636) = v4;
  v5 = FIELD_U32(a1, 656) / 50 + FIELD_U32(a1, 664) - 2 * FIELD_U32(a1, 668);
  result = -999999;
  FIELD_U32(a1, 672) = v5;
  v7 = FIELD_U8(a1, 580);
  if ( FIELD_U8(a1, 580) )
  {
    if ( v2 > -999999 )
      result = v2;
    FIELD_U8(a1, 568) = 0;
  }
  v8 = FIELD_U8(a1, 616);
  if ( FIELD_U8(a1, 616) )
  {
    if ( result < v3 )
      result = v3;
    FIELD_U8(a1, 604) = 0;
  }
  v9 = FIELD_U8(a1, 652);
  if ( FIELD_U8(a1, 652) )
  {
    if ( result < v4 )
      result = v4;
    FIELD_U8(a1, 640) = 0;
  }
  v10 = FIELD_U8(a1, 688);
  if ( FIELD_U8(a1, 688) )
  {
    if ( result < v5 )
      result = v5;
    FIELD_U8(a1, 676) = 0;
  }
  FIELD_U32(a1, 704) = result;
  v11 = v7 != 0;
  if ( v2 == result && v11 )
    FIELD_U8(a1, 568) = 1;
  v12 = v8 != 0;
  if ( v3 == result && v12 )
    FIELD_U8(a1, 604) = 1;
  v13 = v9 != 0;
  if ( v4 == result && v13 )
    FIELD_U8(a1, 640) = 1;
  v14 = v10 != 0;
  if ( v5 == result && v14 )
    FIELD_U8(a1, 676) = 1;
  return result;
}
