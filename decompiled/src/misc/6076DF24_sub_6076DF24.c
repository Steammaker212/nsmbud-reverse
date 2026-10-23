/* sub_6076DF24
 * address: 0x6076DF24   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076DF24(int a1)
{
  int result; // r0

  result = dword_60C99DD4;
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    if ( FIELD_U8(a1, 11352) )
    {
      FIELD_U32(a1, 1224) |= 0x20000000u;
      sub_603FBAB8(result);
      return sub_6078A9F8(PlayerMgr_instance);
    }
    else
    {
      return sub_603FBAD0(dword_60C99DD4);
    }
  }
  return result;
}
