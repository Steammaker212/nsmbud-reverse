/* sub_60403BD4
 * address: 0x60403BD4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60403BD4(int a1)
{
  int v2; // r0

  FIELD_U32(a1, 476) = 0;
  FIELD_U32(a1, 480) = 0;
  FIELD_U32(a1, 484) = 0;
  FIELD_U32(a1, 488) = 0;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 404) = 1065353216;
  FIELD_U32(a1, 408) = 1065353216;
  FIELD_U32(a1, 412) = 1065353216;
  v2 = FIELD_U32(a1, 16);
  if ( v2 )
    (*(void (__fastcall **)(_DWORD, _DWORD, float, float, float))(**(_DWORD **)(v2 + 4) + 84))(
      FIELD_U32(v2, 4),
      0,
      1.2,
      10.0,
      0.0);
  FIELD_U32(a1, 2556) = 0;
  FIELD_U32(a1, 2568) = 0;
  FIELD_U32(a1, 2572) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 468) = 0;
  FIELD_U32(a1, 472) = 0;
  if ( FIELD_U32(a1, 376) != 8 )
    sub_6078E608(*(_DWORD *)(FIELD_U32(a1, 16) + 12), FIELD_U32(a1, 504));
  FIELD_U32(a1, 2684) = 0;
  FIELD_U8(a1, 2706) = 0;
  FIELD_U32(a1, 2564) = 0;
  FIELD_U32(a1, 2584) = 0;
  FIELD_U32(a1, 2576) = 0;
  return 0;
}
