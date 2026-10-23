/* sub_604FE7A0
 * address: 0x604FE7A0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FE7A0(int a1)
{
  _DWORD *v2; // r5
  unsigned int v3; // r3
  int v4; // r0

  FIELD_U32(a1, 52) &= ~2u;
  v2 = (_DWORD *)(a1 + 2140);
  v3 = sub_604746E4(a1 + 2140, &dword_60CA7420, &dword_60CA7428);
  if ( v3 != -1 )
    sub_604742D0(v2, 0, &dword_60CA7420, v3, 1.0, 0);
  if ( sub_6047482C((int)v2, 0) )
  {
    v4 = sub_6047482C((int)v2, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 108))(v4);
  }
  FIELD_U16(a1, 16012) = 0;
  return 16012;
}
