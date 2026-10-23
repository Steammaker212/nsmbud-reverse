/* sub_6048D088
 * address: 0x6048D088   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048D088(_DWORD *a1, int a2, int a3, int a4)
{
  unsigned int v5; // r7
  int v6; // r5
  int v7; // r4
  int v8; // r0
  _DWORD *v9; // r10
  _DWORD *v10; // r0
  int v11; // r0

  v5 = 0;
  v6 = 6264;
  a1[13] = 0;
  a1[10] = a3;
  a1[9] = a4;
  v7 = dword_60CC6E04;
  v8 = dword_60C9A1F0;
  a1[14] = 0;
  v9 = (_DWORD *)(v8 + 16);
  do
  {
    if ( *(_BYTE *)(FIELD_U32(v7, 40) + v6) )
    {
      v10 = sub_603FD91C(v9, v5);
      if ( sub_603FD93C((int)v10) == a3 )
        ++a1[14];
    }
    ++v5;
    v6 += 104;
  }
  while ( v5 != 67 );
  v11 = operator_new(0xF44u);
  a1[17] = sub_605047C0(v11);
  ((void (*)(void))loc_60504864)();
  return sub_60491028(a1);
}
