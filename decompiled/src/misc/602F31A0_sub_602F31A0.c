/* sub_602F31A0
 * address: 0x602F31A0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F31A0(int a1, int *a2, int a3)
{
  int v4; // r0
  int v5; // r1
  int result; // r0
  _DWORD v7[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *a2;
  v5 = a2[1];
  v7[0] = v4;
  v7[1] = v5;
  v7[2] = 1166843904;
  if ( a3 == 1 )
  {
    sub_602F2BF8(FIELD_U32(a1, 12), (int)v7, a1 + 548, FIELD_U8(a1, 560), 0);
    result = 2;
  }
  else
  {
    sub_602F2BF8(FIELD_U32(a1, 8), (int)v7, a1 + 548, FIELD_U8(a1, 560), 0);
    result = 1;
  }
  FIELD_U8(a1, 561) = result;
  return result;
}
