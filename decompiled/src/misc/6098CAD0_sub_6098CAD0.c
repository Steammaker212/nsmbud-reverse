/* sub_6098CAD0
 * address: 0x6098CAD0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CAD0(int a1, int a2, int a3)
{
  int v6; // r0
  int result; // r0
  int v8; // r7
  int i; // r6

  v6 = sub_60482EC0(a2);
  if ( v6 )
    a3 = FIELD_U32(v6, 180);
  result = ((int (__fastcall *)(int, int))loc_6098E314)(a2, a3);
  v8 = a2 + 16;
  for ( i = FIELD_U32(a2, 20); i != v8; i = FIELD_U32(i, 4) )
    result = sub_6098CAD0(a1, i - 4, a3);
  return result;
}
