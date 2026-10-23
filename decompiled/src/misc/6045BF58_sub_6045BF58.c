/* sub_6045BF58
 * address: 0x6045BF58   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045BF58(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v5; // r6
  int (__fastcall ****v6)(_DWORD, int *); // r4
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r0

  v3 = a1;
  v5 = dword_60CCF448;
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v6 = *(int (__fastcall *****)(_DWORD, int *))(dword_60CCF448 + 220);
    do
    {
      v7 = *v6;
      if ( ((unsigned int)&dword_60C9CF14 & ~(1615183824 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF14) )
      {
        dword_60C9CF10 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C9CF14);
      }
      v8 = (**v7)(v7, &dword_60C9CF10);
      if ( v7 && v8 == 1 )
      {
        if ( !a2 )
          goto LABEL_12;
        --a2;
      }
      ++v6;
    }
    while ( v6 != (int (__fastcall ****)(_DWORD, int *))(FIELD_U32(v5, 220) + 4 * FIELD_U32(v5, 212)) );
    v7 = 0;
LABEL_12:
    v3 = a1;
  }
  else
  {
    v7 = 0;
  }
  sub_6090A030(v3, v7, 1);
  return sub_60909CAC(v3, 19, &unk_60B02544, 0);
}
