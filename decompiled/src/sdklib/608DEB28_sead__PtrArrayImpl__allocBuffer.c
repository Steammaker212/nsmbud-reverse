/* sead__PtrArrayImpl__allocBuffer
 * address: 0x608DEB28   size: 68   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__PtrArrayImpl__allocBuffer(int result, int a2, int a3, int a4)
{
  _DWORD *v5; // r4

  v5 = (_DWORD *)result;
  if ( a2 >= 1 )
  {
    result = sub_608DE334(4 * a2, a3, a4);
    if ( result )
    {
      *v5 = 0;
      v5[1] = a2;
      v5[2] = result;
    }
  }
  return result;
}
