/* sead__GlobalRandom__SingletonDisposer__dtor_90EACC
 * address: 0x6090EACC   size: 80   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead__GlobalRandom__SingletonDisposer__dtor_90EACC(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C5D26C;
  if ( (_DWORD *)dword_60CCF4E0 == a1 )
  {
    dword_60CCF4E0 = 0;
    sead__GlobalRandom__sInstance = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
