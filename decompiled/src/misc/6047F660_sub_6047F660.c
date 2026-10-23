/* sub_6047F660
 * address: 0x6047F660   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047F660(int a1)
{
  int v2; // r4

  v2 = dword_60C9EBB4;
  if ( !dword_60C9EBB4 )
  {
    v2 = operator_new_8DE2C8(0x6Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BFD32C;
    dword_60C9EBB0 = v2;
    FIELD_U32(v2, 16) = &off_60BFD360;
    FIELD_U32(v2, 20) = &off_60BFD370;
    FIELD_U32(v2, 24) = &off_60BFD394;
    FIELD_U32(v2, 28) = v2;
    FIELD_U32(v2, 32) = 0;
    StateMgr_ctor((StateMgr *)(v2 + 36), (StateExecuter *)(v2 + 20), (StateBase *)&dword_60C9EBB8);
    FIELD_U32(v2, 16) = &off_60BFD350;
    FIELD_U32(v2, 88) = 0;
    FIELD_U8(v2, 100) = 0;
    FIELD_U32(v2, 96) = 0;
    dword_60C9EBB4 = v2;
  }
  return v2;
}
