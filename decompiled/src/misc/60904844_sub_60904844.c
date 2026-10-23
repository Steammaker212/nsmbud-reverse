/* sub_60904844
 * address: 0x60904844   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60904844(int a1, int a2)
{
  int v2; // r2
  int v3; // r4

  v2 = FIELD_U32(a1, 20);
  v3 = FIELD_U32(a1, 16) - v2;
  if ( v3 >= a2 )
  {
    FIELD_U32(a1, 20) = v2 + a2;
    return a2;
  }
  else
  {
    FIELD_U32(a1, 16) = 0;
    FIELD_U32(a1, 20) = 0;
    return (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 8))(FIELD_U32(a1, 4), a2 - v3) + v3;
  }
}
