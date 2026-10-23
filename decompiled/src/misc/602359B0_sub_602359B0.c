/* sub_602359B0
 * address: 0x602359B0   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602359B0(int a1)
{
  float v2; // s16
  float v3; // s18
  int v4; // r0
  float v5; // s18
  int v6; // r0
  int v7; // r0
  int result; // r0

  *(_WORD *)a1 = 0;
  v2 = FIELD_F32(dword_60CC6484, 116);
  v3 = FIELD_F32(dword_60CC6484, 120);
  v4 = sub_60802830(0);
  if ( v2 == v3 )
  {
    if ( v4 )
    {
      *(_WORD *)a1 |= 1u;
      FIELD_U32(a1, 4) = 0;
    }
    if ( sub_60802830(1) )
    {
      *(_WORD *)a1 |= 2u;
      FIELD_U32(a1, 8) = 0;
    }
    if ( sub_60802830(2) )
    {
      *(_WORD *)a1 |= 4u;
      FIELD_U32(a1, 12) = 0;
    }
    result = sub_60802830(3);
    if ( result )
    {
      *(_WORD *)a1 |= 8u;
      FIELD_U32(a1, 16) = 0;
      return 0;
    }
  }
  else
  {
    v5 = v3 - v2;
    if ( v4 )
    {
      *(_WORD *)a1 |= 1u;
      FIELD_F32(a1, 4) = (float)((float)(FIELD_F32(v4, 108) + FIELD_F32(v4, 572)) - v2) / v5;
    }
    v6 = sub_60802830(1);
    if ( v6 )
    {
      *(_WORD *)a1 |= 2u;
      FIELD_F32(a1, 8) = (float)((float)(FIELD_F32(v6, 108) + FIELD_F32(v6, 572)) - v2) / v5;
    }
    v7 = sub_60802830(2);
    if ( v7 )
    {
      *(_WORD *)a1 |= 4u;
      FIELD_F32(a1, 12) = (float)((float)(FIELD_F32(v7, 108) + FIELD_F32(v7, 572)) - v2) / v5;
    }
    result = sub_60802830(3);
    if ( result )
    {
      *(_WORD *)a1 |= 8u;
      FIELD_F32(a1, 16) = (float)((float)(FIELD_F32(result, 108) + FIELD_F32(result, 572)) - v2) / v5;
    }
  }
  return result;
}
