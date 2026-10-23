/* sub_601EAB4C
 * address: 0x601EAB4C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601EAB4C(int a1, int a2)
{
  int v2; // r2
  int v3; // r2

  if ( FIELD_U8(a1, 58) )
  {
    v2 = 1;
    if ( FIELD_U32(dword_60CC6D78, 428) == a2 )
      return v2;
  }
  v2 = 2;
  if ( (FIELD_U16(a1, 56) & (unsigned __int16)(1 << a2)) != 0 )
    return v2;
  if ( a2 != 8 )
    return 0;
  v2 = 3;
  if ( FIELD_U8(a1, 59) )
    return v2;
  v3 = 4;
  if ( !FIELD_U8(a1, 60) )
    return 0;
  return v3;
}
