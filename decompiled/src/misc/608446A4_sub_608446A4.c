/* sub_608446A4
 * address: 0x608446A4   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608446A4(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r8
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0

  v3 = __PAIR64__(a3, a2);
  v4 = (int)(a1 + 10);
  v5 = 0;
  *a1 = __PAIR64__(a3, a2);
  do
  {
    v6 = sub_6083E2EC((unsigned __int8 **)v3, SHIDWORD(v3), v5);
    if ( v6 )
    {
      v7 = (int *)sub_608354C4(v4);
      *v7 = sub_6083DD14(v6);
      if ( sub_6083DD38(v6, 0) )
      {
        v8 = (_DWORD *)sub_6083DD38(v6, 0);
        sub_60843990(v7 + 4, v8);
      }
      if ( sub_6083DD38(v6, 1) )
      {
        v9 = (_DWORD *)sub_6083DD38(v6, 1);
        sub_60843990(v7 + 8, v9);
      }
      if ( sub_6083DD38(v6, 2) )
      {
        v10 = (_DWORD *)sub_6083DD38(v6, 2);
        sub_60843990(v7 + 12, v10);
      }
      nullsub_66();
    }
    ++v5;
    v4 += 72;
  }
  while ( v5 != 17 );
}
