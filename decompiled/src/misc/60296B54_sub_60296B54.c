/* sub_60296B54
 * address: 0x60296B54   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60296B54(int a1, ActorBuildInfo *a2)
{
  Enemy__ctor((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60BE09E4;
  memset((void *)(a1 + 6304), 0, 56);
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6360));
  FIELD_U32(a1, 6744) = 0;
  FIELD_U32(a1, 6748) = 0;
  FIELD_U8(a1, 6752) = 0;
  FIELD_U16(a1, 6672) = 0;
  FIELD_U32(a1, 6668) = 0;
  FIELD_U32(a1, 6664) = 0;
  memset((void *)(a1 + 6676), 0, 65);
  FIELD_U32(a1, 6756) = 2139095039;
  FIELD_U32(a1, 6760) = 2139095039;
  FIELD_U32(a1, 6764) = -8388609;
  FIELD_U32(a1, 6768) = -8388609;
  sub_602A8564(a1 + 6772, FIELD_U32(a1, 8));
  sub_602A40A0(a1 + 6808, FIELD_U32(a1, 8));
  FIELD_U32(a1, 6844) = off_60BE0D04;
  FIELD_U8(a1, 6848) = 0;
  FIELD_U32(a1, 6852) = 0;
  FIELD_U32(a1, 6856) = 0;
  ActiveCollider_ctor((ActiveCollider *)(a1 + 6860));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 7164));
  FIELD_U32(a1, 7468) = &ActorScaler_vtable;
  FIELD_U32(a1, 7472) = 1065353216;
  FIELD_U32(a1, 7476) = 1065353216;
  FIELD_U32(a1, 7480) = 1065353216;
  FIELD_U32(a1, 7484) = 1065353216;
  FIELD_U32(a1, 7488) = 0;
  FIELD_U32(a1, 7492) = 0;
  FIELD_U32(a1, 7496) = a1;
  FIELD_U32(a1, 6324) = 0;
  FIELD_U32(a1, 6328) = 0;
  FIELD_U32(a1, 6332) = 0;
  memset((void *)(a1 + 6676), 0, 36);
  return a1;
}
