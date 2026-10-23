/* nn__atk__detail__SoundArchiveFileReader__GetItemId_const
 * address: 0x608B21B0   size: 28   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__detail__SoundArchiveFileReader__GetItemId_const(int a1, const char *a2)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 56);
  if ( v2 )
    return sub_608B1674(v2, 1, a2);
  else
    return -1;
}
