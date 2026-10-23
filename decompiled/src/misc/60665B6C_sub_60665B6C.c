/* sub_60665B6C
 * address: 0x60665B6C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60665B6C(int a1)
{
  int v2; // r6
  char v3; // r12
  int v4; // r5

  v2 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7652));
  v4 = 0;
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60CB6B7C & ~(1617320884 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
    {
      dword_60CB6B78 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB6B7C);
    }
    if ( (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60CB6B78) == 1 )
    {
      FIELD_U32(a1, 7240) = FIELD_U32(v2, 7240);
      return FIELD_U32(v2, 7264);
    }
  }
  return v4;
}
