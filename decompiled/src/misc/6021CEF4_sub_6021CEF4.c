/* sub_6021CEF4
 * address: 0x6021CEF4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021CEF4(int a1, float a2, float a3)
{
  float v4; // s0
  float v5; // s1
  int v6; // r5
  float v7; // s0
  float v8; // s1
  float v9; // s0
  float v10; // s1
  int v11; // r0
  int v13; // [sp+Ch] [bp-1Ch]
  int v14; // [sp+10h] [bp-18h]
  int v15; // [sp+14h] [bp-14h]

  sub_60833AF0(a2, a3);
  sub_60833AF0(v4, v5);
  v6 = 0;
  FIELD_U32(a1, 792) = 0;
  FIELD_U32(a1, 784) = v13;
  FIELD_U32(a1, 1340) = v14;
  FIELD_U32(a1, 780) = v15;
  sub_60833AF0(v7, v8);
  FIELD_U32(a1, 724) = v13;
  FIELD_U32(a1, 728) = v14;
  FIELD_U32(a1, 732) = v15;
  sub_60833AF0(v9, v10);
  FIELD_U32(a1, 700) = v13;
  FIELD_U32(a1, 704) = v14;
  FIELD_U32(a1, 708) = v15;
  v11 = FIELD_U32(a1, 860);
  FIELD_U32(a1, 860) = v11 + 1;
  if ( v11 >= FIELD_U32(a1, 864) )
  {
    v6 = 1;
    FIELD_U8(dword_60C8C188, 3230) = 0;
    FIELD_U8(a1, 1444) = FIELD_U8(a1, 1445);
    FIELD_U8(a1, 1446) = 0;
  }
  return v6;
}
