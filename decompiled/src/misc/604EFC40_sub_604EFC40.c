/* sub_604EFC40
 * address: 0x604EFC40   size: 612   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EFC40(int a1)
{
  int v2; // r5
  int *v3; // r0
  int result; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  v2 = a1 + 46088;
  v3 = (int *)dword_60CC6D78;
  if ( FIELD_S32(dword_60CC6D78, 98488) <= 14 )
  {
    v5[0] = 1;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24623] <= 14 )
  {
    v5[0] = 2;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24624] <= 14 )
  {
    v5[0] = 3;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24625] <= 14 )
  {
    v5[0] = 4;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24626] <= 14 )
  {
    v5[0] = 5;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24627] <= 14 )
  {
    v5[0] = 6;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24628] <= 14 )
  {
    v5[0] = 7;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24629] <= 14 )
  {
    v5[0] = 8;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24630] <= 14 )
  {
    v5[0] = 9;
    sub_60502C84(v2, v5, 0);
    v3 = (int *)dword_60CC6D78;
  }
  if ( v3[24631] <= 14 )
  {
    v5[0] = 10;
    sub_60502C84(v2, v5, 0);
  }
  result = FIELD_U32(a1, 74440);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
