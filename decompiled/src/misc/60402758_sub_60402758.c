/* sub_60402758
 * address: 0x60402758   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60402758(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v12; // r5
  int v13; // r7
  int v14; // r0
  int result; // r0

  FIELD_U32(a1, 2544) = a3;
  FIELD_U32(a1, 376) = a2;
  FIELD_U32(a1, 2548) = a6;
  FIELD_U32(a1, 2552) = a7;
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 388) = 1120403456;
  FIELD_U32(a1, 392) = 0;
  FIELD_U32(a1, 396) = 0;
  FIELD_U32(a1, 400) = 0;
  FIELD_U32(a1, 404) = 1065353216;
  FIELD_U32(a1, 408) = 1065353216;
  FIELD_U32(a1, 412) = 1065353216;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 420) = 0;
  FIELD_U32(a1, 424) = 0;
  FIELD_U32(a1, 428) = 1065353216;
  FIELD_U32(a1, 432) = 1065353216;
  FIELD_U32(a1, 436) = 1065353216;
  memset((void *)(a1 + 440), 0, 36);
  FIELD_U8(a1, 2688) = 1;
  FIELD_U32(a1, 2540) = a4;
  FIELD_U32(a1, 508) = a5;
  FIELD_U32(a1, 2532) = 0;
  FIELD_U32(a1, 2572) = 0;
  sub_6045BF58(a1 + 512, 0);
  sub_6045BF58(a1 + 916, 1);
  sub_6045BF58(a1 + 1320, 2);
  sub_6045BF58(a1 + 1724, 3);
  sub_6045BF58(a1 + 2128, 4);
  FIELD_U32(a1, 180) = FIELD_U32(a1, 2540);
  v12 = FIELD_U32(a1, 2544);
  FIELD_U32(a1, 504) = a9;
  v13 = FIELD_U32(a1, 376);
  v14 = operator_new(0x10u);
  if ( v13 == 8 )
    result = sub_60794DC8(v14, a9, dword_60B0D0A8[v12], FIELD_U32(a1, 2548), FIELD_U32(a1, 2552), a10, 1, a8);
  else
    result = sub_60794B48(v14);
  FIELD_U32(a1, 16) = result;
  return result;
}
