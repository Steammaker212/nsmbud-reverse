/* sub_60921694
 * address: 0x60921694   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921694(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r4
  int v8; // r7

  v6 = a1[3];
  v7 = a1[4];
  v8 = v6 + (*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1) - 1;
  return (v8 & -(*(int (__fastcall **)(_DWORD *))(*a1 + 16))(a1)) + v7 * (a3 * a2 - 1);
}
