/* sub_601EAA9C
 * address: 0x601EAA9C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601EAA9C(int a1, int a2)
{
  int v2; // r4
  _BYTE *v3; // r6
  int v4; // r7
  int v5; // r5
  int v7; // r0

  if ( a2 != -1 )
    v2 = 0;
  v3 = (_BYTE *)dword_60CC6D78;
  if ( a2 != -1 && FIELD_U32(dword_60CC6D78, 412) != a2 )
    return v2;
  v4 = FIELD_U32(dword_60CC6D78, 32);
  v5 = (unsigned __int8)FIELD_U32(dword_60CC6D78, 424);
  v2 = 0;
  if ( sub_6040E368(v5) )
    return v2;
  if ( sub_6040E460(v5) )
    return v2;
  v7 = sub_6040E404(v5);
  if ( v4 == 1 || v7 || !v3[509] || (v3[44] & 8) != 0 )
    return v2;
  else
    return v3[109032] == 0;
}
