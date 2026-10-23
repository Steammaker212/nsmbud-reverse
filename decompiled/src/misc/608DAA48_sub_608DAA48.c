/* sub_608DAA48
 * address: 0x608DAA48   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DAA48(int a1, int a2)
{
  char v2; // r12
  char *v5; // r6
  int v6; // r7
  int result; // r0
  bool v8; // zf
  int v9; // r5
  char *v10; // r7
  int v11; // r0

  v5 = *(char **)(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619896948 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v6 = (int)(v5 + 192);
  if ( !(**(int (__fastcall ***)(char *, int *))v5)(v5, &dword_60CC6AE4) )
    v6 = 192;
  result = *(unsigned __int8 *)v6;
  v8 = result == 0;
  if ( *(_BYTE *)v6 )
  {
    v5 = *(char **)(a1 + 40);
    v8 = v5 == 0;
  }
  if ( !v8 )
  {
    v9 = a1 + 8;
    v10 = 0;
    do
    {
      v11 = sub_608AB144(v9, (int)(v10 + 0x4000000));
      result = sub_608AC690(v11, a2);
      ++v10;
    }
    while ( v5 != v10 );
  }
  return result;
}
