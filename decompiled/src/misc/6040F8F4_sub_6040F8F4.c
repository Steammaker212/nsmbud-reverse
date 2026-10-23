/* sub_6040F8F4
 * address: 0x6040F8F4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F8F4(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r0
  int v8; // r5
  int v9; // r1
  _DWORD *v10; // r0

  v6 = a1 + 1764;
  sead__CriticalSection__lock(a1 + 1764);
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = a1 + 8 * v8;
    if ( !FIELD_U32(v9, 4) )
    {
      v10 = (_DWORD *)(a1 + v7 + 4);
      goto LABEL_8;
    }
    if ( !FIELD_U32(v9, 12) )
      break;
    v8 += 2;
    v7 += 16;
    if ( v8 == 220 )
    {
      v8 = -1;
      goto LABEL_9;
    }
  }
  ++v8;
  v10 = (_DWORD *)(a1 + v7 + 12);
LABEL_8:
  *v10 = a2;
  *(_DWORD *)(a1 + 8 * v8 + 8) = a3;
LABEL_9:
  sead__CriticalSection__unlock(v6);
  return v8;
}
