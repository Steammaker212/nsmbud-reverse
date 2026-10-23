/* sub_6078C444
 * address: 0x6078C444   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078C444(int a1, int a2, int a3, int a4, int a5, char a6)
{
  __int16 *v10; // r7
  signed int v11; // r1
  int v12; // r0
  __int16 v13; // r1
  __int16 v14; // r0
  int v15; // r0

  sub_607929C0(a1);
  *(_DWORD *)a1 = off_60C24A84;
  FIELD_U32(a1, 288) = a2;
  FIELD_U16(a1, 304) = 0;
  v10 = (__int16 *)(a1 + 304);
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 296) = 0;
  FIELD_U32(a1, 300) = 0;
  memset((void *)(a1 + 308), 0, 100);
  v11 = 24;
  if ( a3 == 6 )
    v11 = 33;
  sub_6040E90C(a1 + 408, v11);
  FIELD_U32(a1, 472) = 0;
  FIELD_U32(a1, 476) = a4;
  FIELD_U32(a1, 504) = 0;
  FIELD_U8(a1, 500) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 508) = dword_60CC47D0;
  FIELD_U32(a1, 512) = 1065353216;
  FIELD_U32(a1, 516) = 1065353216;
  FIELD_U32(a1, 520) = 1065353216;
  FIELD_U32(a1, 524) = 1065353216;
  FIELD_U32(a1, 528) = 0;
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U8(a1, 540) = a6;
  FIELD_U8(a1, 541) = 0;
  FIELD_U8(a1, 542) = 0;
  memset((void *)(a1 + 240), 0, 48);
  FIELD_U32(a1, 164) = a3;
  FIELD_U32(a1, 168) = a5;
  if ( a4 == -1 )
  {
    LOWORD(v12) = *v10;
    v13 = 63;
  }
  else
  {
    v12 = 1 << dword_60B0C230[a4];
    v13 = *v10;
  }
  v14 = v12 | v13;
  if ( a4 == -1 )
    a4 = 0;
  *v10 = v14;
  v15 = a4;
  if ( a4 == 9 )
    v15 = 8;
  if ( a3 == 6 )
    v15 = a4;
  FIELD_U32(a1, 472) = v15;
  return a1;
}
