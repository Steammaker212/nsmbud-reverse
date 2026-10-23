/* sub_6083D338
 * address: 0x6083D338   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083D338(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r0

  v5 = a1 + 24;
  FIELD_U64(a1, 8) = *(_QWORD *)(*((_DWORD *)a3 + 12) + 8);
  FIELD_U32(a1, 16) = v5;
  dword_60CC7528(v5);
  dword_60CC752C(FIELD_U32(a1, 16), *((unsigned __int16 *)a3 + 8), *((unsigned __int16 *)a3 + 9));
  if ( *a3 != 2 )
    dword_60CC7530(FIELD_U32(a1, 16), *((_DWORD *)a3 + 8), *((_DWORD *)a3 + 9));
  v6 = FIELD_U32(a1, 16);
  v7 = sub_6083A9A4(*((_DWORD *)a3 + 1));
  sub_6083D824(v6, v7, FIELD_U32(a1, 8));
  dword_60CC7538(
    FIELD_U32(a1, 16),
    dword_60B0E474[a3[8]],
    dword_60B0E474[a3[9]],
    dword_60B0E474[a3[10]],
    dword_60B0E474[a3[11]]);
  v8 = a3[1];
  if ( a3[1] )
    v8 = 1;
  dword_60CC753C(FIELD_U32(a1, 16), v8);
  v9 = FIELD_U32(a1, 16);
  v10 = sub_6083AA9C(*a3);
  dword_60CC7540(v9, v10);
  FIELD_U8(a1, 1) &= ~1u;
  *(_BYTE *)a1 = 1;
  return 1;
}
