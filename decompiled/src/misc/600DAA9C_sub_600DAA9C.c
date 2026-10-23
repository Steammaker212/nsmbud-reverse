/* sub_600DAA9C
 * address: 0x600DAA9C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DAA9C(int a1)
{
  int (__fastcall *v2)(int); // r1

  if ( FIELD_U8(dword_60C9A1F0, 6559) == 1 )
  {
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C846F4);
    v2 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 1028);
  }
  else
  {
    FIELD_U16(a1, 6276) = 20;
    KoopalingBase__vf654(a1);
    FIELD_U32(a1, 7092) = 0;
    v2 = *(int (__fastcall **)(int))(*(_DWORD *)a1 + 1316);
  }
  return v2(a1);
}
