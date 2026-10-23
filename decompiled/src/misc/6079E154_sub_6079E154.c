/* sub_6079E154
 * address: 0x6079E154   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079E154(int *a1, unsigned int a2, int a3)
{
  unsigned int *v4; // r6
  int *v5; // r4
  int (__fastcall ***v6)(_DWORD, int *); // r5
  char v7; // r12

  a1[2852] = a2;
  v4 = (unsigned int *)(a1 + 2852);
  a1[3040] = a3;
  v5 = a1 + 2840;
  sub_60794694(a1[2840]);
  (*(void (__fastcall **)(int, _DWORD, float))(*(_DWORD *)*v5 + 104))(*v5, 0, 3.0);
  if ( ActorMgrRelated_getById(ActorMgr__instance + 27168, a2) )
  {
    v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, *v4);
    if ( ((unsigned int)&dword_60CB0A88 & ~(1618600424 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0A88) )
    {
      dword_60CB0A84 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60CB0A88);
    }
    if ( v6 )
    {
      if ( (**v6)(v6, &dword_60CB0A84) == 1 )
        sub_607946F4(*v5);
    }
  }
}
