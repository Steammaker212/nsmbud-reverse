/* sub_6072F62C
 * address: 0x6072F62C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072F62C(int a1)
{
  int v1; // r4

  FIELD_U32(a1, 6332) = 2;
  v1 = a1 + 6300;
  sub_60794368(*(_DWORD *)(FIELD_U32(a1, 6300) + 4));
  return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(*(_DWORD *)v1 + 4) + 84))(
           *(_DWORD *)(*(_DWORD *)v1 + 4),
           200,
           1.0,
           5.0,
           0.0);
}
