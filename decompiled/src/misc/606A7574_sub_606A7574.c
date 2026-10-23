/* sub_606A7574
 * address: 0x606A7574   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A7574(int a1)
{
  unsigned int v2; // r1
  int v3; // r6
  int ResArchiveById; // r0
  unsigned int v5; // r0
  _DWORD v7[8]; // [sp+8h] [bp-20h] BYREF

  FIELD_U32(a1, 116) = 1138819072;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 1852) = (v2 & 0x10) != 0;
  v3 = (v2 >> 8) & 1;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), v3);
  sub_605BF660(a1 + 648, (StageActor *)a1, ResArchiveById, v3, 0.0, 0);
  v7[0] = 1117782016;
  v7[1] = 1115684864;
  sub_6069AFA0(a1 + 1792, a1 + 108, (_DWORD *)(a1 + 492), v7, (ColliderBase *)(a1 + 656));
  FIELD_U32(a1, 1440) = a1 + 1856;
  v5 = FIELD_U32(a1, 24);
  FIELD_F32(a1, 1832) = (float)((v5 >> 20) & 0xF) * 16.0;
  FIELD_U32(a1, 1836) = dword_60AF2AF4[FIELD_U32(a1, 20) & 3];
  FIELD_U32(a1, 1840) = dword_60CB9D18[HIWORD(v5) & 3];
  FIELD_U32(a1, 160) = (int)(float)(FIELD_F32(a1, 1848) * 65536.0) << 12;
  sub_605BF968(a1 + 648);
  sub_606A7E80(a1 + 1760, 10);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1090519040;
  return 1;
}
