/* sub_6022C144
 * address: 0x6022C144   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022C144(int a1, _DWORD *a2)
{
  int v5; // r7
  int v6; // r0
  unsigned int v7; // r0

  if ( sub_6040D4F0(a2) != 8 )
    return sub_6022C360(a1, a2);
  if ( (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
    return 0;
  v5 = sub_6040D864(a2);
  if ( sub_6040E368((unsigned __int8)v5) == 1 )
    return sub_6022C360(a1, a2);
  v6 = sub_601EAB4C(dword_60C8B144, v5);
  if ( !v6 )
    return 0;
  if ( v5 == 8 )
  {
    v7 = v6 - 1;
    if ( v7 < 4 )
      return dword_60AF2474[v7];
    return sub_6022C360(a1, a2);
  }
  if ( v6 == 1 )
    return 1;
  if ( v6 != 2 )
    return sub_6022C360(a1, a2);
  return 3;
}
