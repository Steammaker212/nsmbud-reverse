/* sub_600F4E08
 * address: 0x600F4E08   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F4E08(int a1)
{
  int v2; // r8
  int *v3; // r4
  int result; // r0

  v2 = a1 + 6300;
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6300) + 192))(FIELD_U32(a1, 6300), &unk_60C85A98);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6304) + 192))(FIELD_U32(a1, 6304), &unk_60C85A98);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6308) + 192))(FIELD_U32(a1, 6308), &unk_60C85A98);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6312) + 192))(FIELD_U32(a1, 6312), &unk_60C85A98);
  v3 = (int *)(a1 + 6316);
  (*(void (__fastcall **)(_DWORD, void *))(**(_DWORD **)(a1 + 6316) + 192))(FIELD_U32(a1, 6316), &unk_60C85A98);
  result = FIELD_U8(a1, 20);
  if ( (result & 1) == 0 )
  {
    FIELD_U32(a1, 116) = 1154187264;
    *(_DWORD *)(*(_DWORD *)v2 + 116) = 1154187264;
    *(_DWORD *)(FIELD_U32(a1, 6304) + 116) = 1153925120;
    *(_DWORD *)(FIELD_U32(a1, 6308) + 116) = 1153662976;
    *(_DWORD *)(FIELD_U32(a1, 6312) + 116) = 1153400832;
    result = *v3;
    *(_DWORD *)(*v3 + 116) = 1153138688;
  }
  return result;
}
