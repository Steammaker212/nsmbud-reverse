/* sub_606A5B34
 * address: 0x606A5B34   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A5B34(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r5
  unsigned int v5; // r6
  int ResArchiveById; // r0

  FIELD_U32(a1, 492) = 1124597760;
  FIELD_U32(a1, 496) = -1022885888;
  v3 = FIELD_U32(a1, 24);
  FIELD_U32(a2, 20) = 0;
  FIELD_U32(a2, 16) = 0;
  FIELD_U32(a2, 12) = 0;
  FIELD_U32(a2, 8) = 0;
  FIELD_U32(a2, 4) = 0;
  *(_DWORD *)a2 = 0;
  v4 = ((v3 >> 8) & 0xF) + 2;
  v5 = (v3 & 0xF) + 2;
  FIELD_U32(a2, 32) = 0;
  FIELD_F32(a2, 24) = (float)(unsigned int)(16 * v4);
  FIELD_F32(a2, 28) = -(float)(16 * v5);
  FIELD_U32(a1, 6116) = FIELD_U8(a1, 23) & 3;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  sub_6063916C(a1 + 6788, ResArchiveById, v4, v5, 0.0, 3);
  return 1;
}
