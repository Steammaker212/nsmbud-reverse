/* sub_60808FD4
 * address: 0x60808FD4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808FD4(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int ItemId_const; // r0
  int v10; // [sp+4h] [bp-1Ch] BYREF

  v4 = sub_60805BA8(a1);
  v5 = sub_608DC930(FIELD_U32(v4, 456));
  v6 = sub_60805BA8(a1);
  v7 = sub_608DC930(FIELD_U32(v6, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v7, a2);
  sub_608A9E64(v5, &v10, ItemId_const);
  return v10;
}
