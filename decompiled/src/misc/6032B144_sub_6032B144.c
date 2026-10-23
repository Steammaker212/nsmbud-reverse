/* sub_6032B144
 * address: 0x6032B144   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032B144(int a1)
{
  int v2; // r0

  v2 = dword_60AFF678[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 120) = v2;
  FIELD_U32(a1, 132) = v2;
  FIELD_U16(a1, 13056) = 35;
  sub_60321CD4(a1);
  FIELD_U32(a1, 13152) = dword_60AF1FB8[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 156) = 0;
  sub_60321FA0(a1);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
}
