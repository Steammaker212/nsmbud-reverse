/* sub_6022CC88
 * address: 0x6022CC88   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6022CC88(int a1, int a2, int a3)
{
  int v5; // r0

  v5 = FIELD_U32(dword_60CC6D78, 448);
  if ( v5 == 3 )
  {
    if ( sub_6019AE00(a2, a3) )
      return 0;
  }
  else if ( v5 != 2 || sub_6019AE80(a2, a3) )
  {
    return 0;
  }
  if ( FIELD_U32(dword_60CC6D78, 428) == a2 )
    return FIELD_U32(dword_60CC6D78, 440) == a3;
  return 0;
}
