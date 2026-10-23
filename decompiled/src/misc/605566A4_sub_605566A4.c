/* sub_605566A4
 * address: 0x605566A4   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605566A4(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r0
  unsigned int result; // r0

  v1 = a1[1418];
  if ( v1 && FIELD_U8(v1, 2689) )
    FIELD_U8(v1, 2703) = 1;
  v2 = a1[1419];
  if ( v2 && FIELD_U8(v2, 2689) )
    FIELD_U8(v2, 2703) = 1;
  v3 = a1[1420];
  if ( v3 && FIELD_U8(v3, 2689) )
    FIELD_U8(v3, 2703) = 1;
  v4 = a1[1421];
  if ( v4 && FIELD_U8(v4, 2689) )
    FIELD_U8(v4, 2703) = 1;
  v5 = a1[1422];
  if ( v5 && FIELD_U8(v5, 2689) )
    FIELD_U8(v5, 2703) = 1;
  v6 = a1[1423];
  if ( v6 && FIELD_U8(v6, 2689) )
    FIELD_U8(v6, 2703) = 1;
  v7 = a1[1424];
  if ( v7 && FIELD_U8(v7, 2689) )
    FIELD_U8(v7, 2703) = 1;
  result = dword_60C99E1C;
  if ( dword_60C99E1C )
    return sub_603FE994(dword_60C99E1C);
  return result;
}
