/* sub_606ABD80
 * address: 0x606ABD80   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606ABD80(int a1)
{
  int v2; // r6
  int v3; // r1
  int result; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD v8[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD v9[6]; // [sp+10h] [bp-18h] BYREF

  v2 = a1 + 108;
  sub_6069D760(a1 + 6144, a1 + 108, (_DWORD *)(a1 + 156));
  FIELD_U8(a1, 6600) = 1;
  v3 = FIELD_U32(a1, 576);
  v9[0] = FIELD_U32(a1, 572);
  v9[1] = v3;
  v8[0] = 1138753536;
  v8[1] = 1138753536;
  result = sub_6069AFA0(a1 + 6560, v2, v9, v8, (ColliderBase *)(a1 + 6192));
  if ( result == 1 )
  {
    v5 = FIELD_U32(a1, 108);
    v6 = FIELD_U32(a1, 112);
    v7 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v5;
    FIELD_U32(a1, 588) = v6;
    FIELD_U32(a1, 592) = v7;
    FIELD_U32(a1, 608) = v5;
    FIELD_U32(a1, 612) = v6;
    FIELD_U32(a1, 616) = v7;
    return sub_60160948((_DWORD *)(a1 + 6192));
  }
  return result;
}
