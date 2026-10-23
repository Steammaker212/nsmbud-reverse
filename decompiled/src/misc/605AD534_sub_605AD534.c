/* sub_605AD534
 * address: 0x605AD534   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605AD534(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r1
  int v5; // r2
  _DWORD v7[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD v8[8]; // [sp+10h] [bp-20h] BYREF

  v2 = a1[28];
  v3 = a1[29];
  v8[0] = a1[27];
  v8[1] = v2;
  v8[2] = v3;
  v4 = a1[40];
  v5 = a1[41];
  v7[0] = a1[39];
  v7[1] = v4;
  v7[2] = v5;
  (*(void (__fastcall **)(_DWORD *, _DWORD *, _DWORD *))(*a1 + 268))(a1, v8, v7);
  return sub_605AE4E4(a1, v8, v7);
}
