/* sub_607CF4D4
 * address: 0x607CF4D4   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF4D4(int a1)
{
  int v2; // r1

  if ( FIELD_U8(a1, 11461) )
    SE_VOC_YS_GOKUN_ref(a1);
  v2 = FIELD_U32(a1, 1236);
  FIELD_U32(a1, 1204) &= ~0x10u;
  FIELD_U32(a1, 1236) = v2 & 0xFD1BFFFF;
  *(_DWORD *)(FIELD_U32(a1, 11368) + 208) &= ~0x40u;
  (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(a1 + 11368) + 92))(FIELD_U32(a1, 11368), 0.0);
  sub_607D07EC(a1);
  FIELD_U32(a1, 11420) = -1;
  return 11420;
}
