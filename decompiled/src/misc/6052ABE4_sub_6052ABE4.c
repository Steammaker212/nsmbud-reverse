/* sub_6052ABE4
 * address: 0x6052ABE4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052ABE4(int a1)
{
  int v1; // r2
  int v2; // r0
  int v3; // r3
  int (__fastcall *v4)(_DWORD); // r1
  _DWORD *v5; // r0

  v1 = FIELD_U32(a1, 4);
  v2 = FIELD_U32(a1, 8);
  v3 = FIELD_U32(v2, 20);
  v4 = *(int (__fastcall **)(_DWORD))(v2 + 16);
  v5 = (_DWORD *)(v1 + (v3 >> 1));
  if ( (v3 & 1) != 0 )
    v4 = *(int (__fastcall **)(_DWORD))((char *)v4 + *v5);
  return v4(v5);
}
