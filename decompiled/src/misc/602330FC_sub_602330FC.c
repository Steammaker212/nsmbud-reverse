/* sub_602330FC
 * address: 0x602330FC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602330FC(int a1)
{
  char v2; // r12
  int v3; // r0
  int v4; // r2
  int v5; // r2
  unsigned int v6; // r1
  int *v7; // r0
  int v8; // r5
  int v9; // r6
  bool v10; // zf
  int result; // r0

  sub_602331F8();
  v3 = dword_60CD0B40;
  v4 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v4 += 20;
  *(_DWORD *)(*(_DWORD *)v4 + 72) = a1 + 80;
  v5 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 5u )
    v5 += 20;
  *(_DWORD *)(*(_DWORD *)v5 + 76) = a1 + 168;
  v6 = FIELD_U32(v3, 32);
  v7 = *(int **)(v3 + 36);
  if ( v6 > 5 )
    v7 += 5;
  v8 = *v7;
  if ( ((unsigned int)&dword_60C81740 & ~(1612919152 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v9 = v8 + 428;
  v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 8))(v8, &dword_60C8173C) == 0;
  result = a1 + 352;
  if ( v10 )
    v9 = 428;
  *(_DWORD *)v9 = result;
  return result;
}
