/* SE_MG_CMN_START_ref_2_helper_559D58
 * address: 0x60559D58   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_MG_CMN_START_ref_2_helper_559D58(int a1)
{
  int result; // r0

  result = FIELD_U8(a1, 3625);
  if ( !result )
  {
    sub_60473DE4((_DWORD *)(a1 + 64), 0, &dword_60CAD93C, 0);
    FIELD_U8(a1, 3625) = 1;
    return 1;
  }
  return result;
}
