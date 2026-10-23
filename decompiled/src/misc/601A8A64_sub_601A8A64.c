/* sub_601A8A64
 * address: 0x601A8A64   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A8A64(int a1)
{
  float v2; // s6
  float v3; // s4
  int result; // r0
  signed int v5; // [sp+4h] [bp-1Ch] BYREF
  signed int v6; // [sp+8h] [bp-18h] BYREF
  int v7; // [sp+Ch] [bp-14h] BYREF

  FIELD_F32(a1, 88) = (float)(FIELD_F32(a1, 88) + 1600.0) + -2000.0;
  v2 = FIELD_F32(a1, 460);
  v3 = FIELD_F32(a1, 456) + 300.0;
  FIELD_F32(a1, 440) = FIELD_F32(a1, 452) + -340.0;
  FIELD_F32(a1, 444) = v3;
  FIELD_F32(a1, 448) = v2 + -200.0;
  result = sub_608332B0(a1 + 80, a1 + 440);
  FIELD_U32(a1, 472) = result;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 200) = 1100480512;
  if ( FIELD_U32(a1, 180) != result )
  {
    v7 = result;
    v6 = 0x2000000;
    v5 = 0x100000;
    sub_608322C0((int *)(a1 + 180), &v7, &v6, &v5);
    result = FIELD_U32(a1, 180);
  }
  FIELD_U32(a1, 192) = result;
  return result;
}
