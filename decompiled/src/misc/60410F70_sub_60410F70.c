/* sub_60410F70
 * address: 0x60410F70   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60410F70(int a1, int a2, int *a3, int a4)
{
  char v4; // r12
  int v5; // r6
  int v7; // r8
  int *v8; // r0
  int v9; // r10
  int v10; // r4
  int v11; // r9
  int v12; // r0

  v5 = a4;
  if ( a4 >= 1 )
  {
    do
    {
      v7 = *a3;
      v8 = *(int **)(dword_60CD0B40 + 36);
      if ( FIELD_U32(dword_60CD0B40, 32) > 1u )
        ++v8;
      v9 = *v8;
      v10 = FIELD_U32(a1, 2076);
      if ( ((unsigned int)&dword_60C81740 & ~(1614876688 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
      {
        dword_60C8173C = (int)&off_60BC6E70;
        _cxa_guard_release(&dword_60C81740);
      }
      v11 = v9 + 420;
      if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C8173C) )
        v11 = 420;
      sub_60445608(*(_DWORD *)v11, v7, v10, v10);
      --v5;
      ++a3;
    }
    while ( v5 );
  }
  v12 = sub_6040F8F4(a1 + 276, a2, FIELD_U32(a1, 2076));
  FIELD_U32(a1, 2076) = (FIELD_U32(a1, 2076) + 1) % 0xD8u;
  return v12 >= 0;
}
