/* sub_601709B4
 * address: 0x601709B4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601709B4(int a1, int a2)
{
  int v3; // r2
  int v4; // r0

  *(_DWORD *)a1 = &off_60BD4CB8;
  FIELD_U32(a1, 44) = 1056964608;
  FIELD_U32(a1, 48) = 1128792064;
  FIELD_U32(a1, 52) = 1112014848;
  FIELD_U32(a1, 56) = 1028443341;
  FIELD_U32(a1, 60) = a2;
  memset((void *)(a1 + 64), 0, 180);
  FIELD_U32(a1, 244) = 1;
  sub_601934DC(a1 + 248);
  memset((void *)(a1 + 312), 0, 180);
  FIELD_U32(a1, 492) = -1;
  FIELD_U32(a1, 496) = -1;
  FIELD_U32(a1, 500) = -1;
  FIELD_U32(a1, 504) = -1;
  FIELD_U32(a1, 508) = -1;
  FIELD_U32(a1, 512) = -1;
  memset((void *)(a1 + 516), 0, 86);
  FIELD_U8(a1, 602) = 1;
  FIELD_U8(a1, 608) = 0;
  FIELD_U8(a1, 607) = 0;
  FIELD_U8(a1, 604) = 0;
  FIELD_U8(a1, 609) = 0;
  FIELD_U8(a1, 603) = 0;
  FIELD_U8(a1, 606) = 0;
  FIELD_U8(a1, 605) = 0;
  v3 = FIELD_U32(dword_60CC6D78, 2116);
  v4 = FIELD_U32(dword_60CC6D78, 2120);
  FIELD_U32(a1, 172) = FIELD_U32(dword_60CC6D78, 2112);
  FIELD_U32(a1, 176) = v3;
  FIELD_U32(a1, 180) = v4;
  memset((void *)(a1 + 4), 0, 40);
  return a1;
}
