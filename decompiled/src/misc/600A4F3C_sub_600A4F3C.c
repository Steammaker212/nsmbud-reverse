/* sub_600A4F3C
 * address: 0x600A4F3C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600A4F3C(int a1)
{
  int v2; // r2
  int v3; // r0
  int v4; // r1
  signed int v5; // r0
  int v6; // r5

  ((void (*)(void))loc_600A96C0)();
  v2 = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 8660);
  v4 = FIELD_U32(a1, 8656);
  FIELD_U32(a1, 108) = v4;
  FIELD_U32(a1, 112) = v3;
  FIELD_U32(a1, 584) = v4;
  FIELD_U32(a1, 588) = v3;
  FIELD_U32(a1, 592) = v2;
  FIELD_U32(a1, 608) = v4;
  FIELD_U32(a1, 612) = v3;
  FIELD_U32(a1, 616) = v2;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 104) = 0;
  FIELD_U32(a1, 100) = 0;
  v5 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v5;
  v6 = byte_60AFE3F4[v5];
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1) * v6;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  FIELD_U16(a1, 6276) = 30;
  return 6276;
}
