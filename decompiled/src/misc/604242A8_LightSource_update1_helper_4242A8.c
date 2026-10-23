/* LightSource_update1_helper_4242A8
 * address: 0x604242A8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall LightSource_update1_helper_4242A8(void *a1, StateBase *a2)
{
  *((_DWORD *)a1 + 1) = a2;
  *((_DWORD *)a1 + 18) = a2;
  *((_DWORD *)a1 + 21) = 0;
  *((_DWORD *)a1 + 22) = 0x3F800000;
  StateMgr__changeState((StateMgr *)a1 + 8, (StateBase *)&dword_60C9BB74);
  *((_DWORD *)a1 + 36) = a2;
  *((_DWORD *)a1 + 39) = 0;
  *((_DWORD *)a1 + 40) = 0x3F800000;
  return StateMgr__changeState((StateMgr *)((char *)a1 + 200), (StateBase *)&dword_60C9BB74);
}
