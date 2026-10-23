/* UserInfo_getUid
 * address: 0x6082CAD4   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall UserInfo_getUid(UserInfo *this, _DWORD *uidOut)
{
  int handle; // r2

  handle = FIELD_U32(this, 0x14);
  if ( handle )
  {
    nn__account__GetUserId(uidOut, handle);
  }
  else
  {
    *uidOut = 0;
    uidOut[1] = 0;
    uidOut[2] = 0;
    uidOut[3] = 0;
  }
}
