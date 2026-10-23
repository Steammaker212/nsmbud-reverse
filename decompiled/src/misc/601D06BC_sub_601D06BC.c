/* sub_601D06BC
 * address: 0x601D06BC   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D06BC(int a1)
{
  _DWORD *v1; // r4
  char v2; // r12

  v1 = (_DWORD *)ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612515060 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( !v1 || (*(int (__fastcall **)(_DWORD *, int *))*v1)(v1, &dword_60C88AAC) != 1 )
    return 0;
  while ( (*(int (__fastcall **)(_DWORD *))(*v1 + 92))(v1) != 1 || !sub_601C6AA0((int)v1) )
  {
    v1 = (_DWORD *)v1[68];
    if ( !v1 )
      return 0;
  }
  return 1;
}
