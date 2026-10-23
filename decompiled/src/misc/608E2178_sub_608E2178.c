/* sub_608E2178
 * address: 0x608E2178   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2178(int a1, int a2, int a3, int a4)
{
  const char *v4; // r4
  int result; // r0
  int (**v7)(); // [sp+8h] [bp-18h] BYREF
  const char *v8; // [sp+Ch] [bp-14h]

  v7 = &sead__SafeStringBase__vtable;
  v4 = "[-]";
  if ( a4 )
    v4 = "[+]";
  v8 = v4;
  (*(void (__fastcall **)(int, int, int, int (***)(), int *))(*(_DWORD *)a1 + 68))(a1, a2, a3, &v7, &dword_60B45CEC);
  ((void (__fastcall *)(int (***)()))v7[3])(&v7);
  for ( result = 0; v8[result]; result += 3 )
  {
    if ( !v8[result + 1] )
      return ++result;
    if ( !v8[result + 2] )
    {
      result += 2;
      return result;
    }
    if ( result + 2 >= 0x80000 )
      return 0;
  }
  return result;
}
