/* sub_604BC9D0
 * address: 0x604BC9D0   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BC9D0(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r6
  int v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 13672;
  v3 = sub_60508FA4(a1 + 13672);
  v4 = dword_60CC6E04;
  if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + v3 + 19712) == 1 )
  {
    sub_605094EC(v2);
    v4 = dword_60CC6E04;
  }
  if ( *(_DWORD *)(FIELD_U32(v4, 40) + 4 * sub_60508FA4(v2) + 19584) )
    sub_605097CC(v2);
  sub_60502548(a1 + 564);
  FIELD_U16(a1, 1616) = 0;
  sub_6047EABC((_DWORD *)(a1 + 604));
  FIELD_U32(a1, 1592) = 0;
  FIELD_U8(a1, 1607) = 0;
  FIELD_U8(a1, 1604) = 1;
  FIELD_U8(a1, 1608) = 1;
  FIELD_U32(a1, 35568) = 0;
  FIELD_U8(a1, 35563) = 0;
  FIELD_U8(a1, 35564) = 0;
  sub_604C04C8(a1, 1);
  v7 = 4;
  sub_60502B04(a1 + 564, &v7, 1);
  v6 = 3;
  return sub_60502B04(a1 + 564, &v6, 1);
}
