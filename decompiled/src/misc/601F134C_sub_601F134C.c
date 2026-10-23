/* sub_601F134C
 * address: 0x601F134C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601F134C(int a1)
{
  int v2; // r7
  int v3; // r0
  float v4; // s2
  float v5; // s16
  int v6; // r0
  float v7; // s18
  int v8; // r6
  int v9; // r9
  int v10; // r5
  int v11; // r4
  float v12; // s0
  signed int result; // r0

  v2 = 0;
  v3 = 0;
  v4 = FIELD_F32(a1, 200);
  v5 = v4 * 0.2;
  if ( v4 > (float)(v4 * 0.2) )
  {
    v6 = FIELD_U32(a1, 624);
    v7 = 0.0;
    v8 = FIELD_U32(a1, 588);
    v2 = 0;
    v9 = v6 / 4;
    v10 = v6 + v6 / 4;
    do
    {
      v11 = 0x100000000LL / v10;
      v12 = (*(float (__fastcall **)(int, int))(*(_DWORD *)a1 + 332))(a1, v10);
      v7 = v7 + 1.0;
      v2 += v8;
      v10 += v9;
      v8 = v11;
    }
    while ( v12 > v5 );
    v3 = (int)v7;
  }
  FIELD_U32(a1, 680) = v2;
  FIELD_U32(a1, 684) = v3;
  FIELD_U32(a1, 668) = 1025087898;
  FIELD_U32(a1, 656) = 1065353216;
  FIELD_U32(a1, 660) = 1065353216;
  FIELD_U32(a1, 664) = 1065353216;
  result = skl_root_ref_1F115C(a1);
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 708) = 0;
  return result;
}
