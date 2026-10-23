/* revival_shell_ref
 * address: 0x6035D2B0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall revival_shell_ref(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  int result; // r0
  _DWORD v5[10]; // [sp+0h] [bp-28h] BYREF

  a1[1707] = 1;
  sub_60421AD4(a1[1705]);
  v2 = a1[1706];
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "revival_shell";
  sub_6040F4B8(v2, v5, 0);
  v3 = a1[1588];
  if ( v3 != 1 )
  {
    a1[1589] = v3;
    a1[1588] = 1;
    (*(void (__fastcall **)(_DWORD *))(*a1 + 696))(a1);
  }
  ShellEnemy__vf31C(a1);
  result = a1[1869];
  if ( result == 1 )
  {
    a1[76] = 0;
    a1[77] = 1096810496;
    a1[78] = 1098907648;
    a1[79] = 1096810496;
    return 1096810496;
  }
  return result;
}
