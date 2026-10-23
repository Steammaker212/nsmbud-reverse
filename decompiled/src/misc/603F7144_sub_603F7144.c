/* sub_603F7144
 * address: 0x603F7144   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603F7144(unsigned __int8 *a1)
{
  int v2; // r5
  int v3; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r5
  int v8; // r5
  int v9; // r5
  int v11; // r4

  v2 = sub_603F6C14(a1, 0);
  if ( v2 < sub_6040E588(0) )
    return 0;
  v3 = sub_603F6C14(a1, 1);
  if ( v3 < sub_6040E588(1) )
    return 0;
  v4 = sub_603F6C14(a1, 2);
  if ( v4 < sub_6040E588(2) )
    return 0;
  v5 = sub_603F6C14(a1, 3);
  if ( v5 < sub_6040E588(3) )
    return 0;
  v6 = sub_603F6C14(a1, 4);
  if ( v6 < sub_6040E588(4) )
    return 0;
  v7 = sub_603F6C14(a1, 5);
  if ( v7 < sub_6040E588(5) )
    return 0;
  v8 = sub_603F6C14(a1, 6);
  if ( v8 < sub_6040E588(6) )
    return 0;
  v9 = sub_603F6C14(a1, 7);
  if ( v9 < sub_6040E588(7) )
    return 0;
  v11 = sub_603F6C14(a1, 8);
  return v11 >= sub_6040E588(8);
}
