/* sub_604C0EF0
 * address: 0x604C0EF0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C0EF0(int a1)
{
  _DWORD *v1; // r4
  int v2; // r7
  int v3; // r5
  int v4; // r6

  v1 = (_DWORD *)dword_60C9A1E0;
  v2 = dword_60C99DEC;
  FIELD_U32(dword_60C99DEC, 508) = 1;
  v3 = sub_60508FA4(a1 + 13672);
  v4 = 0;
  v1[133] = v3;
  v1[134] = v3;
  v1[135] = 0;
  sub_603F692C(v2 + 16);
  if ( v3 == 7 )
  {
    if ( FIELD_U32(dword_60C9A1E0, 532) < 0x20u )
      v4 = FIELD_U32(dword_60C9A1E0, 532);
    sub_60406588((int)v1, 7u, *(_DWORD *)(dword_60C9A1E0 + 16 * v4 + 24));
    nullsub_3946();
  }
  sub_60407418();
  return sub_60407488((int)v1);
}
