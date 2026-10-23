/* sub_6076DEAC
 * address: 0x6076DEAC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6076DEAC(int a1)
{
  _BOOL4 result; // r0

  if ( FIELD_U8(dword_60C9A1F0, 6519) )
  {
    sub_6040B2B4(dword_60C9A1F0, FIELD_U32(dword_60C99DD4, 724));
    result = FIELD_U8(dword_60C9A1F0, 6559) == 2;
  }
  else
  {
    result = 0;
  }
  FIELD_U8(a1, 11352) = result;
  return result;
}
