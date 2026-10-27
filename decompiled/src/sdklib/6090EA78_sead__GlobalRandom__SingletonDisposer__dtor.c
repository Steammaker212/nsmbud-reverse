/* sead__GlobalRandom__SingletonDisposer__dtor
 * address: 0x6090EA78   size: 68   group: sdklib
 * sym: sead::GlobalRandom::SingletonDisposer_::~SingletonDisposer_() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__GlobalRandom__SingletonDisposer__dtor(_DWORD *a1)
{
  *a1 = off_60C5D26C;
  if ( (_DWORD *)dword_60CCF4E0 == a1 )
  {
    dword_60CCF4E0 = 0;
    sead__GlobalRandom__sInstance = 0;
  }
  return sead__IDisposer__dtor(a1);
}
