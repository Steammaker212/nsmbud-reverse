/* sub_602E11B4
 * address: 0x602E11B4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E11B4(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 64);
  if ( !v2 )
    return 0;
  FIELD_U8(a2, 110) |= 2u;
  return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 624))(v2);
}
