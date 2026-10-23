/* sub_601D05D4
 * address: 0x601D05D4   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D05D4(int a1)
{
  int v1; // r4
  char v2; // r12

  v1 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 20));
  if ( ((unsigned int)&dword_60C88AB0 & ~(1612514828 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AB0) )
  {
    dword_60C88AAC = (int)&off_60BD4BBC;
    _cxa_guard_release(&dword_60C88AB0);
  }
  if ( !v1 || (**(int (__fastcall ***)(int, int *))v1)(v1, &dword_60C88AAC) != 1 )
    return 0;
  while ( (FIELD_U32(v1, 264) | 1) != 7 )
  {
    v1 = FIELD_U32(v1, 272);
    if ( !v1 )
      return 0;
  }
  return v1;
}
