/* nn__atk__SoundArchive__GetItemLabel_const
 * address: 0x608A9A04   size: 72   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundArchive__GetItemLabel_const(int a1, int itemId)
{
  _BYTE *v3; // r0
  bool v4; // zf
  int result; // r0

  v3 = *(_BYTE **)(a1 + 8);
  v4 = v3 == 0;
  if ( v3 )
    v4 = v3[4] == 0;
  if ( v4 )
    return nn__atk__detail__SoundArchiveFileReader__GetItemLabel_const(FIELD_U32(a1, 4));
  result = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 12))(v3, itemId);
  if ( !result )
    return nn__atk__detail__SoundArchiveFileReader__GetItemLabel_const(FIELD_U32(a1, 4));
  return result;
}
