/* sub_602EBC58
 * address: 0x602EBC58   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602EBC58(int a1, float a2)
{
  float v3; // s6
  int result; // r0

  *(_BYTE *)(FIELD_U32(a1, 7368) + 69) = 1;
  sub_602F4044(a2);
  sub_602F4580(a1 + 7448);
  ((void (__fastcall *)(int))loc_602EF4E4)(a1);
  FIELD_U8(a1, 7532) = 9;
  if ( !FIELD_U8(a1, 7531) )
    FIELD_U32(a1, 328) = 9;
  sub_6015913C((ActiveCollider *)(a1 + 188), 32);
  v3 = (float)(FIELD_F32(a1, 7404) * 0.5) + 1.0;
  FIELD_F32(a1, 312) = (float)(FIELD_F32(a1, 7400) * 0.5) + 1.0;
  FIELD_F32(a1, 316) = v3;
  if ( FIELD_U8(a1, 6780) )
    FIELD_U32(a1, 6240) |= 0x800u;
  FIELD_U32(a1, 3192) |= 0x44000200u;
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  result = FIELD_U32(a1, 3184) | 0x40000000;
  FIELD_U32(a1, 3184) = result;
  return result;
}
