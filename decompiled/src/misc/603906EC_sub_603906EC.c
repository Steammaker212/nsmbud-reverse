/* sub_603906EC
 * address: 0x603906EC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_603906EC(int a1)
{
  _BYTE *result; // r0
  char v3; // r12
  _DWORD *v4; // r5
  ActorBuildInfo v5; // [sp+4h] [bp-3Ch] BYREF

  memset(&v5.settings2, 0, 40);
  v5.position = *(Vec3 *)(a1 + 108);
  v5.settings1 = FIELD_U32(a1, 80);
  v5.field_20 = FIELD_U8(a1, 86);
  v5.profile = Profile__get(0x286u);
  result = ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
  v4 = result;
  if ( result )
  {
    FIELD_U32(a1, 6364) = *((_DWORD *)result + 2);
    if ( ((unsigned int)&dword_60C88164 & ~(1614350212 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C88164) )
    {
      dword_60C88160 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C88164);
    }
    result = (_BYTE *)(*(int (__fastcall **)(_DWORD *, int *))*v4)(v4, &dword_60C88160);
    if ( result == (_BYTE *)1 )
    {
      v4[1603] = FIELD_U32(a1, 8);
      return (_BYTE *)(*(int (__fastcall **)(_DWORD *))(*v4 + 632))(v4);
    }
  }
  return result;
}
