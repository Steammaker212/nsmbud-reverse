/* sub_604FE4A0
 * address: 0x604FE4A0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604FE4A0(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFEF8C;
  if ( (_DWORD *)dword_60CA7340 == a1 )
  {
    dword_60CA7340 = 0;
    (**(void (__fastcall ***)(int))dword_60CA7344)(dword_60CA7344);
    dword_60CA7344 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
