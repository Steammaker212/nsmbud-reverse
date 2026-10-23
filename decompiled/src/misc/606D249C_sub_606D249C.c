/* sub_606D249C
 * address: 0x606D249C   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D249C(int a1)
{
  char v1; // r1

  FIELD_U8(a1, 6185) = FIELD_U16(a1, 22) & 1;
  v1 = FIELD_U8(a1, 29);
  if ( !v1 )
    v1 = FIELD_U8(a1, 28);
  FIELD_U8(a1, 6187) = v1;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
}
