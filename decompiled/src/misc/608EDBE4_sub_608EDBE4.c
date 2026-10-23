/* sub_608EDBE4
 * address: 0x608EDBE4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EDBE4(int a1, int a2, _DWORD *a3)
{
  int v7; // [sp+0h] [bp-30h] BYREF

  sub_608ED418(&v7);
  nullsub_107();
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 64))(a1, a2);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 72))(a1, a2);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 76))(a1, a2);
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 68))(a1, a2, *a3, a3[1]);
  (*(void (__fastcall **)(int, int, _DWORD *, _DWORD))(*(_DWORD *)a1 + 80))(a1, a2, a3 + 2, a3[4]);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 84))(a1, a2);
}
