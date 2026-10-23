/* sub_609AC5E8
 * address: 0x609AC5E8   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609AC5E8(int a1, int a2)
{
  __int64 v4; // r0
  unsigned __int64 v5; // r2
  int v6; // r0
  int *v7; // r4
  int v8; // t1
  unsigned int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r0
  int result; // r0

  LODWORD(v4) = a1 + 4;
  HIDWORD(v4) = a1;
  sub_609471F4(v4, a2);
  v5 = FIELD_U64(a2, 8);
  if ( v5 == 100001 )
  {
    sub_609AB258(a1);
    v5 = FIELD_U64(a2, 8);
  }
  if ( v5 >= (unsigned int)(a1 + 4456) && v5 < (unsigned __int64)(unsigned int)(a1 + 4456) + 580 )
  {
    sub_609AD21C();
    sub_609AC744(a1);
  }
  v8 = FIELD_U32(a1, 5040);
  v7 = (int *)(a1 + 5040);
  v6 = v8;
  v9 = v8 & 0xFFFFFFFB;
  if ( *((float *)v7 - 1146) != 0.0 )
    v9 = v6 | 4;
  v10 = v9 & 0xFFFFFFF7;
  if ( *((float *)v7 - 1142) != 1.0 )
    v10 = v9 | 8;
  v11 = v10 & 0xFFFFFFEF;
  if ( *((float *)v7 - 1138) != 1.0 )
    v11 = v10 | 0x10;
  v12 = v11 & 0xFFFFFFDF;
  if ( *((float *)v7 - 1134) != 1.0 )
    v12 = v11 | 0x20;
  v13 = v12 & 0xFFFFFF7F;
  if ( *((_BYTE *)v7 - 4504) )
    v13 = v12 | 0x80;
  v14 = v13 & 0xFFFFFEFC;
  if ( *((_BYTE *)v7 - 4520) )
    v14 = v13 | 0x100;
  result = v14 | 3;
  *v7 = result;
  return result;
}
