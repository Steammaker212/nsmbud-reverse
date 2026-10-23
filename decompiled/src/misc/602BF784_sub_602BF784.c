/* sub_602BF784
 * address: 0x602BF784   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602BF784(int a1)
{
  int v2; // r5
  int result; // r0
  int *v4; // r0

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C9149C + 8))();
  if ( v2 != result )
  {
    v4 = &dword_60C911E8[FIELD_U8(a1, 6479)];
    FIELD_U32(a1, 6464) = *(v4 - 1);
    FIELD_U32(a1, 164) = *(v4 - 1);
    FIELD_U32(a1, 116) = -988004352;
    FIELD_U8(a1, 6482) = 3;
    FIELD_U32(a1, 6468) = 0;
    FIELD_U32(a1, 6500) = 1;
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 660))(a1);
  }
  return result;
}
