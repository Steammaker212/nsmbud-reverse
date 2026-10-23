/* sub_60407A14
 * address: 0x60407A14   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60407A14(int a1)
{
  float v1; // s0
  int v2; // r2
  int v3; // r1
  int result; // r0
  int v5; // r3

  v1 = FIELD_F32(a1, 696) * 100.0;
  v2 = (int)v1;
  if ( (float)(int)v1 != v1 )
    --v2;
  if ( v1 >= 0.0 )
    v2 = (int)v1;
  v3 = FIELD_U32(a1, 532);
  result = dword_60CC6E04;
  v5 = *(_DWORD *)(FIELD_U32(dword_60CC6E04, 40) + 4 * v3 + 19584);
  if ( !v5 || v2 < v5 )
  {
    sub_60829080();
    return sub_60829F18(dword_60CC6E04);
  }
  return result;
}
