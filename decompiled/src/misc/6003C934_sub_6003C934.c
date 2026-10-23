/* sub_6003C934
 * address: 0x6003C934   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003C934(int a1)
{
  int v2; // r1

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 780))(a1, 1);
  v2 = 2;
  if ( FIELD_U8(a1, 11676) )
    v2 = 1;
  FIELD_U32(a1, 11492) = v2;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_U32(a1, 11448) = 1065353216;
  return 11448;
}
