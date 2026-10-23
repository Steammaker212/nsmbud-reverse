/* sub_60578EB4
 * address: 0x60578EB4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60578EB4(int a1)
{
  unsigned int v2; // r0

  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + -8.0;
  FIELD_U32(a1, 116) = 1141473280;
  FIELD_U32(a1, 7356) = 1090519040;
  FIELD_U32(a1, 6776) = -1056964608;
  FIELD_U32(a1, 6780) = 1098907648;
  FIELD_U32(a1, 6784) = 1090519040;
  FIELD_U32(a1, 6788) = 1065353216;
  sub_60165340(a1 + 6120, (_DWORD *)(a1 + 6776), (_DWORD *)(a1 + 6784));
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1110651699;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 7388) = 0;
  v2 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
  FIELD_U32(a1, 7484) = v2;
  FIELD_U32(a1, 7492) = dword_60AF2198[v2];
  sub_6057A4C4(a1);
  FIELD_U8(a1, 7488) = 1;
  return 7488;
}
