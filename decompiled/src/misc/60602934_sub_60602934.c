/* sub_60602934
 * address: 0x60602934   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60602934(int a1, int a2)
{
  __int16 v4; // r1
  int v5; // r5

  StateActor_ctor((StateActor *)a1, (ActorBuildInfo *)a2);
  *(_DWORD *)a1 = off_60C0EBB4;
  FIELD_U8(a1, 6100) = *(_DWORD *)a2 & 0xF;
  FIELD_U8(a1, 6101) = ((unsigned __int8)*(_DWORD *)a2 >> 4) + 1;
  FIELD_U32(a1, 6104) = ((*(_DWORD *)a2 >> 12) & 1) == 0;
  v4 = FIELD_U16(a2, 6);
  v5 = 0;
  FIELD_U8(a1, 6108) = v4 & 0xF;
  FIELD_U8(a1, 6109) = 0;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6120) = &ActorScaler_vtable;
  FIELD_U32(a1, 6124) = 1065353216;
  FIELD_U32(a1, 6128) = 1065353216;
  FIELD_U32(a1, 6132) = 1065353216;
  FIELD_U32(a1, 6136) = 1065353216;
  FIELD_U32(a1, 6140) = 0;
  FIELD_U32(a1, 6144) = 0;
  FIELD_U32(a1, 6148) = a1;
  RectCollider_ctor((RectCollider *)(a1 + 6160));
  FIELD_U32(a1, 6160) = off_60BC30D8;
  FIELD_U32(a1, 6852) = off_60C0ECB8;
  memset((void *)(a1 + 6856), 0, 880);
  do
  {
    ActiveCollider_ctor((ActiveCollider *)(a1 + 7736 + v5));
    v5 += 304;
  }
  while ( v5 != 19456 );
  return a1;
}
