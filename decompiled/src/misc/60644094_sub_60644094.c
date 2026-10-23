/* sub_60644094
 * address: 0x60644094   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60644094(int a1, float a2)
{
  float v3; // s0
  int v4; // r0
  int v5; // r1
  int v6; // r2

  v3 = CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  ((void (__fastcall *)(int, float))loc_60643ECC)(a1, v3);
  if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6136))
    && ((int (__fastcall *)(int, int))loc_6069B070)(a1 + 6584, a1 + 108) == 1 )
  {
    v4 = FIELD_U32(a1, 108);
    v5 = FIELD_U32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v4;
    FIELD_U32(a1, 588) = v5;
    FIELD_U32(a1, 592) = v6;
    FIELD_U32(a1, 608) = v4;
    FIELD_U32(a1, 612) = v5;
    FIELD_U32(a1, 616) = v6;
    sub_60160948((_DWORD *)(a1 + 6136));
  }
  return SolidOnTopCollider_execute((ColliderBase *)(a1 + 6136));
}
