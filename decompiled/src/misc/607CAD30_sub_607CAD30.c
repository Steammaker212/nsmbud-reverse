/* sub_607CAD30
 * address: 0x607CAD30   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607CAD30(_DWORD ***a1)
{
  int *result; // r0
  int v3; // r5
  int v4; // r6
  _DWORD **v5; // r0
  unsigned int v6; // r1
  int v7; // r4

  if ( ((int (__fastcall *)(_DWORD ***))(*a1)[35])(a1) == 1 )
    return sub_607CA860((int)a1);
  (*(void (__fastcall **)(_DWORD, int, float))(**a1[6] + 164))(*a1[6], 1, 0.0);
  v3 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, float))(**a1[6] + 164))(*a1[6], 0, 1.0);
  (*(void (__fastcall **)(_DWORD, int, float))(**a1[6] + 164))(*a1[6], 2, 0.0);
  v4 = (*(int (__fastcall **)(_DWORD))(**a1[6] + 92))(*a1[6]);
  v5 = a1[6];
  v6 = (unsigned int)v5[2];
  result = v5[3];
  if ( v6 > 1 )
    ++result;
  if ( v4 >= 1 )
  {
    v7 = *result;
    do
      result = (int *)sub_60448AF4(v7, v3++);
    while ( v4 != v3 );
  }
  return result;
}
