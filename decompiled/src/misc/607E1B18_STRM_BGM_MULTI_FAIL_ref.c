/* STRM_BGM_MULTI_FAIL_ref
 * address: 0x607E1B18   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall STRM_BGM_MULTI_FAIL_ref(int a1)
{
  sub_6080A1A0(SoundSystem_instance, 60);
  sub_608091A4(SoundSystem_instance, "STRM_BGM_MULTI_FAIL");
  FIELD_U8(a1, 3328) = 0;
  return StateMgr__changeState((StateMgr *)(a1 + 3368), (StateBase *)&dword_60C9F320);
}
