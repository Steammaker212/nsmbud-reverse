/* sub_605DE130
 * address: 0x605DE130   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DE130(int a1, int a2, int a3)
{
  int v5; // r7
  int result; // r0
  bool v7; // zf

  v5 = FIELD_U32(a3, 64);
  if ( Actor__getProfileId((Actor *)v5) == 222 && FIELD_F32(a1, 124) < 0.0 )
  {
    result = FIELD_U32(a1, 6260) | 0x40000000;
    FIELD_U32(a1, 6260) = result;
  }
  else
  {
    result = FIELD_U32(a3, 136);
    v7 = result == 3;
    if ( result == 3 )
    {
      result = FIELD_U8(v5, 533);
      v7 = result == 3;
    }
    if ( v7 )
    {
      result = FIELD_U8(a1, 6262);
      if ( (result & 2) != 0 )
        JUMPOUT(0x605DE1C4);
    }
  }
  return result;
}
