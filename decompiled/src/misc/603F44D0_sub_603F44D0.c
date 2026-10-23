/* sub_603F44D0
 * address: 0x603F44D0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603F44D0(int a1)
{
  int v2; // r0
  int v3; // r0

  if ( FIELD_U8(a1, 1848) )
  {
    FIELD_U8(a1, 1848) = 0;
    v2 = operator_new_8DE25C(0x38u, *(void **)(a1 + 1840), 4);
    FIELD_U32(a1, 1844) = sub_607F34CC(v2, FIELD_U32(a1, 1852), FIELD_U32(a1, 1840));
    FIELD_U32(a1, 1832) = 1;
    sub_604574C8(dword_60C9CF18, 1, 1);
    sub_6002418C();
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 20))(FIELD_U32(a1, 1844));
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 16))(FIELD_U32(a1, 1844)) == 1 )
      goto LABEL_6;
    return 1;
  }
  if ( FIELD_U8(a1, 1849) )
  {
    nullsub_64();
    FIELD_U8(a1, 1849) = 0;
    v3 = operator_new_8DE25C(0x38u, *(void **)(a1 + 1840), 4);
    FIELD_U32(a1, 1844) = sub_607F34CC(v3, FIELD_U32(a1, 1852), FIELD_U32(a1, 1840));
    FIELD_U32(a1, 1832) = 1;
    sub_604574C8(dword_60C9CF18, 1, 1);
    sub_6002418C();
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 20))(FIELD_U32(a1, 1844));
    *(_BYTE *)(FIELD_U32(a1, 1844) + 52) = 1;
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 16))(FIELD_U32(a1, 1844)) == 1 )
LABEL_6:
      sub_60454DC4(dword_60C9CF0C);
    return 1;
  }
  return 0;
}
