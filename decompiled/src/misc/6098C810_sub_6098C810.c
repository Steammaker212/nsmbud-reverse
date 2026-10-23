/* sub_6098C810
 * address: 0x6098C810   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098C810(_DWORD *a1)
{
  float v2; // s0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  float i; // s16
  _DWORD *v6; // r4
  int v7; // t1

  v2 = (*(float (__fastcall **)(_DWORD *))(*a1 + 124))(a1);
  v3 = a1 + 8;
  v4 = (_DWORD *)a1[9];
  for ( i = v2; v4 != v3; v4 = (_DWORD *)v6[2] )
  {
    v7 = *(v4 - 1);
    v6 = v4 - 1;
    (*(void (__fastcall **)(_DWORD *, float))(v7 + 16))(v6, i);
  }
}
