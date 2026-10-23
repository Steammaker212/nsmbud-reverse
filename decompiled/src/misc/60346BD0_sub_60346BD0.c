/* sub_60346BD0
 * address: 0x60346BD0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60346BD0(int a1)
{
  int v2; // r5

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 12892) + 8))(FIELD_U32(a1, 12892));
  if ( v2 == (*(int (**)(void))(dword_60C947CC + 8))() && FIELD_U8(a1, 7110) )
    ((void (__fastcall *)(int, _DWORD, _DWORD))loc_603453AC)(a1, FIELD_U32(a1, 80), 0);
  return Enemy__vf268((Enemy *)a1);
}
