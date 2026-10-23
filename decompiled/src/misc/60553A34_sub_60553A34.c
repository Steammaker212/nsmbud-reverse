/* sub_60553A34
 * address: 0x60553A34   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60553A34(int a1, int a2)
{
  int v2; // r2
  __int16 v3; // r3
  int v4; // r5
  int v5; // r1
  unsigned int v6; // r3
  int *v7; // r4
  int v8; // r1
  int v9; // r2
  int v10; // r6
  int v11; // r0
  int result; // r0

  if ( FIELD_U8(a1, 32296) )
  {
    v2 = 1;
    if ( a2 < 1 )
    {
      v3 = 0;
      goto LABEL_30;
    }
  }
  else
  {
    v2 = 0;
  }
  if ( FIELD_U8(a1, 37036) )
  {
    v3 = 1;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 41776) )
  {
    v3 = 2;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 46516) )
  {
    v3 = 3;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 51256) )
  {
    v3 = 4;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 55996) )
  {
    v3 = 5;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 60736) )
  {
    v3 = 6;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  if ( FIELD_U8(a1, 65476) )
  {
    v3 = 7;
    if ( v2 >= a2 )
      goto LABEL_30;
    ++v2;
  }
  v3 = FIELD_U8(a1, 70216);
  if ( FIELD_U8(a1, 70216) )
    v3 = 8;
  if ( v2 < a2 )
    v3 = 0;
LABEL_30:
  v4 = 0;
  v5 = 4740 * v3 + a1;
  v7 = (int *)(a1 + 70248);
  v6 = FIELD_U32(a1, 70248);
  v8 = v5 + 27560;
  v9 = a1 + 70220;
  if ( v6 >= 3 )
    v6 = 0;
  *(_DWORD *)(v9 + 4 * v6) = v8;
  v10 = a1 + 17812;
  v11 = *v7;
  if ( (unsigned int)*v7 >= 3 )
    v11 = 0;
  sub_605555F0(*(_DWORD *)(v9 + 4 * v11), *(_DWORD *)(v10 + 4 * v11));
  if ( (unsigned int)*v7 < 3 )
    v4 = *v7;
  result = *(_DWORD *)(v10 + 4 * v4);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
