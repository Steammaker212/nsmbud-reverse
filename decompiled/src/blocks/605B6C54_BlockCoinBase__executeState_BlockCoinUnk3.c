/* BlockCoinBase__executeState_BlockCoinUnk3
 * address: 0x605B6C54   size: 72   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BlockCoinBase__executeState_BlockCoinUnk3(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1

  v4 = a1[1704];
  v2 = a1 + 1704;
  v3 = v4;
  if ( !v4 || (v5 = v3 - 1, (*v2 = v5) == 0) )
    (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 244))(a1);
}
