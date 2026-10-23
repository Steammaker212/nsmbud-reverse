/* sub_601C4708
 * address: 0x601C4708   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4708(int a1, int a2, int a3)
{
  int v5; // r6
  int v6; // r0
  char v8; // [sp+8h] [bp-28h] BYREF

  v5 = sub_601FEE28(dword_60C8C188);
  v6 = ((int (__fastcall *)(char *, float, float, float, float))loc_6090E3D4)(&v8, 0.0, 0.0, 1280.0, 720.0);
  return sub_6090A420(v5 + 264, a2, a3, v5 + 352, v6);
}
