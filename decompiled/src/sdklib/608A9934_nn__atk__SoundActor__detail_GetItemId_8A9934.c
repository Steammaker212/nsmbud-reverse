/* nn__atk__SoundActor__detail_GetItemId_8A9934
 * address: 0x608A9934   size: 32   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundActor__detail_GetItemId_8A9934(int a1)
{
  if ( FIELD_U8(a1, 116) )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 16))(FIELD_U32(a1, 4));
  else
    return -1;
}
