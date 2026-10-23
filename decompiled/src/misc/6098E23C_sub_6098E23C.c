/* sub_6098E23C
 * address: 0x6098E23C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098E23C(int *a1, _DWORD *a2)
{
  int v4; // r1
  int v5; // r3

  if ( !(*(int (__fastcall **)(_DWORD *))(*a2 + 28))(a2) )
    return 0;
  v4 = a2[4];
  v5 = a2[3];
  FIELD_U32(v4, 144) = a2[2];
  FIELD_U32(v4, 148) = v5;
  sub_60959954(a1, v4);
  return 1;
}
