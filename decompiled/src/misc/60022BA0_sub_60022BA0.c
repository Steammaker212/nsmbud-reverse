/* sub_60022BA0
 * address: 0x60022BA0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60022BA0(int a1)
{
  int v2; // r0
  int v3; // r0

  *(_DWORD *)a1 = -1;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = -1;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 12) = 0;
  FIELD_U16(a1, 36) = 0;
  FIELD_U16(a1, 34) = 0;
  FIELD_U16(a1, 32) = 0;
  FIELD_U16(a1, 30) = 0;
  FIELD_U16(a1, 28) = 0;
  FIELD_U16(a1, 26) = 0;
  FIELD_U16(a1, 24) = 0;
  FIELD_U16(a1, 22) = 0;
  FIELD_U16(a1, 38) = 0;
  FIELD_U32(a1, 40) = 30;
  sub_60815900(dword_60CC6B68, 0);
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 32) = 2;
  FIELD_U32(a1, 36) = BootScene_create;
  v2 = sub_60815C90(dword_60CC6B68, 0);
  FIELD_U8(a1, 5) = 1;
  sub_600240A4(v2);
  sub_60815900(dword_60CC6B68, 1);
  FIELD_U32(a1, 40) = 1;
  v3 = sub_60815C90(dword_60CC6B68, 1);
  FIELD_U8(a1, 5) = 1;
  sub_600240A4(v3);
  return a1;
}
