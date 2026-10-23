/* sub_60519D88
 * address: 0x60519D88   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60519D88(int result)
{
  int v1; // r12
  int v2; // r2
  int v3; // r1
  int v4; // r3
  int v5; // r3
  int v6; // lr
  int v7; // r3
  int v8; // r4
  int v9; // r2
  int v10; // r2

  v1 = 0;
  v2 = dword_60C99DEC;
  v3 = 0;
  FIELD_U32(result, 3740) = 0;
  FIELD_U32(result, 3744) = 7;
  FIELD_U32(result, 3748) = 7;
  FIELD_U8(result, 3752) = 0;
  FIELD_U32(result, 3760) = 0;
  FIELD_U32(result, 3764) = 7;
  FIELD_U32(result, 3768) = 7;
  FIELD_U8(result, 3772) = 0;
  FIELD_U32(result, 3780) = 0;
  FIELD_U32(result, 3784) = 7;
  FIELD_U32(result, 3788) = 7;
  FIELD_U8(result, 3792) = 0;
  FIELD_U32(result, 3800) = 0;
  FIELD_U32(result, 3804) = 7;
  FIELD_U32(result, 3808) = 7;
  FIELD_U8(result, 3812) = 0;
  if ( FIELD_U8(v2, 36) )
  {
    v1 = 1;
    FIELD_U32(result, 3740) = FIELD_U32(v2, 40);
    FIELD_U32(result, 3748) = FIELD_U32(v2, 48);
    FIELD_U8(result, 3752) = 1;
    v4 = FIELD_U32(v2, 52);
    if ( v4 > 2 )
      v4 = 0;
    FIELD_U32(result, 3744) = v4;
  }
  if ( FIELD_U8(v2, 108) )
  {
    FIELD_U32(result, 3760) = FIELD_U32(v2, 112);
    FIELD_U32(result, 3768) = FIELD_U32(v2, 120);
    v3 = 1;
    FIELD_U8(result, 3772) = 1;
    v5 = FIELD_U32(v2, 124);
    if ( v5 > 2 )
      v5 = 0;
    FIELD_U32(result, 3764) = v5;
  }
  v6 = 0;
  v7 = 0;
  if ( FIELD_U8(v2, 180) )
  {
    FIELD_U32(result, 3780) = FIELD_U32(v2, 184);
    FIELD_U32(result, 3788) = FIELD_U32(v2, 192);
    v7 = 1;
    FIELD_U8(result, 3792) = 1;
    v8 = FIELD_U32(v2, 196);
    if ( v8 > 2 )
      v8 = 0;
    FIELD_U32(result, 3784) = v8;
  }
  if ( FIELD_U8(v2, 252) )
  {
    v6 = 1;
    FIELD_U32(result, 3800) = FIELD_U32(v2, 256);
    FIELD_U32(result, 3808) = FIELD_U32(v2, 264);
    FIELD_U8(result, 3812) = 1;
    v9 = FIELD_U32(v2, 268);
    if ( v9 > 2 )
      v9 = 0;
    FIELD_U32(result, 3804) = v9;
  }
  v10 = 0;
  if ( v1 )
  {
    FIELD_U32(result, 3756) = 0;
    v10 = 1;
  }
  if ( v3 )
    FIELD_U32(result, 3776) = v10++;
  if ( v7 )
    FIELD_U32(result, 3796) = v10++;
  if ( v6 )
    FIELD_U32(result, 3816) = v10;
  return result;
}
