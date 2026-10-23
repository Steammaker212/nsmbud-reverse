/* sub_6042C4DC
 * address: 0x6042C4DC   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042C4DC(int a1, void *a2, _DWORD *a3)
{
  int v4; // r3
  int v5; // r5
  int v6; // r5
  float v7; // s2
  float v8; // s2
  float v9; // s0

  v4 = a3[1];
  v5 = a3[2];
  FIELD_U32(a1, 1772) = *a3;
  FIELD_U32(a1, 1776) = v4;
  FIELD_U32(a1, 1780) = v5;
  v6 = a1 + 16;
  v7 = (float)(unsigned int)a3[1];
  FIELD_F32(a1, 1712) = (float)(unsigned int)*a3;
  FIELD_F32(a1, 1716) = v7;
  v8 = (float)(unsigned int)a3[1];
  v9 = (float)(unsigned int)*a3;
  FIELD_U32(a1, 1720) = 0;
  FIELD_U32(a1, 1724) = 0;
  FIELD_F32(a1, 1728) = v9;
  FIELD_F32(a1, 1732) = v8;
  sub_6040F984(a1 + 16, a2);
  return sub_6040FB34(v6, a2);
}
