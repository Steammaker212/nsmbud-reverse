/* UserInfo_createInstance
 * address: 0x6082C9F0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

UserInfo *__fastcall UserInfo_createInstance(int heap)
{
  UserInfo *this_1; // r0
  UserInfo *this; // r0

  this_1 = UserInfo_istance;
  if ( !UserInfo_istance )
  {
    this = (UserInfo *)operator_new_8DE2C8(0x18u, heap, 4);
    this_1 = (UserInfo *)sead__IDisposer__ctor(this, heap, 3u);
    FIELD_U32(this_1, 0x0).vtable = (int)off_60C2A774;
    dword_60CC6E18 = (int)this_1;
    FIELD_U8(this_1, 0x10) = 0;
    FIELD_U32(this_1, 0x14) = 0;
    UserInfo_istance = this_1;
  }
  return this_1;
}
