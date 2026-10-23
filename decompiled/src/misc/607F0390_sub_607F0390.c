/* sub_607F0390
 * address: 0x607F0390   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0390(int result)
{
  char v1; // r12
  _DWORD *v2; // r4
  bool v3; // zf

  v2 = *(_DWORD **)(result + 116);
  if ( v2 )
  {
    do
    {
      if ( ((unsigned int)&dword_60C8C1FC & ~(1618936796 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C1FC) )
      {
        dword_60C8C1F8 = (int)&off_60BD83BC;
        _cxa_guard_release(&dword_60C8C1FC);
      }
      if ( (*(int (__fastcall **)(_DWORD *, int *))(*v2 + 8))(v2, &dword_60C8C1F8) == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v2 + 92))(v2);
      result = v2[5];
      v3 = result == 0;
      if ( result )
      {
        v2 = *(_DWORD **)(result + 16);
        v3 = v2 == 0;
      }
    }
    while ( !v3 );
  }
  return result;
}
