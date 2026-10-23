/* sub_601C4774
 * address: 0x601C4774   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601C4774(int a1)
{
  int v2; // r7
  int v3; // r6
  _BOOL4 v5; // r8
  int v6; // r0

  v2 = FIELD_U32(dword_60CC6D78, 440);
  if ( sub_6040E2A4((unsigned __int8)v2) )
    return FIELD_U8(a1, 328) == 0;
  if ( sub_6040E2CC((unsigned __int8)v2) )
    return FIELD_U8(a1, 328) == 0;
  v3 = 0;
  v5 = FIELD_U32(dword_60CC6D78, 428) == 2;
  v6 = sub_6040E300((unsigned __int8)v2);
  if ( (unsigned int)(v2 - 35) < 2 || (v6 & v5) == 1 )
    return FIELD_U8(a1, 328) == 0;
  return v3;
}
