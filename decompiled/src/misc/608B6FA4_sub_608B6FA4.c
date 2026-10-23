/* sub_608B6FA4
 * address: 0x608B6FA4   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6FA4(int a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8)
{
  void *v12; // r4
  int v13; // r0

  v12 = sub_608C3B10();
  v13 = sub_608C2698(v12, 44, 1);
  FIELD_U32(v13, 4) = 19;
  FIELD_U32(v13, 16) = a1 + 448;
  FIELD_U32(v13, 20) = a2;
  FIELD_U32(v13, 24) = a3;
  FIELD_U32(v13, 28) = a4;
  FIELD_U8(v13, 32) = a5;
  FIELD_U8(v13, 33) = a6;
  FIELD_U32(v13, 36) = a7;
  FIELD_U32(v13, 40) = a8;
  return sub_608C2C1C(v12);
}
