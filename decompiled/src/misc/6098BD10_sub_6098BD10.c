/* sub_6098BD10
 * address: 0x6098BD10   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098BD10(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0
  int i; // r4

  v8 = sub_60482EC0(a2);
  if ( v8 )
    a3 = FIELD_U32(v8, 180);
  result = (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)a1 + 244))(a1, a2, a3, a4);
  for ( i = FIELD_U32(a2, 20); i != a2 + 16; i = FIELD_U32(i, 4) )
    result = sub_6098BD10(a1, i - 4, a3, a4);
  return result;
}
