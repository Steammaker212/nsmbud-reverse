/* sub_605E596C
 * address: 0x605E596C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E596C(int a1)
{
  int result; // r0

  FIELD_U32(a1, 6260) &= ~0x80u;
  FIELD_U32(a1, 6264) &= 0xFFFFFF7D;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 164) = 0;
  sub_605D847C((_DWORD *)a1);
  result = FIELD_U8(a1, 6805);
  if ( (result & 8) == 0 )
  {
    result = FIELD_U32(a1, 6808);
    if ( (result & 0x1000) != 0 )
    {
      return SE_OBJ_CMN_SPLASH_ref_5E4D0C(a1, 1);
    }
    else if ( (result & 0x800) != 0 )
    {
      return SE_OBJ_CMN_SPLASH_ref_5E4D0C(a1, 0);
    }
  }
  return result;
}
