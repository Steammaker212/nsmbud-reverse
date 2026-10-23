/* ActorMgr_unk
 * address: 0x60007C5C   size: 44   group: actorcore
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ActorMgr_unk(void *this, int *a2)
{
  int result; // r0

  result = *a2;
  if ( *a2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 16))(result);
    *a2 = 0;
    return 0;
  }
  return result;
}
