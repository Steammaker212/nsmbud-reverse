/* sub_607E792C
 * address: 0x607E792C   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607E792C(int a1, int *a2)
{
  char v2; // r12
  int *v5; // r0
  int v6; // r6
  int v7; // r1
  int v8; // r6
  _DWORD **v9; // r7
  bool v10; // zf
  int result; // r0

  v5 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v5 += 5;
  v6 = *v5;
  if ( ((unsigned int)&dword_60C81740 & ~(1618901352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v6 )
  {
    v7 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C8173C);
    if ( v7 )
      v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  sub_604431BC(DrawMgr_instance, v7, 2u);
  v8 = FIELD_U32(a1, 3416);
  if ( v8 )
  {
    v9 = *(_DWORD ***)(a1 + 3420);
    do
    {
      v10 = FIELD_U8(a1, 4008) == 0;
      if ( FIELD_U8(a1, 4008) )
        v10 = FIELD_U8(a1, 1729000) == 255;
      if ( !v10 )
        DrawMgr_drawModel2(DrawMgr_instance, *v9);
      ++a1;
      --v8;
      ++v9;
    }
    while ( v8 );
  }
  sub_60443298((int)DrawMgr_instance);
  result = *a2;
  if ( *a2 == 4 )
    return sub_60239158(dword_60C8D9DC, a2, 0, 0);
  return result;
}
