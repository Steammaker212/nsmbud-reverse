/* sub_60806A04
 * address: 0x60806A04   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60806A04(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // r0
  int v11; // r7
  int v12; // r1
  int v13; // r4
  int v14; // r2
  int v15; // r2
  int result; // r0
  float v17; // s0

  v10 = sub_6080686C(a5);
  v11 = FIELD_U32(a3, 24);
  v12 = 0;
  if ( v11 == a3 + 20 )
    goto LABEL_11;
  v13 = 0;
  v12 = 0;
  do
  {
    v14 = *(_DWORD *)(v11 - 8);
    v11 = FIELD_U32(v11, 4);
    if ( v14 == 1 )
      ++v12;
    else
      ++v13;
  }
  while ( v11 != a3 + 20 );
  v15 = v13;
  if ( v13 )
    v15 = 1;
  if ( (v10 & v15) == 0 )
  {
LABEL_11:
    result = ((int (__fastcall *)(int, int, int, int, int, bool, _DWORD))loc_60806AE4)(a1, a3, a4, a6, a2, v12 > 1, 0);
    v17 = 1.0;
  }
  else
  {
    result = ((int (__fastcall *)(int, int, int, int, int, bool, int))loc_60806AE4)(a1, a3, a4, a6, a2, v13 > 1, 1);
    v17 = 0.0;
  }
  FIELD_F32(a2, 32) = v17;
  return result;
}
