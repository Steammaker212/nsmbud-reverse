/* sub_6069CD50
 * address: 0x6069CD50   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069CD50(int a1, int a2)
{
  unsigned int v4; // r8
  int v5; // r7
  int ResArchiveById; // r0
  int v7; // r1

  FIELD_U32(a1, 116) = 1117782016;
  v4 = ((unsigned __int16)FIELD_U32(a1, 20) >> 12) + 2;
  v5 = ((FIELD_U32(a1, 24) >> 8) & 0xF) + 2;
  FIELD_U32(a1, 492) = 1124597760;
  FIELD_U32(a1, 496) = -1022885888;
  FIELD_U32(a1, 580) = 0;
  FIELD_F32(a1, 572) = (float)(unsigned int)v5 * 8.0;
  FIELD_F32(a1, 576) = (float)v4 * -8.0;
  FIELD_U32(a1, 508) = 1139277824;
  FIELD_U32(a1, 512) = 1135083520;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_6063916C(a1 + 6768, ResArchiveById, v5, v4, 0.0, 2);
  sub_606361F8(a1 + 6768, (float *)(a1 + 108), (_DWORD *)(a1 + 156));
  *(_DWORD *)a2 = 0;
  FIELD_U32(a2, 4) = 0;
  v7 = FIELD_U32(a1, 576);
  FIELD_U32(a2, 8) = FIELD_U32(a1, 572);
  FIELD_U32(a2, 12) = v7;
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 20) = 0;
  FIELD_U32(a2, 32) = 0;
  FIELD_F32(a2, 24) = (float)(unsigned int)v5 * 16.0;
  FIELD_F32(a2, 28) = (float)v4 * -16.0;
  return 1;
}
