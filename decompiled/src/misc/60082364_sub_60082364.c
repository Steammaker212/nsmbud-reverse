/* sub_60082364
 * address: 0x60082364   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60082364(_DWORD *a1)
{
  _BYTE *v2; // r5
  char v3; // r12
  int v4; // r5
  int v5; // r4
  char v6; // r12

  v2 = (char *)a1 + 6313;
  (*(void (__fastcall **)(_DWORD *))(*a1 + 1068))(a1);
  if ( !*v2 )
  {
    v4 = a1[1811];
    if ( v4 )
    {
      if ( ((unsigned int)&dword_60C81104 & ~(1611146160 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
      {
        dword_60C81100 = (int)&off_60BC66E8;
        _cxa_guard_release(&dword_60C81104);
      }
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C81100) == 1 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C85E94);
    }
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C84148);
    v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 374, FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C81738 & ~(1611146356 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
    {
      dword_60C81734 = (int)&off_60BC1FA8;
      _cxa_guard_release(&dword_60C81738);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81734) == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 688))(v5);
    }
  }
}
