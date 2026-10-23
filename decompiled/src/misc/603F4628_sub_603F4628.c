/* sub_603F4628
 * address: 0x603F4628   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F4628(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 && !FIELD_U8(dword_60C99DD4, 1380) )
  {
    nullsub_64();
    v6 = operator_new_8DE25C(0x38u, *(void **)(a1 + 1840), 4);
    v5 = sub_607F34CC(v6, a2, FIELD_U32(a1, 1840));
  }
  else
  {
    v4 = operator_new_8DE25C(0x3Cu, *(void **)(a1 + 1840), 4);
    v5 = sub_607F43F4(v4, a2, FIELD_U32(a1, 1840));
  }
  FIELD_U32(a1, 1844) = v5;
  FIELD_U32(a1, 1832) = 1;
  sub_6002418C();
  sub_604574C8(dword_60C9CF18, 1, 1);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 20))(FIELD_U32(a1, 1844));
  result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 1844) + 16))(FIELD_U32(a1, 1844));
  if ( result == 1 )
    return sub_60454DC4(dword_60C9CF0C);
  return result;
}
