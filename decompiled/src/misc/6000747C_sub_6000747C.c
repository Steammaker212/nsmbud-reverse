/* sub_6000747C
 * address: 0x6000747C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6000747C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BC0228;
  if ( (_DWORD *)dword_60C7B3FC == a1 )
  {
    dword_60C7B3FC = 0;
    sub_600076EC(ActorMgr__instance);
    ActorMgr__instance = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
