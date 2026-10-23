/* sub_60989140
 * address: 0x60989140   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60989140(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v7; // r1
  int v8; // r6
  int v9; // r0

  a3[1] = a5;
  v7 = FIELD_U16(a2, 8);
  v8 = *a3;
  if ( v7 == 0xFFFF )
    v9 = a1[3];
  else
    v9 = sub_60986B34(a1[12], v7);
  FIELD_U32(v8, 40) = v9;
  a1[4] = *(_DWORD *)(*a3 + 40);
  return 0;
}
