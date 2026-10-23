/* sub_6016FF38
 * address: 0x6016FF38   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016FF38(int a1, float a2, float a3)
{
  float v4; // s0
  float v5; // s1
  float v6; // s0
  float v7; // s1
  float v8; // s0
  float v9; // s1
  int v10; // r1
  int result; // r0
  int v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h]
  int v14; // [sp+14h] [bp-Ch]

  sub_60833AF0(a2, a3);
  FIELD_U32(a1, 848) = v12;
  FIELD_U32(a1, 696) = v13;
  FIELD_U32(a1, 864) = v14;
  sub_60833AF0(v4, v5);
  sub_60833AF0(v6, v7);
  sub_60833AF0(v8, v9);
  v10 = FIELD_U32(a1, 1024);
  FIELD_U32(a1, 1024) = v10 + 1;
  result = 0;
  if ( v10 >= FIELD_U32(a1, 1028) )
  {
    FIELD_U8(a1, 1374) = 0;
    return 1;
  }
  return result;
}
