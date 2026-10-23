/* sub_607F9BB4
 * address: 0x607F9BB4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F9BB4(int a1, int *a2)
{
  char v2; // r12
  int *v4; // r0
  int v5; // r6
  int result; // r0
  int v7; // r0
  int *v8; // r0
  __int16 v9; // [sp+0h] [bp-78h] BYREF
  int v10; // [sp+4h] [bp-74h]

  v4 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v4 += 5;
  v5 = *v4;
  if ( ((unsigned int)&dword_60C81740 & ~(1618975732 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v5 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60C8173C);
  result = *a2;
  if ( !*a2 )
  {
    v7 = sub_6090B350(&v9);
    v10 &= ~1u;
    v9 = 257;
    sub_6090B4B0(v7, a2[10]);
    v8 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
      v8 += 5;
    sub_604431BC(DrawMgr_instance, *v8, 3u);
    nullsub_29();
    sub_60499988(dword_60CA059C);
    return sub_60443298((int)DrawMgr_instance);
  }
  return result;
}
