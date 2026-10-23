/* sub_6073CC30
 * address: 0x6073CC30   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073CC30(int a1)
{
  unsigned int v2; // r1
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12

  v2 = FIELD_U32(a1, 8084);
  if ( !v2 )
    goto LABEL_7;
  v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
  if ( ((unsigned int)&dword_60CBE274 & ~(1618201716 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE274) )
  {
    dword_60CBE270 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60CBE274);
  }
  if ( !v3 || !(**v3)(v3, &dword_60CBE270) )
LABEL_7:
    FIELD_U8(a1, 8064) = 1;
  sub_605E398C(a1, (StateBase *)&dword_60CB1AC4);
  FIELD_U32(a1, 8008) = 0;
  FIELD_U16(a1, 8038) = 25;
  return 8038;
}
