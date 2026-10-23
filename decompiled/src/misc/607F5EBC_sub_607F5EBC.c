/* sub_607F5EBC
 * address: 0x607F5EBC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F5EBC(int *a1, int a2)
{
  int v4; // r1
  int v5; // r4
  int v6; // r4
  char v7; // r12
  int result; // r0
  _DWORD v9[32]; // [sp+0h] [bp-118h] BYREF
  int v10[38]; // [sp+80h] [bp-98h] BYREF

  v10[0] = 2;
  v10[1] = (int)AreaTask_create;
  sub_608EF048(v9, v10);
  v9[23] = a2;
  v9[28] = a1 + 4;
  v4 = v9[1];
  a1[23] = v9[0];
  a1[24] = v4;
  sub_60023CB0(a1 + 23);
  v5 = a1[25];
  qmemcpy(v10, v9, 0x7Cu);
  v10[31] = (int)sub_603F14FC;
  v6 = sub_608F01B0(v5, v10);
  if ( ((unsigned int)&dword_60C99D78 & ~(1618960216 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C99D78) )
  {
    dword_60C99D74 = (int)&off_60BF942C;
    _cxa_guard_release(&dword_60C99D78);
  }
  if ( v6 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C99D74);
  result = dword_60CC6C20;
  if ( dword_60CC6C20 )
    return sub_6081AA98();
  return result;
}
