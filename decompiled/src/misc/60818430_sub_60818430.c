/* sub_60818430
 * address: 0x60818430   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60818430(int a1)
{
  __int64 v2; // r2
  __int64 v3; // kr00_8

  sub_6090B310(dword_60CCF464);
  sub_608F133C(FIELD_U32(a1, 28));
  sub_608F1340(FIELD_U32(a1, 28));
  sub_6090B32C(dword_60CCF464);
  if ( !*(_DWORD *)(FIELD_U32(a1, 28) + 156) )
  {
    v2 = qword_60CCFB50 % 100;
    v3 = qword_60CCFB50 / 100;
    do
    {
      if ( FIELD_U32(a1, 40) )
        break;
      sub_609085CC(v3, HIDWORD(v3), v2, HIDWORD(v2));
      sub_6090B310(dword_60CCF464);
      sub_608F133C(FIELD_U32(a1, 28));
      sub_608F1340(FIELD_U32(a1, 28));
      sub_6090B32C(dword_60CCF464);
    }
    while ( !*(_DWORD *)(FIELD_U32(a1, 28) + 156) );
  }
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 32) + 24))(FIELD_U32(a1, 32), 0);
}
