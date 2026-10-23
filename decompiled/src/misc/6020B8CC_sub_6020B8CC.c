/* sub_6020B8CC
 * address: 0x6020B8CC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020B8CC(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 408);
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  result = *(_DWORD *)(sub_601CF9C0(dword_60C8AEF0) + 192);
  FIELD_U32(a1, 524) = result;
  return result;
}
