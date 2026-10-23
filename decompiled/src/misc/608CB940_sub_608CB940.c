/* sub_608CB940
 * address: 0x608CB940   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB940(int a1, char a2, char a3)
{
  _DWORD *v6; // r7
  int v7; // r1

  v6 = sub_608C3B10();
  v7 = sub_608C2698((int)v6, 24);
  FIELD_U32(v7, 4) = 48;
  FIELD_U32(v7, 16) = a1 + 456;
  FIELD_U8(v7, 20) = a2;
  FIELD_U8(v7, 21) = a3;
  return sub_608C2C1C(v6, (_DWORD *)v7);
}
