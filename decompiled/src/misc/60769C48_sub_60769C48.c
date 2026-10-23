/* sub_60769C48
 * address: 0x60769C48   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60769C48(int a1, int a2)
{
  unsigned __int8 v2; // r5
  unsigned __int8 *v4; // r7
  unsigned __int8 v5; // r4
  int Area; // r0
  int v7; // r0
  int v8; // r5
  unsigned int v9; // r0
  char v10; // r12
  int v11; // r4

  v2 = a2;
  FIELD_U32(a1, 9724) = a2;
  v4 = (unsigned __int8 *)(a1 + 9724);
  v5 = FIELD_U8(LevelInfo_instance, 18);
  Area = Level_getArea(Level_instance, v5);
  v7 = sub_60727D48(Area, v2);
  v8 = 0;
  FIELD_U32(a1, 9856) = 1;
  v9 = FIELD_U16(v7, 16) & 2;
  FIELD_U32(a1, 9856) = (v9 >> 1) + 1;
  if ( v9 >> 1 )
    return 1;
  if ( !sub_60729354((unsigned __int8 *)dword_60CBD8A4, v5, *v4) )
  {
    v11 = FIELD_U32(dword_60C995D0, 32);
    if ( ((unsigned int)&dword_60C995C0 & ~(1618386164 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C995C0) )
    {
      dword_60C995BC = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C995C0);
    }
    v8 = 1;
    if ( v11 )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60C995BC) ^ 1;
  }
  return v8;
}
