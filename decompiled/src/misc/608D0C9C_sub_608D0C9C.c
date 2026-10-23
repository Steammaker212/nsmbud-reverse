/* sub_608D0C9C
 * address: 0x608D0C9C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608D0C9C(int a1, int a2)
{
  _BOOL4 v4; // r5

  if ( !FIELD_U8(a1, 32) )
    return 0;
  nn__os__LockMutex(a1 + 4);
  v4 = *(_DWORD *)(FIELD_U32(a1, 24) + 8 * a2 + 4) != FIELD_U32(a1, 24) + 8 * a2
    || *(_DWORD *)(FIELD_U32(a1, 28) + 8 * a2 + 4) != FIELD_U32(a1, 28) + 8 * a2;
  nn__os__UnlockMutex(a1 + 4);
  return v4;
}
