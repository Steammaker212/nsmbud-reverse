/* sead__Random__getContext_const
 * address: 0x6090EC84   size: 40   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__Random__getContext_const(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // r0

  *a2 = *a1;
  *a3 = a1[1];
  *a4 = a1[2];
  result = a1[3];
  *a5 = result;
  return result;
}
