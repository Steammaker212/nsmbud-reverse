/* sub_605D8AA8
 * address: 0x605D8AA8   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D8AA8(int a1, int a2)
{
  int v3; // r0
  int v4; // r4
  int v6; // s2

  if ( !a2 )
    return 0;
  v3 = sub_605DBDDC(a1);
  v4 = v3;
  if ( !v3 || sub_60766708(v3) )
    return 0;
  v6 = byte_60B0594C[sub_6000ADDC(v4, a2)];
  return (*(int (__fastcall **)(int, int, _DWORD, _DWORD, float, float))(*(_DWORD *)v4 + 748))(
           v4,
           1,
           0,
           0,
           0.0,
           (float)v6 + (float)v6);
}
