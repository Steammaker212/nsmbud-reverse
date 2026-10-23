/* sub_605B1828
 * address: 0x605B1828   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1828(int a1, float a2)
{
  int result; // r0
  float v4; // s0

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 6968) + 8.0;
  result = sub_605B1564(a1);
  if ( !result )
  {
    result = a1 + 6792;
    v4 = FIELD_F32(a1, 6792);
    if ( v4 >= FIELD_F32(a1, 112) )
    {
      FIELD_F32(a1, 112) = v4;
      FIELD_U32(a1, 144) = 1065353216;
      FIELD_U32(a1, 148) = 1065353216;
      ((void (__fastcall *)(int))loc_605B1708)(a1);
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
