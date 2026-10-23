/* sub_607C83A8
 * address: 0x607C83A8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C83A8(int a1)
{
  int v1; // r2
  int v2; // r1
  bool v3; // zf
  int result; // r0
  unsigned int v5; // r1

  v1 = *(_DWORD *)(FIELD_U32(a1, 11360) + 196);
  v2 = 6;
  v3 = (v1 & 1) == 0;
  if ( (v1 & 1) == 0 )
  {
    v2 = 8;
    v3 = (v1 & 0x10) == 0;
  }
  if ( !v3 )
    return v2;
  v5 = FIELD_U32(a1, 1212);
  result = (v5 >> 18) & 8 | 2;
  if ( (v5 & 0x18000) != 0 )
    return 13;
  return result;
}
