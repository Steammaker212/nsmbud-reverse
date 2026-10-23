/* sub_60153D08
 * address: 0x60153D08   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60153D08(int result)
{
  int v1; // r4
  _DWORD *i; // r5
  _DWORD *j; // r5
  _DWORD *k; // r4

  v1 = result;
  for ( i = *(_DWORD **)(result + 20); i; i = (_DWORD *)i[1] )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*i + 24))(*i);
  for ( j = *(_DWORD **)(v1 + 80); j; j = (_DWORD *)j[1] )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*j + 24))(*j);
  for ( k = *(_DWORD **)(v1 + 68); k; k = (_DWORD *)k[1] )
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*k + 24))(*k);
  return result;
}
