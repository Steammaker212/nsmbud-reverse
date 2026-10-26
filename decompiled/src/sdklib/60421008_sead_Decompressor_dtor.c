/* sead_Decompressor_dtor
 * address: 0x60421008   size: 64   group: sdklib
 * sym: # sead_Decompressor_dtor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead_Decompressor_dtor(_DWORD *a1)
{
  *a1 = sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)a1);
  return sead__IDisposer__dtor(a1);
}
