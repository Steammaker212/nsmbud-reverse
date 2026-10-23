/* nn__atk__detail__SoundArchiveFile__StringBlockBody__GetString_const
 * address: 0x608B1648   size: 44   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall nn__atk__detail__SoundArchiveFile__StringBlockBody__GetString_const(int a1, int a2)
{
  bool v3; // zf
  int result; // r0

  v3 = a2 == -1;
  result = 0;
  if ( a2 != -1 )
  {
    a1 += FIELD_U32(a1, 4);
    v3 = a1 == 0;
  }
  if ( !v3 )
    return a1 + *(_DWORD *)(a1 + 12 * a2 + 8);
  return result;
}
