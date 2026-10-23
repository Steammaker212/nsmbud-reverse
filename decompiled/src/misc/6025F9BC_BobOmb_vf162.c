/* BobOmb_vf162
 * address: 0x6025F9BC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf162(int a1, int a2, int a3)
{
  int v3; // r5
  unsigned int v5; // r0
  int v6; // r1

  v3 = FIELD_U32(a3, 64);
  sub_60272570(a1, v3);
  v5 = FIELD_U8(v3, 84);
  v6 = 0;
  if ( v5 < 4 )
    v6 = (char)v5;
  *(_WORD *)(a1 + 2 * v6 + 6140) = 32;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E2E0);
}
