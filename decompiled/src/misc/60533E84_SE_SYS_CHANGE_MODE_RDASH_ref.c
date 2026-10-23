/* SE_SYS_CHANGE_MODE_RDASH_ref
 * address: 0x60533E84   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CHANGE_MODE_RDASH_ref(int a1)
{
  int v2; // r0
  int *v3; // r6

  v3 = (int *)(a1 + 83584);
  v2 = FIELD_U32(a1, 83584);
  if ( v2 == 1 )
  {
    sub_60474420((_DWORD *)(a1 + 12092), 2u, &dword_60CAADB4, FIELD_U32(a1, 54696), 0);
    v2 = *v3;
  }
  if ( v2 == 2 )
    sub_60474420((_DWORD *)(a1 + 12092), 3u, &dword_60CAADB4, FIELD_U32(a1, 54700), 0);
  *v3 = 0;
  FIELD_U32(a1, 83576) = FIELD_U32(a1, 16728);
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAADFC, 0);
  FIELD_U8(a1, 83625) = 1;
  FIELD_U8(a1, 83637) = 1;
  sub_60502548(a1 + 15700);
  FIELD_U16(a1, 16752) = 0;
  sub_6047EABC((_DWORD *)(a1 + 15740));
  sub_60478680((int)"SE_SYS_CHANGE_MODE_RDASH", 15);
  return sub_6082B6B8(dword_60CC6E04);
}
