/* sub_607A57FC
 * address: 0x607A57FC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A57FC(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 9888);
  if ( v1 < 2 )
    return (*(int (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)(result + 11360) + 72))(
             FIELD_U32(result, 11360),
             0,
             FIELD_F32(result, 9884));
  if ( v1 == 2 )
    return (*(int (__fastcall **)(_DWORD, int, float))(**(_DWORD **)(result + 11360) + 72))(
             FIELD_U32(result, 11360),
             1,
             FIELD_F32(result, 9884));
  return result;
}
