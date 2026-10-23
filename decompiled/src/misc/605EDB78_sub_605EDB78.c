/* sub_605EDB78
 * address: 0x605EDB78   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605EDB78(int a1)
{
  if ( FIELD_U32(a1, 6124) && !sub_6067699C(a1) )
  {
    StageActor__delete((StateActor *)a1, 1);
    return 1;
  }
  else
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    FIELD_F32(a1, 6140) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 0xDC))(a1);
    FIELD_U32(a1, 6148) = FIELD_U32(a1, 0x6C);
    FIELD_U32(a1, 6152) = FIELD_U32(a1, 112);
    FIELD_U32(a1, 6156) = FIELD_U32(a1, 116);
    LightMask__update((LightMask *)(a1 + 6136));
    return 1;
  }
}
