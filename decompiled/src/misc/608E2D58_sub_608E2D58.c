/* sub_608E2D58
 * address: 0x608E2D58   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2D58(int a1, int a2, int a3)
{
  int v5; // r4
  _DWORD v7[20]; // [sp+0h] [bp-50h] BYREF

  memset(&v7[1], 0, 44);
  v5 = 0;
  v7[0] = &off_60BF9CF0;
  if ( (*(int (__fastcall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a1 + 48))(a1, v7, a3, 0) )
  {
    v5 = (*(int (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 84))(a1, a2, v7);
    (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 52))(a1, v7);
  }
  v7[0] = &off_60BF9CF0;
  if ( v7[2] )
    sub_608E6738(v7[2]);
  return v5;
}
