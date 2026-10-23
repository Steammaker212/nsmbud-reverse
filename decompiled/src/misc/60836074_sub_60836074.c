/* sub_60836074
 * address: 0x60836074   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60836074(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  _DWORD v8[6]; // [sp+0h] [bp-18h] BYREF

  *(float *)v8 = a4;
  *(float *)&v8[1] = a5;
  *(float *)&v8[2] = a6;
  *(float *)&v8[3] = a7;
  return ((int (__fastcall *)(int, int, _DWORD *, int))sub_60836094)(a1, a2, v8, a3);
}
