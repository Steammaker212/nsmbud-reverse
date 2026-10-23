/* sub_609ACA24
 * address: 0x609ACA24   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609ACA24(int a1)
{
  int *v1; // r4
  unsigned int v2; // r1
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r0
  int result; // r0

  v1 = (int *)(a1 + 5036);
  FIELD_U32(a1, 5036) |= 0x20000u;
  sub_609AC744((_DWORD *)(a1 - 4));
  v2 = *v1 & 0xFFFFFFFB;
  if ( *((float *)v1 - 1146) != 0.0 )
    v2 = *v1 | 4;
  v3 = v2 & 0xFFFFFFF7;
  if ( *((float *)v1 - 1142) != 1.0 )
    v3 = v2 | 8;
  v4 = v3 & 0xFFFFFFEF;
  if ( *((float *)v1 - 1138) != 1.0 )
    v4 = v3 | 0x10;
  v5 = v4 & 0xFFFFFFDF;
  if ( *((float *)v1 - 1134) != 1.0 )
    v5 = v4 | 0x20;
  v6 = v5 & 0xFFFFFF7F;
  if ( *((_BYTE *)v1 - 4504) )
    v6 = v5 | 0x80;
  v7 = v6 & 0xFFFFFEFC;
  if ( *((_BYTE *)v1 - 4520) )
    v7 = v6 | 0x100;
  result = v7 | 3;
  *v1 = result;
  return result;
}
