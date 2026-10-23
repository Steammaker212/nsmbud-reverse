/* sub_6019E1C0
 * address: 0x6019E1C0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019E1C0(int a1, int a2)
{
  void (__fastcall *v3)(_DWORD); // r2
  int v4; // r1
  _DWORD *v5; // r0

  FIELD_U32(a1, 12) = a2;
  v3 = *(void (__fastcall **)(_DWORD))(a2 + 8);
  v4 = FIELD_U32(a2, 12);
  v5 = (_DWORD *)(FIELD_U32(a1, 8) + (v4 >> 1));
  if ( (v4 & 1) != 0 )
    v3 = *(void (__fastcall **)(_DWORD))((char *)v3 + *v5);
  v3(v5);
  return a1 + 4;
}
