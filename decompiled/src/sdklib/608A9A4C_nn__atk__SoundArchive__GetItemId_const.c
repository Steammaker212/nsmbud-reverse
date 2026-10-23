/* nn__atk__SoundArchive__GetItemId_const
 * address: 0x608A9A4C   size: 72   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__SoundArchive__GetItemId_const(int a1, int a2)
{
  _BYTE *v4; // r0
  bool v5; // zf
  int result; // r0

  v4 = *(_BYTE **)(a1 + 8);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v4[4] == 0;
  if ( v5 )
    return nn__atk__detail__SoundArchiveFileReader__GetItemId_const(FIELD_U32(a1, 4), a2);
  result = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v4 + 16))(v4, a2);
  if ( result == -1 )
    return nn__atk__detail__SoundArchiveFileReader__GetItemId_const(FIELD_U32(a1, 4), a2);
  return result;
}
