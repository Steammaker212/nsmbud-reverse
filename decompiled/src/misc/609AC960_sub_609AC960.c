/* sub_609AC960
 * address: 0x609AC960   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AC960(int a1)
{
  int *v2; // r5
  unsigned int v3; // r1
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r0
  int result; // r0

  v2 = (int *)(a1 + 5040);
  FIELD_U32(a1, 5040) |= 0x20000u;
  sub_609AC744((_DWORD *)a1);
  v3 = *v2 & 0xFFFFFFFB;
  if ( FIELD_F32(a1, 456) != 0.0 )
    v3 = *v2 | 4;
  v4 = v3 & 0xFFFFFFF7;
  if ( FIELD_F32(a1, 472) != 1.0 )
    v4 = v3 | 8;
  v5 = v4 & 0xFFFFFFEF;
  if ( FIELD_F32(a1, 488) != 1.0 )
    v5 = v4 | 0x10;
  v6 = v5 & 0xFFFFFFDF;
  if ( FIELD_F32(a1, 504) != 1.0 )
    v6 = v5 | 0x20;
  v7 = v6 & 0xFFFFFF7F;
  if ( FIELD_U8(a1, 536) )
    v7 = v6 | 0x80;
  v8 = v7 & 0xFFFFFEFC;
  if ( FIELD_U8(a1, 520) )
    v8 = v7 | 0x100;
  result = v8 | 3;
  *v2 = result;
  return result;
}
