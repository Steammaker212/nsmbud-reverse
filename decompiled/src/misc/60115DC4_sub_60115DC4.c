/* sub_60115DC4
 * address: 0x60115DC4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60115DC4(int *a1)
{
  char **v2; // r4
  char *v3; // r4
  char v4; // r12
  int v5; // r0

  v2 = (char **)(a1 + 1811);
  (*(void (__fastcall **)(int *, int))(*a1 + 732))(a1, 6);
  v3 = *v2;
  if ( ((unsigned int)&dword_60C86B30 & ~(1611750908 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v3 && (**(int (__fastcall ***)(char *, int *))v3)(v3, &dword_60C86B2C) == 1 )
  {
    v5 = *a1;
    if ( a1[1575] < 1 )
    {
      (*(void (__fastcall **)(int *))(v5 + 880))(a1);
      sub_600CEF58((int)a1, v3[9244], 0.0);
      (*(void (__fastcall **)(char *))(*(_DWORD *)v3 + 816))(v3);
    }
    else
    {
      (*(void (__fastcall **)(int *))(v5 + 876))(a1);
      sub_600CEEEC((int)a1, v3[9244], 0.0);
      (*(void (__fastcall **)(char *))(*(_DWORD *)v3 + 812))(v3);
    }
  }
}
