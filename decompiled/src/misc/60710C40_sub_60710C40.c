/* sub_60710C40
 * address: 0x60710C40   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60710C40(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C21C68;
  if ( (_DWORD *)dword_60CBD250 == a1 )
  {
    dword_60CBD250 = 0;
    (**(void (__fastcall ***)(int))TileMgr_instance)(TileMgr_instance);
    TileMgr_instance = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
