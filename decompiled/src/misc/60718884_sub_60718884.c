/* sub_60718884
 * address: 0x60718884   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60718884(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C21C9C;
  if ( (_DWORD *)dword_60CBD258 == a1 )
  {
    dword_60CBD258 = 0;
    (**(void (__fastcall ***)(int))dword_60CBD25C)(dword_60CBD25C);
    dword_60CBD25C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
