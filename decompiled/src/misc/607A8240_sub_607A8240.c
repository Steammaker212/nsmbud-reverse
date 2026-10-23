/* sub_607A8240
 * address: 0x607A8240   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A8240(int a1, int a2, int a3)
{
  int *v4; // r5
  float v5; // r1
  float v6; // s6
  float v7; // s4
  int v8; // r1
  int v9; // r2
  int v10; // r0
  float v11; // s2
  float v13[2]; // [sp+8h] [bp-28h] BYREF
  float v14[2]; // [sp+10h] [bp-20h] BYREF
  float v15[6]; // [sp+18h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 12012) )
    sub_60816D48(dword_60CC6B68, 1, a3);
  v4 = (int *)(a1 + 12016);
  v5 = FIELD_F32(a1, 12020);
  v15[0] = FIELD_F32(a1, 12016);
  v15[1] = v5;
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 576);
  v14[0] = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v14[1] = v6 + v7;
  if ( sub_60155D68(a1 + 1328, v15, v14, 15, v13) == 1 )
  {
    v8 = FIELD_U32(a1, 12020);
    v9 = *v4;
    v10 = FIELD_U32(a1, 12024);
    FIELD_U32(a1, 584) = *v4;
    FIELD_U32(a1, 588) = v8;
    FIELD_U32(a1, 592) = v10;
    FIELD_U32(a1, 608) = v9;
    FIELD_U32(a1, 612) = v8;
    FIELD_U32(a1, 616) = v10;
    v11 = v13[1] - FIELD_F32(a1, 576);
    FIELD_F32(a1, 108) = v13[0] - FIELD_F32(a1, 572);
    FIELD_F32(a1, 112) = v11;
    FIELD_U32(a1, 116) = v10;
  }
  sub_60767080((StateMgr *)a1);
  return ((int (__fastcall *)(int))loc_60763AD0)(a1);
}
