/* sub_6043B198
 * address: 0x6043B198   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6043B198(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BFA9F4;
  if ( (_DWORD *)dword_60C9CA84 == a1 )
  {
    dword_60C9CA84 = 0;
    ResourceMgrRelated_instance = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}
