/* sub_608DBC64
 * address: 0x608DBC64   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DBC64(_DWORD *a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int v7; // r6
  int v8; // r0
  unsigned int v9; // r2

  v5 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619901588 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v6 = (int)(v5 + 48);
  if ( !(**v5)(v5, &dword_60CC6AE4) )
    v6 = 192;
  if ( !*(_BYTE *)v6 )
    return 0;
  v7 = sub_608DC930(a1[114]);
  v8 = sub_608AAA04((int)(a1 + 2));
  a1[111] = v8;
  if ( v8 )
    v9 = (unsigned int)(float)((float)(unsigned int)v8 * *(float *)a2);
  else
    v9 = 0;
  return sub_608DBAA4(a1, v7, v9, FIELD_U32(a2, 4), FIELD_U32(a2, 8), FIELD_U32(a2, 12));
}
