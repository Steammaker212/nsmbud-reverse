/* sub_60485188
 * address: 0x60485188   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60485188(_DWORD *a1)
{
  *a1 = off_60BFD6E0;
  if ( (_DWORD *)dword_60C9F2C8 == a1 )
  {
    dword_60C9F2C8 = 0;
    (**(void (__fastcall ***)(int))dword_60C9F2CC)(dword_60C9F2CC);
    dword_60C9F2CC = 0;
  }
  return sead__IDisposer__dtor(a1);
}
