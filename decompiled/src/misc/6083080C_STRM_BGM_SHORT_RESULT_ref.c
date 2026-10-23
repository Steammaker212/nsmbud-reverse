/* STRM_BGM_SHORT_RESULT_ref
 * address: 0x6083080C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_SHORT_RESULT_ref(int a1)
{
  sub_60809028((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_SHORT_RESULT");
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CC7128);
  return 1;
}
