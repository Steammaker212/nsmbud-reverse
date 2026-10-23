/* sub_603BC084
 * address: 0x603BC084   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603BC084(int a1)
{
  int v2; // r5
  char v3; // r12
  _BYTE *result; // r0

  if ( !FIELD_U8(a1, 6864) )
    return (_BYTE *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C98330);
  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6868));
  if ( ((unsigned int)&dword_60C92EFC & ~(1614528720 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
  {
    dword_60C92EF8 = (int)&off_60BE9194;
    _cxa_guard_release(&dword_60C92EFC);
  }
  if ( !v2 || !(**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C92EF8) )
    return StageActor__delete((StateActor *)a1, 1);
  FIELD_U32(a1, 116) = FIELD_U32(v2, 6964);
  FIELD_U32(a1, 112) = FIELD_U32(v2, 6960);
  FIELD_U32(a1, 108) = FIELD_U32(v2, 6956);
  result = *(_BYTE **)(v2 + 160);
  FIELD_U32(a1, 160) = result;
  return result;
}
