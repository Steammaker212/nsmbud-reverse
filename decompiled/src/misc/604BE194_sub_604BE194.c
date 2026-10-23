/* sub_604BE194
 * address: 0x604BE194   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604BE194(int a1)
{
  int v2; // r4
  int v4; // [sp+0h] [bp-20h] BYREF
  int v5; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 564;
  sub_60502548(a1 + 564);
  FIELD_U16(a1, 1616) = 0;
  sub_6047EABC((_DWORD *)(a1 + 604));
  FIELD_U32(a1, 1592) = 4;
  FIELD_U8(a1, 1607) = 0;
  FIELD_U8(a1, 1604) = 1;
  FIELD_U8(a1, 1608) = 1;
  sub_604C04C8(a1, 1);
  v5 = 4;
  sub_60502C84(v2, &v5, 0);
  v4 = 3;
  return sub_60502C84(v2, &v4, 0);
}
