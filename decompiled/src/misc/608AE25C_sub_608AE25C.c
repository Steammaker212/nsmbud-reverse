/* sub_608AE25C
 * address: 0x608AE25C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608AE25C(_DWORD *a1, int *a2)
{
  int v2; // r5
  char v3; // r12
  bool v5; // zf
  int *v6; // r0

  v5 = a2 == 0;
  *a1 = 0;
  if ( a2 )
  {
    v2 = *a2;
    v5 = *a2 == 0;
  }
  if ( !v5 )
  {
    if ( ((unsigned int)&dword_60CC8D18 & ~(1619714700 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC8D18) )
    {
      dword_60CC8D14 = (int)sub_608A8728();
      _cxa_guard_release(&dword_60CC8D18);
    }
    v6 = (int *)(**(int (__fastcall ***)(int))v2)(v2);
    if ( v6 )
    {
      while ( v6 != &dword_60CC8D14 )
      {
        v6 = (int *)*v6;
        if ( !v6 )
          return a1;
      }
      *a1 = v2;
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2) == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 28))(*a1);
      *(_DWORD *)(*a1 + 436) = a1;
    }
  }
  return a1;
}
