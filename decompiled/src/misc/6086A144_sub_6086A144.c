/* sub_6086A144
 * address: 0x6086A144   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086A144(int a1, int a2)
{
  unsigned int v4; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r6
  int v9; // t1

  v4 = FIELD_U32(a1, 12);
  if ( (v4 & 0x200) == 0 )
    return sub_60835A38(a2, *(int **)(a1 + 44));
  v6 = FIELD_U32(a1, 20);
  v7 = ((8 * v4) & 0x18) + (v4 & 0x30) + 20 * ((v4 >> 2) & 3);
  v9 = *(unsigned __int8 *)(v6 + v7);
  v8 = v6 + v7;
  dword_60CC76BC(FIELD_U32(a1, 44) + 8, dword_60AF4FB0[v9]);
  dword_60CC7900(FIELD_U32(a2, 184), FIELD_F32(v8, 4));
  sub_60835A38(a2, *(int **)(a1 + 44));
  return dword_60CC76BC(FIELD_U32(a1, 44) + 8, 8);
}
