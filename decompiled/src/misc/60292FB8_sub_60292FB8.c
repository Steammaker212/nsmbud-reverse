/* sub_60292FB8
 * address: 0x60292FB8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60292FB8(int a1)
{
  int v2; // r5
  int result; // r0
  float v4; // s0
  float v5; // [sp+4h] [bp-1Ch] BYREF
  float v6; // [sp+8h] [bp-18h]
  int v7; // [sp+Ch] [bp-14h]

  sub_602918C0(a1);
  if ( FIELD_U32(a1, 7604) == -1 )
    return 1;
  v2 = 0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0;
  sub_60292D70(a1, &v5);
  result = 3;
  v4 = fabsf(v5);
  if ( v6 < 0.0 )
    result = 2;
  else
    v2 = 1;
  if ( v4 < 80.0 )
    return v2;
  return result;
}
