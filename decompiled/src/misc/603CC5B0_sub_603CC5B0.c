/* sub_603CC5B0
 * address: 0x603CC5B0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603CC5B0(_DWORD *a1, int a2, int a3)
{
  signed int result; // r0
  int ProfileId; // r1

  if ( (FIELD_U8(a2, 153) & 1) != 0 )
  {
    ProfileId = Actor__getProfileId(*(Actor **)(a3 + 64));
    result = 0;
    if ( ProfileId == 674 )
    {
      SE_EMY_DOWN_ref_3CC640(a1, a2, a3);
      return 1;
    }
  }
  else
  {
    a1[36] = 1065353216;
    a1[37] = 1065353216;
    a1[38] = 1065353216;
    return Enemy__collisionThrowableObject(a1, a2, a3);
  }
  return result;
}
