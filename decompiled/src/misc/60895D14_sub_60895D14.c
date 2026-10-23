/* sub_60895D14
 * address: 0x60895D14   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895D14(int a1, _DWORD *a2, int a3)
{
  int v5; // r5
  bool v6; // zf
  int v7; // r12
  int v8; // r2
  unsigned int *v9; // r2
  int v10; // r3
  int v11; // t1
  unsigned int v12; // r0
  int v13; // r7
  _DWORD *v14; // r2
  int v15; // r6
  int v16; // r3
  int v17; // r8
  int v18; // r0

  v5 = 0;
  v6 = a3 == 0;
  if ( a3 )
    v6 = FIELD_U8(a1, 28) == 0;
  if ( v6 )
    return v5;
  v7 = a3 - 1;
  v8 = a1 + 408 * *(_DWORD *)a1;
  v11 = FIELD_U32(v8, 432);
  v9 = (unsigned int *)(v8 + 432);
  v10 = v11;
  v12 = ((*(v9 - 6) + a3 - 1) & -*(v9 - 6)) + v11;
  if ( v12 <= *(v9 - 82) )
  {
    v13 = *(_DWORD *)(a1 + 408 * *(_DWORD *)a1 + 436);
    *v9 = v12;
    v5 = v13 + v10;
    if ( v13 + v10 )
    {
      v14 = (_DWORD *)(a1 + 32 + 408 * *(_DWORD *)a1);
      v15 = v14[97];
      v16 = v14[98];
      v17 = v14[99];
      *a2 = v14[96];
      a2[1] = v15;
      a2[2] = v16;
      a2[3] = v17;
      *(_QWORD *)a2 += v5 - v14[101];
      v18 = *(_DWORD *)(a1 + 32 + 408 * *(_DWORD *)a1 + 376);
      *(_DWORD *)(a1 + 4 * *(_DWORD *)a1 + 12) += (v18 + v7) & -v18;
      return v5;
    }
  }
  nullsub_95();
  debugPrintRelated3("TemporaryBuffer Allocation Failed. Allocation size : %d Byte.\n");
  debugPrintRelated3("Current TemporaryBuffer Allocation : %d/%d.\n");
  return 0;
}
