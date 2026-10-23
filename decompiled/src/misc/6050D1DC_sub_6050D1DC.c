/* sub_6050D1DC
 * address: 0x6050D1DC   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050D1DC(int result, _DWORD *a2, int a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // lr
  int v6; // r1
  bool v7; // zf

  v3 = a2[4];
  v4 = a2[3];
  v5 = a2[10];
  v6 = FIELD_U32(result, 3552);
  v7 = v4 == v6;
  if ( v4 == v6 )
    v7 = v3 == FIELD_U32(result, 3556);
  if ( !v7 || v5 != FIELD_U32(result, 3564) )
  {
    FIELD_U32(result, 3552) = v4;
    FIELD_U32(result, 3556) = v3;
    FIELD_U32(result, 3560) = a3;
    FIELD_U32(result, 3564) = v5;
    FIELD_U8(result, 3568) = 1;
  }
  return result;
}
