/* sub_602F322C
 * address: 0x602F322C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F322C(int a1, int *a2, unsigned int a3, _DWORD *a4)
{
  int v4; // r12
  int v5; // r1
  _DWORD v7[5]; // [sp+4h] [bp-14h] BYREF

  v4 = *a2;
  v5 = a2[1];
  if ( a3 >= 0xD )
    a3 = 0;
  v7[0] = v4;
  v7[1] = v5;
  v7[2] = 1166843904;
  return sub_602F2BF8(*(_DWORD *)(a1 + 4 * a3), (int)v7, a1 + 548, FIELD_U8(a1, 560), a4);
}
