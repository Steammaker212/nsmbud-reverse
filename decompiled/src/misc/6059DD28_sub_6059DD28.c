/* sub_6059DD28
 * address: 0x6059DD28   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059DD28(int a1, int a2)
{
  sub_605C6990(a1, a2);
  *(_DWORD *)a1 = off_60C07ACC;
  FIELD_U32(a1, 6120) = 0;
  sub_605C6EB4(a1 + 6124, FIELD_U32(a1, 8), 1);
  RectCollider_ctor((RectCollider *)(a1 + 6424));
  FIELD_U32(a1, 6424) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(a1 + 7080));
  FIELD_U32(a1, 7080) = off_60BC30D8;
  FIELD_U32(a1, 7736) = 0;
  FIELD_U32(a1, 7740) = 0;
  FIELD_U32(a1, 7752) = 0;
  FIELD_U32(a1, 7748) = 0;
  FIELD_U32(a1, 7744) = 0;
  FIELD_U32(a1, 7756) = 0;
  FIELD_U32(a1, 7760) = FIELD_U32(a1, 20) & 7;
  FIELD_U32(a1, 7764) = 0;
  FIELD_U32(a1, 7776) = 0;
  FIELD_U32(a1, 7772) = 0;
  FIELD_U32(a1, 7768) = 0;
  memset((void *)(a1 + 7780), 0, 3040);
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7780));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8084));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8388));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8692));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 8996));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9300));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9604));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 9908));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 10212));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 10516));
  FIELD_U8(a1, 10820) = (FIELD_U32(a1, 20) & 0x300000) == 0x200000;
  FIELD_U32(a1, 10824) = 1065353216;
  return a1;
}
