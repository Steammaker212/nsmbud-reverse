/* sead_Decompressor_dtorFree
 * address: 0x60421174   size: 68   group: sdklib
 * sym: # sead_Decompressor_dtorFree as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sead_Decompressor_dtorFree(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
