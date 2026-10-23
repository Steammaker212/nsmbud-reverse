/* sub_60842130
 * address: 0x60842130   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60842130(int result, int *a2)
{
  int v2; // r4
  unsigned int v3; // r2
  int v4; // r3
  int v5; // lr
  int v6; // r12
  int v7; // r3
  int v8; // r4
  unsigned int v9; // r6
  unsigned int v10; // r4
  int v11; // r2
  int v12; // [sp+0h] [bp-1Ch]
  int v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]

  v2 = FIELD_U8(result, 16);
  if ( !FIELD_U8(result, 16)
    || FIELD_U32(result, 4)
    || !FIELD_U8(result, 17)
    || FIELD_U32(result, 8) != 1
    || !FIELD_U8(result, 18)
    || FIELD_U32(result, 12) != 2 )
  {
    v3 = *a2;
    v4 = *a2 & 0x3FF;
    v12 = v4;
    v5 = (v3 >> 10) & 0x3FF;
    v13 = v5;
    v6 = (v3 >> 20) & 0x3FF;
    v14 = v6;
    if ( v2 )
    {
      v7 = v3 & 0x3FF;
      if ( v7 == 512 )
      {
        v4 = 511;
      }
      else if ( v7 == 511 )
      {
        v4 = 512;
      }
      else
      {
        v4 = -v3 & 0x3FF;
      }
    }
    if ( FIELD_U8(result, 17) )
    {
      v8 = (v3 >> 10) & 0x3FF;
      if ( v8 == 512 )
      {
        v5 = 511;
      }
      else if ( v8 == 511 )
      {
        v5 = 512;
      }
      else
      {
        v5 = -(v3 >> 10) & 0x3FF;
      }
    }
    v9 = v3 & 0xC0000000;
    if ( FIELD_U8(result, 18) )
    {
      v10 = v3 >> 20;
      v11 = (v3 >> 20) & 0x3FF;
      if ( v11 == 512 )
      {
        v6 = 511;
      }
      else if ( v11 == 511 )
      {
        v6 = 512;
      }
      else
      {
        v6 = -v10 & 0x3FF;
      }
    }
    *(&v12 + FIELD_U32(result, 4)) = v4;
    *(&v12 + FIELD_U32(result, 8)) = v5;
    *(&v12 + FIELD_U32(result, 12)) = v6;
    result = v12 & 0x3FF | v9 | (v13 << 10) & 0xFFC00 | (v14 << 20) & 0x3FF00000;
    *a2 = result;
  }
  return result;
}
