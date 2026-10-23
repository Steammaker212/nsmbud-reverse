/* sub_603EDC5C
 * address: 0x603EDC5C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603EDC5C(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF92AC;
  if ( (_DWORD *)dword_60C99CD8 == a1 )
  {
    dword_60C99CD8 = 0;
    (**(void (__fastcall ***)(int))dword_60C99CDC)(dword_60C99CDC);
    dword_60C99CDC = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}
