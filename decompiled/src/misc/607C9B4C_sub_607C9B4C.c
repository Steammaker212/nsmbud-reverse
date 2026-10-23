/* sub_607C9B4C
 * address: 0x607C9B4C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_607C9B4C(int a1)
{
  int v2; // r5

  sub_6078D924((float *)a1);
  v2 = **(_DWORD **)(a1 + 24);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 60))(v2, a1 + 44);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
  ((void (__fastcall *)(int))loc_607C9BB4)(a1);
  sub_6040EC24(a1 + 408, v2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 56))(v2);
  return face_1_ref_78E17C(a1);
}
