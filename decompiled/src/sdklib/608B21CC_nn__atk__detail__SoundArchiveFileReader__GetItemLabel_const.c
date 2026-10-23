/* nn__atk__detail__SoundArchiveFileReader__GetItemLabel_const
 * address: 0x608B21CC   size: 60   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__detail__SoundArchiveFileReader__GetItemLabel_const(int a1, unsigned int a2)
{
  int ItemStringId_const; // r1

  if ( !FIELD_U32(a1, 56) )
    return 0;
  ItemStringId_const = nn__atk__detail__SoundArchiveFile__InfoBlockBody__GetItemStringId_const(
                         *(_DWORD **)(a1 + 60),
                         a2);
  if ( ItemStringId_const == -1 )
    return 0;
  else
    return nn__atk__detail__SoundArchiveFile__StringBlockBody__GetString_const(FIELD_U32(a1, 56), ItemStringId_const);
}
