/* sub_603491E8
 * address: 0x603491E8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603491E8(int a1, int a2, int a3)
{
  int v3; // r1

  v3 = FIELD_U32(a3, 64);
  FIELD_U8(a1, 84) = FIELD_U8(v3, 84);
  FIELD_U32(a1, 80) = sub_6000ADDC(a1, v3);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C949D0);
}
