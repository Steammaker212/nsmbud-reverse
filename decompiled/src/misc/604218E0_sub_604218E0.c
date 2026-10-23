/* sub_604218E0
 * address: 0x604218E0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604218E0(float *a1)
{
  int result; // r0
  int v3; // r5

  result = *((unsigned __int8 *)a1 + 64);
  if ( result )
  {
    ((void (__fastcall *)(float *))loc_60421C50)(a1 + 12);
    v3 = *(_DWORD *)a1;
    (*(void (__fastcall **)(_DWORD, _DWORD, float))(**(_DWORD **)a1 + 164))(*(_DWORD *)a1, *((_DWORD *)a1 + 17), a1[13]);
    return (*(int (__fastcall **)(int, int, float))(*(_DWORD *)v3 + 164))(v3, *((_DWORD *)a1 + 17) ^ 1, a1[12]);
  }
  return result;
}
